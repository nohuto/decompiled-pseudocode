/*
 * XREFs of MiMigratePfn @ 0x1402F6990
 * Callers:
 *     MiHandleTransitionFault @ 0x1402F6550 (MiHandleTransitionFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140264F40 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiCopyPage @ 0x140293FA4 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x140294570 (MiCopyPfnEntryEx.c)
 *     MiReturnFreeZeroPage @ 0x1402AA690 (MiReturnFreeZeroPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiFinalizePageAttribute @ 0x1402D85E0 (MiFinalizePageAttribute.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x1402F5D30 (MiAddLockedPageCharge.c)
 *     MiObtainFaultCharges @ 0x1402F6350 (MiObtainFaultCharges.c)
 *     MiCanPageMove @ 0x1402FDC9C (MiCanPageMove.c)
 *     MiUpdateTransitionPteFrame @ 0x14030E180 (MiUpdateTransitionPteFrame.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiIsProtoPoolPfnInNonPagedPool @ 0x14031C220 (MiIsProtoPoolPfnInNonPagedPool.c)
 *     MiWritePteShadow @ 0x14031C28C (MiWritePteShadow.c)
 *     MiRemoveLockedPageCharge @ 0x14031D180 (MiRemoveLockedPageCharge.c)
 *     MiReturnFaultCharges @ 0x140338D0C (MiReturnFaultCharges.c)
 *     MiSanitizeShadowPxe @ 0x140342108 (MiSanitizeShadowPxe.c)
 *     MiSetPfnIdentity @ 0x140369440 (MiSetPfnIdentity.c)
 *     MiInitializePageColorBase @ 0x14036FE20 (MiInitializePageColorBase.c)
 *     MiComputeFaultNode @ 0x140370A58 (MiComputeFaultNode.c)
 *     MiGetInPageSupportBlock @ 0x140396FF0 (MiGetInPageSupportBlock.c)
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
  __int64 v46; // r8
  unsigned __int64 v47; // r9
  ULONG_PTR v48; // r13
  ULONG_PTR v49; // rdx
  __int32 v50; // r14d
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // rax
  _DWORD *i; // r8
  __int128 v54; // [rsp+20h] [rbp-58h] BYREF
  ULONG_PTR v55; // [rsp+30h] [rbp-48h]
  __int64 v56; // [rsp+80h] [rbp+8h] BYREF
  struct _KEVENT *v57; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v58; // [rsp+98h] [rbp+20h]

  v58 = a4;
  v4 = a2[2].m128i_i64[1];
  v5 = a1[7];
  v6 = *a1;
  v8 = a1[2];
  v54 = 0LL;
  if ( (v4 & 0x20000000000000LL) != 0 )
    return (__m128i *)a2;
  if ( byte_140E3BD26 )
  {
    v11 = (__int64)((unsigned __int128)((__int64)a2[0x22000000000LL].m128i_i64 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v12 = ((v11 >> 63) + v11) >> 9;
    if ( *(_BYTE *)(qword_140E3D0C0 + 2 * v12) )
    {
      if ( *(_BYTE *)(qword_140E3D0C0 + 2 * v12) != 10 )
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
  v55 = ((unsigned __int64)((unsigned __int128)(((__int64)a2->m128i_i64 - v15) * (__int128)v14) >> 64) >> 63)
      + ((__int64)((unsigned __int128)(((__int64)a2->m128i_i64 - v15) * (__int128)v14) >> 64) >> 3);
  v16 = MiPageToNode(v55);
  v56 = 0LL;
  v17 = v16;
  v18 = MiComputeFaultNode(a1, 0LL, &v56);
  MiInitializePageColorBase(v5, 3LL, v18, &v54);
  v19 = (DWORD2(v54) >> 9) & 0x3F;
  if ( v19 == v17 )
    return (__m128i *)a2;
  v20 = *(struct _KEVENT **)(stru_140E2EB88.ThreadLock + 8 * (((unsigned __int64)a2[2].m128i_i64[1] >> 43) & 0x3FF));
  v57 = v20;
  v21 = DWORD2(v54) & 0xFFFFFF00;
  v22 = v21 | (unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)v54, 1u);
  v23 = (unsigned int *)(qword_140E2D690 + 4LL * v19 * (unsigned int)(unsigned __int16)KeNumberNodes);
  v24 = &v23[(unsigned __int16)KeNumberNodes];
  *(_QWORD *)&v54 = v24;
  while ( v23 < v24 )
  {
    v25 = *v23;
    if ( (_DWORD)v25 == v17 )
      return (__m128i *)a2;
    v26 = (__int64)&v20->Header.WaitListHead.Blink[3520 * v25];
    if ( *(_QWORD *)(v26 + 3080) || *(_QWORD *)(v26 + 3088) )
      break;
    v24 = (unsigned int *)v54;
    ++v23;
  }
  v27 = a2[2].m128i_i64[1];
  LOBYTE(v28) = 0;
  LODWORD(v56) = 0;
  if ( v27 < 0 && (a2[1].m128i_i32[0] & 0x400LL) != 0 )
  {
    v28 = 1;
LABEL_18:
    LODWORD(v56) = v28;
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
  v31 = v57;
  Page = MiGetPage((__int64)v57, v30, v29);
  v33 = Page;
  if ( Page == -1LL )
  {
LABEL_78:
    MiReturnFaultCharges(v31, 1LL, (unsigned int)v56);
    return (__m128i *)a2;
  }
  v34 = (__m128i *)(48 * Page - 0x220000000000LL);
  v35 = MiPageToNode(Page);
  if ( v19 != v35 )
  {
    for ( i = (_DWORD *)(qword_140E2D690 + 4LL * v19 * (unsigned int)(unsigned __int16)KeNumberNodes);
          (unsigned __int64)i < (unsigned __int64)v54;
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
    v31 = v57;
LABEL_75:
    LODWORD(v57) = 0;
    while ( _interlockedbittestandset64(&v34[1].m128i_i32[2], 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v57);
      while ( v34[1].m128i_i64[1] < 0 );
    }
    MiReturnFreeZeroPage((__int64)v34, 0);
    _InterlockedAnd64(&v34[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_78;
  }
  v36 = 0LL;
LABEL_26:
  v37 = ((unsigned __int32)a2[2].m128i_i32[0] >> 22) & 3;
  LODWORD(v56) = 0;
  while ( _interlockedbittestandset64(&v34[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v56);
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
  v56 = updated;
  v44 = 0;
  if ( (unsigned __int64)v38 >= v45 && (unsigned __int64)v38 <= v43 )
  {
    v44 = MiSanitizeShadowPxe(v43, &v56, v41);
    updated = v56;
  }
  *v38 = updated;
  if ( v44 )
    MiWritePteShadow(v38, updated, v41, v42);
  _InterlockedAnd64(&v34[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    if ( !(unsigned int)MiIsProtoPoolPfnInNonPagedPool(a3) )
    {
      LODWORD(v56) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v56);
        while ( *(__int64 *)(a3 + 24) < 0 );
      }
      MiAddLockedPageCharge(a3, 3, v46, v47);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockProtoPoolPage(a3, 0x11u);
    v48 = v55;
    v49 = v55;
    *v58 = v36;
    MiCopyPage(v33, v49, 0x102u);
    MiLockProtoPoolPage((ULONG_PTR)v38, 0LL);
    if ( !(unsigned int)MiIsProtoPoolPfnInNonPagedPool(a3) )
    {
      LODWORD(v56) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v56);
        while ( *(__int64 *)(a3 + 24) < 0 );
      }
      MiRemoveLockedPageChargeAndDecRef(a3);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    v48 = v55;
    MiCopyPage(v33, v55, 0x102u);
  }
  LODWORD(v56) = 0;
  while ( _interlockedbittestandset64(&a2[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v56);
    while ( a2[1].m128i_i64[1] < 0 );
  }
  MiSetPfnIdentity(a2, 0LL);
  MiInsertPageInFreeOrZeroedList(v48);
  _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  LODWORD(v56) = 0;
  while ( _interlockedbittestandset64(&v34[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v56);
    while ( v34[1].m128i_i64[1] < 0 );
  }
  v50 = v34[2].m128i_i32[0];
  v34[2].m128i_i32[0] = v50 & 0xFFDFFFFF;
  v34->m128i_i64[0] = 0LL;
  MiRemoveLockedPageCharge(v34);
  if ( !v36 )
    return v34;
  *(_DWORD *)(v36 + 188) &= ~0x80u;
  if ( (v34[1].m128i_i64[1] & 0x4000000000000000LL) == 0 )
    return v34;
  v51 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( (_WORD)v50 == 1 )
  {
    if ( (v34[1].m128i_i32[0] & 0x400LL) == 0 )
    {
      v51 = v34[1].m128i_u64[0];
      if ( (v51 & 8) == 0 )
      {
        v52 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( (v51 & 4) != 0 )
          v52 = v34[1].m128i_u64[0];
        v51 = v52;
      }
    }
    MiInsertPageInFreeOrZeroedList(v33);
  }
  _InterlockedAnd64(&v34[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
    MiUnlockProtoPoolPage(a3, 0x11u);
  if ( v51 )
    MiReleasePageFileInfo(v57, v51, 1);
  return 0LL;
}
