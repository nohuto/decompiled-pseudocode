/*
 * XREFs of MiUnlockProtoPoolPage @ 0x1402B5C00
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282330 (MiMakePageAvoidRead.c)
 *     MiTradeForLeafPage @ 0x140293044 (MiTradeForLeafPage.c)
 *     MiReplaceLockedPage @ 0x140294BC4 (MiReplaceLockedPage.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 *     MiUnlockDataCopyPages @ 0x1402B45FC (MiUnlockDataCopyPages.c)
 *     MiGetWorkingSetInfoList @ 0x1402B4660 (MiGetWorkingSetInfoList.c)
 *     MiQueryPteAttributes @ 0x1402B4C40 (MiQueryPteAttributes.c)
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MiResolveDemandZeroFault @ 0x1402B6900 (MiResolveDemandZeroFault.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiGetPageProtection @ 0x1402E8264 (MiGetPageProtection.c)
 *     MiCombineWithStandbyExisting @ 0x1402E9D44 (MiCombineWithStandbyExisting.c)
 *     MiCombineWithExisting @ 0x1402EA2C4 (MiCombineWithExisting.c)
 *     MiResolveProtoCombine @ 0x1402EAA7C (MiResolveProtoCombine.c)
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MiInitializeImageProtos @ 0x14033A684 (MiInitializeImageProtos.c)
 *     MiTranslatePageForCopy @ 0x14033ADCC (MiTranslatePageForCopy.c)
 *     MmCopyMemory @ 0x14033B4D0 (MmCopyMemory.c)
 *     MiDeleteMergedPte @ 0x14033E880 (MiDeleteMergedPte.c)
 *     MiBuildReservationCluster @ 0x14033F334 (MiBuildReservationCluster.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403413D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpace @ 0x140368E88 (MiReservePageFileSpace.c)
 *     MiCopyDataPageToImagePage @ 0x14036E218 (MiCopyDataPageToImagePage.c)
 *     MiFinishMdlForMappedFileFault @ 0x1403706B0 (MiFinishMdlForMappedFileFault.c)
 *     MiResolveMappedFileFault @ 0x140371380 (MiResolveMappedFileFault.c)
 *     MiResolveMappedFileFaultInitialize @ 0x140371768 (MiResolveMappedFileFaultInitialize.c)
 *     MiResolveMappedFileFaultGetInPageSupport @ 0x140371D00 (MiResolveMappedFileFaultGetInPageSupport.c)
 *     MiResolvePageFileFault @ 0x140371F8C (MiResolvePageFileFault.c)
 *     MiEvaluatePageFileRead @ 0x1403721F0 (MiEvaluatePageFileRead.c)
 *     MiAllocateInPageSupport @ 0x1403732B0 (MiAllocateInPageSupport.c)
 *     MiAllocatePageFileReadResources @ 0x1403737A8 (MiAllocatePageFileReadResources.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiHandleCollidedFault @ 0x14038D1C8 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038D338 (MiWaitForCollidedFaultComplete.c)
 *     MiResolveProtoPteFault @ 0x1403A7B0C (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1403A8C64 (MiResolveTransitionFault.c)
 *     MiSoftFaultMappedView @ 0x1403C5480 (MiSoftFaultMappedView.c)
 *     MiFlushSubsection @ 0x1403CB290 (MiFlushSubsection.c)
 *     MiWaitForPageWriteCompletion @ 0x1403CC510 (MiWaitForPageWriteCompletion.c)
 *     MiQueryPteCleanup @ 0x14040F8FC (MiQueryPteCleanup.c)
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 *     MiDeletePerSessionProtos @ 0x14044FF10 (MiDeletePerSessionProtos.c)
 *     MiReleasePageFileSectionInfo @ 0x1404628D4 (MiReleasePageFileSectionInfo.c)
 *     MiTradePageReleaseLocks @ 0x140468FDC (MiTradePageReleaseLocks.c)
 *     MiResolveMappedFileFaultByCopying @ 0x140482F1C (MiResolveMappedFileFaultByCopying.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404A7DCC (MiInitializeNewImageSectionProtos.c)
 *     MiCopyHeaderIfResident @ 0x1404AE5F4 (MiCopyHeaderIfResident.c)
 *     MiCopyFileOnlyPage @ 0x1404AF42C (MiCopyFileOnlyPage.c)
 *     MiAnyProtosAreMapped @ 0x1404B66A0 (MiAnyProtosAreMapped.c)
 *     MiMakeImageReadOnly @ 0x1404B7CFC (MiMakeImageReadOnly.c)
 *     MiMakeProtoPoolReadOnly @ 0x1404BF168 (MiMakeProtoPoolReadOnly.c)
 *     MiCreateFileOnlyImageFixupExtents @ 0x140500CE0 (MiCreateFileOnlyImageFixupExtents.c)
 *     MiFaultGetFileExtents @ 0x14050664C (MiFaultGetFileExtents.c)
 *     MiInsertLargeVadMapping @ 0x140509CA4 (MiInsertLargeVadMapping.c)
 *     MiQueryPteFaultLargeVa @ 0x140528B34 (MiQueryPteFaultLargeVa.c)
 *     MiInitializeDynamicPfnsWorker @ 0x1406EE0B0 (MiInitializeDynamicPfnsWorker.c)
 *     MiEliminateOverlappingExtents @ 0x1406FE3B4 (MiEliminateOverlappingExtents.c)
 *     MiEnableLargeSubsection @ 0x1406FE68C (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x1406FEA80 (MiFillFileOnlyProtoAsBad.c)
 *     MiSoftFaultClusterTradeReleaseLocks @ 0x14071747C (MiSoftFaultClusterTradeReleaseLocks.c)
 *     MiInitializeSharedUserData @ 0x140CF82E0 (MiInitializeSharedUserData.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiPfnReferenceCountIsZero @ 0x14031E3A4 (MiPfnReferenceCountIsZero.c)
 *     MiSignalCommitSignals @ 0x14042F350 (MiSignalCommitSignals.c)
 *     MiRestockOverCommit @ 0x1404F2AA4 (MiRestockOverCommit.c)
 *     MiBadRefCount @ 0x140500054 (MiBadRefCount.c)
 */

__int64 __fastcall MiUnlockProtoPoolPage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // si
  unsigned int v5; // edi
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rax
  unsigned __int64 v11; // rcx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  __int64 v15; // rax
  int v16; // r8d
  BOOL v17; // r12d
  char v18; // al
  __int64 v19; // rbp
  __int64 v20; // rdi
  _DWORD *v21; // rsi
  volatile LONG *v22; // rcx
  unsigned __int64 v23; // r15
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // r8
  struct _KPRCB *v28; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v30; // zf
  signed __int32 v31; // eax
  __int64 result; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  int v34; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 v35; // [rsp+58h] [rbp+10h]

  v35 = a2;
  v3 = a2;
  if ( (_BYTE)a2 == 18 )
  {
    v34 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v34);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  else
  {
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  if ( (*(_QWORD *)a1 & 0xFFFFFFFFFFELL) != 0 )
  {
    v7 = *(_QWORD *)a1 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL;
    v8 = *(_QWORD *)(8 * v7);
    v6 = 8 * v7;
    if ( v8 == 8 * v7 )
    {
      *(_QWORD *)a1 &= 0xFFFFF00000000001uLL;
    }
    else
    {
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(v8 + 8) != v6 || *(_QWORD *)(v9 + 8) != v8 )
        __fastfail(3u);
      *(_QWORD *)v6 = v9;
      *(_QWORD *)(v9 + 8) = v6;
      if ( *(_QWORD *)v6 == v6 )
      {
        *(_QWORD *)v8 = v8;
        v10 = (_QWORD *)v8;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v6 + 8LL) = v8;
        v10 = *(_QWORD **)(v6 + 8);
        *v10 = v8;
      }
      *(_QWORD *)(v8 + 8) = v10;
      *(_QWORD *)a1 = (v8 >> 3) & 0x1FFFFFFFFFFFFFFELL ^ (*(_QWORD *)a1 ^ (v8 >> 3) & 0x1FFFFFFFFFFFFFFELL) & 0xFFFFF00000000001uLL;
    }
  }
  else
  {
    v6 = 0LL;
    *(_DWORD *)(a1 + 32) &= ~0x200000u;
  }
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) == 0 )
  {
    v11 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
    if ( v11 < 0xFFFF800000000000uLL || byte_140E37BF0[((v11 >> 39) & 0x1FF) - 256] != 4 )
    {
      if ( !(unsigned __int16)*(_DWORD *)(a1 + 32) )
        MiBadRefCount(a1);
      v12 = *(_DWORD *)(a1 + 32);
      v13 = v12 ^ (unsigned __int16)(v12 ^ (v12 - 1));
      *(_DWORD *)(a1 + 32) = v13;
      if ( (_WORD)v12 == 1 && (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
      {
LABEL_92:
        MiPfnReferenceCountIsZero(a1, (a1 + 0x220000000000LL) / 48);
        goto LABEL_93;
      }
      if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 || (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
        goto LABEL_93;
      v14 = *(_DWORD *)(a1 + 32);
      v15 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v16 = 0;
      if ( (_WORD)v14 )
      {
        if ( (_WORD)v14 == 1 )
        {
          if ( v15 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
            v16 = 1;
          if ( !v16 )
            goto LABEL_93;
        }
        else if ( (_WORD)v14 != 2 || !v15 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
        {
          goto LABEL_93;
        }
      }
      v17 = (_WORD)v13 == 0;
      if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
        || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL )
      {
        v18 = *(_BYTE *)(a1 + 35);
        if ( (v18 & 0x20) != 0 )
        {
          *(_BYTE *)(a1 + 35) = v18 & 0xDF;
          goto LABEL_91;
        }
      }
      v19 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
      if ( (*(__int64 *)(a1 + 40) >= 0 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0)
        && ((*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
         || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL
         || (*(_BYTE *)(a1 + 35) & 0x20) == 0)
        && ((_WORD)v13 || (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0) )
      {
        goto LABEL_78;
      }
      v20 = 1LL;
      if ( !*(_QWORD *)(v19 + 17288) )
      {
LABEL_71:
        if ( (ULONG *)v19 == &MiSystemPartition && !*(_DWORD *)(v19 + 17296) )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
          CachedCommit = CurrentPrcb->CachedCommit;
          if ( (unsigned __int64)(v20 + CachedCommit) <= 0x100 )
          {
            while ( 1 )
            {
              v26 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                      v20 + CachedCommit,
                      CachedCommit);
              if ( v26 == CachedCommit )
                break;
              CachedCommit = v26;
              if ( (unsigned __int64)(v26 + v20) > 0x100 )
                goto LABEL_76;
            }
            v27 = 1LL;
LABEL_79:
            v28 = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)v28->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable == -1 )
            {
              v27 = 1LL;
            }
            else
            {
              if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
              {
                do
                {
                  v31 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&v28->CachedResidentAvailable,
                          CachedResidentAvailable + 1,
                          CachedResidentAvailable);
                  v30 = (_DWORD)CachedResidentAvailable == v31;
                  LODWORD(CachedResidentAvailable) = v31;
                  if ( v30 )
                    goto LABEL_90;
                }
                while ( v31 != -1 && (unsigned __int64)(v31 + 1LL) <= 0x100 );
              }
              if ( (int)CachedResidentAvailable > 192
                && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                        (volatile signed __int32 *)&v28->CachedResidentAvailable,
                                                        192,
                                                        CachedResidentAvailable) )
              {
                v27 = (int)CachedResidentAvailable - 192 + 1LL;
              }
              if ( !v27 )
              {
LABEL_90:
                v3 = v35;
LABEL_91:
                if ( !v17 )
                  goto LABEL_93;
                goto LABEL_92;
              }
            }
LABEL_89:
            _InterlockedAdd64((volatile signed __int64 *)(v19 + 22528), v27);
            goto LABEL_90;
          }
        }
LABEL_76:
        _InterlockedAdd64((volatile signed __int64 *)(v19 + 23168), -v20);
        MiSignalCommitSignals(v19, _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 23104), -v20) - v20);
LABEL_78:
        v27 = 1LL;
        if ( (ULONG *)v19 != &MiSystemPartition )
          goto LABEL_89;
        goto LABEL_79;
      }
      v21 = (_DWORD *)(v19 + 17272);
      v22 = (volatile LONG *)(v19 + 17272);
      if ( KeGetCurrentIrql() == 2 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v22);
        v20 = MiRestockOverCommit(v19, 1LL);
      }
      else
      {
        v23 = ExAcquireSpinLockExclusive(v22);
        v20 = MiRestockOverCommit(v19, 1LL);
        if ( (_BYTE)v23 != 17 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            *v21 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v19 + 17272), retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
          __writecr8(v23);
LABEL_70:
          if ( !v20 )
            goto LABEL_78;
          goto LABEL_71;
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *v21 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v19 + 17272), retaddr);
      goto LABEL_70;
    }
  }
LABEL_93:
  if ( v6 )
    *(_DWORD *)(v6 + 16) = 1;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v3 <= 1u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
    result = v3;
    __writecr8(v3);
  }
  return result;
}
