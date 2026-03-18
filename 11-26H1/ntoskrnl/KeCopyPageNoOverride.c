/*
 * XREFs of KeCopyPageNoOverride @ 0x140730860
 * Callers:
 *     MiCopyPage @ 0x140293FA4 (MiCopyPage.c)
 *     MiCombineInitialInstance @ 0x1403093AC (MiCombineInitialInstance.c)
 *     MiInitializeImageProtos @ 0x140338604 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14036C478 (MiCopyDataPageToImagePage.c)
 *     MiScrubPage @ 0x140413AE4 (MiScrubPage.c)
 *     MiCopyKstack @ 0x140513484 (MiCopyKstack.c)
 *     MiSlowRotateCopy @ 0x1406F7544 (MiSlowRotateCopy.c)
 *     MiCopyFilePage @ 0x1406F93E0 (MiCopyFilePage.c)
 *     MiCopyMemoryPagefileData @ 0x14070C8A0 (MiCopyMemoryPagefileData.c)
 *     KeCopyPageMfence @ 0x1407308C0 (KeCopyPageMfence.c)
 *     MiValidateSectionRevertRelocations @ 0x1409CD26C (MiValidateSectionRevertRelocations.c)
 *     MiRevertRelocatedImagePfn @ 0x1409CF644 (MiRevertRelocatedImagePfn.c)
 *     MiValidateImagePfn @ 0x140B04B5C (MiValidateImagePfn.c)
 *     KeCopyPage$thunk$17553164197770287351 @ 0x140C61010 (KeCopyPage$thunk$17553164197770287351.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCopyPageNoOverride(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __m128i si128; // xmm1
  __m128i v6; // xmm2
  __m128i v7; // xmm3

  result = -4096LL;
  v3 = a2 + 4096;
  v4 = a1 + 4096;
  do
  {
    si128 = _mm_stream_load_si128((__m128i *)(v3 + result + 16));
    v6 = _mm_stream_load_si128((__m128i *)(v3 + result + 32));
    v7 = _mm_stream_load_si128((__m128i *)(v3 + result + 48));
    _mm_stream_si128((__m128i *)(v4 + result), _mm_stream_load_si128((__m128i *)(v3 + result)));
    _mm_stream_si128((__m128i *)(v4 + result + 16), si128);
    _mm_stream_si128((__m128i *)(v4 + result + 32), v6);
    _mm_stream_si128((__m128i *)(v4 + result + 48), v7);
    result += 64LL;
  }
  while ( result );
  _mm_sfence();
  return result;
}
