/*
 * XREFs of MiMultiReferenceCountPageClaimCandidate @ 0x140410DF8
 * Callers:
 *     MiActivePageClaimCandidate @ 0x140291950 (MiActivePageClaimCandidate.c)
 * Callees:
 *     MiRequestIoPageMdlCacheRelease @ 0x140410EB8 (MiRequestIoPageMdlCacheRelease.c)
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
    ++dword_140EF91C4;
  else
    ++dword_140EF927C;
  return 3221225473LL;
}
