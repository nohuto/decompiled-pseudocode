/*
 * XREFs of sub_180096540 @ 0x180096540
 * Callers:
 *     sub_180096D50 @ 0x180096D50 (sub_180096D50.c)
 *     sub_1800973C0 @ 0x1800973C0 (sub_1800973C0.c)
 * Callees:
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 */

__int64 *__fastcall sub_180096540(__int64 a1)
{
  __int64 *result; // rax
  __m128 si128; // xmm2

  result = sub_180013540((__int64 *)(a1 + 24), (_QWORD *)(a1 + 8));
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_1801916B0);
  *(_DWORD *)(a1 + 40) = -1;
  *(_DWORD *)(a1 + 44) = si128.m128_i32[0];
  *(_DWORD *)(a1 + 56) = _mm_shuffle_ps(si128, si128, 255).m128_u32[0];
  *(_DWORD *)(a1 + 48) = _mm_shuffle_ps(si128, si128, 85).m128_u32[0];
  *(_DWORD *)(a1 + 52) = _mm_shuffle_ps(si128, si128, 170).m128_u32[0];
  *(_WORD *)(a1 + 60) = 256;
  return result;
}
