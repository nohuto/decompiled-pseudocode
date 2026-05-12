/*
 * XREFs of RaidInitializeRpmb @ 0x14005C910
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidInitializeRpmb(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // eax

  v2 = 0;
  *(_DWORD *)(a1 + 5624) = *(_DWORD *)(a2 + 8);
  v3 = *(_DWORD *)(a2 + 12);
  if ( v3 >= 0x200
    && (*(_DWORD *)(a1 + 5628) = v3,
        *(_BYTE *)(a1 + 5632) = *(_BYTE *)(a2 + 16),
        *(_WORD *)(a1 + 5634) = *(_WORD *)(a2 + 18),
        *(_DWORD *)(a2 + 40) == 1) )
  {
    *(_DWORD *)(a1 + 5656) = 1;
    *(_OWORD *)(a1 + 5640) = *(_OWORD *)(a2 + 24);
  }
  else
  {
    v2 = -1056964602;
    *(_DWORD *)(a1 + 5624) = 0;
  }
  return v2;
}
