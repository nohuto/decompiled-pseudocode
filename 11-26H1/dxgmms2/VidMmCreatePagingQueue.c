/*
 * XREFs of VidMmCreatePagingQueue @ 0x1400433D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400CA348 (-CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAUVIDMM_PAGING_QUEUE@@@Z.c)
 */

__int64 __fastcall VidMmCreatePagingQueue(VIDMM_DEVICE *a1, unsigned int a2, int a3, struct VIDMM_PAGING_QUEUE **a4)
{
  return VIDMM_DEVICE::CreatePagingQueue(a1, a2, a3, a4);
}
