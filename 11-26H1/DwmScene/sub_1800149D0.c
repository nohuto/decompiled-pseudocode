/*
 * XREFs of sub_1800149D0 @ 0x1800149D0
 * Callers:
 *     sub_180014A50 @ 0x180014A50 (sub_180014A50.c)
 *     sub_18004A638 @ 0x18004A638 (sub_18004A638.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800149D0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  __m128 v3; // xmm3
  __m128 v4; // xmm4
  __m128 v5; // xmm1
  unsigned __int64 *v6; // r8
  unsigned __int64 v7; // rdx
  __m128 v8; // xmm2
  __m128 v9; // xmm0
  __m128 v10; // xmm2
  __m128 v11; // xmm4
  __m128 v12; // xmm3

  v3 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
  v4 = v3;
  v5 = v3;
  if ( a2 > 1 )
  {
    v6 = (unsigned __int64 *)((char *)a3 + 12);
    v7 = a2 - 1;
    do
    {
      v8 = (__m128)*v6;
      v9 = (__m128)*((unsigned int *)v6 + 2);
      v6 = (unsigned __int64 *)((char *)v6 + 12);
      v10 = _mm_movelh_ps(v8, v9);
      v4 = _mm_min_ps(v4, v10);
      v3 = _mm_max_ps(v3, v10);
      --v7;
    }
    while ( v7 );
    v5 = v4;
  }
  v11 = _mm_mul_ps(_mm_add_ps(v4, v3), (__m128)xmmword_1801915F0);
  v12 = _mm_mul_ps(_mm_sub_ps(v3, v5), (__m128)xmmword_1801915F0);
  *(_QWORD *)a1 = v11.m128_u64[0];
  *(_DWORD *)(a1 + 8) = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
  *(_QWORD *)(a1 + 12) = v12.m128_u64[0];
  *(_DWORD *)(a1 + 20) = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
}
