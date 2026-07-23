/*
 * XREFs of MiSwapHardFaultPage @ 0x14031ED1C
 * Callers:
 *     MiHardFaultPageRelease @ 0x14031E950 (MiHardFaultPageRelease.c)
 *     MiSoftFaultClusterTradePageFinish @ 0x1407173D0 (MiSoftFaultClusterTradePageFinish.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiCopyPfnEntryEx @ 0x140293AD0 (MiCopyPfnEntryEx.c)
 *     MiUpdateTransitionPteFrame @ 0x1402F0200 (MiUpdateTransitionPteFrame.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiPfnReferenceCountIsZero @ 0x14031E3A4 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageCharge @ 0x14031F1B0 (MiRemoveLockedPageCharge.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 */

__int64 __fastcall MiSwapHardFaultPage(__int64 *a1, const __m128i *a2, __m128i *a3)
{
  __int64 PteShadow; // rcx
  unsigned __int64 updated; // rax
  __int64 v8; // r8
  unsigned __int64 *v9; // r10
  unsigned __int64 v10; // r11
  int v11; // edx
  __int64 result; // rax
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  PteShadow = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)a1, PteShadow);
  updated = MiUpdateTransitionPteFrame(PteShadow, (__int64)a3[0x22000000000LL].m128i_i64 / 48);
  v13 = updated;
  v11 = 0;
  if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= v10 )
  {
    v11 = MiSanitizeShadowPxe(v10, &v13, v8);
    updated = v13;
  }
  *v9 = updated;
  if ( v11 )
    MiWritePteShadow();
  LODWORD(v13) = 0;
  while ( _interlockedbittestandset64(&a3[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v13);
    while ( a3[1].m128i_i64[1] < 0 );
  }
  MiCopyPfnEntryEx(a3, a2, 0);
  if ( (((unsigned __int64)a2[2].m128i_i64[1] >> 60) & 7) == 3 )
    MiSetPfnIdentity(a3, 3LL);
  a3[1].m128i_i64[1] &= 0xC000000000000000uLL;
  a2[1].m128i_i64[1] |= 0x4000000000000000uLL;
  if ( (a2[1].m128i_i32[0] & 8) != 0 )
    a2[1].m128i_i64[0] &= ~8uLL;
  if ( (a2[1].m128i_i32[0] & 4) != 0 )
    a2[1].m128i_i64[0] &= ~4uLL;
  if ( (unsigned int)MiRemoveLockedPageCharge(a2) )
    MiPfnReferenceCountIsZero((ULONG_PTR)a2, (__int64)a2[0x22000000000LL].m128i_i64 / 48);
  else
    a3[2].m128i_i32[0] = a3[2].m128i_i32[0] & 0xFFFF0000 | 1;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
