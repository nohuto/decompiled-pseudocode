/*
 * XREFs of ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0
 * Callers:
 *     ?FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z @ 0x180013F94 (-FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029120 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180040BC0 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18005B860 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006CFD0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z @ 0x18007B1C0 (-AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18008BAF0 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVCPreComputeSubTreeContext@@PEAVCMILMatrix@@@Z @ 0x1800CB9B0 (-ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVCPreComputeSubTr.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x1800CC140 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800CCA58 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800CCC30 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CD210 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800CDBA0 (-GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CDE50 (-GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800CE6C0 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x1800DD030 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800F18E0 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800F1BB0 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180172B60 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Transform2DRectToPerspective(
        CMILMatrix *this,
        const struct D2D_RECT_F *a2,
        struct D2D_POINT_2F *const a3)
{
  float v4; // xmm2_4
  float v5; // xmm4_4
  float top; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm6_4
  float bottom; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float right; // xmm2_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  char v15; // dl
  __int32 v16; // xmm3_4
  char v17; // dl
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm1_4
  float v21; // xmm7_4
  float v22; // xmm6_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm8_4
  float v26; // xmm6_4
  float v27; // xmm9_4
  float v28; // xmm7_4
  FLOAT v29; // xmm1_4
  FLOAT v30; // xmm1_4
  FLOAT v31; // xmm1_4
  FLOAT v32; // xmm1_4

  v4 = a2->left * *(float *)this;
  v5 = a2->left * *((float *)this + 1);
  top = a2->top;
  v7 = top * *((float *)this + 5);
  v8 = top * *((float *)this + 4);
  a3->x = (float)(v8 + v4) + *((float *)this + 12);
  a3->y = (float)(v7 + v5) + *((float *)this + 13);
  bottom = a2->bottom;
  v10 = bottom * *((float *)this + 5);
  v11 = bottom * *((float *)this + 4);
  a3[1].x = (float)(v11 + v4) + *((float *)this + 12);
  a3[1].y = (float)(v10 + v5) + *((float *)this + 13);
  right = a2->right;
  v13 = right * *((float *)this + 1);
  v14 = right * *(float *)this;
  a3[2].x = (float)(v14 + v11) + *((float *)this + 12);
  a3[2].y = (float)(v13 + v10) + *((float *)this + 13);
  a3[3].x = (float)(v14 + v8) + *((float *)this + 12);
  a3[3].y = (float)(v13 + v7) + *((float *)this + 13);
  v15 = *((_BYTE *)this + 65);
  if ( (char)(4 * v15) >> 6 == 1 )
  {
    v16 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    v18 = FLOAT_1_0;
    v19 = *(float *)&FLOAT_0_000081380211;
  }
  else
  {
    if ( (char)(4 * v15) >> 6 < 0 )
      return;
    COERCE_FLOAT(v16 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    v17 = v15 & 0xCF;
    v18 = FLOAT_1_0;
    v19 = *(float *)&FLOAT_0_000081380211;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 7) & v16) * 61440.0)
                                      + (float)(COERCE_FLOAT(*((_DWORD *)this + 3) & v16) * 61440.0))
                              + COERCE_FLOAT(*((_DWORD *)this + 15) & v16))
                      - 1.0) & v16) < 0.000081380211 )
    {
      *((_BYTE *)this + 65) = v17 ^ 0x30;
      return;
    }
    *((_BYTE *)this + 65) = v17 ^ 0x10;
  }
  v20 = *((float *)this + 15);
  v21 = *((float *)this + 7) * a2->top;
  v22 = *((float *)this + 7) * a2->bottom;
  v23 = *((float *)this + 3) * a2->left;
  v24 = *((float *)this + 3) * a2->right;
  v25 = (float)(v22 + v23) + v20;
  v26 = (float)(v22 + v24) + v20;
  v27 = (float)(v21 + v23) + v20;
  v28 = (float)(v21 + v24) + v20;
  if ( v19 > v27 || v19 > v25 || v19 > v26 || v19 > v28 )
  {
    if ( v27 >= -0.000081380211 || v25 >= -0.000081380211 || v26 >= -0.000081380211 || v28 >= -0.000081380211 )
    {
      a3->x = -3.4028235e38;
      a3->y = -3.4028235e38;
      a3[1].x = -3.4028235e38;
      a3[1].y = 3.4028235e38;
      a3[2].x = 3.4028235e38;
      a3[2].y = 3.4028235e38;
      a3[3].x = 3.4028235e38;
      a3[3].y = -3.4028235e38;
    }
    else
    {
      *a3 = 0LL;
      a3[1] = 0LL;
      a3[2] = 0LL;
      a3[3] = 0LL;
    }
  }
  else
  {
    if ( v19 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v27 - v18) & v16) )
    {
      v29 = a3->y / v27;
      a3->x = a3->x / v27;
      a3->y = v29;
    }
    if ( v19 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v25 - v18) & v16) )
    {
      v30 = a3[1].y / v25;
      a3[1].x = a3[1].x / v25;
      a3[1].y = v30;
    }
    if ( v19 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v26 - v18) & v16) )
    {
      v31 = a3[2].y / v26;
      a3[2].x = a3[2].x / v26;
      a3[2].y = v31;
    }
    if ( v19 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v28 - v18) & v16) )
    {
      v32 = a3[3].y / v28;
      a3[3].x = a3[3].x / v28;
      a3[3].y = v32;
    }
  }
}
