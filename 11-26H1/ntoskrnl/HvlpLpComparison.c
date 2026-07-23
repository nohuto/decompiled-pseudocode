/*
 * XREFs of HvlpLpComparison @ 0x1405BCCF0
 * Callers:
 *     HvlpSelectLpSet @ 0x1405BCF2C (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1405BD36C (HvlpSelectVpSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpLpComparison(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax

  v4 = *(_DWORD *)(a2 + 40LL * a4 + 16);
  if ( *(_DWORD *)(a2 + 40LL * a3 + 16) >= v4 )
  {
    if ( *(_DWORD *)(a2 + 40LL * a3 + 16) > v4 )
      return 1LL;
    v5 = *(_DWORD *)(a2 + 40LL * a4 + 20);
    if ( *(_DWORD *)(a2 + 40LL * a3 + 20) >= v5 )
    {
      if ( *(_DWORD *)(a2 + 40LL * a3 + 20) > v5 )
        return 1LL;
      v6 = *(_DWORD *)(a2 + 40LL * a4 + 24);
      if ( *(_DWORD *)(a2 + 40LL * a3 + 24) <= v6 )
      {
        if ( *(_DWORD *)(a2 + 40LL * a3 + 24) < v6 )
          return 1LL;
        v7 = *(_DWORD *)(a2 + 40LL * a4 + 28);
        if ( *(_DWORD *)(a2 + 40LL * a3 + 28) <= v7 )
        {
          if ( *(_DWORD *)(a2 + 40LL * a3 + 28) < v7 )
            return 1LL;
          v8 = *(_DWORD *)(a2 + 40LL * a4 + 32);
          if ( *(_DWORD *)(a2 + 40LL * a3 + 32) <= v8 )
          {
            if ( *(_DWORD *)(a2 + 40LL * a3 + 32) >= v8 )
            {
              if ( a3 >= a4 )
                return a3 > a4;
              return 0xFFFFFFFFLL;
            }
            return 1LL;
          }
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}
