/*
 * XREFs of MiTradeStackPageFast @ 0x140415F18
 * Callers:
 *     MiJumpStackTarget @ 0x1403E4C40 (MiJumpStackTarget.c)
 *     MiSwapStackPage @ 0x140415804 (MiSwapStackPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiFlushSingleTbEntry @ 0x140285050 (MiFlushSingleTbEntry.c)
 *     MiMakeDemandZeroPte @ 0x14028B2D0 (MiMakeDemandZeroPte.c)
 *     MiCopyPage @ 0x140293FA4 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x140294570 (MiCopyPfnEntryEx.c)
 *     MiClearPfnReuseFields @ 0x14031A250 (MiClearPfnReuseFields.c)
 *     MiSetPfnIdentity @ 0x140369440 (MiSetPfnIdentity.c)
 */

__int64 __fastcall MiTradeStackPageFast(const __m128i *a1, __m128i *a2)
{
  unsigned __int64 v2; // r14
  ULONG_PTR v5; // r15
  signed __int64 v6; // rcx
  __int64 v7; // rdx
  signed __int64 v8; // rbx
  ULONG_PTR v9; // rbp
  __int64 result; // rax
  ULONG_PTR v11; // rbp
  __int64 v12; // rax
  unsigned __int64 DemandZeroPte; // rax
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1->m128i_i64[1] | 0x8000000000000000uLL;
  v5 = (__int64)a1[0x22000000000LL].m128i_i64 / 48;
  v7 = (unsigned __int128)((__int64)a2[0x22000000000LL].m128i_i64 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = *(_QWORD *)v2;
  v9 = ((unsigned __int64)v7 >> 63) + (v7 >> 3);
  if ( (*(_QWORD *)v2 & 0x20) != 0 )
  {
    v8 &= ~0x20uLL;
    if ( (MiFlags & 0x8000000) != 0 )
      _mm_lfence();
    v6 = *(_QWORD *)v2;
    if ( v6 != _InterlockedCompareExchange64((volatile signed __int64 *)v2, v8, v6) )
      return 0LL;
  }
  MiFlushSingleTbEntry((__int64)(v2 << 25) >> 16, 2LL);
  v14 = 0;
  while ( _interlockedbittestandset64(&a2[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v14);
    while ( a2[1].m128i_i64[1] < 0 );
  }
  MiCopyPfnEntryEx(a2, a1, 2);
  MiCopyPage(v9, v5, 0x44u);
  v11 = v9 << 12;
  if ( (MiFlags & 0x8000000) != 0 )
    _mm_lfence();
  if ( v8 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)v2,
               v11 ^ (v8 ^ v11) & 0xFFF0000000000FFFuLL | 0x20,
               v8) )
  {
    a2[2].m128i_i32[0] = a2[2].m128i_i32[0] & 0xFFF8FFFF | 0x50000;
    v12 = a2[1].m128i_i64[0];
    if ( v12 )
      DemandZeroPte = v12 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    else
      DemandZeroPte = MiMakeDemandZeroPte(4);
    a2[1].m128i_i64[0] = DemandZeroPte;
    MiSetPfnIdentity((__int64)a2, 0);
    _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  a1[2].m128i_i32[0] = a1[2].m128i_i32[0] & 0xFFF8FFFF | 0x50000;
  MiSetPfnIdentity((__int64)a1, 0);
  MiClearPfnReuseFields((__int64)a1);
  result = 1LL;
  a1[1].m128i_i64[1] &= 0xC000000000000000uLL;
  return result;
}
