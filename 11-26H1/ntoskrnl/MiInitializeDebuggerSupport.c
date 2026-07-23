/*
 * XREFs of MiInitializeDebuggerSupport @ 0x140703A9C
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MxInstallMoreMemory @ 0x1406EC098 (MxInstallMoreMemory.c)
 */

__int64 __fastcall MiInitializeDebuggerSupport(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  struct _LIST_ENTRY *v4; // rax
  unsigned int v5; // r10d
  LIST_ENTRY *p_WaitListHead; // r9
  unsigned int i; // r8d
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int *v9; // r9
  __m128i v10; // xmm4
  __m128i v11; // xmm4
  __m128i v12; // xmm2
  __m128i v13; // xmm1
  __int64 result; // rax
  __m128i v15; // xmm3
  __m128i v16; // xmm3
  __m128i v17; // xmm3

  v4 = (struct _LIST_ENTRY *)MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 2u, a3, a4);
  v5 = 0;
  stru_140E2ED08.SuspendEvent.Header.WaitListHead.Flink = v4;
  if ( !v4 )
    MxInstallMoreMemory(3);
  p_WaitListHead = &stru_140E2ED08.SuspendEvent.Header.WaitListHead;
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
      p_WaitListHead->Flink = (struct _LIST_ENTRY *)(*((_QWORD *)&stru_140E2ED08.SuspendEvent.Header.Lock + i) + 8LL);
    Flink = p_WaitListHead->Flink;
    p_WaitListHead = (LIST_ENTRY *)((char *)p_WaitListHead + 8);
    Flink->Flink = *(struct _LIST_ENTRY **)&CLFS_LSN_NULL_EXT;
  }
  v9 = (unsigned int *)&unk_140E30950;
  do
  {
    v10 = _mm_cvtsi32_si128(v5);
    v5 += 4;
    v11 = (__m128i)_mm_or_ps(
                     (__m128)_mm_add_epi32(
                               _mm_slli_epi32(_mm_add_epi32(_mm_shuffle_epi32(v10, 0), (__m128i)_xmm), 2u),
                               (__m128i)_xmm),
                     _mm_and_ps(
                       (__m128)_mm_unpacklo_epi64(
                                 _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v9 - 12)), _mm_cvtsi32_si128(*(v9 - 6))),
                                 _mm_unpacklo_epi32(_mm_cvtsi32_si128(*v9), _mm_cvtsi32_si128(v9[6]))),
                       (__m128)_xmm));
    v12 = _mm_srli_si128(v11, 4);
    v13 = _mm_srli_si128(v12, 4);
    result = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v13, 4));
    v15 = (__m128i)_mm_or_ps(
                     (__m128)_mm_unpacklo_epi64(
                               _mm_unpacklo_epi32(
                                 _mm_cvtsi32_si128(_mm_cvtsi128_si32(v11)),
                                 _mm_cvtsi32_si128(_mm_cvtsi128_si32(v12))),
                               _mm_unpacklo_epi32(_mm_cvtsi32_si128(_mm_cvtsi128_si32(v13)), _mm_cvtsi32_si128(result))),
                     (__m128)_xmm);
    *(v9 - 12) = _mm_cvtsi128_si32(v15);
    v16 = _mm_srli_si128(v15, 4);
    *(v9 - 6) = _mm_cvtsi128_si32(v16);
    v17 = _mm_srli_si128(v16, 4);
    *v9 = _mm_cvtsi128_si32(v17);
    v9 += 24;
    *(v9 - 18) = _mm_cvtsi128_si32(_mm_srli_si128(v17, 4));
  }
  while ( v5 < 0x200 );
  return result;
}
