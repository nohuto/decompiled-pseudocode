/*
 * XREFs of ?DestroyPagingQueue@VIDMM_DEVICE@@QEAAXPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x14011B374
 * Callers:
 *     VidMmDestroyPagingQueue @ 0x1400435E0 (VidMmDestroyPagingQueue.c)
 * Callees:
 *     ??_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x140004834 (--_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_DEVICE::DestroyPagingQueue(VIDMM_DEVICE *this, struct VIDMM_PAGING_QUEUE *a2)
{
  if ( a2 )
    VIDMM_PAGING_QUEUE::`scalar deleting destructor'(a2);
}
