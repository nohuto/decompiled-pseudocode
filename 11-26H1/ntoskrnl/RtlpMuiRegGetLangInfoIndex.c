/*
 * XREFs of RtlpMuiRegGetLangInfoIndex @ 0x1408AEE38
 * Callers:
 *     RtlpMuiRegGetOrAddLangInfo @ 0x140779488 (RtlpMuiRegGetOrAddLangInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetLangInfoIndex(__int64 a1, char *a2)
{
  __int16 v3; // bx
  char *v4; // r9
  __int64 v5; // rdx
  __int64 i; // r11
  unsigned __int16 v8; // si
  unsigned __int16 v9; // di
  unsigned int j; // r10d

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = *((_WORD *)a2 + 2);
      if ( v3 || *((__int16 *)a2 + 3) >= 0 )
      {
        v4 = *(char **)(a1 + 16);
        v5 = (a2 - v4) / 28;
        if ( v5 >= 0 && v5 < *(unsigned __int16 *)(a1 + 6) )
          return (unsigned __int16)v5;
        for ( i = 0LL; i < *(unsigned __int16 *)(a1 + 6); ++i )
        {
          if ( *(_WORD *)v4 == *(_WORD *)a2
            && *((_WORD *)v4 + 2) == v3
            && *((_WORD *)v4 + 3) == *((_WORD *)a2 + 3)
            && *((_WORD *)v4 + 5) == *((_WORD *)a2 + 5) )
          {
            v8 = *((_WORD *)v4 + 4);
            v9 = *((_WORD *)a2 + 4);
            if ( ((v9 ^ v8) & 0xC000) == 0 )
            {
              for ( j = 0; j < 4; ++j )
              {
                if ( (((unsigned __int16)(v9 ^ v8) >> (2 * j)) & 3) != 0
                  || *(_WORD *)&v4[2 * j + 12] != *(_WORD *)&a2[2 * j + 12] )
                {
                  goto LABEL_20;
                }
              }
              return (unsigned __int16)i;
            }
          }
LABEL_20:
          v4 += 28;
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}
