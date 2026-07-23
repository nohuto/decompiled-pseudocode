/*
 * XREFs of RtlpHeapHandleError @ 0x140528FF8
 * Callers:
 *     RtlpCreateHeap @ 0x1404DCF18 (RtlpCreateHeap.c)
 *     RtlpHpHeapHandleError @ 0x140528F88 (RtlpHpHeapHandleError.c)
 *     RtlpCreateUCREntry @ 0x14061EB90 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14061ECD8 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14061F4D4 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14061FFC8 (RtlpInsertFreeBlock.c)
 *     RtlpFindUCREntry @ 0x140628F60 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x140629228 (RtlpPopulateListIndex.c)
 *     RtlDestroyHeap @ 0x140B3DD90 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_140E0C6B8 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, qword_140E0C6C0, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140E0C6B8, qword_140E0C6C0, qword_140E0C6C8, 0LL);
}
