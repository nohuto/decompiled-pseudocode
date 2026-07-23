/*
 * XREFs of PpmExitCoordinatedIdleState @ 0x1404EC24C
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x1402F93B8 (PpmExitCoordinatedIdle.c)
 * Callees:
 *     PpmIdleTransitionStall @ 0x1406051FC (PpmIdleTransitionStall.c)
 */

char __fastcall PpmExitCoordinatedIdleState(volatile signed __int32 *a1, bool *a2)
{
  unsigned __int32 v2; // r8d
  char v3; // bl
  signed __int32 v7; // eax
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]

  v2 = *a1;
  v9 = 0LL;
  v3 = 0;
  BYTE12(v9) = 1;
  *(_QWORD *)&v9 = 0LL;
  v8[0] = 0LL;
  v8[1] = stru_140FC11F0.WaitBlock[2].WaitListEntry.Flink;
  *a2 = 0;
  while ( v2 )
  {
    if ( (v2 & 0x4000000) != 0 )
    {
      v7 = _InterlockedCompareExchange(a1, v2 & 0xFA000FFF | ((KeGetPcr()->Prcb.Number & 0xFFF | 0x2000) << 12), v2);
      if ( v2 == v7 )
      {
        v3 = 1;
        *a2 = (v2 & 0xFFF) == KeGetPcr()->Prcb.Number;
        return v3;
      }
      v2 = v7;
    }
    else
    {
      if ( (v2 & 0x3000000) == 0x2000000 && ((v2 >> 12) & 0xFFF) == KeGetPcr()->Prcb.Number )
      {
        v3 = 1;
        *a2 = 1;
        return v3;
      }
      PpmIdleTransitionStall(v8);
      v2 = *a1;
    }
  }
  return v3;
}
