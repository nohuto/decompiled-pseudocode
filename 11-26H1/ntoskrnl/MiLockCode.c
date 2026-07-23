/*
 * XREFs of MiLockCode @ 0x14029558C
 * Callers:
 *     MiLockRegistryRecoverySection @ 0x14086A780 (MiLockRegistryRecoverySection.c)
 *     MiLockImageSection @ 0x140A9E9E8 (MiLockImageSection.c)
 *     MiHandleDriverNonPagedSections @ 0x140ACAFE8 (MiHandleDriverNonPagedSections.c)
 *     MmResetDriverPaging @ 0x140ACB510 (MmResetDriverPaging.c)
 *     MiDisablePagingOfDriver @ 0x140ACB608 (MiDisablePagingOfDriver.c)
 *     MmLockPreChargedPagedPool @ 0x140B635B0 (MmLockPreChargedPagedPool.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiTradeActivePage @ 0x140294DF8 (MiTradeActivePage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295200 (MiReleaseFreshPageAtDpc.c)
 *     MiReferenceDriverPage @ 0x140295384 (MiReferenceDriverPage.c)
 *     MiActivePageTradeable @ 0x140295414 (MiActivePageTradeable.c)
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 *     MiRemoveSystemImagePage @ 0x14038C1A4 (MiRemoveSystemImagePage.c)
 *     MiMakeDriverPagesPrivate @ 0x14038C790 (MiMakeDriverPagesPrivate.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A4B6C (MiCopyOnWriteCheckConditions.c)
 *     MiWriteValidPteVolatile @ 0x140443050 (MiWriteValidPteVolatile.c)
 *     MiBetterDriverPageNeeded @ 0x14048A614 (MiBetterDriverPageNeeded.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiPrefetchDriverPages @ 0x140AAF940 (MiPrefetchDriverPages.c)
 *     MiAllocateDriverPage @ 0x140AEDA3C (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, ULONG_PTR *a2, unsigned __int64 a3, char a4)
{
  ULONG_PTR *v5; // r12
  __int64 v7; // r15
  unsigned __int64 v8; // rbx
  void *v9; // r14
  int v10; // ecx
  __int64 v11; // rdi
  __int64 ProcessorFlushList; // rbp
  char v13; // si
  ULONG_PTR v14; // rbx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r15
  const __m128i *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  char WsleContents; // bl
  _WORD *v22; // r10
  __int16 v23; // r11
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  char v29; // al
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v33; // rdx
  __int64 v34; // r9
  __m128i *v35; // r12
  unsigned __int64 v36; // r15
  __int64 v37; // rax
  unsigned __int64 DemandZeroPte; // rax
  __int64 v39; // rdx
  char v40; // [rsp+30h] [rbp-78h]
  int v41; // [rsp+34h] [rbp-74h]
  int v42; // [rsp+38h] [rbp-70h] BYREF
  __int64 DriverPage; // [rsp+40h] [rbp-68h]
  __int64 v44; // [rsp+48h] [rbp-60h]
  __int64 v45; // [rsp+50h] [rbp-58h]
  __int64 v46; // [rsp+58h] [rbp-50h]
  ULONG_PTR *v48; // [rsp+B8h] [rbp+10h]

  v48 = a2;
  v5 = a2;
  v7 = 0LL;
  v45 = 0LL;
  v8 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v8) )
    return 0LL;
  v9 = &unk_140E37200;
  if ( (unsigned int)MiGetSystemRegionType(v8) != 5 )
    v9 = &unk_140E36F80;
  v10 = 0;
  v41 = 0;
  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 2) == 0 )
      v10 = 2;
    v41 = v10;
  }
  MiPrefetchDriverPages(v5, a3);
  v11 = 0LL;
  DriverPage = -1LL;
  v44 = 0LL;
  ProcessorFlushList = 0LL;
  v13 = MiLockWorkingSetShared(v9);
  v40 = v13;
  do
  {
    if ( v11 )
    {
      if ( ((unsigned __int16)v5 & 0xFFF) != 0 )
        goto LABEL_11;
      if ( ProcessorFlushList )
      {
        MiFlushTbList(ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTableInternal(v9, v11);
    }
    v11 = (((unsigned __int64)v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v44 = v11;
    MiLockPageTableInternal(v9, v11, 0LL);
LABEL_11:
    v14 = *v5;
    v15 = (((_QWORD)v5 << 25) - v7) >> 16;
    if ( (*v5 & 1) == 0 )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList(ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTableInternal(v9, v11);
      LOBYTE(v26) = v13;
      MiUnlockWorkingSetShared(v9, v26);
      v27 = MmAccessFault(0LL, (((_QWORD)v5 << 25) - v7) >> 16);
      if ( v27 < 0 )
        KeBugCheckEx(0x1Au, 0x101BuLL, (((_QWORD)v5 << 25) - v7) >> 16, v14, v27);
      v11 = 0LL;
      v44 = 0LL;
      MiLockWorkingSetShared(v9);
      goto LABEL_36;
    }
    v16 = (v14 >> 12) & 0xFFFFFFFFFFLL;
    v17 = (const __m128i *)(48 * v16 - 0x220000000000LL);
    if ( v17->m128i_i64[1] > 0 && (v17[2].m128i_i64[1] & 0x10000000000LL) == 0 )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList(ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      v30 = MiCopyOnWrite(v15, (_DWORD)v5, -1, 0, 0LL);
      if ( v30 >= 0 )
        goto LABEL_34;
      MiUnlockPageTableInternal(v9, v11);
      v13 = v40;
      LOBYTE(v31) = v40;
      MiUnlockWorkingSetShared(v9, v31);
      MiCopyOnWriteCheckConditions(v9, (unsigned int)v30, 0LL);
      goto LABEL_80;
    }
    if ( v17[2].m128i_i64[1] < 0 && (a4 & 1) != 0 )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList(ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTableInternal(v9, v11);
      v13 = v40;
      LOBYTE(v33) = v40;
      MiUnlockWorkingSetShared(v9, v33);
      v34 = 0LL;
LABEL_79:
      MiMakeDriverPagesPrivate(a1, v5, a3, v34);
LABEL_80:
      v11 = 0LL;
      v44 = 0LL;
      MiLockWorkingSetShared(v9);
      goto LABEL_35;
    }
    if ( (v14 & 0x800) == 0 && (v14 & 0x200) != 0 )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList(ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTableInternal(v9, v11);
      v13 = v40;
      LOBYTE(v39) = v40;
      MiUnlockWorkingSetShared(v9, v39);
      v34 = 1LL;
      goto LABEL_79;
    }
    v18 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v46 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * (((unsigned __int64)v17[2].m128i_i64[1] >> 43) & 0x3FF));
    WsleContents = MiGetWsleContents(stru_140E2ED08.ThreadLock, v15);
    if ( DriverPage != -1 )
    {
      v20 = 48 * DriverPage - 0x220000000000LL;
      v19 = *(_QWORD *)(v20 + 40) >> 43;
      LOWORD(v19) = v19 & 0x3FF;
      if ( (_WORD)v19 == *v22 )
        goto LABEL_23;
      MiReleaseFreshPageAtDpc(v20, v19, DriverPage);
      v23 = 1;
      DriverPage = -1LL;
    }
    if ( (a4 & 2) != 0 )
    {
      if ( (WsleContents & 0xF) == 9 )
        goto LABEL_23;
    }
    else if ( (unsigned __int16)v17[2].m128i_i32[0] != v23 )
    {
      goto LABEL_23;
    }
    if ( (v17[2].m128i_i64[1] & 0x20000000000000LL) != 0
      || !MiActivePageTradeable((ULONG_PTR)v17, v15, 2, v41)
      || (unsigned int)MiGetPfnSlabType(v17) != 9
      || *(_QWORD *)(v46 + 17088) && v16 >= *(_QWORD *)(v46 + 17072) )
    {
LABEL_23:
      v42 = 0;
      while ( _interlockedbittestandset64(&v17[1].m128i_i32[2], 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v42);
        while ( v17[1].m128i_i64[1] < 0 );
      }
      v24 = DriverPage;
      if ( DriverPage == -1 )
      {
LABEL_26:
        if ( (a4 & 2) == 0 )
          goto LABEL_27;
LABEL_64:
        if ( (WsleContents & 0xF) != 9 )
          MiRemoveSystemImagePage(v9, v5, v17);
LABEL_28:
        if ( (v17[1].m128i_i32[0] & 0x400LL) == 0 )
          v18 = MiCaptureDirtyBitToPfn((ULONG_PTR)v17);
        if ( (*v5 & 0x800) != 0 && (*v5 & 0x42) == 0 )
        {
          MiWriteValidPteVolatile(v5, 2LL);
          if ( !ProcessorFlushList )
          {
            ProcessorFlushList = MiGetProcessorFlushList();
            MiInitializeTbFlushList(ProcessorFlushList, (_DWORD)v9, *(_DWORD *)(ProcessorFlushList + 12), 0, 32);
          }
          MiInsertTbFlushEntry(ProcessorFlushList, v15, 1LL);
        }
        _InterlockedAnd64(&v17[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
        if ( v18 )
          MiReleasePageFileInfo(v46, v18, 1LL);
        v11 = v44;
        v48 = ++v5;
LABEL_34:
        v13 = v40;
LABEL_35:
        v7 = v45;
LABEL_36:
        v25 = DriverPage;
        continue;
      }
      if ( (a4 & 2) != 0 )
      {
        WsleContents = MiGetWsleContents(v20, v15);
        if ( (WsleContents & 0xF) == 9 )
          goto LABEL_64;
        v24 = DriverPage;
      }
      else if ( (unsigned __int16)v17[2].m128i_i32[0] != 1 )
      {
LABEL_27:
        MiReferenceDriverPage((__int64)v17);
        goto LABEL_28;
      }
      if ( (v17[2].m128i_i64[1] & 0x20000000000000LL) != 0 || !(unsigned int)MiBetterDriverPageNeeded(v46, v16, v24) )
        goto LABEL_26;
      _InterlockedAnd64(&v17[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      v35 = (__m128i *)(48 * v24 - 0x220000000000LL);
      if ( v17[2].m128i_i64[1] >= 0 )
      {
        v36 = 1LL;
        goto LABEL_89;
      }
      v36 = MiLockProtoPoolPage(v17->m128i_i64[1] | 0x8000000000000000uLL);
      if ( v36 )
      {
LABEL_89:
        if ( (unsigned int)MiTradeActivePage(v17, v35, v15, 2u, v41) == 1 )
        {
          v17[1].m128i_i64[0] = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          v37 = v17[1].m128i_i64[0];
          if ( v37 )
            DemandZeroPte = v37 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
          else
            DemandZeroPte = MiMakeDemandZeroPte(4);
          v17[1].m128i_i64[0] = DemandZeroPte;
          MiReleaseFreshPageAtDpc((__int64)v17, v19, v24);
          v17 = v35;
          DriverPage = -1LL;
        }
        if ( v36 > 1 )
        {
          LOBYTE(v19) = 17;
          MiUnlockProtoPoolPage(v36, v19);
        }
      }
      v42 = 0;
      while ( _interlockedbittestandset64(&v17[1].m128i_i32[2], 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v42);
        while ( v17[1].m128i_i64[1] < 0 );
      }
      v5 = v48;
      goto LABEL_26;
    }
    if ( ProcessorFlushList )
    {
      MiFlushTbList(ProcessorFlushList);
      MiReleaseProcessorFlushList();
      ProcessorFlushList = 0LL;
    }
    MiUnlockPageTableInternal(v9, v44);
    LOBYTE(v28) = v40;
    MiUnlockWorkingSetShared(v9, v28);
    v11 = 0LL;
    DriverPage = MiAllocateDriverPage(v46, ((unsigned __int32)v17[1].m128i_i32[0] >> 5) & 0x1F, 0LL);
    v44 = 0LL;
    v25 = DriverPage;
    v29 = MiLockWorkingSetShared(v9);
    v7 = v45;
    v13 = v29;
    v40 = v29;
  }
  while ( (unsigned __int64)v5 <= a3 );
  if ( v13 != 17 )
  {
    if ( ProcessorFlushList )
    {
      MiFlushTbList(ProcessorFlushList);
      MiReleaseProcessorFlushList();
    }
    if ( v11 )
      MiUnlockPageTableInternal(v9, v11);
    LOBYTE(v19) = v13;
    MiUnlockWorkingSetShared(v9, v19);
  }
  if ( v25 != -1 )
    MiReleaseFreshPage(48 * v25 - 0x220000000000LL, v19, v24);
  return 0LL;
}
