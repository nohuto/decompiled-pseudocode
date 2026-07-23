/*
 * XREFs of MiDecrementModifiedWriteCount @ 0x140462920
 * Callers:
 *     MiBuildReservationCluster @ 0x14033F334 (MiBuildReservationCluster.c)
 *     MiReservePageFileSpace @ 0x140368E88 (MiReservePageFileSpace.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 *     MiReleasePageFileSectionInfo @ 0x1404628D4 (MiReleasePageFileSectionInfo.c)
 *     MiTrimSharedPage @ 0x1404723B4 (MiTrimSharedPage.c)
 *     MiPrepareToFlushSubsection @ 0x1404E5300 (MiPrepareToFlushSubsection.c)
 *     MiDeleteCachedSubsection @ 0x14050A360 (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x14052C1C0 (MiEntireSubsectionIsPurged.c)
 *     MiLocateSharedPageViews @ 0x1406FCFF0 (MiLocateSharedPageViews.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 */

__int64 *__fastcall MiDecrementModifiedWriteCount(__int64 a1, int a2)
{
  KIRQL v3; // si
  __int64 *v4; // rcx
  _QWORD *v5; // r8
  __int64 *v6; // rbx
  __int64 *v7; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
    v3 = 17;
  else
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v4 = *(__int64 **)(a1 + 80);
  v5 = (_QWORD *)(a1 + 80);
  --*(_DWORD *)(a1 + 76);
  v6 = 0LL;
  if ( v4 )
  {
    do
    {
      v7 = (__int64 *)*v4;
      if ( (v4[1] & 8) != 0 )
      {
        *v4 = (__int64)v6;
        v6 = v4;
        *v5 = v7;
      }
      else
      {
        v5 = v4;
      }
      v4 = v7;
    }
    while ( v7 );
  }
  if ( v3 != 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)(a1 + 72) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 72), retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
    __writecr8(v3);
  }
  return v6;
}
