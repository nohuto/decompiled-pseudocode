/*
 * XREFs of RtlpHeapHandleError @ 0x140526988
 * Callers:
 *     RtlpCreateHeap @ 0x1404E3978 (RtlpCreateHeap.c)
 *     RtlpHpHeapHandleError @ 0x140526918 (RtlpHpHeapHandleError.c)
 *     RtlpCreateUCREntry @ 0x14061BB40 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14061BC88 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14061C484 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14061CF78 (RtlpInsertFreeBlock.c)
 *     RtlpFindUCREntry @ 0x140625F10 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1406261D8 (RtlpPopulateListIndex.c)
 *     RtlDestroyHeap @ 0x140B3BB10 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_140E0C648 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, qword_140E0C650, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140E0C648, qword_140E0C650, qword_140E0C658, 0LL);
}
