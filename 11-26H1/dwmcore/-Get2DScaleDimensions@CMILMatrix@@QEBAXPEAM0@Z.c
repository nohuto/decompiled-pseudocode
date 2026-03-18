/*
 * XREFs of ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180016450
 * Callers:
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x180014B18 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18001661C (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@_N@Z @ 0x18015E0DC (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 *     ?UpdateCapabilities@CRenderTargetManager@@AEAAXXZ @ 0x180175074 (-UpdateCapabilities@CRenderTargetManager@@AEAAXXZ.c)
 *     ?UpdateSize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@@Z @ 0x1802041E8 (-UpdateSize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@@Z.c)
 *     ?GetContentBoundsAndTransform@CDxHandleBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0PEAVCMILMatrix@@@Z @ 0x180204A10 (-GetContentBoundsAndTransform@CDxHandleBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z @ 0x18025A258 (-IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z.c)
 *     ?CalcSwapChainBufferSize@CMonitorTransform@@QEAA?AUD2D_SIZE_U@@AEBU2@PEBVCD3DDevice@@AEBVOverlayCaps@@@Z @ 0x18028D8BC (-CalcSwapChainBufferSize@CMonitorTransform@@QEAA-AUD2D_SIZE_U@@AEBU2@PEBVCD3DDevice@@AEBVOverlay.c)
 *     ?GetContentBoundsAndTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0PEAVCMILMatrix@@@Z @ 0x1802AEF50 (-GetContentBoundsAndTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@.c)
 * Callees:
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

void __fastcall CMILMatrix::Get2DScaleDimensions(CMILMatrix *this, float *a2, float *a3)
{
  float v6; // xmm1_4
  float v7; // xmm6_4
  float v8; // xmm0_4
  float v9; // xmm0_4

  v6 = (float)(*((float *)this + 1) * *((float *)this + 1)) + (float)(*(float *)this * *(float *)this);
  if ( v6 < 0.0 )
    v7 = sqrtf_0(v6);
  else
    v7 = fsqrt(v6);
  v8 = (float)(*((float *)this + 5) * *((float *)this + 5)) + (float)(*((float *)this + 4) * *((float *)this + 4));
  if ( v8 < 0.0 )
    v9 = sqrtf_0(v8);
  else
    v9 = fsqrt(v8);
  *a2 = v7;
  *a3 = v9;
}
