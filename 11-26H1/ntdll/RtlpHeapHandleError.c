/*
 * XREFs of RtlpHeapHandleError @ 0x180012590
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180011D90 (RtlpInsertFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x180012A40 (RtlpFindAndCommitPages.c)
 *     RtlpFindUCREntry @ 0x180014740 (RtlpFindUCREntry.c)
 *     RtlpCreateUCREntry @ 0x180014CA0 (RtlpCreateUCREntry.c)
 *     RtlpPopulateListIndex @ 0x18006C8A8 (RtlpPopulateListIndex.c)
 *     RtlDestroyHeap @ 0x18006D090 (RtlDestroyHeap.c)
 *     RtlpHpHeapHandleError @ 0x18011F8D0 (RtlpHpHeapHandleError.c)
 * Callees:
 *     RtlpReportHeapFailure @ 0x1800CFA0C (RtlpReportHeapFailure.c)
 */

__int64 RtlpHeapHandleError()
{
  __int64 result; // rax

  if ( !byte_1801CA908 )
    return RtlpReportHeapFailure();
  return result;
}
