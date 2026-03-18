/*
 * XREFs of ?Is2DAffine@Matrix3x3@@QEBA_NXZ @ 0x1801442EC
 * Callers:
 *     ?IsCompatibleTransform@CRectangleMapStrategy@CEdgeFlagsMap@@SA_NPEBVMatrix3x3@@@Z @ 0x180143BC0 (-IsCompatibleTransform@CRectangleMapStrategy@CEdgeFlagsMap@@SA_NPEBVMatrix3x3@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Matrix3x3::Is2DAffine(Matrix3x3 *this)
{
  __int32 v1; // xmm1_4

  COERCE_FLOAT(v1 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  return COERCE_FLOAT(*((_DWORD *)this + 2) & v1) < 0.0000011920929
      && COERCE_FLOAT(*((_DWORD *)this + 5) & v1) < 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 1.0) & v1) < 0.0000011920929;
}
