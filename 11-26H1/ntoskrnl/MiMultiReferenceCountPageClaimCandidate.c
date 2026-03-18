/*
 * XREFs of MiMultiReferenceCountPageClaimCandidate @ 0x1404116D8
 * Callers:
 *     MiActivePageClaimCandidate @ 0x1402923F0 (MiActivePageClaimCandidate.c)
 * Callees:
 *     MiRequestIoPageMdlCacheRelease @ 0x140411798 (MiRequestIoPageMdlCacheRelease.c)
 */

__int64 __fastcall MiMultiReferenceCountPageClaimCandidate(const __m128i *a1, int a2, __m128i *a3)
{
  __int32 v6; // ecx

  MiRequestIoPageMdlCacheRelease((__int64)a1[0x22000000000LL].m128i_i64 / 48);
  *a3 = _mm_loadu_si128(a1);
  a3[1] = _mm_loadu_si128(a1 + 1);
  a3[2] = _mm_loadu_si128(a1 + 2);
  v6 = a3[2].m128i_i32[0];
  if ( (unsigned __int16)v6 <= 1u && (unsigned __int16)v6 <= (a3[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFuLL) )
    return 0LL;
  if ( a2 )
    ++dword_140EF8E64;
  else
    ++dword_140EF8F1C;
  return 3221225473LL;
}
