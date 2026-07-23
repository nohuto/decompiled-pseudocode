/*
 * XREFs of MiDereferencePageRuns @ 0x1403D34E4
 * Callers:
 *     MiRebuildLargePage @ 0x14028F484 (MiRebuildLargePage.c)
 *     MiProcessLargeCoalesceCandidates @ 0x1403D2564 (MiProcessLargeCoalesceCandidates.c)
 *     MiFindContiguousPagesFinish @ 0x1404F063C (MiFindContiguousPagesFinish.c)
 *     MiGetListOfPendingBadPages @ 0x14052D078 (MiGetListOfPendingBadPages.c)
 *     MiComputeNodeMemory @ 0x1406ECB90 (MiComputeNodeMemory.c)
 *     MiUpdatePartitionMemory @ 0x14070EBD0 (MiUpdatePartitionMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x14086C784 (MiGetPhysicalMemoryRanges.c)
 *     MmIdentifyPhysicalMemory @ 0x14086E774 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140872550 (MiScanPagefileSpace.c)
 *     MiCombineAllPhysicalMemory @ 0x140880C48 (MiCombineAllPhysicalMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x1408829D4 (MiMakePartitionMemoryBlock.c)
 *     MmScrubMemory @ 0x1408843D4 (MmScrubMemory.c)
 *     MmGetNodeChannelRanges @ 0x140B21FB8 (MmGetNodeChannelRanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
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
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E2DAB0.QuantumTarget, (PSLIST_ENTRY)v1);
}
