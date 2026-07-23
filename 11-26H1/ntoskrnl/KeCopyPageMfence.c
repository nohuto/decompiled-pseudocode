/*
 * XREFs of KeCopyPageMfence @ 0x140735490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCopyPageMfence(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  __m128i v8; // xmm3

  if ( a3 == 2 )
  {
    _mm_mfence();
    return KeCopyPageNoOverride(a1, a2);
  }
  else
  {
    result = -4096LL;
    v4 = a2 + 4096;
    v5 = a1 + 4096;
    do
    {
      v6 = *(__m128i *)(v4 + result + 16);
      v7 = *(__m128i *)(v4 + result + 32);
      v8 = *(__m128i *)(v4 + result + 48);
      _mm_stream_si128((__m128i *)(v5 + result), *(__m128i *)(v4 + result));
      _mm_stream_si128((__m128i *)(v5 + result + 16), v6);
      _mm_stream_si128((__m128i *)(v5 + result + 32), v7);
      _mm_stream_si128((__m128i *)(v5 + result + 48), v8);
      result += 64LL;
    }
    while ( result );
    _mm_sfence();
  }
  return result;
}
