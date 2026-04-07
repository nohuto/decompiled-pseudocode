/*
 * XREFs of ?IsValidRealizationSize@@YA_NAEBUD2D_SIZE_F@@@Z @ 0x18009B658
 * Callers:
 *     ?InferViewportTransform@CSurfaceBrush@@IEAAJAEBUtagRECT@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180083834 (-InferViewportTransform@CSurfaceBrush@@IEAAJAEBUtagRECT@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetRealizationSize@CVisualBrush@@QEAAJAEBUD2D_SIZE_F@@@Z @ 0x18009B9F0 (-SetRealizationSize@CVisualBrush@@QEAAJAEBUD2D_SIZE_F@@@Z.c)
 *     ?SetViewbox@CVisualBrush@@QEAAJAEBUtagRECT@@@Z @ 0x18009BB20 (-SetViewbox@CVisualBrush@@QEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsValidRealizationSize(const struct D2D_SIZE_F *a1)
{
  __int32 v1; // xmm1_4

  COERCE_FLOAT(v1 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  return COERCE_FLOAT(LODWORD(a1->width) & v1) >= 0.0000011920929
      && COERCE_FLOAT(LODWORD(a1->height) & v1) >= 0.0000011920929;
}
