/*
 * XREFs of ?VidMmFlushDmaBufferPendingCPUAccess@@YAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x140128230
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiSubmitRenderCommand @ 0x1400EAB34 (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     ?IterateAllPhysicalMemoryRangesEx@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEAU1@0PEBUVIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC@@PEAX@Z3I@Z @ 0x14003D744 (-IterateAllPhysicalMemoryRangesEx@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEA.c)
 */

void __fastcall VidMmFlushDmaBufferPendingCPUAccess(struct VIDMM_DMA_BUFFER *a1)
{
  __int64 v1; // r10
  __int64 v2; // rdx

  v1 = *((_QWORD *)a1 + 16);
  if ( *(_DWORD *)(v1 + 40) )
  {
    v2 = *((_QWORD *)a1 + 6);
    if ( (**(_DWORD **)(v2 + 368) & 4) != 0 )
      VIDMM_PHYSICAL_ADAPTER::IterateAllPhysicalMemoryRangesEx(
        *(VIDMM_PHYSICAL_ADAPTER **)(v1 + 16),
        *(struct VIDMM_PHYSICAL_ALLOC **)v2,
        (int (*)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, void *))FlushDmaBufferProcessCacheCB,
        0LL,
        0);
  }
}
