/*
 * XREFs of ?IsOverlayCompatibleScale@COverlayContext@@IEBA_NPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_N@Z @ 0x18023D258
 * Callers:
 *     ?IsCandidateOverlayCompatible@COverlayContext@@IEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_NI5@Z @ 0x180218B50 (-IsCandidateOverlayCompatible@COverlayContext@@IEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@P.c)
 * Callees:
 *     ?SupportedPanelFitterAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18023DD58 (-SupportedPanelFitterAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z.c)
 */

char __fastcall COverlayContext::IsOverlayCompatibleScale(
        float *a1,
        const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *a2,
        int a3,
        char a4)
{
  if ( a3 != 2 || a4 || *(_DWORD *)a1 > 1u || a1[4] != 1.0 || a1[5] != 1.0 )
    return OverlayCaps::SupportedMPOAttributes((OverlayCaps *)a1, a2);
  if ( !OverlayCaps::SupportedPanelFitterAttributes((OverlayCaps *)a1, a2) )
    return 0;
  *(_DWORD *)a2 |= 4u;
  return 1;
}
