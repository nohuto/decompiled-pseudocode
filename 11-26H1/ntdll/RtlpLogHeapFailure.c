/*
 * XREFs of RtlpLogHeapFailure @ 0x1801217EC
 * Callers:
 *     RtlpHpVsSlotAllocate @ 0x180012E08 (RtlpHpVsSlotAllocate.c)
 *     RtlSetUserValueHeap @ 0x1800145D0 (RtlSetUserValueHeap.c)
 *     RtlpLowFragHeapFlushCaches @ 0x1800175A0 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x180017EA0 (RtlpFreeUserBlockToHeap.c)
 *     RtlpFreeUserBlock @ 0x1800181A0 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x1800185E0 (RtlpFreeNTHeapInternal.c)
 *     RtlpProbeUserBufferSafe @ 0x180019070 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpTagFreeHeap @ 0x1800195A0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180019C00 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhContextFree @ 0x180019DA0 (RtlpHpLfhContextFree.c)
 *     RtlSizeHeap @ 0x18001A7D0 (RtlSizeHeap.c)
 *     RtlpHpSegFreeInternal @ 0x18001AD38 (RtlpHpSegFreeInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x18001AED0 (RtlpReAllocateHeapInternal.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18001B870 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18001CED0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x18001E7C0 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x1800216E0 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1800233D0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x180024F50 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800257B0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180025AF0 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180025C70 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180026CC0 (RtlpInsertFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800274E0 (RtlpCommitBlock.c)
 *     RtlpFindAndCommitPages @ 0x180027970 (RtlpFindAndCommitPages.c)
 *     RtlpGrowBlockInPlace @ 0x180028190 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180028890 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x180029BD0 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x180029DB0 (RtlpInsertUCRBlock.c)
 *     RtlpFindEntry @ 0x180029F40 (RtlpFindEntry.c)
 *     RtlpHpSegMgrCommit @ 0x180069E10 (RtlpHpSegMgrCommit.c)
 *     RtlpInitializeHeapSegment @ 0x18007BEF8 (RtlpInitializeHeapSegment.c)
 *     RtlpHeapAddListEntry @ 0x18007E3B0 (RtlpHeapAddListEntry.c)
 *     RtlpDestroyHeapSegment @ 0x18007E9E8 (RtlpDestroyHeapSegment.c)
 *     RtlpGetHeapProtection @ 0x18007F750 (RtlpGetHeapProtection.c)
 *     RtlpHpMetadataFree @ 0x180087EE8 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeFree @ 0x18008918C (RtlpHpLargeFree.c)
 *     RtlpHpFreeHeapSlow @ 0x180089330 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x180089D10 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x180089DFC (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpHeapValidateProtection @ 0x18008B8C0 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpVsContextFree @ 0x18008E6F0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsSlotFreeInternal @ 0x18008EA34 (RtlpHpVsSlotFreeInternal.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1800962E0 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x1800968C0 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReallocMove @ 0x1800B1D30 (RtlpHpReallocMove.c)
 *     RtlpHpVsContextGrowInPlace @ 0x1800B27C0 (RtlpHpVsContextGrowInPlace.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1800CC620 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpRemoveUCRBlock @ 0x1800D9DA4 (RtlpRemoveUCRBlock.c)
 *     RtlGetUserInfoHeap @ 0x1800DC3A0 (RtlGetUserInfoHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800DD034 (RtlpValidateHeapSegment.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1800F8860 (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpPgCleanupAllocationForCompaction @ 0x180101CBC (RtlpHpPgCleanupAllocationForCompaction.c)
 *     RtlpHpPgContextFree @ 0x180101E64 (RtlpHpPgContextFree.c)
 *     RtlpCoalesceHeap @ 0x180104954 (RtlpCoalesceHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180108B90 (RtlSetUserFlagsHeap.c)
 *     RtlAllocateHeapFast @ 0x18013FD70 (RtlAllocateHeapFast.c)
 *     RtlAllocateHeapFull @ 0x18013FEB0 (RtlAllocateHeapFull.c)
 *     RtlFreeHeapFast @ 0x1801400E0 (RtlFreeHeapFast.c)
 *     RtlFreeHeapFull @ 0x1801401A0 (RtlFreeHeapFull.c)
 *     RtlReAllocateHeapFast @ 0x1801402B0 (RtlReAllocateHeapFast.c)
 *     RtlReAllocateHeapFull @ 0x180140350 (RtlReAllocateHeapFull.c)
 *     RtlZeroHeap @ 0x1801465B0 (RtlZeroHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpHeapHandleError @ 0x18011FB20 (RtlpHpHeapHandleError.c)
 */

struct _TEB *__fastcall RtlpLogHeapFailure(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  RtlAcquireSRWLockExclusive(&qword_1801C7298, a2);
  if ( qword_1801C60F0 != a2 )
  {
    qword_1801C6108 = a5;
    qword_1801C6110 = a6;
    dword_1801C60E8 = a1;
    qword_1801C60F0 = a2;
    qword_1801C60F8 = a3;
    qword_1801C6100 = a4;
    RtlpHpHeapHandleError(a1, a2, a3);
  }
  return RtlReleaseSRWLockExclusive(&qword_1801C7298);
}
