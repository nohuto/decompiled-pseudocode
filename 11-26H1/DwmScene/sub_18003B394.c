/*
 * XREFs of sub_18003B394 @ 0x18003B394
 * Callers:
 *     sub_18003BF34 @ 0x18003BF34 (sub_18003BF34.c)
 *     sub_180067CF0 @ 0x180067CF0 (sub_180067CF0.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 * Callees:
 *     sub_18003DEAC @ 0x18003DEAC (sub_18003DEAC.c)
 */

__int64 __fastcall sub_18003B394(__int64 a1, unsigned __int64 *a2)
{
  __m128 v3; // xmm0

  v3 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 1065353216;
  *(double *)v3.m128_u64 = sub_18003DEAC();
  *(__m128 *)a1 = v3;
  return a1;
}
