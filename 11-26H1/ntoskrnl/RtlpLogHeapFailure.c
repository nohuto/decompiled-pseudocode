/*
 * XREFs of RtlpLogHeapFailure @ 0x140524308
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x14024B710 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsSlotAllocate @ 0x14024BEE0 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpFreeHeap @ 0x140349090 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x14034DC40 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x14034DFB0 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpSegMgrCommit @ 0x140350BD0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpQueryVA @ 0x140352540 (RtlpHpQueryVA.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1403526A0 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x140354258 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpMetadataFree @ 0x140354540 (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403546B4 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpSegFreeInternal @ 0x140354B48 (RtlpHpSegFreeInternal.c)
 *     RtlpFreeNTHeapInternal @ 0x140354CB0 (RtlpFreeNTHeapInternal.c)
 *     RtlpHpVsContextFree @ 0x140354D90 (RtlpHpVsContextFree.c)
 *     RtlpHpVsSlotFreeList @ 0x14035501C (RtlpHpVsSlotFreeList.c)
 *     RtlpHpLfhContextFree @ 0x140355DF0 (RtlpHpLfhContextFree.c)
 *     RtlpHpLargeFree @ 0x14035645C (RtlpHpLargeFree.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1404135D0 (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x140479020 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpFixedVsFree @ 0x1404D6ED0 (RtlpHpFixedVsFree.c)
 *     RtlpAllocateHeap @ 0x1405238C8 (RtlpAllocateHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x140524290 (RtlpProbeUserBufferSafe.c)
 *     RtlAllocateHeapFull @ 0x14061C714 (RtlAllocateHeapFull.c)
 *     RtlFreeHeapFull @ 0x14061C7CC (RtlFreeHeapFull.c)
 *     RtlSizeHeap @ 0x14061C860 (RtlSizeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x14061E070 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14061E464 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x14061EB90 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14061ECD8 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14061F4D4 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x14061F730 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x14061FCFC (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x14061FFC8 (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x1406202F4 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x1406203C4 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x1406205D4 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x14062889C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x1406290B0 (RtlpHeapListCompare.c)
 *     RtlpHpPgCleanupAllocationForCompaction @ 0x14063CE68 (RtlpHpPgCleanupAllocationForCompaction.c)
 *     RtlpHpPgContextFree @ 0x14063D310 (RtlpHpPgContextFree.c)
 *     RtlpDestroyHeapSegment @ 0x14077EF4C (RtlpDestroyHeapSegment.c)
 *     RtlZeroHeap @ 0x14080B8A0 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpHeapHandleError @ 0x140528F88 (RtlpHpHeapHandleError.c)
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

  v10 = RtlpHpAcquireLockExclusive(&stru_140E62450.Header.LockNV, 1LL, a3, a4);
  if ( qword_140E0C6C0 != a2 )
  {
    qword_140E0C6D8 = a5;
    qword_140E0C6E0 = a6;
    dword_140E0C6B8 = a1;
    qword_140E0C6C0 = a2;
    qword_140E0C6C8 = a3;
    qword_140E0C6D0 = (__int64)a4;
    RtlpHpHeapHandleError(a1, a2, a3);
  }
  RtlpHpReleaseLockExclusive(&stru_140E62450, 1, v10);
}
