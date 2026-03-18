/*
 * XREFs of ?IsCoplanar@CVisualDepthGeometry@@AEBA_NAEBV1@@Z @ 0x1800D0EA8
 * Callers:
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1800D0530 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisualDepthGeometry::IsCoplanar(CVisualDepthGeometry *this, const struct CVisualDepthGeometry *a2)
{
  __int32 v2; // xmm1_4

  COERCE_FLOAT(v2 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 40) - *((float *)a2 + 40)) & v2) <= 0.000039999999
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 41) - *((float *)a2 + 41)) & v2) <= 0.000039999999
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 42) - *((float *)a2 + 42)) & v2) <= 0.000039999999
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 43) - *((float *)a2 + 43)) & v2) <= 0.000039999999;
}
