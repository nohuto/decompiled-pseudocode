/*
 * XREFs of MiLockPageTableInternal @ 0x1402FE1B0
 * Callers:
 *     MmProtectPool @ 0x14024F9E4 (MmProtectPool.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x140281FA4 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 *     MiMapWithLargePages @ 0x1402A1BE4 (MiMapWithLargePages.c)
 *     MiReleaseLargePdeMappings @ 0x1402A22D4 (MiReleaseLargePdeMappings.c)
 *     MiExpandSystemCache @ 0x1402A2BF0 (MiExpandSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402A2E28 (MiReturnSystemCacheRegionsToKva.c)
 *     MmMapViewInSystemCache @ 0x1402C4A60 (MmMapViewInSystemCache.c)
 *     MiResolvePageTablePage @ 0x1402CEAB0 (MiResolvePageTablePage.c)
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiLockPageLeafPageTable @ 0x1402D0C10 (MiLockPageLeafPageTable.c)
 *     MiFaultInPagedPool @ 0x1402E8708 (MiFaultInPagedPool.c)
 *     MiLockVirtualMemoryRevert @ 0x1402E8DB8 (MiLockVirtualMemoryRevert.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     MiSetPagingOfDriver @ 0x1402F173C (MiSetPagingOfDriver.c)
 *     MiTryLockPageTableUnordered @ 0x1402FCF54 (MiTryLockPageTableUnordered.c)
 *     MiCheckProcessShadow @ 0x1402FDB40 (MiCheckProcessShadow.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403146B4 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiMapMdlCommon @ 0x140314C5C (MiMapMdlCommon.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14031594C (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiUnlockPageTableRange @ 0x140319250 (MiUnlockPageTableRange.c)
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
 *     MiAddMappedPtes @ 0x140341E90 (MiAddMappedPtes.c)
 *     MiDeleteShadowStackPtes @ 0x140342874 (MiDeleteShadowStackPtes.c)
 *     MiDecommitLockNewPageTable @ 0x140363378 (MiDecommitLockNewPageTable.c)
 *     MiDeleteVaDirect @ 0x140363C90 (MiDeleteVaDirect.c)
 *     MiUnlockCodePage @ 0x140369D48 (MiUnlockCodePage.c)
 *     MiOutPageSingleKernelStack @ 0x14036A700 (MiOutPageSingleKernelStack.c)
 *     MiMakeDriverPagesPrivate @ 0x14038C790 (MiMakeDriverPagesPrivate.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039C3F8 (MmSetAddressRangeModifiedEx.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14043A570 (MiGetWsAndMakePageTablesNx.c)
 *     MmMapDriverTablePage @ 0x14045569C (MmMapDriverTablePage.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x140485680 (MiMakeModifiedSystemCachePteValid.c)
 *     MiLockActivePageTableInList @ 0x1404867B4 (MiLockActivePageTableInList.c)
 *     MiEncodeProtoFill @ 0x1404939D0 (MiEncodeProtoFill.c)
 *     MiDirtyPte @ 0x1404AA8E4 (MiDirtyPte.c)
 *     MiFinishLastForkPageTable @ 0x1404CA0CC (MiFinishLastForkPageTable.c)
 *     MiInitializeWorkingSetList @ 0x1404CD360 (MiInitializeWorkingSetList.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404D7408 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiSetPageProtection @ 0x1404E4A38 (MiSetPageProtection.c)
 *     MiMapKernelScp @ 0x1404EC740 (MiMapKernelScp.c)
 *     MiUnmapKernelScp @ 0x1404F0274 (MiUnmapKernelScp.c)
 *     MiMapMdlWithLargePages @ 0x1404FC1D0 (MiMapMdlWithLargePages.c)
 *     MiClearDriverTablePtes @ 0x1404FF898 (MiClearDriverTablePtes.c)
 *     MiLockProcessParentPage @ 0x140507ED4 (MiLockProcessParentPage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14050DFD8 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiUnmapMdlCommon @ 0x14051F5C4 (MiUnmapMdlCommon.c)
 *     MiReadyReservedView @ 0x140525FF8 (MiReadyReservedView.c)
 *     MiPageBootRegistry @ 0x1406E8744 (MiPageBootRegistry.c)
 *     MiLockDriverPageRange @ 0x1406EA498 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x1406EB9C8 (MiReplaceImportEntry.c)
 *     MiInitializeDynamicBitmap @ 0x1406F9D64 (MiInitializeDynamicBitmap.c)
 *     MiAddMappedPtesPadding @ 0x1406FA494 (MiAddMappedPtesPadding.c)
 *     MiMarkBootGuardPage @ 0x140703ED4 (MiMarkBootGuardPage.c)
 *     MiUnmapLegacyAwePage @ 0x1407078FC (MiUnmapLegacyAwePage.c)
 *     MiProtectLargeKernelHalRange @ 0x14086A8A0 (MiProtectLargeKernelHalRange.c)
 *     MiMapDummyPages @ 0x140CF9C50 (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140CFA190 (MiProtectSharedUserPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140D02594 (MiInitializeBootShadowStackPage.c)
 *     MiMarkBootKernelStack @ 0x140D02B7C (MiMarkBootKernelStack.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1402FE108 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiLockPageTableInternal(signed __int64 a1, unsigned __int64 a2, char a3)
{
  signed __int64 Process; // rdx
  unsigned __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned int v8; // ebp
  __int64 v9; // r8
  signed __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int v12; // ebx
  char v13; // al
  unsigned int v14; // ebp
  ULONG *v15; // rdx
  __int64 v16; // rcx
  signed __int64 v17; // rcx
  __int64 v19; // rcx
  volatile LONG *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  signed __int64 v24; // rax
  unsigned __int64 v25; // rcx
  char v26; // si
  unsigned __int32 v27; // r9d
  volatile signed __int32 *v28; // r14
  int i; // edx
  int v30; // r8d
  bool v31; // zf
  signed __int32 v32; // eax
  signed __int32 v33; // r8d
  signed __int32 v34; // eax
  int v35; // [rsp+58h] [rbp+10h] BYREF

  Process = a1;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = 1;
    v13 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v13 )
    {
      if ( v13 == 7 )
      {
        v14 = 1;
      }
      else
      {
        v14 = 3;
        if ( v13 == 5 )
          v14 = 0;
      }
      v15 = &MiState + 2 * v14 + 2278;
    }
    else
    {
      v14 = 2;
      v15 = (ULONG *)(a1 + 176);
    }
    v16 = v14 + 2 * (v14 + 2504LL);
    *((_QWORD *)&CurrentPrcb->MxCsr + v16) = 0LL;
    v17 = (signed __int64)CurrentPrcb + 8 * v16;
    *(_QWORD *)(v17 + 8) = v15;
    if ( (a3 & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v15);
        if ( *(_QWORD *)v15 || _InterlockedCompareExchange64((volatile signed __int64 *)v15, v17, 0LL) )
        {
          v12 = 0;
          _mm_pause();
        }
        return v12;
      }
      else
      {
        return KiTryToAcquireQueuedSpinLockInstrumented(v17, v15);
      }
    }
    else if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v21 = _InterlockedExchange64((volatile __int64 *)v15, v17);
      if ( !v21 )
        return 1LL;
      KxWaitForLockOwnerShip(v17, v21, (__int64)CurrentPrcb);
      return 1LL;
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v17, v15);
      return 1LL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v19 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count;
      if ( v19 )
      {
        v20 = (volatile LONG *)(v19 + 4 * ((a2 >> 3) & 0x1FF));
        if ( (a3 & 4) != 0 )
        {
          ExAcquireSpinLockSharedAtDpcLevel(v20);
          return 1LL;
        }
        if ( (a3 & 1) == 0 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel(v20);
          return 1LL;
        }
        return (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v20) != 0;
      }
    }
    if ( (*(_DWORD *)(Process + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v35 = 0;
      v25 = (unsigned __int64)(2 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3)) >> 5;
      v26 = (2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F;
      v27 = *(&MiState + v25 + 1467);
      v28 = (volatile signed __int32 *)(&MiState + v25 + 1467);
      for ( i = a3 & 1; ; i = a3 & 1 )
      {
        v30 = 2 << v26;
        while ( ((v27 >> v26) & 1) == 0 )
        {
          v32 = _InterlockedCompareExchange(v28, ~v30 & (v27 | (1 << v26)), v27);
          v31 = v27 == v32;
          v27 = v32;
          if ( v31 )
            return 1LL;
          if ( i )
            return 0LL;
        }
        if ( i )
          break;
        if ( ((v27 >> v26) & 2) != 0 )
        {
          do
          {
            KeYieldProcessorEx(&v35);
            v27 = *v28;
          }
          while ( (((unsigned __int32)*v28 >> v26) & 1) != 0 );
        }
        else
        {
          v33 = v27 | v30;
          v34 = _InterlockedCompareExchange(v28, v33, v27);
          v31 = v27 == v34;
          v27 = v34;
          if ( v31 )
            v27 = v33;
        }
      }
      return 0LL;
    }
    v6 = *(_QWORD *)a2;
    v7 = 0;
    v8 = 0;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (v6 & 1) != 0
      && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0)
      && (MiFlags & 0x1800000) != 0 )
    {
      Process = (signed __int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 352) != 1 )
      {
        if ( Process )
        {
          v22 = *(_QWORD *)(Process + 1288);
          if ( v22 )
          {
            v23 = *(_QWORD *)(v22 + 8 * ((a2 >> 3) & 0x1FF));
            if ( (v23 & 0x20) != 0 )
              v6 |= 0x20uLL;
            Process = v6;
            v6 |= 0x42uLL;
            if ( (v23 & 0x42) == 0 )
              v6 = Process;
          }
        }
      }
    }
LABEL_8:
    v9 = a3 & 1;
    while ( (v6 & 1) != 0 )
    {
      if ( (v6 & 0x1000000000000000LL) != 0 )
      {
        if ( (a3 & 1) != 0 )
          return v7;
        if ( ((v6 >> 60) & 2) != 0 )
        {
          do
          {
            if ( (++v8 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v6, Process, v9) )
            {
              HvlNotifyLongSpinWait(v8);
            }
            else
            {
              _mm_pause();
            }
            v6 = *(_QWORD *)a2;
          }
          while ( (*(_QWORD *)a2 & 0x1000000000000000LL) != 0 );
        }
        else
        {
          Process = v6 | 0x2000000000000000LL;
          if ( (MiFlags & 0x8000000) != 0 )
            _mm_lfence();
          v24 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, Process, v6);
          if ( v6 == v24 )
            v6 |= 0x2000000000000000uLL;
          else
            v6 = v24;
        }
        goto LABEL_8;
      }
      Process = v6 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
      if ( (MiFlags & 0x8000000) != 0 )
        _mm_lfence();
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, Process, v6);
      if ( v6 == v10 )
        return 1;
      v6 = v10;
      if ( (a3 & 1) != 0 )
        return v7;
    }
    return v7;
  }
}
