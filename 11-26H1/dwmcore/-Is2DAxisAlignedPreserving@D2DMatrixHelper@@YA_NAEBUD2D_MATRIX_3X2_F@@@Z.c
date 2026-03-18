/*
 * XREFs of ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180143060
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B6BA0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B7170 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180141F30 (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 *     ?IsCompatibleTransform@CRectangleMapStrategy@CEdgeFlagsMap@@SA_NPEBVMatrix3x3@@@Z @ 0x180143BC0 (-IsCompatibleTransform@CRectangleMapStrategy@CEdgeFlagsMap@@SA_NPEBVMatrix3x3@@@Z.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801583F0 (-GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ @ 0x18021CDCC (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180282ED0 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180283220 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x180284020 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall D2DMatrixHelper::Is2DAxisAlignedPreserving(D2DMatrixHelper *this, const struct D2D_MATRIX_3X2_F *a2)
{
  __int32 v2; // xmm1_4

  COERCE_FLOAT(v2 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  return COERCE_FLOAT(*((_DWORD *)this + 1) & v2) < 0.000081380211
      && COERCE_FLOAT(*((_DWORD *)this + 2) & v2) < 0.000081380211
      || COERCE_FLOAT(*(_DWORD *)this & v2) < 0.000081380211
      && COERCE_FLOAT(*((_DWORD *)this + 3) & v2) < 0.000081380211;
}
