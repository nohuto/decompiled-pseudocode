/*
 * XREFs of FlushDevicePagingQueue @ 0x1400E1DF0
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1400E1ABC (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     ?VidMmFlushPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400E1FE4 (-VidMmFlushPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z.c)
 */

void __fastcall FlushDevicePagingQueue(struct VIDMM_WORKER_THREAD *a1, struct VIDMM_PAGING_QUEUE **a2)
{
  struct VIDMM_PAGING_QUEUE *v2; // rdx

  v2 = *a2;
  if ( v2 )
    VidMmFlushPagingQueue(a1, v2);
}
