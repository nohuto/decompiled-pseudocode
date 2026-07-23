/*
 * XREFs of MiObtainSystemCharges @ 0x14033CB70
 * Callers:
 *     MiGetPageTablePages @ 0x14033BE80 (MiGetPageTablePages.c)
 *     MiGetLargePagesForSystemMapping @ 0x140B4E990 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14031A5D0 (MiChargeResident.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 */

__int64 __fastcall MiObtainSystemCharges(ULONG *a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r8

  if ( !(unsigned int)MiChargeCommit(a1, a2, 1u) )
    return 0LL;
  v6 = 128LL;
  if ( a3 != 1 )
    v6 = 0LL;
  if ( !(unsigned int)MiChargeResident(a1, a2, v6) )
  {
    MiReturnCommit(a1, a2, 0LL);
    return 0LL;
  }
  if ( a3 != 1 )
  {
    if ( a3 == 3 )
      _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.WaitBlock[0].Thread, a2);
    else
      _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.WaitBlock[0].WaitListEntry.Blink, a2);
  }
  return 1LL;
}
