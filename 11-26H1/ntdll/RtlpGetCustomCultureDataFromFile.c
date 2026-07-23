/*
 * XREFs of RtlpGetCustomCultureDataFromFile @ 0x1801264C0
 * Callers:
 *     RtlpGetCustomCultureData @ 0x180113110 (RtlpGetCustomCultureData.c)
 * Callees:
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180051870 (RtlpInitUnicodeStringUsingBuffer.c)
 */

__int64 __fastcall RtlpGetCustomCultureDataFromFile(
        unsigned int *a1,
        unsigned __int64 a2,
        char a3,
        char a4,
        _UNICODE_STRING *a5)
{
  __int64 v7; // r10
  char *v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  char *v11; // r10
  char *v12; // r11
  __int64 v13; // r10
  unsigned int v14; // edx
  unsigned int v15; // r8d

  if ( a2 >= 0x19C )
  {
    v7 = *a1;
    if ( (_DWORD)v7 )
    {
      if ( v7 + 68 <= a2 && (int)v7 + 68 >= (unsigned int)v7 )
      {
        v8 = (char *)a1 + v7;
        if ( (((_BYTE)v7 + (_BYTE)a1) & 1) == 0 )
        {
          v9 = *((unsigned int *)v8 + 7);
          if ( (_DWORD)v9 )
          {
            if ( (v9 & 1) == 0
              && (unsigned int)v9 + *((unsigned __int16 *)v8 + 13) <= a2
              && (unsigned int)v9 + *((unsigned __int16 *)v8 + 13) >= (unsigned int)v9 )
            {
              v10 = *((unsigned int *)v8 + 14);
              if ( v10 <= a2 )
              {
                if ( (_DWORD)v10 )
                {
                  v11 = (char *)a1 + v9;
                  if ( a3 || *((_DWORD *)v11 + 39) )
                  {
                    if ( !a5 )
                      return 0LL;
                    v12 = (char *)a1 + v10;
                    if ( ((unsigned __int8)v12 & 1) == 0 )
                    {
                      v13 = *((unsigned int *)v11 + 46);
                      v14 = (unsigned int)(a2 - v10) >> 1;
                      if ( (int)v13 + 2 <= v14 && (int)v13 + 2 >= (unsigned int)v13 )
                      {
                        v15 = *(unsigned __int16 *)&v12[2 * v13];
                        if ( v15 + (unsigned int)v13 + 2 <= v14 && !*(_WORD *)&v12[2 * v15 + 2 + 2 * (unsigned int)v13] )
                          return RtlpInitUnicodeStringUsingBuffer(
                                   a4,
                                   (const WCHAR *)&v12[2 * (unsigned int)(v13 + 1)],
                                   v15,
                                   a5);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 3221225473LL;
}
