/*
 * XREFs of MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A9CD0
 * Callers:
 *     MiCachedPageCandidate @ 0x1402A9B60 (MiCachedPageCandidate.c)
 *     MmCopyToCachedPage @ 0x1402D05F0 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiResolveTransitionFault @ 0x1403A6F04 (MiResolveTransitionFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140264F40 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x1402836C0 (MiGetSubsectionFromPte.c)
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiMakeDemandZeroPte @ 0x14028B2D0 (MiMakeDemandZeroPte.c)
 *     MiReplaceTransitionPage @ 0x140293C88 (MiReplaceTransitionPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295CA0 (MiReleaseFreshPageAtDpc.c)
 *     MiLockLeafPage @ 0x140298E10 (MiLockLeafPage.c)
 *     MiReuseStandbyPage @ 0x1402AA32C (MiReuseStandbyPage.c)
 *     MiReturnFreeZeroPage @ 0x1402AA690 (MiReturnFreeZeroPage.c)
 *     MiPageAvailable @ 0x1402AA7BC (MiPageAvailable.c)
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     MiUnlinkPageFromListEx @ 0x1402F7250 (MiUnlinkPageFromListEx.c)
 *     MiLockTransitionLeafPageEx @ 0x14033E050 (MiLockTransitionLeafPageEx.c)
 *     MiDiscardTransitionPfnEx @ 0x140369FE0 (MiDiscardTransitionPfnEx.c)
 *     MiInitializePageColorBase @ 0x14036FE20 (MiInitializePageColorBase.c)
 *     MiComputeFaultNode @ 0x140370A58 (MiComputeFaultNode.c)
 */

__int64 __fastcall MiHandleSpecialPurposeMemoryCachedFault(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        ULONG_PTR a4)
{
  __int64 v7; // rcx
  ULONG_PTR v8; // rsi
  __int64 v9; // r13
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // ebx
  __int64 Page; // r14
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned __int64 DemandZeroPte; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int128 v34; // [rsp+20h] [rbp-38h] BYREF
  __int64 v35; // [rsp+60h] [rbp+8h] BYREF

  v35 = 0LL;
  v34 = 0LL;
  v7 = 0LL;
  v8 = a4;
  v9 = **(_QWORD **)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(a4 + 40) >> 43) & 0x3FFLL)) + 21400LL);
  if ( *(__int64 *)(a4 + 40) < 0 && (*(_DWORD *)(a4 + 16) & 0x400LL) != 0 )
    v7 = *(_QWORD *)MiGetSubsectionFromPte(*(_QWORD *)(a4 + 16));
  if ( a1 )
  {
    v10 = MiComputeFaultNode(a1, v7, &v35);
    v11 = *(_QWORD *)(a1 + 56);
    v12 = v10;
  }
  else
  {
    v12 = (*(_DWORD *)(v7 + 56) >> 20) & 0x7F;
    v11 = 0LL;
  }
  MiInitializePageColorBase(v11, 3LL, v12, &v34);
  v13 = (unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)v34, 1u);
  v14 = DWORD2(v34) & 0xFFFFFF00 | v13;
  v15 = 131;
  if ( (unsigned int)MiGetSystemRegionType(a2) != 11 )
    v15 = 3;
  Page = MiGetPage(v9, v14, v15);
  if ( Page != -1 )
    goto LABEL_26;
  if ( !(unsigned int)MiPageAvailable(v9, v15) )
  {
    MiReuseStandbyPage(v8);
    MiReturnFreeZeroPage(v8, 0LL, v17);
LABEL_12:
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  Page = MiGetPage(v9, v14, v15 & 0xFFFFFFFD);
  if ( Page == -1 )
    return 0LL;
  if ( (unsigned __int64)a3 < 0xFFFFF68000000000uLL || (unsigned __int64)a3 > 0xFFFFF6FFFFFFFFFFuLL )
    v18 = MiLockLeafPage(a3, 2);
  else
    v18 = MiLockTransitionLeafPageEx((ULONG_PTR)a3);
  v8 = v18;
  if ( !v18 )
  {
    v21 = 48 * Page - 0x220000000000LL;
LABEL_39:
    MiReleaseFreshPageAtDpc(v21, v19, v20);
    return 0LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v18 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
  {
LABEL_26:
    v24 = 48 * Page - 0x220000000000LL;
    if ( (MiUnlinkPageFromListEx(v8) & 3) != 0 || *(int *)(v8 + 32) < 0 )
    {
      MiDiscardTransitionPfnEx(v8, 0LL, v25, v26);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v21 = 48 * Page - 0x220000000000LL;
      goto LABEL_39;
    }
    LODWORD(v35) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v35);
      while ( *(__int64 *)(v24 + 24) < 0 );
    }
    if ( !(unsigned int)MiReplaceTransitionPage(v8, 48 * Page - 0x220000000000LL, 9LL, 3) )
    {
      MiReturnFreeZeroPage(48 * Page - 0x220000000000LL, 0LL, v27);
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiDiscardTransitionPfnEx(v8, 0LL, v28, v29);
      goto LABEL_12;
    }
    *(_QWORD *)(v8 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v30 = *(_QWORD *)(v8 + 16);
    if ( v30 )
      DemandZeroPte = v30 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    else
      DemandZeroPte = MiMakeDemandZeroPte(4);
    *(_QWORD *)(v8 + 16) = DemandZeroPte;
    MiReturnFreeZeroPage(v8, 0LL, v27);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiInsertPageInList(48 * Page - 0x220000000000LL, 4LL, v32, v33);
    return 48 * Page - 0x220000000000LL;
  }
  else
  {
    v22 = 48 * Page - 0x220000000000LL;
    LODWORD(v35) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v35);
      while ( *(__int64 *)(v22 + 24) < 0 );
    }
    MiReturnFreeZeroPage(48 * Page - 0x220000000000LL, 0LL, v20);
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return v8;
  }
}
