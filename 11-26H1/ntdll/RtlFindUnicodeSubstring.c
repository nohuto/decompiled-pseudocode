/*
 * XREFs of RtlFindUnicodeSubstring @ 0x180036C40
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x180035310 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     NLS_UPCASE @ 0x180036DE0 (NLS_UPCASE.c)
 *     memcmp @ 0x1801649D0 (memcmp.c)
 */

char *__fastcall RtlFindUnicodeSubstring(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  size_t v4; // rbp
  char *v5; // rbx
  char *v6; // rsi
  char *v7; // r14
  unsigned __int16 *v8; // rbp
  char *v9; // rdi
  unsigned __int16 *v10; // r11
  __int64 v11; // rdx
  __int64 v12; // r11
  __int16 v13; // ax
  __int16 v14; // r10

  if ( *a1 >= *a2 )
  {
    v4 = *a2;
    v5 = (char *)*((_QWORD *)a1 + 1);
    v6 = &v5[*a1 - v4];
    if ( a3 )
    {
      v7 = (char *)*((_QWORD *)a2 + 1);
      v8 = (unsigned __int16 *)&v7[v4];
      v9 = (char *)(v5 - v7);
      while ( v5 <= v6 )
      {
        v10 = (unsigned __int16 *)v7;
        if ( v7 < (char *)v8 )
        {
          do
          {
            v11 = *v10;
            if ( *(unsigned __int16 *)((char *)v10 + (_QWORD)v9) != (_WORD)v11 )
            {
              NLS_UPCASE(qword_1801C6038, v11);
              v13 = NLS_UPCASE(qword_1801C6038, *(unsigned __int16 *)&v9[v12]);
              if ( v13 != v14 )
                break;
            }
            ++v10;
          }
          while ( v10 < v8 );
        }
        if ( v10 == v8 )
          return v5;
        v5 += 2;
        v9 += 2;
      }
    }
    else
    {
      while ( v5 <= v6 )
      {
        if ( !memcmp(v5, *((const void **)a2 + 1), v4) )
          return v5;
        v5 += 2;
      }
    }
  }
  return 0LL;
}
