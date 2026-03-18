/*
 * XREFs of ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005FB60
 * Callers:
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x180014B18 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18001661C (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@AEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x18005E0D0 (-GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@AEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingCont.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18005E3F0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x18005EDC0 (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005F8A0 (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?CalcRotationTransform@CBitmapRealization@@IEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x18005FC80 (-CalcRotationTransform@CBitmapRealization@@IEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800602F0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180128124 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180159B74 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z @ 0x18015DE78 (-EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z.c)
 *     ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z @ 0x18015F188 (-GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z.c)
 *     ?CalcDeviceTransformDelta@CResampleLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801BEF10 (-CalcDeviceTransformDelta@CResampleLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?UpdateSize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@@Z @ 0x1802041E8 (-UpdateSize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@@Z.c)
 *     ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x1802B0050 (-GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Scale(CMILMatrix *this, float a2, float a3, float a4)
{
  __int32 v4; // xmm6_4

  COERCE_FLOAT(v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2 - 1.0) & v4) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(a3 - 1.0) & v4) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & v4) >= 0.000081380211 )
  {
    *(float *)this = a2 * *(float *)this;
    *((float *)this + 4) = a2 * *((float *)this + 4);
    *((float *)this + 8) = a2 * *((float *)this + 8);
    *((float *)this + 12) = a2 * *((float *)this + 12);
    *((float *)this + 1) = a3 * *((float *)this + 1);
    *((float *)this + 5) = a3 * *((float *)this + 5);
    *((float *)this + 9) = a3 * *((float *)this + 9);
    *((float *)this + 13) = a3 * *((float *)this + 13);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & v4) >= 0.000081380211 )
    {
      *((float *)this + 2) = a4 * *((float *)this + 2);
      *((float *)this + 6) = a4 * *((float *)this + 6);
      *((float *)this + 10) = a4 * *((float *)this + 10);
      *((float *)this + 14) = a4 * *((float *)this + 14);
    }
    *((_BYTE *)this + 64) &= 0xCCu;
  }
}
