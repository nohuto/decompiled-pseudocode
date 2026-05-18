/*
 * XREFs of sub_18001BF48 @ 0x18001BF48
 * Callers:
 *     sub_180013A30 @ 0x180013A30 (sub_180013A30.c)
 * Callees:
 *     sub_18009B264 @ 0x18009B264 (sub_18009B264.c)
 *     sub_18009B4A0 @ 0x18009B4A0 (sub_18009B4A0.c)
 */

__int64 __fastcall sub_18001BF48(__int64 a1, __int64 a2, float a3)
{
  float *v3; // r8
  __int64 result; // rax
  __m128 *v5; // r9
  __m128 v6; // [rsp+20h] [rbp-E0h]
  __m128 v7[10]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v8[48]; // [rsp+D0h] [rbp-30h] BYREF
  __m128 v9; // [rsp+100h] [rbp+0h]
  __m128 v10; // [rsp+110h] [rbp+10h]
  __m128 v11; // [rsp+120h] [rbp+20h]

  sub_18009B4A0(v8, a2, a2, a1);
  v6.m128_i32[3] = 1065353216;
  v6.m128_f32[0] = a3 * *v3;
  v6.m128_f32[1] = a3 * v3[1];
  v6.m128_f32[2] = a3 * v3[2];
  v9 = _mm_add_ps(v9, v6);
  v10 = _mm_add_ps(v10, v6);
  v11 = _mm_add_ps(v11, v6);
  result = sub_18009B264(v7, v8);
  v5[3] = _mm_add_ps(v5[3], v7[0]);
  v5[4] = _mm_add_ps(v5[4], v7[1]);
  v5[5] = _mm_add_ps(v5[5], v7[2]);
  v5[6] = _mm_add_ps(v5[6], v7[3]);
  v5[7] = _mm_add_ps(v5[7], v7[4]);
  v5[8] = _mm_add_ps(v5[8], v7[5]);
  v5[9] = _mm_add_ps(v5[9], v7[6]);
  v5[10] = _mm_add_ps(v5[10], v7[7]);
  v5[11] = _mm_add_ps(v5[11], v7[8]);
  return result;
}
