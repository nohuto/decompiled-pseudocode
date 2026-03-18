/*
 * XREFs of ?VidMmGetDmaBufferLength@VIDMM_EXPORT@@QEAAIPEBUVIDMM_DMA_BUFFER@@@Z @ 0x14004B414
 * Callers:
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140297258 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmGetDmaBufferLength(VIDMM_EXPORT *this, const struct VIDMM_DMA_BUFFER *a2)
{
  return (*(__int64 (__fastcall **)(const struct VIDMM_DMA_BUFFER *))(*((_QWORD *)this + 1) + 504LL))(a2);
}
