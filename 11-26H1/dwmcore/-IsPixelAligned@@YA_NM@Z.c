/*
 * XREFs of ?IsPixelAligned@@YA_NM@Z @ 0x1800AF700
 * Callers:
 *     ?IsPixelAligned@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800AF6A4 (-IsPixelAligned@@YA_NAEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
bool __fastcall IsPixelAligned(double a1, __int64 a2, double a3)
{
  int v3; // ecx
  __m128 v5; // rt1
  float v6; // [rsp+8h] [rbp+8h]

  if ( (_mm_cvtsi128_si32(*(__m128i *)&a1) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)&a1 - *(float *)&a1;
    v5.m128_f32[0] = FLOAT_N0_5;
    v3 = (int)*(float *)&a1 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, v5));
  }
  else
  {
    v6 = *(float *)&a1 + 6291456.25;
    v3 = (int)(LODWORD(v6) << 10) >> 11;
  }
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&a1 - (float)v3) & _xmm) <= 0.00390625;
}
