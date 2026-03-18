/*
 * XREFs of ?IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x18027DEF0
 * Callers:
 *     ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x18009D190 (-ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsCloseColorF(const struct _D3DCOLORVALUE *a1, const struct _D3DCOLORVALUE *a2)
{
  __int32 v2; // xmm1_4

  COERCE_FLOAT(v2 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->a - a2->a) & v2) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->r - a2->r) & v2) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->g - a2->g) & v2) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->b - a2->b) & v2) <= 0.0000011920929;
}
