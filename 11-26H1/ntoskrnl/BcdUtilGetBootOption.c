/*
 * XREFs of BcdUtilGetBootOption @ 0x140897910
 * Callers:
 *     BcdUtilGetBootOption @ 0x140897910 (BcdUtilGetBootOption.c)
 *     BcdUtilGetBootOptionBoolean @ 0x140897980 (BcdUtilGetBootOptionBoolean.c)
 *     BcdUtilGetBootOptionInteger @ 0x1408979C8 (BcdUtilGetBootOptionInteger.c)
 *     BcdUtilGetBootOptionString @ 0x140897A10 (BcdUtilGetBootOptionString.c)
 * Callees:
 *     BcdUtilGetBootOption @ 0x140897910 (BcdUtilGetBootOption.c)
 */

__int64 __fastcall BcdUtilGetBootOption(__int64 a1, unsigned int a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rbx
  int v6; // eax
  __int64 result; // rax

  if ( a1 )
  {
    v4 = 0;
    do
    {
      v5 = a1 + v4;
      if ( !*(_BYTE *)(v5 + 20) )
      {
        if ( *(_DWORD *)v5 == a2 )
          return a1 + v4;
        v6 = *(_DWORD *)(v5 + 12);
        if ( v6 )
        {
          result = BcdUtilGetBootOption(a1 + v4 + v6, a2);
          if ( result )
            return result;
        }
      }
      v4 = *(_DWORD *)(v5 + 16);
    }
    while ( v4 );
  }
  return 0LL;
}
