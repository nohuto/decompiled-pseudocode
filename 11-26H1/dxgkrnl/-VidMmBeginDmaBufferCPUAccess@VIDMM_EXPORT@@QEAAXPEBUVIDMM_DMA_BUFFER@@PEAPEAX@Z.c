/*
 * XREFs of ?VidMmBeginDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@PEAPEAX@Z @ 0x14004D5F4
 * Callers:
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140297258 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_EXPORT::VidMmBeginDmaBufferCPUAccess(
        VIDMM_EXPORT *this,
        const struct VIDMM_DMA_BUFFER *a2,
        void **a3)
{
  (*(void (__fastcall **)(const struct VIDMM_DMA_BUFFER *, void **))(*((_QWORD *)this + 1) + 488LL))(a2, a3);
}
