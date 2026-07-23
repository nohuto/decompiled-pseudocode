/*
 * XREFs of MiMigratePfn @ 0x1402D8A10
 * Callers:
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x140293AD0 (MiCopyPfnEntryEx.c)
 *     MiReturnFreeZeroPage @ 0x1402A9A90 (MiReturnFreeZeroPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiFinalizePageAttribute @ 0x1402BA3A0 (MiFinalizePageAttribute.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiObtainFaultCharges @ 0x1402D83D0 (MiObtainFaultCharges.c)
 *     MiCanPageMove @ 0x1402DFD1C (MiCanPageMove.c)
 *     MiUpdateTransitionPteFrame @ 0x1402F0200 (MiUpdateTransitionPteFrame.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiIsProtoPoolPfnInNonPagedPool @ 0x14031E250 (MiIsProtoPoolPfnInNonPagedPool.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiRemoveLockedPageCharge @ 0x14031F1B0 (MiRemoveLockedPageCharge.c)
 *     MiReturnFaultCharges @ 0x14033AD8C (MiReturnFaultCharges.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiComputeFaultNode @ 0x140372808 (MiComputeFaultNode.c)
 *     MiGetInPageSupportBlock @ 0x140398D70 (MiGetInPageSupportBlock.c)
 */

__m128i *__fastcall MiMigratePfn(unsigned __int64 *a1, const __m128i *a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r13
  unsigned __int64 v8; // r12
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v14; // r9
  __int64 v15; // r10
  int v16; // eax
  int v17; // ebp
  unsigned int v18; // eax
  int v19; // ebx
  struct _KEVENT *v20; // r10
  __int64 v21; // r9
  unsigned int v22; // esi
  unsigned int *v23; // r8
  unsigned int *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // edx
  unsigned int v29; // edi
  unsigned int v30; // edx
  struct _KEVENT *v31; // rsi
  ULONG_PTR Page; // rax
  ULONG_PTR v33; // r12
  __m128i *v34; // rdi
  int v35; // eax
  __int64 v36; // rsi
  unsigned int v37; // ebx
  __int64 *v38; // rbx
  __int64 PteShadow; // rax
  __int64 updated; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // r11
  int v44; // edx
  unsigned __int64 v45; // r10
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned __int64 v48; // r9
  ULONG_PTR v49; // r13
  ULONG_PTR v50; // rdx
  __int32 v51; // r14d
  __int64 v52; // rdx
  __int64 v53; // r8
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rax
  _DWORD *i; // r8
  __int128 v57; // [rsp+20h] [rbp-58h] BYREF
  ULONG_PTR v58; // [rsp+30h] [rbp-48h]
  __int64 v59; // [rsp+80h] [rbp+8h] BYREF
  struct _KEVENT *v60; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v61; // [rsp+98h] [rbp+20h]

  v61 = a4;
  v4 = a2[2].m128i_i64[1];
  v5 = a1[7];
  v6 = *a1;
  v8 = a1[2];
  v57 = 0LL;
  if ( (v4 & 0x20000000000000LL) != 0 )
    return (__m128i *)a2;
  if ( byte_140E3BEA6 )
  {
    v11 = (__int64)((unsigned __int128)((__int64)a2[0x22000000000LL].m128i_i64 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v12 = ((v11 >> 63) + v11) >> 9;
    if ( *(_BYTE *)(qword_140E3D240 + 2 * v12) )
    {
      if ( *(_BYTE *)(qword_140E3D240 + 2 * v12) != 10 )
        return (__m128i *)a2;
    }
  }
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    return (__m128i *)a2;
  if ( (unsigned __int16)a2[2].m128i_i32[0] )
    return (__m128i *)a2;
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x2000000) != 0 )
    return (__m128i *)a2;
  if ( !(unsigned int)MiCanPageMove(a2) )
    return (__m128i *)a2;
  v58 = ((unsigned __int64)((unsigned __int128)(((__int64)a2->m128i_i64 - v15) * (__int128)v14) >> 64) >> 63)
      + ((__int64)((unsigned __int128)(((__int64)a2->m128i_i64 - v15) * (__int128)v14) >> 64) >> 3);
  v16 = MiPageToNode(v58);
  v59 = 0LL;
  v17 = v16;
  v18 = MiComputeFaultNode(a1, 0LL, &v59);
  MiInitializePageColorBase(v5, 3LL, v18, &v57);
  v19 = (DWORD2(v57) >> 9) & 0x3F;
  if ( v19 == v17 )
    return (__m128i *)a2;
  v20 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * (((unsigned __int64)a2[2].m128i_i64[1] >> 43) & 0x3FF));
  v60 = v20;
  v21 = DWORD2(v57) & 0xFFFFFF00;
  v22 = v21 | (unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)v57, 1u);
  v23 = (unsigned int *)(qword_140E2D810 + 4LL * v19 * (unsigned int)(unsigned __int16)KeNumberNodes);
  v24 = &v23[(unsigned __int16)KeNumberNodes];
  *(_QWORD *)&v57 = v24;
  while ( v23 < v24 )
  {
    v25 = *v23;
    if ( (_DWORD)v25 == v17 )
      return (__m128i *)a2;
    v26 = (__int64)&v20->Header.WaitListHead.Blink[3520 * v25];
    if ( *(_QWORD *)(v26 + 3080) || *(_QWORD *)(v26 + 3088) )
      break;
    v24 = (unsigned int *)v57;
    ++v23;
  }
  v27 = a2[2].m128i_i64[1];
  LOBYTE(v28) = 0;
  LODWORD(v59) = 0;
  if ( v27 < 0 && (a2[1].m128i_i32[0] & 0x400LL) != 0 )
  {
    v28 = 1;
LABEL_18:
    LODWORD(v59) = v28;
    goto LABEL_19;
  }
  v21 = 0xFFFFF68000000000uLL;
  if ( (a2->m128i_i64[1] | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
    && (a2->m128i_i64[1] | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
    && (a2[2].m128i_i8[3] & 0x20) != 0 )
  {
    v28 = 5;
    goto LABEL_18;
  }
LABEL_19:
  if ( !MiObtainFaultCharges((ULONG *)v20, 1uLL, v28, v21) )
    return (__m128i *)a2;
  v29 = 2;
  if ( (v8 & 1) != 0 && *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (unsigned int)MiGetSystemRegionType(v6) == 11 )
    v29 = 130;
  v30 = v22;
  v31 = v60;
  Page = MiGetPage((__int64)v60, v30, v29);
  v33 = Page;
  if ( Page == -1LL )
  {
LABEL_78:
    MiReturnFaultCharges(v31, 1LL, (unsigned int)v59);
    return (__m128i *)a2;
  }
  v34 = (__m128i *)(48 * Page - 0x220000000000LL);
  v35 = MiPageToNode(Page);
  if ( v19 != v35 )
  {
    for ( i = (_DWORD *)(qword_140E2D810 + 4LL * v19 * (unsigned int)(unsigned __int16)KeNumberNodes);
          (unsigned __int64)i < (unsigned __int64)v57;
          ++i )
    {
      if ( *i == v17 )
        goto LABEL_75;
      if ( *i == v35 )
        break;
    }
  }
  if ( a3 )
  {
    v36 = MiGetInPageSupportBlock(6LL, 0LL);
    if ( v36 )
      goto LABEL_26;
    v31 = v60;
LABEL_75:
    LODWORD(v60) = 0;
    while ( _interlockedbittestandset64(&v34[1].m128i_i32[2], 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v60);
      while ( v34[1].m128i_i64[1] < 0 );
    }
    MiReturnFreeZeroPage((__int64)v34, 0);
    _InterlockedAnd64(&v34[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_78;
  }
  v36 = 0LL;
LABEL_26:
  v37 = ((unsigned __int32)a2[2].m128i_i32[0] >> 22) & 3;
  LODWORD(v59) = 0;
  while ( _interlockedbittestandset64(&v34[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v59);
    while ( v34[1].m128i_i64[1] < 0 );
  }
  MiFinalizePageAttribute((__int64)v34, v37, 1LL);
  MiCopyPfnEntryEx(v34, a2, 0);
  v34[1].m128i_i64[1] &= 0xC000000000000000uLL;
  v34[2].m128i_i32[0] = v34[2].m128i_i32[0] & 0xFFFF0000 | 1;
  a2[2].m128i_i32[0] = a2[2].m128i_i32[0] & 0xFFF8FFFF | 0x50000;
  if ( v36 )
  {
    *(_DWORD *)(v36 + 188) |= 0x80u;
    v34[2].m128i_i32[0] |= 0x200000u;
    v34->m128i_i64[0] = v36 + 32;
    *(_QWORD *)(v36 + 256) = v34;
  }
  v38 = (__int64 *)(v34->m128i_i64[1] | 0x8000000000000000uLL);
  PteShadow = *v38;
  if ( (unsigned __int64)v38 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v38 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v34->m128i_i64[1] | 0x8000000000000000uLL, *v38);
  updated = MiUpdateTransitionPteFrame(PteShadow, v33);
  v59 = updated;
  v44 = 0;
  if ( (unsigned __int64)v38 >= v45 && (unsigned __int64)v38 <= v43 )
  {
    v44 = MiSanitizeShadowPxe(v43, &v59, v41);
    updated = v59;
  }
  *v38 = updated;
  if ( v44 )
    MiWritePteShadow(v38, updated, v41, v42);
  _InterlockedAnd64(&v34[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    if ( !(unsigned int)MiIsProtoPoolPfnInNonPagedPool(a3) )
    {
      LODWORD(v59) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v59);
        while ( *(__int64 *)(a3 + 24) < 0 );
      }
      MiAddLockedPageCharge(a3, 3, v47, v48);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v46) = 17;
    MiUnlockProtoPoolPage(a3, v46, v47);
    v49 = v58;
    v50 = v58;
    *v61 = v36;
    MiCopyPage(v33, v50, 0x102u);
    MiLockProtoPoolPage((ULONG_PTR)v38, 0LL);
    if ( !(unsigned int)MiIsProtoPoolPfnInNonPagedPool(a3) )
    {
      LODWORD(v59) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v59);
        while ( *(__int64 *)(a3 + 24) < 0 );
      }
      MiRemoveLockedPageChargeAndDecRef(a3);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    v49 = v58;
    MiCopyPage(v33, v58, 0x102u);
  }
  LODWORD(v59) = 0;
  while ( _interlockedbittestandset64(&a2[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v59);
    while ( a2[1].m128i_i64[1] < 0 );
  }
  MiSetPfnIdentity(a2, 0LL);
  MiInsertPageInFreeOrZeroedList(v49);
  _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  LODWORD(v59) = 0;
  while ( _interlockedbittestandset64(&v34[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v59);
    while ( v34[1].m128i_i64[1] < 0 );
  }
  v51 = v34[2].m128i_i32[0];
  v34[2].m128i_i32[0] = v51 & 0xFFDFFFFF;
  v34->m128i_i64[0] = 0LL;
  MiRemoveLockedPageCharge(v34);
  if ( !v36 )
    return v34;
  *(_DWORD *)(v36 + 188) &= ~0x80u;
  if ( (v34[1].m128i_i64[1] & 0x4000000000000000LL) == 0 )
    return v34;
  v54 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( (_WORD)v51 == 1 )
  {
    if ( (v34[1].m128i_i32[0] & 0x400LL) == 0 )
    {
      v54 = v34[1].m128i_u64[0];
      if ( (v54 & 8) == 0 )
      {
        v55 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( (v54 & 4) != 0 )
          v55 = v34[1].m128i_u64[0];
        v54 = v55;
      }
    }
    MiInsertPageInFreeOrZeroedList(v33);
  }
  _InterlockedAnd64(&v34[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v52) = 17;
    MiUnlockProtoPoolPage(a3, v52, v53);
  }
  if ( v54 )
    MiReleasePageFileInfo(v60, v54, 1LL);
  return 0LL;
}
