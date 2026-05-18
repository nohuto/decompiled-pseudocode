/*
 * XREFs of sub_180088358 @ 0x180088358
 * Callers:
 *     sub_180089A30 @ 0x180089A30 (sub_180089A30.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _o_floorf @ 0x18000CE4C (_o_floorf.c)
 *     sub_180088568 @ 0x180088568 (sub_180088568.c)
 */

__m128 *__fastcall sub_180088358(__int64 a1, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm1
  __int64 v4; // r14
  char *v5; // rbx
  __int64 v8; // rdi
  float v9; // xmm6_4
  int v10; // eax
  __m128 v11; // xmm5
  __m128 v12; // xmm1
  int v13; // edx
  __int64 v14; // rbx
  int v15; // r11d
  __m128 v16; // xmm2
  float v17; // xmm3_4
  int v18; // r11d
  float v19; // xmm4_4
  __m128 v21; // [rsp+20h] [rbp-60h] BYREF
  int v22; // [rsp+30h] [rbp-50h]
  float v23[3]; // [rsp+34h] [rbp-4Ch]
  __int64 v24; // [rsp+40h] [rbp-40h]
  int v25; // [rsp+48h] [rbp-38h]
  _DWORD v26[3]; // [rsp+50h] [rbp-30h] BYREF
  char v27; // [rsp+5Ch] [rbp-24h] BYREF

  v3 = *a3;
  v4 = *(int *)(a1 + 136);
  v5 = (char *)v26;
  v26[1] = 1;
  v24 = 0LL;
  v25 = 0;
  v22 = 0;
  *(_QWORD *)v23 = 0LL;
  v26[0] = 0;
  v26[2] = 2;
  *a3 = _mm_mul_ps(
          _mm_min_ps(_mm_max_ps(v3, (__m128)xmmword_1800FA320), (__m128)xmmword_1800FA310),
          _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)(int)v4), (__m128)COERCE_UNSIGNED_INT((float)(int)v4), 0));
  v3.m128_i32[0] = a3->m128_i32[1];
  v21.m128_i32[0] = a3->m128_i32[0];
  v21.m128_i32[2] = a3->m128_i32[2];
  v21.m128_i32[1] = v3.m128_i32[0];
  do
  {
    v8 = *(int *)v5;
    v9 = v21.m128_f32[v8];
    o_floorf();
    v10 = (int)v9;
    if ( (int)v9 >= 0 )
    {
      if ( v10 > (int)v4 - 2 )
        v10 = v4 - 2;
    }
    else
    {
      v10 = 0;
    }
    v5 += 4;
    *((_DWORD *)&v24 + v8) = v10;
    v23[v8 - 1] = v9 - (float)v10;
  }
  while ( v5 != &v27 );
  v11 = (__m128)0x3F800000u;
  v12 = (__m128)xmmword_1800FA848;
  v13 = v4 * HIDWORD(v24);
  *a2 = (__m128)xmmword_1800FA848;
  v14 = (int)v24 + v25 * (int)v4 * (int)v4 + v13;
  LOBYTE(v15) = 0;
  do
  {
    if ( (v15 & 2) != 0 )
    {
      v16 = (__m128)LODWORD(v23[0]);
    }
    else
    {
      v16 = v11;
      v16.m128_f32[0] = v11.m128_f32[0] - v23[0];
    }
    if ( (v15 & 4) != 0 )
      v17 = v23[1];
    else
      v17 = v11.m128_f32[0] - v23[1];
    sub_180088568(
      &v21,
      *(unsigned int *)(*(_QWORD *)(a1 + 112)
                      + 4
                      * ((v15 & 1)
                       + (((int)v4 * (int)v4) & (unsigned __int64)-(__int64)((v15 & 4) != 0))
                       + v14
                       + (v4 & -(__int64)((v15 & 2) != 0)))));
    v15 = v18 + 1;
    v16.m128_f32[0] = (float)(v16.m128_f32[0] * v19) * v17;
    v12 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v21), v12);
    *a2 = v12;
  }
  while ( v15 < 8 );
  return a2;
}
