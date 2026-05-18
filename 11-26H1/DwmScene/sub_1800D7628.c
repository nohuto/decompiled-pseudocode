/*
 * XREFs of sub_1800D7628 @ 0x1800D7628
 * Callers:
 *     sub_1800D6984 @ 0x1800D6984 (sub_1800D6984.c)
 *     sub_1800D6DF0 @ 0x1800D6DF0 (sub_1800D6DF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D7628(__m128 *a1, unsigned int a2, __int64 a3, unsigned __int64 *a4, __int64 a5, char a6)
{
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // r11
  __m128 v9; // xmm7
  __m128 v10; // xmm5
  __int64 result; // rax
  __m128 v12; // xmm6
  __m128 v13; // xmm2
  __m128 v14; // xmm3
  __m128 v15; // xmm6
  __m128 v16; // xmm1
  __m128 v17; // xmm1
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  __m128 v20; // xmm5
  __m128 v21; // xmm3
  __m128 v22; // xmm3
  __m128 v23; // xmm0
  __m128 v24; // xmm2
  __m128 v25; // xmm1
  __m128 v26; // xmm1
  __m128 v27; // xmm2
  __m128 v28; // xmm2
  __m128 v29; // xmm1
  __m128 v30; // xmm2
  __m128 v31; // xmm6
  __m128 v32; // xmm3
  __m128 v33; // xmm1
  float v34; // xmm0_4
  unsigned int v35; // [rsp+50h] [rbp-9h]

  if ( a2 )
  {
    v6 = a3 - (_QWORD)a4;
    v7 = a5 - (_QWORD)a4;
    v8 = a2;
    do
    {
      v9 = (__m128)*(unsigned __int64 *)((char *)a4 + v7);
      v10 = _mm_movelh_ps(
              (__m128)*(unsigned __int64 *)((char *)a4 + v6),
              (__m128)*(unsigned int *)((char *)a4 + v6 + 8));
      result = *(unsigned int *)((char *)a4 + v7 + 8);
      v12 = _mm_movelh_ps((__m128)*a4, (__m128)*((unsigned int *)a4 + 2));
      v13 = _mm_mul_ps(v12, v10);
      v14 = v12;
      v35 = *(_DWORD *)((char *)a4 + v7 + 8);
      v15 = _mm_shuffle_ps(v12, v12, 210);
      v16 = _mm_shuffle_ps(v13, v13, 153);
      v13.m128_f32[0] = (float)(v13.m128_f32[0] + v16.m128_f32[0]) + _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
      v17 = _mm_shuffle_ps(v13, v13, 0);
      v18 = 0LL;
      v19 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v10);
      v20 = _mm_shuffle_ps(v10, v10, 201);
      v18.m128_u64[0] = v19.m128_u64[0];
      v21 = _mm_sub_ps(v14, _mm_movelh_ps(v18, (__m128)_mm_shuffle_ps(v19, v19, 170).m128_u32[0]));
      a1->m128_i32[1] = v21.m128_i32[1];
      a1->m128_i32[0] = v21.m128_i32[0];
      a1->m128_i32[2] = _mm_shuffle_ps(v21, v21, 170).m128_u32[0];
      v22 = 0LL;
      v23 = _mm_mul_ps(*a1, *a1);
      v24 = _mm_shuffle_ps(v23, v23, 238);
      v25 = _mm_add_ps(v24, v23);
      v26 = _mm_shuffle_ps(v25, v25, 64);
      v27 = _mm_add_ps(_mm_shuffle_ps(v24, v26, 240), v26);
      v28 = _mm_shuffle_ps(v27, v27, 170);
      v29 = _mm_sqrt_ps(v28);
      v30 = _mm_cmpneq_ps(v28, (__m128)xmmword_1800FA100);
      *a1 = _mm_or_ps(
              _mm_and_ps(_mm_and_ps(_mm_div_ps(*a1, v29), _mm_cmpneq_ps((__m128)0LL, v29)), v30),
              _mm_andnot_ps(v30, (__m128)xmmword_1800FA150));
      v31 = _mm_and_ps(
              _mm_sub_ps(_mm_mul_ps(v15, v20), _mm_mul_ps(_mm_shuffle_ps(v15, v15, 210), _mm_shuffle_ps(v20, v20, 201))),
              (__m128)xmmword_1800FA2A0);
      v22.m128_u64[0] = v31.m128_u64[0];
      v32 = _mm_mul_ps(
              _mm_movelh_ps(v22, (__m128)_mm_shuffle_ps(v31, v31, 170).m128_u32[0]),
              _mm_movelh_ps(v9, (__m128)v35));
      v33 = _mm_shuffle_ps(v32, v32, 153);
      if ( (float)((float)(v32.m128_f32[0] + v33.m128_f32[0]) + _mm_shuffle_ps(v33, v33, 85).m128_f32[0]) >= 0.0 )
        v34 = 1.0;
      else
        v34 = -1.0;
      if ( a6 )
        v34 = -v34;
      a1->m128_f32[3] = v34;
      a4 = (unsigned __int64 *)((char *)a4 + 12);
      ++a1;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
