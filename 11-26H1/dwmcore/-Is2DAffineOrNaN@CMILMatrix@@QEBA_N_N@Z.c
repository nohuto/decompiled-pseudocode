/*
 * XREFs of ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x180064CE0
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B858 (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x18003B6F0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800645B0 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180064790 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180064D98 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18007D080 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800F1BB0 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z @ 0x18025A258 (-IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::Is2DAffineOrNaN(CMILMatrix *this)
{
  char v1; // dl
  bool result; // al
  char v3; // r8
  __int32 v4; // xmm2_4

  v1 = *((_BYTE *)this + 65);
  if ( (v1 & 0x20) == 0 && 4 * (v1 & 0xF0) != 0 )
    return 0;
  if ( (v1 & 0x20) != 0 )
    return 1;
  COERCE_FLOAT(v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 7) & v4) * 61440.0)
                                    + (float)(COERCE_FLOAT(*((_DWORD *)this + 3) & v4) * 61440.0))
                            + COERCE_FLOAT(*((_DWORD *)this + 15) & v4))
                    - 1.0) & v4) < 0.000081380211 )
  {
    result = 1;
    v3 = -16;
  }
  else
  {
    result = 0;
    v3 = 16;
  }
  *((_BYTE *)this + 65) = v3 ^ (v3 ^ v1) & 0xCF;
  if ( !result )
    return 0;
  return result;
}
