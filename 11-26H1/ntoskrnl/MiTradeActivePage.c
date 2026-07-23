/*
 * XREFs of MiTradeActivePage @ 0x140294DF8
 * Callers:
 *     MiReplaceLockedPage @ 0x140294BC4 (MiReplaceLockedPage.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiCompleteSecureProcessFault @ 0x14038CC80 (MiCompleteSecureProcessFault.c)
 *     MiProtectDriverSectionPte @ 0x1406EAA00 (MiProtectDriverSectionPte.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1407101BC (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x140293AD0 (MiCopyPfnEntryEx.c)
 *     MiActivePageTradeable @ 0x140295414 (MiActivePageTradeable.c)
 *     MiWriteValidPteNewPage @ 0x14029F1C0 (MiWriteValidPteNewPage.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiClearPfnReuseFields @ 0x14031C280 (MiClearPfnReuseFields.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiTransformValidPteInPlace @ 0x1403444D8 (MiTransformValidPteInPlace.c)
 *     MiSetPfnTbFlushStamp @ 0x14036D880 (MiSetPfnTbFlushStamp.c)
 *     MiUpdateSecurePte @ 0x1404AA50C (MiUpdateSecurePte.c)
 */

__int64 __fastcall MiTradeActivePage(const __m128i *a1, __m128i *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  __int64 *v9; // rsi
  unsigned __int64 v10; // r9
  __int64 PteShadow; // rdi
  unsigned __int64 v12; // r8
  int v13; // ecx
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  __int64 v21; // r13
  unsigned __int64 v22; // rbx
  int v23; // ecx
  int v25; // eax
  int v26; // eax
  char v27; // [rsp+30h] [rbp-48h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h] BYREF
  ULONG_PTR v29; // [rsp+40h] [rbp-38h]

  v27 = a5 & 1;
  if ( !(unsigned int)MiActivePageTradeable(a1, a3, a4) )
    return 0LL;
  v29 = (__int64)a1[0x22000000000LL].m128i_i64 / 48;
  v9 = (__int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = 0xFFFFF6FB7DBED000uLL;
  PteShadow = *v9;
  v12 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    PteShadow = MiReadPteShadow(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v9);
    v12 = 0xFFFFF6FB7DBED7F8uLL;
  }
  if ( a4 != 2 )
  {
    v13 = 0;
    v14 = PteShadow & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    v28 = v14;
    if ( (unsigned __int64)v9 >= v10 && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v25 = MiSanitizeShadowPxe(0LL, &v28, 0xFFFFF6FB7DBED7F8uLL);
      v14 = v28;
      v13 = v25;
    }
    *v9 = v14;
    if ( v13 )
      MiWritePteShadow(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v14, v12, v10);
    v15 = a4;
    goto LABEL_8;
  }
  if ( (PteShadow & 0x42) != 0 )
  {
    MiWriteValidPteNewProtection(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, PteShadow & 0xFFFFFFFFFFFFFFBDuLL);
    v15 = 2LL;
LABEL_8:
    MiFlushSingleTbEntry(a3, v15);
  }
  v16 = ((unsigned __int32)a1[2].m128i_i32[0] >> 22) & 3;
  a5 = 0;
  while ( _interlockedbittestandset64(&a1[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a5);
    while ( a1[1].m128i_i64[1] < 0 );
  }
  a5 = 0;
  while ( _interlockedbittestandset64(&a2[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a5);
    while ( a2[1].m128i_i64[1] < 0 );
  }
  if ( (((unsigned __int32)a2[2].m128i_i32[0] >> 22) & 3) != v16 )
    MiChangePageAttribute(a2, v16, 1LL);
  MiSetPfnTbFlushStamp(a2, 0LL, 1LL);
  MiCopyPfnEntryEx(a2, a1, 2 * v27);
  MiCopyPage((__int64)a2[0x22000000000LL].m128i_i64 / 48, v29, 6u);
  _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  a1[2].m128i_i8[3] &= ~8u;
  a1[2].m128i_i32[0] = a1[2].m128i_i32[0] & 0xFFF8FFFF | 0x50000;
  MiClearPfnReuseFields(a1, v17, v18, 0x7FFFFFFFFFFFFFFFLL);
  _InterlockedAnd64(&a1[1].m128i_i64[1], v20);
  v21 = ((__int64)a2[0x22000000000LL].m128i_i64 / 48) << 12;
  v22 = v21 ^ (PteShadow ^ v21) & 0xFFF0000000000FFFuLL;
  if ( (MiFlags & 0x10000) != 0
    && (((unsigned __int64)a2[2].m128i_i64[1] >> 60) & 7) == 3
    && (*((_DWORD *)MiVaToFlushVm(a3) + 46) & 0xF) == 3 )
  {
    MiUpdateSecurePte(a3);
  }
  if ( a4 == 2 )
  {
    MiTransformValidPteInPlace(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0);
  }
  else
  {
    v28 = v21 ^ (PteShadow ^ v21) & 0xFFF0000000000FFFuLL;
    v23 = 0;
    if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v26 = MiSanitizeShadowPxe(0LL, &v28, v19);
      v22 = v28;
      v23 = v26;
    }
    *v9 = v22;
    if ( v23 )
      MiWritePteShadow(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v22, v19, v20);
    MiFlushSingleTbEntry(a3, a4);
  }
  if ( a2[2].m128i_i64[1] < 0 )
    MiWriteValidPteNewPage(
      a2->m128i_i64[1] | 0x8000000000000000uLL,
      v21 ^ (*(_QWORD *)(a2->m128i_i64[1] | 0x8000000000000000uLL) ^ v21) & 0xFFF0000000000FFFuLL,
      0LL);
  return 1LL;
}
