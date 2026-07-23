/*
 * XREFs of MiInitializePfnEntriesRaw @ 0x14047D2EC
 * Callers:
 *     MiCreateInitialPfns @ 0x1406EBD50 (MiCreateInitialPfns.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiInitializePfnEntriesRaw(__m128i *a1, __m128i *a2, unsigned __int64 a3)
{
  __m128i v3; // xmm0
  char v4; // r9
  unsigned __int64 result; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  __m128i *v8; // r8
  __m128i *v9; // rdx

  v3 = *a2;
  v4 = a3;
  result = a3 >> 1;
  v6 = a2[1];
  v7 = a2[2];
  if ( a3 >> 1 )
  {
    v8 = a1 + 2;
    v9 = a1 + 1;
    do
    {
      _mm_stream_si128(a1, v3);
      _mm_stream_si128(v9, v6);
      _mm_stream_si128(v8, v7);
      _mm_stream_si128(a1 + 3, v3);
      _mm_stream_si128(v9 + 3, v6);
      a1 += 6;
      v9 += 6;
      _mm_stream_si128(v8 + 3, v7);
      v8 += 6;
      --result;
    }
    while ( result );
  }
  if ( (v4 & 1) != 0 )
  {
    _mm_stream_si128(a1, v3);
    _mm_stream_si128(a1 + 1, v6);
    _mm_stream_si128(a1 + 2, v7);
  }
  _mm_sfence();
  return result;
}
