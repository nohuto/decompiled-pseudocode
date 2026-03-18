/*
 * XREFs of MiRemoveUnusedSegment @ 0x14030BCD0
 * Callers:
 *     MiReferenceActiveControlArea @ 0x14030BC64 (MiReferenceActiveControlArea.c)
 *     MiComputeDataFlushRange @ 0x1404866EC (MiComputeDataFlushRange.c)
 *     MiPrepareSegmentForDeletion @ 0x1404874E0 (MiPrepareSegmentForDeletion.c)
 *     MmGetImageFileSignatureInformation @ 0x1404B1AE0 (MmGetImageFileSignatureInformation.c)
 *     MiAttemptSectionDelete @ 0x1404BF538 (MiAttemptSectionDelete.c)
 *     MiIncrementModifiedWriteCount @ 0x1404F6374 (MiIncrementModifiedWriteCount.c)
 *     MiSetDeleteOnClose @ 0x14050687C (MiSetDeleteOnClose.c)
 *     MiEntireSubsectionIsPurged @ 0x140529CA0 (MiEntireSubsectionIsPurged.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x14030BD54 (MiUnlinkUnusedControlArea.c)
 */

__int64 __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  result = *(unsigned int *)(a1 + 56);
  if ( (result & 0x40000000) != 0 )
  {
    v3 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 2112));
    result = MiUnlinkUnusedControlArea(a1);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = LODWORD(stru_140F11D08.WaitStatus), LODWORD(stru_140F11D08.WaitStatus)) )
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
