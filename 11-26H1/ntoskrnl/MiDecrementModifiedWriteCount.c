/*
 * XREFs of MiDecrementModifiedWriteCount @ 0x140469350
 * Callers:
 *     MiBuildReservationCluster @ 0x14033D2B4 (MiBuildReservationCluster.c)
 *     MiReservePageFileSpace @ 0x1403670E8 (MiReservePageFileSpace.c)
 *     MiWriteComplete @ 0x14040A870 (MiWriteComplete.c)
 *     MiReleasePageFileSectionInfo @ 0x140469304 (MiReleasePageFileSectionInfo.c)
 *     MiTrimSharedPage @ 0x140478A54 (MiTrimSharedPage.c)
 *     MiPrepareToFlushSubsection @ 0x1404EBD20 (MiPrepareToFlushSubsection.c)
 *     MiDeleteCachedSubsection @ 0x1405108F0 (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x140529CA0 (MiEntireSubsectionIsPurged.c)
 *     MiLocateSharedPageViews @ 0x1406F8320 (MiLocateSharedPageViews.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      *(_DWORD *)(a1 + 72) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 72), retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
    __writecr8(v3);
  }
  return v6;
}
