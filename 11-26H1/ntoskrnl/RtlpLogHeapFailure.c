/*
 * XREFs of RtlpLogHeapFailure @ 0x140521C9C
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x140249DB0 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsSlotAllocate @ 0x14024A580 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpFreeHeap @ 0x140347010 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x14034BBC0 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x14034BF30 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpSegMgrCommit @ 0x14034EB50 (RtlpHpSegMgrCommit.c)
 *     RtlpHpQueryVA @ 0x1403504C0 (RtlpHpQueryVA.c)
 *     RtlpHpVaMgrCtxQuery @ 0x140350620 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x1403521D4 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpMetadataFree @ 0x1403524BC (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeapSlow @ 0x140352630 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpSegFreeInternal @ 0x140352AC8 (RtlpHpSegFreeInternal.c)
 *     RtlpFreeNTHeapInternal @ 0x140352C30 (RtlpFreeNTHeapInternal.c)
 *     RtlpHpVsContextFree @ 0x140352D10 (RtlpHpVsContextFree.c)
 *     RtlpHpVsSlotFreeList @ 0x140352F9C (RtlpHpVsSlotFreeList.c)
 *     RtlpHpLfhContextFree @ 0x140353D70 (RtlpHpLfhContextFree.c)
 *     RtlpHpLargeFree @ 0x1403546B4 (RtlpHpLargeFree.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 *     RtlpHpVsSlotCompactChunks @ 0x14041BD80 (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x14047F6B0 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpFixedVsFree @ 0x1404DD7F0 (RtlpHpFixedVsFree.c)
 *     RtlpAllocateHeap @ 0x14052125C (RtlpAllocateHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x140521C24 (RtlpProbeUserBufferSafe.c)
 *     RtlAllocateHeapFull @ 0x1406196B8 (RtlAllocateHeapFull.c)
 *     RtlFreeHeapFull @ 0x140619770 (RtlFreeHeapFull.c)
 *     RtlSizeHeap @ 0x140619810 (RtlSizeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x14061B020 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14061B414 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x14061BB40 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14061BC88 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14061C484 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x14061C6E0 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x14061CCAC (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x14061CF78 (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x14061D2A4 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x14061D374 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x14061D584 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x14062584C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x140626060 (RtlpHeapListCompare.c)
 *     RtlpHpPgCleanupAllocationForCompaction @ 0x140639E58 (RtlpHpPgCleanupAllocationForCompaction.c)
 *     RtlpHpPgContextFree @ 0x14063A300 (RtlpHpPgContextFree.c)
 *     RtlpDestroyHeapSegment @ 0x14077C458 (RtlpDestroyHeapSegment.c)
 *     RtlZeroHeap @ 0x140805E00 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027E170 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034D300 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpHeapHandleError @ 0x140526918 (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(
        unsigned int a1,
        ULONG_PTR a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        __int64 a5,
        __int64 a6)
{
  char v10; // al

  v10 = RtlpHpAcquireLockExclusive((int *)&stru_140E3E928.SchedulerAssist, 1LL, a3, a4);
  if ( qword_140E0C650 != a2 )
  {
    qword_140E0C668 = a5;
    qword_140E0C670 = a6;
    dword_140E0C648 = a1;
    qword_140E0C650 = a2;
    qword_140E0C658 = a3;
    qword_140E0C660 = (__int64)a4;
    RtlpHpHeapHandleError(a1, a2, a3);
  }
  RtlpHpReleaseLockExclusive((struct _KTHREAD *)&stru_140E3E928.SchedulerAssist, 1, v10);
}
