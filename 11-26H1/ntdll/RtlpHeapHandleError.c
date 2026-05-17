/*
 * XREFs of RtlpHeapHandleError @ 0x1800274C0
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x180025C70 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180026CC0 (RtlpInsertFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x180027970 (RtlpFindAndCommitPages.c)
 *     RtlpFindUCREntry @ 0x180029670 (RtlpFindUCREntry.c)
 *     RtlpCreateUCREntry @ 0x180029BD0 (RtlpCreateUCREntry.c)
 *     RtlpPopulateListIndex @ 0x18007E1BC (RtlpPopulateListIndex.c)
 *     RtlDestroyHeap @ 0x18007EAC0 (RtlDestroyHeap.c)
 *     RtlpHpHeapHandleError @ 0x18011FB20 (RtlpHpHeapHandleError.c)
 * Callees:
 *     RtlpReportHeapFailure @ 0x1800D229C (RtlpReportHeapFailure.c)
 */

__int64 RtlpHeapHandleError()
{
  __int64 result; // rax

  if ( !byte_1801CB8C8 )
    return RtlpReportHeapFailure();
  return result;
}
