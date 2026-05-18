/*
 * XREFs of sub_1800422D0 @ 0x1800422D0
 * Callers:
 *     sub_180041DF0 @ 0x180041DF0 (sub_180041DF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800422D0(__int64 a1)
{
  __m128 si128; // xmm2
  __int64 result; // rax

  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_1801916B0);
  result = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 120) = 1;
  *(_BYTE *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 88) = si128.m128_i32[0];
  *(_DWORD *)(a1 + 92) = _mm_shuffle_ps(si128, si128, 85).m128_u32[0];
  *(_DWORD *)(a1 + 96) = _mm_shuffle_ps(si128, si128, 170).m128_u32[0];
  *(_DWORD *)(a1 + 100) = _mm_shuffle_ps(si128, si128, 255).m128_u32[0];
  *(_QWORD *)(a1 + 104) = 1065353216LL;
  *(_QWORD *)(a1 + 112) = 1135869952LL;
  *(_BYTE *)(a1 + 72) = 0;
  return result;
}
