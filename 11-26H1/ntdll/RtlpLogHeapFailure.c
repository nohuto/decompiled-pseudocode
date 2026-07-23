/*
 * XREFs of RtlpLogHeapFailure @ 0x180121588
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180002680 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x180002F80 (RtlpFreeUserBlockToHeap.c)
 *     RtlpFreeUserBlock @ 0x180003280 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x1800036C0 (RtlpFreeNTHeapInternal.c)
 *     RtlpProbeUserBufferSafe @ 0x180004150 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpTagFreeHeap @ 0x180004680 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180004CE0 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhContextFree @ 0x180004E80 (RtlpHpLfhContextFree.c)
 *     RtlSizeHeap @ 0x1800058B0 (RtlSizeHeap.c)
 *     RtlpHpSegFreeInternal @ 0x180005E18 (RtlpHpSegFreeInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x180005FB0 (RtlpReAllocateHeapInternal.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180006940 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180007FA0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x18000C7B0 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x180010020 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180010BC0 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180011D90 (RtlpInsertFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800125B0 (RtlpCommitBlock.c)
 *     RtlpFindAndCommitPages @ 0x180012A40 (RtlpFindAndCommitPages.c)
 *     RtlpGrowBlockInPlace @ 0x180013260 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180013960 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x180014CA0 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x180014E80 (RtlpInsertUCRBlock.c)
 *     RtlpFindEntry @ 0x180015010 (RtlpFindEntry.c)
 *     RtlpHpVsSlotAllocate @ 0x18005E538 (RtlpHpVsSlotAllocate.c)
 *     RtlSetUserValueHeap @ 0x18005FD00 (RtlSetUserValueHeap.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x180063C80 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x180064260 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 *     RtlpInitializeHeapSegment @ 0x18006A718 (RtlpInitializeHeapSegment.c)
 *     RtlpHeapAddListEntry @ 0x18006CAA0 (RtlpHeapAddListEntry.c)
 *     RtlpDestroyHeapSegment @ 0x18006D7A8 (RtlpDestroyHeapSegment.c)
 *     RtlpHpHeapValidateProtection @ 0x18006ED00 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpVaMgrCtxQuery @ 0x180070DFC (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x180070EC0 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpGetHeapProtection @ 0x180076AF0 (RtlpGetHeapProtection.c)
 *     RtlpHpMetadataFree @ 0x18007F268 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeFree @ 0x18008058C (RtlpHpLargeFree.c)
 *     RtlpHpFreeHeapSlow @ 0x180080730 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     RtlpHpVsContextGrowInPlace @ 0x180082330 (RtlpHpVsContextGrowInPlace.c)
 *     RtlpHpSegMgrCommit @ 0x18008A260 (RtlpHpSegMgrCommit.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1800C9D90 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpRemoveUCRBlock @ 0x1800D6D64 (RtlpRemoveUCRBlock.c)
 *     RtlGetUserInfoHeap @ 0x1800D9310 (RtlGetUserInfoHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800D9FA4 (RtlpValidateHeapSegment.c)
 *     RtlpHpVsContextFree @ 0x1800E0118 (RtlpHpVsContextFree.c)
 *     RtlpHpVsSlotFreeInternal @ 0x1800E045C (RtlpHpVsSlotFreeInternal.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1800F8030 (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpPgCleanupAllocationForCompaction @ 0x18010140C (RtlpHpPgCleanupAllocationForCompaction.c)
 *     RtlpHpPgContextFree @ 0x1801015B4 (RtlpHpPgContextFree.c)
 *     RtlpCoalesceHeap @ 0x180103CD4 (RtlpCoalesceHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180108530 (RtlSetUserFlagsHeap.c)
 *     RtlAllocateHeapFast @ 0x18013FC70 (RtlAllocateHeapFast.c)
 *     RtlAllocateHeapFull @ 0x18013FDB0 (RtlAllocateHeapFull.c)
 *     RtlFreeHeapFast @ 0x18013FFE0 (RtlFreeHeapFast.c)
 *     RtlFreeHeapFull @ 0x1801400A0 (RtlFreeHeapFull.c)
 *     RtlReAllocateHeapFast @ 0x1801401B0 (RtlReAllocateHeapFast.c)
 *     RtlReAllocateHeapFull @ 0x180140250 (RtlReAllocateHeapFull.c)
 *     RtlZeroHeap @ 0x180146460 (RtlZeroHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpHeapHandleError @ 0x18011F8D0 (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  RtlAcquireSRWLockExclusive(&stru_1801C6298);
  if ( qword_1801C50F0 != a2 )
  {
    qword_1801C5108 = a5;
    qword_1801C5110 = a6;
    dword_1801C50E8 = a1;
    qword_1801C50F0 = a2;
    qword_1801C50F8 = a3;
    qword_1801C5100 = a4;
    RtlpHpHeapHandleError(a1, a2, a3);
  }
  RtlReleaseSRWLockExclusive(&stru_1801C6298);
}
