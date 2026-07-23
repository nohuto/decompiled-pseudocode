/*
 * XREFs of MiRemoveDecayClusterTimer @ 0x14045B578
 * Callers:
 *     MiUnlinkSingleBatchPage @ 0x1402DA130 (MiUnlinkSingleBatchPage.c)
 *     MiDecayNodeNowEmpty @ 0x14045B3F8 (MiDecayNodeNowEmpty.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkDecayClusterTimer @ 0x14045B5F4 (MiUnlinkDecayClusterTimer.c)
 */

__int64 __fastcall MiRemoveDecayClusterTimer(__int64 a1)
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E34950);
  result = *(_QWORD *)(a1 + 8);
  if ( (result & 0x100000000LL) == 0 )
  {
    *(_QWORD *)(a1 + 8) = result | 0x100000000LL;
    result = MiUnlinkDecayClusterTimer(a1);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = (unsigned int)PopHibernateInProgress;
    if ( !PopHibernateInProgress )
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E34950, retaddr);
  }
  dword_140E34950 = 0;
  return result;
}
