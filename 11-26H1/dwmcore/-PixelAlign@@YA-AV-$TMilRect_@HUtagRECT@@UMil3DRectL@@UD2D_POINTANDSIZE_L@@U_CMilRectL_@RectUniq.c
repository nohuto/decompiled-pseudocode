/*
 * XREFs of ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90
 * Callers:
 *     ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057844 (-NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18008BAF0 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 *     ?SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009647C (-SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AD448 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800ED0CC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800ED6B8 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x180140CFC (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801594E8 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180169C10 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801725B0 (-DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV-$TMilRect_@MUD2D_RECT_F@@.c)
 *     std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_tagRECT______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______CDrawingContext::AddTransientInkDirtyRegion_::_2_::_lambda_1___ @ 0x180172A74 (std--transform_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_tagRECT______std--back_.c)
 *     ?AddOcclusionRegion@CLegacyRenderTarget@@UEBA_NPEAVCRegion@@@Z @ 0x180181630 (-AddOcclusionRegion@CLegacyRenderTarget@@UEBA_NPEAVCRegion@@@Z.c)
 *     ?GetSize@CCachedVisualImage@@UEBA?AUD2D_SIZE_U@@XZ @ 0x18018A8D0 (-GetSize@CCachedVisualImage@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?AddOcclusionRegion@CDDisplayRenderTarget@@UEBA_NPEAVCRegion@@@Z @ 0x180191DA0 (-AddOcclusionRegion@CDDisplayRenderTarget@@UEBA_NPEAVCRegion@@@Z.c)
 *     ?CalcContentOnTopRect@COcclusionContext@@AEBA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18019D2FC (-CalcContentOnTopRect@COcclusionContext@@AEBA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTAN.c)
 *     ?CalcInvertedContentOnTop@COverlayContext@@QEAA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AA140 (-CalcInvertedContentOnTop@COverlayContext@@QEAA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINT.c)
 *     ?AddTightDirtyRect@?$CTargetDirtyBase@$07@@MEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B23D0 (-AddTightDirtyRect@-$CTargetDirtyBase@$07@@MEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x1801BAB64 (-UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?AddTightDeviceDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E4808 (-AddTightDeviceDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ?PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801E610C (-PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV-$TMilRect_@HUtagRECT@@UMil3DRec.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x1801E62F8 (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x180201808 (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJ_NAEBVCShapePtr@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x1802020AC (-GetEffectiveBounds@CWindowNode@@AEBAJ_NAEBVCShapePtr@@PEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@U.c)
 *     ?AddToTightDirtyRegion@@YAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAVCRegion@@@Z @ 0x1802373D4 (-AddToTightDirtyRegion@@YAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotN.c)
 *     ?CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N2@Z @ 0x18023973C (-CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N2@Z.c)
 *     ?AddTightDirtyRect@CMonitorDirty@@MEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180253600 (-AddTightDirtyRect@CMonitorDirty@@MEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180255294 (-NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 *     ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180255D1C (-NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@AEBVCMILMatrix@@AEBV-$TMilRect_.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180255E28 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcVisibleArea@CArrayBasedCoverageSet@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180258E80 (-CalcVisibleArea@CArrayBasedCoverageSet@@QEBA_KAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?RenderFlipExBorders@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2AEBVCMILMatrix@@AEBVCShapePtr@@@Z @ 0x1802687D8 (-RenderFlipExBorders@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBV-$TMi.c)
 *     ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x1802B0050 (-GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 * Callees:
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18008AEF0 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x18008AF40 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
int *__fastcall PixelAlign(int *a1, unsigned int *a2, double a3)
{
  __m128i v3; // xmm4
  int v6; // ecx
  __m128 si128; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm2
  int v10; // eax
  __m128i v11; // xmm4
  int v12; // ecx
  __m128 v13; // xmm2
  __m128 v14; // xmm2
  int v15; // eax
  __m128i v16; // xmm4
  int v17; // ecx
  __m128 v18; // xmm2
  __m128 v19; // xmm2
  int v20; // eax
  __m128i v21; // xmm4
  int v22; // ecx
  __m128 v24; // rt1
  float v25; // [rsp+50h] [rbp+8h]
  float v26; // [rsp+50h] [rbp+8h]
  float v27; // [rsp+50h] [rbp+8h]
  float v28; // [rsp+50h] [rbp+8h]

  v3 = (__m128i)*a2;
  if ( (_mm_cvtsi128_si32(v3) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)v3.m128i_i32 - *(float *)v3.m128i_i32;
    v6 = (int)*(float *)v3.m128i_i32
       - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    v25 = *(float *)v3.m128i_i32 + 6291456.25;
    v6 = (int)(LODWORD(v25) << 10) >> 11;
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
  v8 = (__m128)*a2;
  v8.m128_f32[0] = *(float *)v3.m128i_i32 - (float)v6;
  v9 = _mm_and_ps(v8, si128);
  if ( v9.m128_f32[0] > 0.00390625 )
  {
    v10 = CFloatFPU::FloorSat(*(float *)v3.m128i_i32);
    si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
    v6 = v10;
  }
  v11 = (__m128i)a2[1];
  *a1 = v6;
  if ( (_mm_cvtsi128_si32(v11) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v9.m128_f32[0] = (float)(int)*(float *)v11.m128i_i32 - *(float *)v11.m128i_i32;
    v12 = (int)*(float *)v11.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v9, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    v26 = *(float *)v11.m128i_i32 + 6291456.25;
    v12 = (int)(LODWORD(v26) << 10) >> 11;
  }
  v13 = (__m128)v11;
  v13.m128_f32[0] = *(float *)v11.m128i_i32 - (float)v12;
  v14 = _mm_and_ps(v13, si128);
  if ( v14.m128_f32[0] > 0.00390625 )
  {
    v15 = CFloatFPU::FloorSat(*(float *)v11.m128i_i32);
    si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
    v12 = v15;
  }
  v16 = (__m128i)a2[2];
  a1[1] = v12;
  if ( (_mm_cvtsi128_si32(v16) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v14.m128_f32[0] = (float)(int)*(float *)v16.m128i_i32 - *(float *)v16.m128i_i32;
    v17 = (int)*(float *)v16.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v14, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    v27 = *(float *)v16.m128i_i32 + 6291456.25;
    v17 = (int)(LODWORD(v27) << 10) >> 11;
  }
  v18 = (__m128)v16;
  v18.m128_f32[0] = *(float *)v16.m128i_i32 - (float)v17;
  v19 = _mm_and_ps(v18, si128);
  if ( v19.m128_f32[0] > 0.00390625 )
  {
    v20 = CFloatFPU::CeilingSat(*(float *)v16.m128i_i32);
    si128.m128_i32[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    v17 = v20;
  }
  v21 = (__m128i)a2[3];
  a1[2] = v17;
  if ( (_mm_cvtsi128_si32(v21) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v19.m128_f32[0] = (float)(int)*(float *)v21.m128i_i32 - *(float *)v21.m128i_i32;
    v24.m128_f32[0] = FLOAT_N0_5;
    v22 = (int)*(float *)v21.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v19, v24));
  }
  else
  {
    v28 = *(float *)v21.m128i_i32 + 6291456.25;
    v22 = (int)(LODWORD(v28) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v21.m128i_i32 - (float)v22) & si128.m128_i32[0]) <= 0.00390625 )
    a1[3] = v22;
  else
    a1[3] = CFloatFPU::CeilingSat(*(float *)v21.m128i_i32);
  return a1;
}
