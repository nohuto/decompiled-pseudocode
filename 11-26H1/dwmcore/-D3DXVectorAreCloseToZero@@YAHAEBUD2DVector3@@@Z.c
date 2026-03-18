/*
 * XREFs of ?D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z @ 0x18017A3B8
 * Callers:
 *     ?ReverseAndLeftShift@magic@@YA?AUD2DMatrix@@AEBU2@@Z @ 0x18017B574 (-ReverseAndLeftShift@magic@@YA-AUD2DMatrix@@AEBU2@@Z.c)
 *     ?CanAddThisColumnVectorToMatrix@magic@@YA_NPEAUD2DVector3@@IAEBU2@@Z @ 0x18017CD80 (-CanAddThisColumnVectorToMatrix@magic@@YA_NPEAUD2DVector3@@IAEBU2@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall D3DXVectorAreCloseToZero(const struct D2DVector3 *a1)
{
  __int32 v1; // xmm1_4

  COERCE_FLOAT(v1 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  return (COERCE_FLOAT(*(_DWORD *)a1 & v1) < 0.000099999997 && 0.000099999997 > 0.0
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - 0.0) & v1) <= 0.0049999999)
      && (COERCE_FLOAT(*((_DWORD *)a1 + 1) & v1) < 0.000099999997 && 0.000099999997 > 0.0
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 1) - 0.0) & v1) <= 0.0049999999)
      && (COERCE_FLOAT(*((_DWORD *)a1 + 2) & v1) < 0.000099999997 && 0.000099999997 > 0.0
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 2) - 0.0) & v1) <= 0.0049999999);
}
