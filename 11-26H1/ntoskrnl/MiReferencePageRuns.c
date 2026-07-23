/*
 * XREFs of MiReferencePageRuns @ 0x14028E44C
 * Callers:
 *     MiReferencePageRuns @ 0x14028E44C (MiReferencePageRuns.c)
 *     MiFindContiguousPagesPrepare @ 0x14028E928 (MiFindContiguousPagesPrepare.c)
 *     MiRebuildLargePage @ 0x14028F484 (MiRebuildLargePage.c)
 *     MiProcessLargeCoalesceCandidates @ 0x1403D2564 (MiProcessLargeCoalesceCandidates.c)
 *     MiGetListOfPendingBadPages @ 0x14052D078 (MiGetListOfPendingBadPages.c)
 *     MiComputeNodeMemory @ 0x1406ECB90 (MiComputeNodeMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x14086C784 (MiGetPhysicalMemoryRanges.c)
 *     MmIdentifyPhysicalMemory @ 0x14086E774 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140872550 (MiScanPagefileSpace.c)
 *     MiCombineAllPhysicalMemory @ 0x140880C48 (MiCombineAllPhysicalMemory.c)
 *     MmScrubMemory @ 0x1408843D4 (MmScrubMemory.c)
 *     MmGetNodeChannelRanges @ 0x140B21FB8 (MmGetNodeChannelRanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiReferencePageRuns @ 0x14028E44C (MiReferencePageRuns.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockPartitionPair @ 0x140527DD4 (MiUnlockPartitionPair.c)
 *     MiLockPartitionPair @ 0x140530870 (MiLockPartitionPair.c)
 */

__int64 __fastcall MiReferencePageRuns(__int64 a1, unsigned int a2)
{
  volatile LONG *v4; // rcx
  KIRQL v5; // si
  __int64 v6; // r8
  KIRQL v7; // al
  _QWORD *v8; // rbx
  volatile LONG *v9; // rcx

  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    v4 = (volatile LONG *)(a1 + 272);
    if ( KeGetCurrentIrql() == 2 )
    {
      v5 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v4);
      goto LABEL_7;
    }
    v7 = ExAcquireSpinLockExclusive(v4);
  }
  else
  {
    v7 = MiLockPartitionPair(&MiSystemPartition, a1);
  }
  v5 = v7;
LABEL_7:
  if ( a2 )
  {
    v8 = *(_QWORD **)(a1 + 32);
  }
  else
  {
    v8 = MmPhysicalMemoryBlock;
    if ( (ULONG *)a1 != &MiSystemPartition )
      v8 = *(_QWORD **)(a1 + 80);
  }
  if ( v8 )
    ++*(v8 - 1);
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    v9 = (volatile LONG *)(a1 + 272);
    if ( v5 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v9);
    else
      ExReleaseSpinLockExclusive(v9, v5);
  }
  else
  {
    LOBYTE(v6) = v5;
    MiUnlockPartitionPair(&MiSystemPartition, a1, v6);
  }
  if ( !v8 )
    return MiReferencePageRuns(&MiSystemPartition, a2);
  return (__int64)v8;
}
