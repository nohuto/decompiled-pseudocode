/*
 * XREFs of sub_18003D1E8 @ 0x18003D1E8
 * Callers:
 *     sub_18003B950 @ 0x18003B950 (sub_18003B950.c)
 *     sub_18003CF74 @ 0x18003CF74 (sub_18003CF74.c)
 *     sub_18003D2F4 @ 0x18003D2F4 (sub_18003D2F4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18003D1E8(__int64 a1, unsigned __int64 *a2, __m128 *a3)
{
  __int64 result; // rax
  __m128 v4; // xmm3
  __m128 v5; // xmm4
  __m128 v6; // xmm2
  __m128 v7; // xmm0
  __m128 v8; // xmm4
  __m128 v9; // xmm4

  result = a1;
  v4 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  v5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 170), a3[2]), a3[3]);
  v6 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), a3[1]);
  v7 = *a3;
  *(_QWORD *)a1 = 0LL;
  v8 = _mm_add_ps(_mm_add_ps(v5, v6), _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v7));
  v9 = _mm_div_ps(v8, _mm_shuffle_ps(v8, v8, 255));
  *(_QWORD *)a1 = v9.m128_u64[0];
  *(_DWORD *)(a1 + 8) = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
  return result;
}
