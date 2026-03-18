/*
 * XREFs of ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18002D120 (--1CDrawingContext@@MEAA@XZ.c)
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800363C0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLAN.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180057560 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057844 (-NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?ComputeOcclusion@CMegaRectCollection@@QEAAXXZ @ 0x180072F90 (-ComputeOcclusion@CMegaRectCollection@@QEAAXXZ.c)
 *     ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180074510 (-AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800747C4 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180074A80 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?AddValidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x180076F80 (-AddValidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z.c)
 *     ?OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180077240 (-OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x18009DB08 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ??1CEmptyRegionDrawListBrush@@UEAA@XZ @ 0x18009E424 (--1CEmptyRegionDrawListBrush@@UEAA@XZ.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x1800AB36C (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x1800ACD54 (--1CVisualTree@@UEAA@XZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E4068 (-AddValidRect@CSecondaryBitmap@@QEAAXAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800E9CB0 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1800E9F90 (-TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?AddInvalidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x1800EA550 (-AddInvalidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800EAB10 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800EB500 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800ED0CC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800ED6B8 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x1800ED904 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800EDF9C (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE760 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18010359C (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x180105264 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180129AD8 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x18012B148 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18012DBA4 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18012DEDC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x18012EF44 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCMergedRect@@@Z @ 0x18012F240 (-GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRec.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x18012F7D8 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18012F9DC (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ??1COverlaySwapChain@@MEAA@XZ @ 0x1801347F4 (--1COverlaySwapChain@@MEAA@XZ.c)
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x180140CFC (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x180144D20 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180166D90 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180169C10 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801725B0 (-DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV-$TMilRect_@MUD2D_RECT_F@@.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEBUCSM_RGNDATA_@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x18018634C (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEBUCSM_RGNDATA_@@PEBUScrollOp.c)
 *     ??R?$default_delete@VCRegion@@@std@@QEBAXPEAVCRegion@@@Z @ 0x1801B31E4 (--R-$default_delete@VCRegion@@@std@@QEBAXPEAVCRegion@@@Z.c)
 *     ?NotifyRenderedRect@CDDASwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801BB580 (-NotifyRenderedRect@CDDASwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZ.c)
 *     ??1CSecondaryD2DBitmap@@UEAA@XZ @ 0x1801BCB3C (--1CSecondaryD2DBitmap@@UEAA@XZ.c)
 *     ?SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1801CC11C (-SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV-$span@$$CBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@U.c)
 *     ??1CSecondarySysmemBitmap@@MEAA@XZ @ 0x1801D148C (--1CSecondarySysmemBitmap@@MEAA@XZ.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1801D1EA4 (--_GCRegion@@QEAAPEAXI@Z.c)
 *     ?AddTransientRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x1801D5CC0 (-AddTransientRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x1801E62F8 (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x180201808 (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180202EAC (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ??1CDDASwapChain@@MEAA@XZ @ 0x18020DD88 (--1CDDASwapChain@@MEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18020E8A8 (--1COcclusionContext@@QEAA@XZ.c)
 *     ?AddToTightDirtyRegion@@YAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAVCRegion@@@Z @ 0x1802373D4 (-AddToTightDirtyRegion@@YAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotN.c)
 *     ?CalcDesktopClip@COverlayContext@@IEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802394AC (-CalcDesktopClip@COverlayContext@@IEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gs.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x180253558 (-AddRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?CalcVisibleArea@CArrayBasedCoverageSet@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180258E80 (-CalcVisibleArea@CArrayBasedCoverageSet@@QEBA_KAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ??1CComputeScribbleFramebuffer@@UEAA@XZ @ 0x18025D610 (--1CComputeScribbleFramebuffer@@UEAA@XZ.c)
 *     ??1CSwapChainBuffer@@UEAA@XZ @ 0x18029CD00 (--1CSwapChainBuffer@@UEAA@XZ.c)
 *     ??1CCompSwapChain@@MEAA@XZ @ 0x1802A3354 (--1CCompSwapChain@@MEAA@XZ.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x1802A3460 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 *     ?NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802A3B70 (-NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSI.c)
 *     ??1CConversionSwapChain@@UEAA@XZ @ 0x1802A70F0 (--1CConversionSwapChain@@UEAA@XZ.c)
 *     ?NotifyRenderedRect@CConversionSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802A7960 (-NotifyRenderedRect@CConversionSwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POIN.c)
 *     ??1CLegacyRemotingSwapChain@@MEAA@XZ @ 0x1802A7DA8 (--1CLegacyRemotingSwapChain@@MEAA@XZ.c)
 *     ?NotifyRenderedRect@CLegacyRemotingSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802A8A50 (-NotifyRenderedRect@CLegacyRemotingSwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_.c)
 *     ?RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802A8CF0 (-RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_PO.c)
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802AAD50 (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802AC16C (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ??1CCachedTexture@@MEAA@XZ @ 0x1802B14DC (--1CCachedTexture@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::CRegion::FreeMemory(FastRegion::CRegion **this)
{
  FastRegion::CRegion *v1; // rsi
  FastRegion::CRegion *v2; // rbx
  HANDLE ProcessHeap; // rax

  v1 = *this;
  v2 = (FastRegion::CRegion *)(this + 1);
  if ( this + 1 != (FastRegion::CRegion **)*this )
  {
    if ( v1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v1);
    }
    *this = v2;
    *(_DWORD *)v2 = 0;
  }
}
