/*
 * XREFs of KeZeroPages @ 0x1407353B0
 * Callers:
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiGetPageChainSmallPageProcess @ 0x140287000 (MiGetPageChainSmallPageProcess.c)
 *     MiFillPhysicalPages @ 0x140288AC0 (MiFillPhysicalPages.c)
 *     MiZeroWithUltraSpace @ 0x1402A0430 (MiZeroWithUltraSpace.c)
 *     MiZeroAndConvertPage @ 0x1402A0A00 (MiZeroAndConvertPage.c)
 *     MiFillMemory @ 0x1402A0E80 (MiFillMemory.c)
 *     MiZeroLargePage @ 0x1402A0F54 (MiZeroLargePage.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     MiPageNotZero @ 0x14050EAD8 (MiPageNotZero.c)
 *     MiPerformTimedMemoryZeroing @ 0x1405213F4 (MiPerformTimedMemoryZeroing.c)
 *     MxMapLargeVa @ 0x1406EC0F4 (MxMapLargeVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeZeroPages(__m128i *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 128LL;
  v3 = a2 >> 7;
  do
  {
    _mm_stream_si128(a1, (__m128i)0LL);
    _mm_stream_si128(a1 + 1, (__m128i)0LL);
    _mm_stream_si128(a1 + 2, (__m128i)0LL);
    _mm_stream_si128(a1 + 3, (__m128i)0LL);
    a1 += 8;
    _mm_stream_si128(a1 - 4, (__m128i)0LL);
    _mm_stream_si128(a1 - 3, (__m128i)0LL);
    --v3;
    _mm_stream_si128(a1 - 2, (__m128i)0LL);
    _mm_stream_si128(a1 - 1, (__m128i)0LL);
  }
  while ( v3 );
  _mm_sfence();
  return result;
}
