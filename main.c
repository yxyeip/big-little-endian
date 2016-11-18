#include <stdio.h>
#include <stdlib.h>

int main()
{
    union{
    short s;
    char c[sizeof(short)];
    } un;
    un.s=0x0102;
    //printf("%s: ",CPU_VENDOR_OS);
    if(sizeof(short)==2)
    {
        if(un.c[0]==1&&un.c[1]==2)
        {
            printf("big-endian\n");
        }
        else if(un.c[0]==2&&un.c[1]==1)
        {
            printf("small-endian\n");
        }
        else
            printf("unknown\n");
    }
    else{printf(sizeof(short));}
    return 0;
}
