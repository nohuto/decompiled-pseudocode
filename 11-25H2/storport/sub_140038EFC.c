/*
 * XREFs of sub_140038EFC @ 0x140038EFC
 * Callers:
 *     sub_140038E7C @ 0x140038E7C (sub_140038E7C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140038EFC(char *a1, __int64 a2, unsigned int a3)
{
  char v3; // r11
  unsigned int v4; // r10d
  char *v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rdx
  char v8; // al
  __int64 result; // rax

  v3 = 0;
  v4 = 0;
  if ( a3 )
  {
    v5 = a1;
    v6 = a3;
    v7 = a2 - (_QWORD)a1;
    v4 = a3;
    do
    {
      if ( !v3 )
      {
        v8 = v5[v7];
        if ( v8 )
        {
          if ( (unsigned __int8)v8 > 0x20u && v8 != 44 && (unsigned __int8)v8 <= 0x7Fu )
            goto LABEL_7;
        }
        else
        {
          v3 = 1;
        }
      }
      v8 = 32;
LABEL_7:
      *v5++ = v8;
      --v6;
    }
    while ( v6 );
  }
  result = v4;
  a1[v4] = 0;
  return result;
}
