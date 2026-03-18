/*
 * XREFs of FastZeroMemory @ 0x1400F5B00
 * Callers:
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400F58E8 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

char *__fastcall FastZeroMemory(__m128i *a1, size_t Size)
{
  __m128i *v3; // rbx
  size_t v4; // rsi
  size_t v5; // rdi
  char *result; // rax

  v3 = a1;
  v4 = Size & 0x3F;
  if ( ((unsigned __int8)a1 & 0x3F) != 0 || !ExIsProcessorFeaturePresent(0xAu) || v4 )
    return (char *)memset(v3, 0, Size);
  v5 = Size >> 6;
  for ( result = 0LL; (unsigned __int64)result < v5; ++result )
  {
    _mm_stream_si128(v3, (__m128i)0LL);
    _mm_stream_si128(v3 + 1, (__m128i)0LL);
    _mm_stream_si128(v3 + 2, (__m128i)0LL);
    _mm_stream_si128(v3 + 3, (__m128i)0LL);
    v3 += 4;
  }
  _mm_mfence();
  return result;
}
