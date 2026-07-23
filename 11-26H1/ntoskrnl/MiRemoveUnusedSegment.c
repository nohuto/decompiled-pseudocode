/*
 * XREFs of MiRemoveUnusedSegment @ 0x1402EDD50
 * Callers:
 *     MiReferenceActiveControlArea @ 0x1402EDCE4 (MiReferenceActiveControlArea.c)
 *     MiComputeDataFlushRange @ 0x140480064 (MiComputeDataFlushRange.c)
 *     MiPrepareSegmentForDeletion @ 0x140480F20 (MiPrepareSegmentForDeletion.c)
 *     MmGetImageFileSignatureInformation @ 0x1404AB170 (MmGetImageFileSignatureInformation.c)
 *     MiAttemptSectionDelete @ 0x1404B8D88 (MiAttemptSectionDelete.c)
 *     MiIncrementModifiedWriteCount @ 0x1404EF980 (MiIncrementModifiedWriteCount.c)
 *     MiSetDeleteOnClose @ 0x14050012C (MiSetDeleteOnClose.c)
 *     MiEntireSubsectionIsPurged @ 0x14052C1C0 (MiEntireSubsectionIsPurged.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x1402EDDD4 (MiUnlinkUnusedControlArea.c)
 */

__int64 __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  result = *(unsigned int *)(a1 + 56);
  if ( (result & 0x40000000) != 0 )
  {
    v3 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 2112));
    result = MiUnlinkUnusedControlArea(a1);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      *(_DWORD *)(v3 + 2112) = 0;
    }
    else
    {
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v3 + 2112), retaddr);
    }
  }
  return result;
}
