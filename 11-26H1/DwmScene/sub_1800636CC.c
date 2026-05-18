/*
 * XREFs of sub_1800636CC @ 0x1800636CC
 * Callers:
 *     sub_1800648C4 @ 0x1800648C4 (sub_1800648C4.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 * Callees:
 *     _o_fmodf @ 0x18000CE58 (_o_fmodf.c)
 *     sub_18001205C @ 0x18001205C (sub_18001205C.c)
 *     sub_18001C5B0 @ 0x18001C5B0 (sub_18001C5B0.c)
 *     sub_1800616CC @ 0x1800616CC (sub_1800616CC.c)
 */

__m128 *__fastcall sub_1800636CC(__m128 *a1, float a2, float a3, float a4, float a5)
{
  float v6; // xmm11_4
  float v7; // xmm6_4
  float v8; // xmm9_4
  float v9; // xmm12_4
  float v10; // xmm0_4
  float v11; // xmm6_4
  __m128 *result; // rax

  v6 = sub_18001205C(a2, 0.0, 360.0);
  v7 = sub_18001205C(a3, -100.0, 100.0);
  v8 = sub_18001205C(a4, -100.0, 100.0);
  v9 = sub_1800616CC(v7) * 0.5;
  v10 = sub_18001205C(a5, -100.0, 100.0);
  v11 = sub_1800616CC(v10);
  if ( v9 < 0.0 )
  {
    v6 = v6 + 180.0;
    v9 = v9 * -1.0;
    o_fmodf();
  }
  sub_18001C5B0((__int64)a1, v6, v9, (float)(v11 * 0.25) + 50.0);
  result = a1;
  *a1 = _mm_mul_ps((__m128)_mm_load_si128((const __m128i *)&xmmword_180191710), *a1);
  a1->m128_f32[3] = (float)(v8 * 0.0099999998) + 1.0;
  return result;
}
