/*
 * XREFs of ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800E69E8
 * Callers:
 *     ?CalcSourceRect@CBitmapRealization@@IEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18005F680 (-CalcSourceRect@CBitmapRealization@@IEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectU.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800602F0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?DoesContain@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800E4E6C (-DoesContain@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800E50F0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1800E5AB0 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?OnRectanglesChanged@CRegionGeometry@@QEAAXXZ @ 0x1800E625C (-OnRectanglesChanged@CRegionGeometry@@QEAAXXZ.c)
 *     ?IntersectWithAlphaMargins@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800E6948 (-IntersectWithAlphaMargins@CWindowNode@@AEBAXPEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTA.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800E8098 (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTA.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800F0094 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801267C4 (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 *     ?NotifyOverlayInvertedContent@COverlayContext@@QEAAXPEBVCVisual@@U_LUID@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801BFAA4 (-NotifyOverlayInvertedContent@COverlayContext@@QEAAXPEBVCVisual@@U_LUID@@AEBV-$TMilRect_@HUtagRE.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801FDB90 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitmapResource@@@Z @ 0x180201CBC (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitma.c)
 *     ?CalcDesktopClip@COverlayContext@@IEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802394AC (-CalcDesktopClip@COverlayContext@@IEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gs.c)
 *     ?CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N2@Z @ 0x18023973C (-CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N2@Z.c)
 *     ?CanFastDisableDesktopPlane@COverlayContext@@IEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x180239844 (-CanFastDisableDesktopPlane@COverlayContext@@IEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayConte.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@33AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_NAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x1802398DC (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?IsDFlipOnMPO@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18023CE2C (-IsDFlipOnMPO@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     ?RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180268C7C (-RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180283220 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEmpty(_DWORD *a1)
{
  return a1[2] <= *a1 || a1[3] <= a1[1];
}
