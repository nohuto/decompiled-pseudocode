/*
 * XREFs of MiLockPageTableInternal @ 0x1402B34E0
 * Callers:
 *     MmProtectPool @ 0x14024E084 (MmProtectPool.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x140282A34 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MiSwitchToTransition @ 0x1402A2130 (MiSwitchToTransition.c)
 *     MiMapWithLargePages @ 0x1402A2694 (MiMapWithLargePages.c)
 *     MiReleaseLargePdeMappings @ 0x1402A2D84 (MiReleaseLargePdeMappings.c)
 *     MiExpandSystemCache @ 0x1402A36A0 (MiExpandSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402A38D8 (MiReturnSystemCacheRegionsToKva.c)
 *     MiCheckProcessShadow @ 0x1402B2E70 (MiCheckProcessShadow.c)
 *     MmMapViewInSystemCache @ 0x1402E29A0 (MmMapViewInSystemCache.c)
 *     MiResolvePageTablePage @ 0x1402ECA70 (MiResolvePageTablePage.c)
 *     MiFastLockLeafPageTable @ 0x1402ED250 (MiFastLockLeafPageTable.c)
 *     MiLockPageLeafPageTable @ 0x1402EEB90 (MiLockPageLeafPageTable.c)
 *     MiFaultInPagedPool @ 0x140306688 (MiFaultInPagedPool.c)
 *     MiLockVirtualMemoryRevert @ 0x140306D38 (MiLockVirtualMemoryRevert.c)
 *     MiBuildForkPageTable @ 0x14030DC5C (MiBuildForkPageTable.c)
 *     MiSetPagingOfDriver @ 0x14030F6BC (MiSetPagingOfDriver.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140312684 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiMapMdlCommon @ 0x140312C2C (MiMapMdlCommon.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14031391C (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiUnlockPageTableRange @ 0x140317220 (MiUnlockPageTableRange.c)
 *     MmUnmapViewInSystemCache @ 0x14031E380 (MmUnmapViewInSystemCache.c)
 *     MiWalkPageTablesRecursively @ 0x1403270E0 (MiWalkPageTablesRecursively.c)
 *     MiAddMappedPtes @ 0x14033FE10 (MiAddMappedPtes.c)
 *     MiDeleteShadowStackPtes @ 0x1403407F4 (MiDeleteShadowStackPtes.c)
 *     MiDecommitLockNewPageTable @ 0x1403615D8 (MiDecommitLockNewPageTable.c)
 *     MiDeleteVaDirect @ 0x140361EF0 (MiDeleteVaDirect.c)
 *     MiUnlockCodePage @ 0x140367FA8 (MiUnlockCodePage.c)
 *     MiOutPageSingleKernelStack @ 0x140368960 (MiOutPageSingleKernelStack.c)
 *     MiMakeDriverPagesPrivate @ 0x14038A9E0 (MiMakeDriverPagesPrivate.c)
 *     MiSetSystemCodeProtection @ 0x14038B984 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039A698 (MmSetAddressRangeModifiedEx.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MmMapDriverTablePage @ 0x14040E640 (MmMapDriverTablePage.c)
 *     MiTryLockPageTableUnordered @ 0x140415E30 (MiTryLockPageTableUnordered.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140441A60 (MiGetWsAndMakePageTablesNx.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x14048BB40 (MiMakeModifiedSystemCachePteValid.c)
 *     MiLockActivePageTableInList @ 0x14048CC74 (MiLockActivePageTableInList.c)
 *     MiEncodeProtoFill @ 0x140499E80 (MiEncodeProtoFill.c)
 *     MiDirtyPte @ 0x1404B1254 (MiDirtyPte.c)
 *     MiFinishLastForkPageTable @ 0x1404D069C (MiFinishLastForkPageTable.c)
 *     MiInitializeWorkingSetList @ 0x1404D3AF0 (MiInitializeWorkingSetList.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404DDD28 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiSetPageProtection @ 0x1404EB458 (MiSetPageProtection.c)
 *     MiMapKernelScp @ 0x1404F3160 (MiMapKernelScp.c)
 *     MiUnmapKernelScp @ 0x1404F6C64 (MiUnmapKernelScp.c)
 *     MiMapMdlWithLargePages @ 0x140502900 (MiMapMdlWithLargePages.c)
 *     MiClearDriverTablePtes @ 0x140505FE8 (MiClearDriverTablePtes.c)
 *     MiLockProcessParentPage @ 0x14050E464 (MiLockProcessParentPage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140514568 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiUnmapMdlCommon @ 0x14051D098 (MiUnmapMdlCommon.c)
 *     MiReadyReservedView @ 0x140523988 (MiReadyReservedView.c)
 *     MiPageBootRegistry @ 0x1406E3A98 (MiPageBootRegistry.c)
 *     MiLockDriverPageRange @ 0x1406E57E8 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x1406E6D18 (MiReplaceImportEntry.c)
 *     MiInitializeDynamicBitmap @ 0x1406F50F4 (MiInitializeDynamicBitmap.c)
 *     MiAddMappedPtesPadding @ 0x1406F5824 (MiAddMappedPtesPadding.c)
 *     MiMarkBootGuardPage @ 0x1406FF204 (MiMarkBootGuardPage.c)
 *     MiUnmapLegacyAwePage @ 0x140702C2C (MiUnmapLegacyAwePage.c)
 *     MiProtectLargeKernelHalRange @ 0x1408644C0 (MiProtectLargeKernelHalRange.c)
 *     MiMapDummyPages @ 0x140CF38D0 (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140CF3E10 (MiProtectSharedUserPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140CFC214 (MiInitializeBootShadowStackPage.c)
 *     MiMarkBootKernelStack @ 0x140CFC7FC (MiMarkBootKernelStack.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1402B3438 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140416FD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
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
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
    else if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
