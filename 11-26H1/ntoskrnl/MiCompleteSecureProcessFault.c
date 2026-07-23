/*
 * XREFs of MiCompleteSecureProcessFault @ 0x14038CC80
 * Callers:
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x140527ED0 (MiValidVirtualizationFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028D4F0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiTradeActivePage @ 0x140294DF8 (MiTradeActivePage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295200 (MiReleaseFreshPageAtDpc.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiAbortCombineScan @ 0x14036AF70 (MiAbortCombineScan.c)
 *     MiMarkPfnVerified @ 0x14038E794 (MiMarkPfnVerified.c)
 *     MiIsVirtualizationFaultPrimaryPage @ 0x1404EFB1C (MiIsVirtualizationFaultPrimaryPage.c)
 *     MiMarkVirtualizationFaultPageInfoFailed @ 0x1404F2794 (MiMarkVirtualizationFaultPageInfoFailed.c)
 */

__int64 __fastcall MiCompleteSecureProcessFault(const __m128i **a1, __int64 *a2, __int64 a3)
{
  const __m128i *v3; // rbx
  __int64 v5; // rdx
  struct _KEVENT *v8; // r13
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned int v15; // eax
  __int64 *v16; // rbp
  __int64 SlabPage; // rax
  __m128i *v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 DemandZeroPte; // rax
  __int64 PteShadow; // rax
  int v24; // esi
  int v25; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a1;
  v5 = *a2;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    MiReadPteShadow((unsigned __int64)a2, v5);
  if ( v3[2].m128i_i64[1] < 0 )
    return 1LL;
  v25 = 0;
  while ( _interlockedbittestandset64(&v3[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v25);
    while ( v3[1].m128i_i64[1] < 0 );
  }
  v8 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * (((unsigned __int64)v3[2].m128i_i64[1] >> 43) & 0x3FF));
  v9 = v3->m128i_i64[1] | 0x8000000000000000uLL;
  v10 = (__int64)(v9 << 25) >> 16;
  if ( (v3[2].m128i_i8[2] & 8) != 0 )
  {
    v24 = *(_DWORD *)(a3 + 56);
    if ( (v24 & 4) == 0
      || (unsigned int)MiIsVirtualizationFaultPrimaryPage(
                         a3,
                         (__int64)((v3->m128i_i64[1] | 0x8000000000000000uLL) << 25) >> 16) )
    {
      *(_DWORD *)(a3 + 56) = v24 | 0x40;
    }
    else
    {
      MiMarkVirtualizationFaultPageInfoFailed(a3, v10);
    }
    _InterlockedAnd64(&v3[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    if ( (v8->Header.SignalState & 8) == 0
      || (unsigned int)MiGetPfnSlabType((__int64)v3) != 9
      || v10 >= 0xFFFF800000000000uLL )
    {
      goto LABEL_7;
    }
    _InterlockedAnd64(&v3[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    v15 = MI_PAGE_TO_FULL_COLOR((__int64)v3[0x22000000000LL].m128i_i64 / 48);
    v16 = (__int64 *)(a3 + 48);
    SlabPage = MiGetSlabPage((__int64)v8, 2, v15, 0x10u, v16, 0);
    if ( SlabPage != -1 )
    {
      v18 = (__m128i *)(48 * SlabPage - 0x220000000000LL);
      if ( (unsigned int)MiTradeActivePage(v3, v18, v10, 0, 0) )
      {
        v3[1].m128i_i64[0] = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v21 = v3[1].m128i_i64[0];
        if ( v21 )
          DemandZeroPte = v21 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        else
          DemandZeroPte = MiMakeDemandZeroPte(4);
        v3[1].m128i_i64[0] = DemandZeroPte;
        MiReleaseFreshPageAtDpc((__int64)v3, v19, v20);
        PteShadow = *(_QWORD *)v9;
        v3 = v18;
        if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v9, *(_QWORD *)v9);
        *a2 = PteShadow;
        *a1 = v18;
      }
      else
      {
        MiReleaseFreshPageAtDpc((__int64)v18, v19, v20);
      }
      goto LABEL_18;
    }
    if ( !*v16 )
    {
LABEL_18:
      v25 = 0;
      while ( _interlockedbittestandset64(&v3[1].m128i_i32[2], 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v25);
        while ( v3[1].m128i_i64[1] < 0 );
      }
LABEL_7:
      if ( (((unsigned __int64)v3[2].m128i_i64[1] >> 60) & 7) != 3 )
      {
        MiAbortCombineScan((__int64)v3);
        MiMarkPfnVerified(v3, 4LL, v11, v12);
      }
      v13 = MiCaptureDirtyBitToPfn((ULONG_PTR)v3);
      _InterlockedAnd64(&v3[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      if ( v13 )
        MiReleasePageFileInfo(v8, v13, 1LL);
      return 1LL;
    }
  }
  return 0LL;
}
