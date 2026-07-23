/*
 * XREFs of SmHwAcceleratorMgrInitialize @ 0x140B3874C
 * Callers:
 *     SmInitSystem @ 0x140C852E8 (SmInitSystem.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SmHwAcceleratorMgrInitialize(__int64 a1)
{
  unsigned int v2; // edx
  unsigned __int64 *v3; // rcx
  __int64 result; // rax
  __m128i v5; // xmm3
  __m128i v6; // xmm2
  __m128i v7; // xmm2
  unsigned __int64 v8; // xmm0_8

  memset_0((void *)a1, 0, 0x530uLL);
  v2 = 0;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  v3 = (unsigned __int64 *)(a1 + 40);
  *(_QWORD *)(a1 + 8) = a1 + 8;
  result = a1 + 24;
  v5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 24), (__m128i)(unsigned __int64)(a1 + 24));
  do
  {
    v6 = _mm_cvtsi32_si128(v2);
    v2 += 2;
    v7 = _mm_add_epi64(
           _mm_slli_epi64(
             _mm_unpacklo_epi32(
               _mm_add_epi32(_mm_shuffle_epi32(v6, 0), _mm_loadl_epi64((const __m128i *)&_xmm)),
               (__m128i)0LL),
             4u),
           v5);
    *(v3 - 1) = v7.m128i_i64[0];
    v8 = _mm_srli_si128(v7, 8).m128i_u64[0];
    v3[1] = v8;
    *v3 = v8;
    *(v3 - 2) = v7.m128i_i64[0];
    v3 += 4;
  }
  while ( v2 < 0x40 );
  *(_DWORD *)(a1 + 1308) = 1;
  *(_DWORD *)(a1 + 1312) = 2;
  return result;
}
