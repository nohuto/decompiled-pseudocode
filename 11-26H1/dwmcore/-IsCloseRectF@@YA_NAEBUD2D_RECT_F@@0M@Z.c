/*
 * XREFs of ?IsCloseRectF@@YA_NAEBUD2D_RECT_F@@0M@Z @ 0x1801BC66C
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801FDB90 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?RenderFlipExBorders@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2AEBVCMILMatrix@@AEBVCShapePtr@@@Z @ 0x1802687D8 (-RenderFlipExBorders@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBV-$TMi.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180283220 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsCloseRectF(const struct D2D_RECT_F *a1, const struct D2D_RECT_F *a2, float a3)
{
  __int32 v3; // xmm1_4

  COERCE_FLOAT(v3 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  return a3 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->top - a2->top) & v3)
      && a3 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->left - a2->left) & v3)
      && a3 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->right - a2->right) & v3)
      && a3 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->bottom - a2->bottom) & v3);
}
