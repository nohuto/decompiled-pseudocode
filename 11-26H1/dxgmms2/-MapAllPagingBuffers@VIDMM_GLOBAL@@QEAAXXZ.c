/*
 * XREFs of ?MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400E4450
 * Callers:
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400E4500 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?VidMmMapPagingBuffers@@YAXPEAUVIDMM_DMA_POOL@@@Z @ 0x1400E449C (-VidMmMapPagingBuffers@@YAXPEAUVIDMM_DMA_POOL@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MapAllPagingBuffers(struct VIDMM_DMA_POOL **this)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1738); i = (unsigned int)(i + 1) )
    VidMmMapPagingBuffers(this[i + 80]);
  *((_DWORD *)this + 10022) = 1;
}
