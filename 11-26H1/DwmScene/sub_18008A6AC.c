/*
 * XREFs of sub_18008A6AC @ 0x18008A6AC
 * Callers:
 *     sub_18008B154 @ 0x18008B154 (sub_18008B154.c)
 * Callees:
 *     _o_sqrtf @ 0x18000CEA0 (_o_sqrtf.c)
 *     _o_tanf @ 0x18000CEAC (_o_tanf.c)
 *     sub_18005AE7C @ 0x18005AE7C (sub_18005AE7C.c)
 */

__m128 __fastcall sub_18008A6AC(__int64 a1, float a2)
{
  float v3; // xmm0_4
  float v4; // xmm7_4
  float v5; // xmm2_4
  __int128 v6; // xmm0
  float v7; // xmm7_4
  __int128 v8; // xmm6

  sub_18005AE7C(a1);
  v3 = (float)(*(float *)(a1 + 328) * 0.017453292) * 0.5;
  o_tanf();
  v4 = v3;
  v5 = v3 * v3;
  v6 = 0x3F800000u;
  v7 = v4 / (float)(1.0 / *(float *)(a1 + 332));
  *(float *)&v6 = (float)(1.0 / v5) + 1.0;
  o_sqrtf();
  v8 = v6;
  o_sqrtf();
  *(float *)&v8 = fmaxf(*(float *)&v6 * a2, (float)((float)(1.0 / (float)(v7 * v7)) + 1.0) * a2);
  return (__m128)v8;
}
