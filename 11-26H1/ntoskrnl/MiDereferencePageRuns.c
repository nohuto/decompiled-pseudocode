/*
 * XREFs of MiDereferencePageRuns @ 0x1403C9634
 * Callers:
 *     MiRebuildLargePage @ 0x14028FF24 (MiRebuildLargePage.c)
 *     MiProcessLargeCoalesceCandidates @ 0x1403C8674 (MiProcessLargeCoalesceCandidates.c)
 *     MiFindContiguousPagesFinish @ 0x1404F702C (MiFindContiguousPagesFinish.c)
 *     MiGetListOfPendingBadPages @ 0x14052AB58 (MiGetListOfPendingBadPages.c)
 *     MiComputeNodeMemory @ 0x1406E7EF4 (MiComputeNodeMemory.c)
 *     MiUpdatePartitionMemory @ 0x140709F1C (MiUpdatePartitionMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x1408663A4 (MiGetPhysicalMemoryRanges.c)
 *     MmIdentifyPhysicalMemory @ 0x140868394 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x14086C170 (MiScanPagefileSpace.c)
 *     MiCombineAllPhysicalMemory @ 0x14087A848 (MiCombineAllPhysicalMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x14087C5D4 (MiMakePartitionMemoryBlock.c)
 *     MmScrubMemory @ 0x14087DFD4 (MmScrubMemory.c)
 *     MmGetNodeChannelRanges @ 0x140B1FB9C (MmGetNodeChannelRanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiDereferencePageRuns(__int64 a1)
{
  __int64 v1; // rbx
  volatile LONG *v2; // rdi
  KIRQL v3; // si

  v1 = a1 - 16;
  v2 = (volatile LONG *)(*(_QWORD *)(a1 - 16) + 272LL);
  if ( KeGetCurrentIrql() == 2 )
  {
    v3 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v2);
  }
  else
  {
    v3 = ExAcquireSpinLockExclusive(v2);
  }
  if ( (*(_QWORD *)(v1 + 8))-- != 1LL )
    v1 = 0LL;
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v3);
  if ( v1 )
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E2D930.QuantumTarget, (PSLIST_ENTRY)v1);
}
