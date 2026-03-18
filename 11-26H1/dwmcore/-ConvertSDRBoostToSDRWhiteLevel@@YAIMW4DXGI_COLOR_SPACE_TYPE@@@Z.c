/*
 * XREFs of ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180013268
 * Callers:
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1801A8440 (-PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4.c)
 *     ?CalcAttributes@DesktopPlaneInfo@COverlayContext@@QEAAXPEBVIOverlayMonitorTarget@@AEBVOverlayCaps@@_N@Z @ 0x1802392A0 (-CalcAttributes@DesktopPlaneInfo@COverlayContext@@QEAAXPEBVIOverlayMonitorTarget@@AEBVOverlayCap.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@33AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_NAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x1802398DC (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800132C0 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall ConvertSDRBoostToSDRWhiteLevel(float a1, enum DXGI_COLOR_SPACE_TYPE a2)
{
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a1 - 1.0) & _xmm) < 0.0000011920929
    || a2 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709
    || IsDXGIColorSpaceRec2020(a2) )
  {
    return 0LL;
  }
  else
  {
    return (unsigned int)(int)(float)(a1 * 80.0);
  }
}
