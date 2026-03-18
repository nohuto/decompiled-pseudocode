/*
 * XREFs of MiCheckContiguityTradeEligible @ 0x140700448
 * Callers:
 *     MiQueryVaPhysicalContiguity @ 0x1407004D4 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14070B50C (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiActivePageClaimCandidate @ 0x1402923F0 (MiActivePageClaimCandidate.c)
 *     MiGetPfnSlabType @ 0x1402FDC40 (MiGetPfnSlabType.c)
 */

_BOOL8 __fastcall MiCheckContiguityTradeEligible(const __m128i *a1)
{
  unsigned __int64 v2; // rcx
  int v5; // [rsp+40h] [rbp+8h] BYREF

  if ( a1[2].m128i_i64[1] < 0 || a1[2].m128i_i32[0] < 0 )
    return 0LL;
  if ( (a1[2].m128i_i8[2] & 7) == 6 )
  {
    v2 = (unsigned __int64)a1[2].m128i_i64[1] >> 43;
    v5 = 0;
    return MiActivePageClaimCandidate(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * (v2 & 0x3FF)), a1, 0, 0, 0, &v5) == 0;
  }
  else
  {
    if ( (unsigned __int16)a1[2].m128i_i32[0] )
      return 0LL;
    return (unsigned int)MiGetPfnSlabType((__int64)a1) == 9;
  }
}
