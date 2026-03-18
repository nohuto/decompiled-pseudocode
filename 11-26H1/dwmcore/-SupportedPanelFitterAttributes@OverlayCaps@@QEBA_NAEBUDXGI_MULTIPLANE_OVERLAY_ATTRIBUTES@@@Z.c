/*
 * XREFs of ?SupportedPanelFitterAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18023DD58
 * Callers:
 *     ?CalcAttributes@DesktopPlaneInfo@COverlayContext@@QEAAXPEBVIOverlayMonitorTarget@@AEBVOverlayCaps@@_N@Z @ 0x1802392A0 (-CalcAttributes@DesktopPlaneInfo@COverlayContext@@QEAAXPEBVIOverlayMonitorTarget@@AEBVOverlayCap.c)
 *     ?DowngradeScaling@DesktopPlaneInfo@COverlayContext@@QEAAXAEBVOverlayCaps@@@Z @ 0x18023B0A8 (-DowngradeScaling@DesktopPlaneInfo@COverlayContext@@QEAAXAEBVOverlayCaps@@@Z.c)
 *     ?IsCandidateDirectFlipCompatible@COverlayContext@@IEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@I_N@Z @ 0x18023CAF0 (-IsCandidateDirectFlipCompatible@COverlayContext@@IEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 *     ?IsOverlayCompatibleScale@COverlayContext@@IEBA_NPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_N@Z @ 0x18023D258 (-IsOverlayCompatibleScale@COverlayContext@@IEBA_NPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4Overl.c)
 *     ?CalcSwapChainBufferSize@CMonitorTransform@@QEAA?AUD2D_SIZE_U@@AEBU2@PEBVCD3DDevice@@AEBVOverlayCaps@@@Z @ 0x18028D8BC (-CalcSwapChainBufferSize@CMonitorTransform@@QEAA-AUD2D_SIZE_U@@AEBU2@PEBVCD3DDevice@@AEBVOverlay.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18018BF10 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CalcStretchFactors@@YAXAEBUtagRECT@@0W4DXGI_MODE_ROTATION@@PEAM2@Z @ 0x1802396B0 (-CalcStretchFactors@@YAXAEBUtagRECT@@0W4DXGI_MODE_ROTATION@@PEAM2@Z.c)
 */

char __fastcall OverlayCaps::SupportedPanelFitterAttributes(
        OverlayCaps *this,
        const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *a2)
{
  char v2; // bl
  const struct tagRECT *v4; // rsi
  const struct tagRECT *v5; // r11
  float v7; // [rsp+48h] [rbp+10h] BYREF
  float v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = 1;
  if ( *((_DWORD *)a2 + 13) == 1 )
  {
    v4 = (const struct tagRECT *)((char *)a2 + 4);
    if ( TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(
           (unsigned int *)a2 + 1,
           (_DWORD *)a2 + 5) )
    {
      return v2;
    }
    if ( *((_DWORD *)this + 6) )
    {
      v7 = 0.0;
      v8 = 0.0;
      CalcStretchFactors(v4, v5, DXGI_MODE_ROTATION_IDENTITY, &v7, &v8);
      if ( *((float *)this + 9) < v7 || v8 < *((float *)this + 10) )
        return 0;
      return v2;
    }
  }
  return 0;
}
