/*
 * XREFs of ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x18012A790
 * Callers:
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z @ 0x18012A6A8 (-EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z.c)
 *     ?HasSwapChainAttributes@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x18012A780 (-HasSwapChainAttributes@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x18012B148 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEBUCSM_RGNDATA_@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x18018634C (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEBUCSM_RGNDATA_@@PEBUScrollOp.c)
 *     ?IsSwapChain@CGlobalCompositionSurfaceInfo@@WGI@EBA_NXZ @ 0x1802665D0 (-IsSwapChain@CGlobalCompositionSurfaceInfo@@WGI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalCompositionSurfaceInfo::IsSwapChain(CGlobalCompositionSurfaceInfo *this)
{
  return (unsigned int)((__int64)(*((_QWORD *)this + 24) - *((_QWORD *)this + 23)) >> 3) > 1
      || *((_DWORD *)this + 36) == 3;
}
