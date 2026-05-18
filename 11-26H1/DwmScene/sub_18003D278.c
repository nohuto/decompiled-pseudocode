/*
 * XREFs of sub_18003D278 @ 0x18003D278
 * Callers:
 *     sub_18003D360 @ 0x18003D360 (sub_18003D360.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18003D278(__int64 a1, unsigned __int64 *a2, __m128 *a3)
{
  __int64 result; // rax
  __m128 v4; // xmm3
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  __m128 v7; // xmm0
  __m128 v8; // xmm2

  result = a1;
  v4 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  v5 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 170), a3[2]);
  v6 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), a3[1]);
  v7 = *a3;
  *(_QWORD *)a1 = 0LL;
  v8 = _mm_add_ps(_mm_add_ps(v5, v6), _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v7));
  *(_QWORD *)a1 = v8.m128_u64[0];
  *(_DWORD *)(a1 + 8) = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
  return result;
}
