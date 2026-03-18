/*
 * XREFs of MiUnlockProtoPoolPage @ 0x1402D3E40
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282DC0 (MiMakePageAvoidRead.c)
 *     MiTradeForLeafPage @ 0x140293AE4 (MiTradeForLeafPage.c)
 *     MiReplaceLockedPage @ 0x140295664 (MiReplaceLockedPage.c)
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MmCopyToCachedPage @ 0x1402D05F0 (MmCopyToCachedPage.c)
 *     MiUnlockDataCopyPages @ 0x1402D283C (MiUnlockDataCopyPages.c)
 *     MiGetWorkingSetInfoList @ 0x1402D28A0 (MiGetWorkingSetInfoList.c)
 *     MiQueryPteAttributes @ 0x1402D2E80 (MiQueryPteAttributes.c)
 *     MiWalkVaRange @ 0x1402D3560 (MiWalkVaRange.c)
 *     MiResolveDemandZeroFault @ 0x1402D4B40 (MiResolveDemandZeroFault.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiHandleTransitionFault @ 0x1402F6550 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x1402F6990 (MiMigratePfn.c)
 *     MiGetPageProtection @ 0x1403061E4 (MiGetPageProtection.c)
 *     MiCombineWithStandbyExisting @ 0x140307CC4 (MiCombineWithStandbyExisting.c)
 *     MiCombineWithExisting @ 0x140308244 (MiCombineWithExisting.c)
 *     MiResolveProtoCombine @ 0x1403089FC (MiResolveProtoCombine.c)
 *     MiWalkEntireSubsection @ 0x14031B370 (MiWalkEntireSubsection.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     MiInitializeImageProtos @ 0x140338604 (MiInitializeImageProtos.c)
 *     MiTranslatePageForCopy @ 0x140338D4C (MiTranslatePageForCopy.c)
 *     MmCopyMemory @ 0x140339450 (MmCopyMemory.c)
 *     MiDeleteMergedPte @ 0x14033C800 (MiDeleteMergedPte.c)
 *     MiBuildReservationCluster @ 0x14033D2B4 (MiBuildReservationCluster.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033F350 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpace @ 0x1403670E8 (MiReservePageFileSpace.c)
 *     MiCopyDataPageToImagePage @ 0x14036C478 (MiCopyDataPageToImagePage.c)
 *     MiFinishMdlForMappedFileFault @ 0x14036E910 (MiFinishMdlForMappedFileFault.c)
 *     MiResolveMappedFileFault @ 0x14036F5D0 (MiResolveMappedFileFault.c)
 *     MiResolveMappedFileFaultInitialize @ 0x14036F9B8 (MiResolveMappedFileFaultInitialize.c)
 *     MiResolveMappedFileFaultGetInPageSupport @ 0x14036FF50 (MiResolveMappedFileFaultGetInPageSupport.c)
 *     MiResolvePageFileFault @ 0x1403701DC (MiResolvePageFileFault.c)
 *     MiEvaluatePageFileRead @ 0x140370440 (MiEvaluatePageFileRead.c)
 *     MiAllocateInPageSupport @ 0x140371500 (MiAllocateInPageSupport.c)
 *     MiAllocatePageFileReadResources @ 0x1403719F8 (MiAllocatePageFileReadResources.c)
 *     MiPfPutPagesInTransition @ 0x140372C60 (MiPfPutPagesInTransition.c)
 *     MiHandleCollidedFault @ 0x14038B418 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038B588 (MiWaitForCollidedFaultComplete.c)
 *     MiResolveProtoPteFault @ 0x1403A5DAC (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1403A6F04 (MiResolveTransitionFault.c)
 *     MiSoftFaultMappedView @ 0x1403BB610 (MiSoftFaultMappedView.c)
 *     MiFlushSubsection @ 0x1403C1390 (MiFlushSubsection.c)
 *     MiWaitForPageWriteCompletion @ 0x1403C2610 (MiWaitForPageWriteCompletion.c)
 *     MiQueryPteCleanup @ 0x1404101DC (MiQueryPteCleanup.c)
 *     MiPurgeSubsection @ 0x140422170 (MiPurgeSubsection.c)
 *     MiDeletePerSessionProtos @ 0x1404586A0 (MiDeletePerSessionProtos.c)
 *     MiReleasePageFileSectionInfo @ 0x140469304 (MiReleasePageFileSectionInfo.c)
 *     MiTradePageReleaseLocks @ 0x14046F85C (MiTradePageReleaseLocks.c)
 *     MiResolveMappedFileFaultByCopying @ 0x1404893DC (MiResolveMappedFileFaultByCopying.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404AE73C (MiInitializeNewImageSectionProtos.c)
 *     MiCopyHeaderIfResident @ 0x1404B51A4 (MiCopyHeaderIfResident.c)
 *     MiCopyFileOnlyPage @ 0x1404B5FDC (MiCopyFileOnlyPage.c)
 *     MiAnyProtosAreMapped @ 0x1404BCEC0 (MiAnyProtosAreMapped.c)
 *     MiMakeImageReadOnly @ 0x1404BE4AC (MiMakeImageReadOnly.c)
 *     MiMakeProtoPoolReadOnly @ 0x1404C57B8 (MiMakeProtoPoolReadOnly.c)
 *     MiCreateFileOnlyImageFixupExtents @ 0x140507310 (MiCreateFileOnlyImageFixupExtents.c)
 *     MiFaultGetFileExtents @ 0x14050CBDC (MiFaultGetFileExtents.c)
 *     MiInsertLargeVadMapping @ 0x140510234 (MiInsertLargeVadMapping.c)
 *     MiQueryPteFaultLargeVa @ 0x1405264C4 (MiQueryPteFaultLargeVa.c)
 *     MiInitializeDynamicPfnsWorker @ 0x1406E9410 (MiInitializeDynamicPfnsWorker.c)
 *     MiEliminateOverlappingExtents @ 0x1406F96E4 (MiEliminateOverlappingExtents.c)
 *     MiEnableLargeSubsection @ 0x1406F99BC (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x1406F9DB0 (MiFillFileOnlyProtoAsBad.c)
 *     MiSoftFaultClusterTradeReleaseLocks @ 0x140712784 (MiSoftFaultClusterTradeReleaseLocks.c)
 *     MiInitializeSharedUserData @ 0x140CF1F60 (MiInitializeSharedUserData.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPfnReferenceCountIsZero @ 0x14031C374 (MiPfnReferenceCountIsZero.c)
 *     MiSignalCommitSignals @ 0x14043CAA0 (MiSignalCommitSignals.c)
 *     MiRestockOverCommit @ 0x1404F9494 (MiRestockOverCommit.c)
 *     MiBadRefCount @ 0x1405067A4 (MiBadRefCount.c)
 */

__int64 __fastcall MiUnlockProtoPoolPage(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // si
  unsigned int v4; // edi
  __int64 v5; // r14
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rax
  unsigned __int64 v10; // rcx
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rax
  int v15; // r8d
  BOOL v16; // r12d
  char v17; // al
  __int64 v18; // rbp
  __int64 v19; // rdi
  _DWORD *v20; // rsi
  volatile LONG *v21; // rcx
  unsigned __int64 v22; // r15
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // r8
  struct _KPRCB *v27; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v29; // zf
  signed __int32 v30; // eax
  __int64 result; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  int v33; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 v34; // [rsp+58h] [rbp+10h]

  v34 = a2;
  v2 = a2;
  if ( a2 == 18 )
  {
    v33 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v33);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  else
  {
    v4 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v4);
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
    v6 = *(_QWORD *)a1 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL;
    v7 = *(_QWORD *)(8 * v6);
    v5 = 8 * v6;
    if ( v7 == 8 * v6 )
    {
      *(_QWORD *)a1 &= 0xFFFFF00000000001uLL;
    }
    else
    {
      v8 = *(_QWORD *)v7;
      if ( *(_QWORD *)(v7 + 8) != v5 || *(_QWORD *)(v8 + 8) != v7 )
        __fastfail(3u);
      *(_QWORD *)v5 = v8;
      *(_QWORD *)(v8 + 8) = v5;
      if ( *(_QWORD *)v5 == v5 )
      {
        *(_QWORD *)v7 = v7;
        v9 = (_QWORD *)v7;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v5 + 8LL) = v7;
        v9 = *(_QWORD **)(v5 + 8);
        *v9 = v7;
      }
      *(_QWORD *)(v7 + 8) = v9;
      *(_QWORD *)a1 = (v7 >> 3) & 0x1FFFFFFFFFFFFFFELL ^ (*(_QWORD *)a1 ^ (v7 >> 3) & 0x1FFFFFFFFFFFFFFELL) & 0xFFFFF00000000001uLL;
    }
  }
  else
  {
    v5 = 0LL;
    *(_DWORD *)(a1 + 32) &= ~0x200000u;
  }
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) == 0 )
  {
    v10 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
    if ( v10 < 0xFFFF800000000000uLL || byte_140E37A70[((v10 >> 39) & 0x1FF) - 256] != 4 )
    {
      if ( !(unsigned __int16)*(_DWORD *)(a1 + 32) )
        MiBadRefCount(a1);
      v11 = *(_DWORD *)(a1 + 32);
      v12 = v11 ^ (unsigned __int16)(v11 ^ (v11 - 1));
      *(_DWORD *)(a1 + 32) = v12;
      if ( (_WORD)v11 == 1 && (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
      {
LABEL_92:
        MiPfnReferenceCountIsZero(a1, (a1 + 0x220000000000LL) / 48);
        goto LABEL_93;
      }
      if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 || (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
        goto LABEL_93;
      v13 = *(_DWORD *)(a1 + 32);
      v14 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v15 = 0;
      if ( (_WORD)v13 )
      {
        if ( (_WORD)v13 == 1 )
        {
          if ( v14 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
            v15 = 1;
          if ( !v15 )
            goto LABEL_93;
        }
        else if ( (_WORD)v13 != 2 || !v14 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
        {
          goto LABEL_93;
        }
      }
      v16 = (_WORD)v12 == 0;
      if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
        || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL )
      {
        v17 = *(_BYTE *)(a1 + 35);
        if ( (v17 & 0x20) != 0 )
        {
          *(_BYTE *)(a1 + 35) = v17 & 0xDF;
          goto LABEL_91;
        }
      }
      v18 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
      if ( (*(__int64 *)(a1 + 40) >= 0 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0)
        && ((*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
         || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL
         || (*(_BYTE *)(a1 + 35) & 0x20) == 0)
        && ((_WORD)v12 || (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0) )
      {
        goto LABEL_78;
      }
      v19 = 1LL;
      if ( !*(_QWORD *)(v18 + 17288) )
      {
LABEL_71:
        if ( (ULONG *)v18 == &MiSystemPartition && !*(_DWORD *)(v18 + 17296) )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
          CachedCommit = CurrentPrcb->CachedCommit;
          if ( (unsigned __int64)(v19 + CachedCommit) <= 0x100 )
          {
            while ( 1 )
            {
              v25 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                      v19 + CachedCommit,
                      CachedCommit);
              if ( v25 == CachedCommit )
                break;
              CachedCommit = v25;
              if ( (unsigned __int64)(v25 + v19) > 0x100 )
                goto LABEL_76;
            }
            v26 = 1LL;
LABEL_79:
            v27 = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)v27->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable == -1 )
            {
              v26 = 1LL;
            }
            else
            {
              if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
              {
                do
                {
                  v30 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&v27->CachedResidentAvailable,
                          CachedResidentAvailable + 1,
                          CachedResidentAvailable);
                  v29 = (_DWORD)CachedResidentAvailable == v30;
                  LODWORD(CachedResidentAvailable) = v30;
                  if ( v29 )
                    goto LABEL_90;
                }
                while ( v30 != -1 && (unsigned __int64)(v30 + 1LL) <= 0x100 );
              }
              if ( (int)CachedResidentAvailable > 192
                && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                        (volatile signed __int32 *)&v27->CachedResidentAvailable,
                                                        192,
                                                        CachedResidentAvailable) )
              {
                v26 = (int)CachedResidentAvailable - 192 + 1LL;
              }
              if ( !v26 )
              {
LABEL_90:
                v2 = v34;
LABEL_91:
                if ( !v16 )
                  goto LABEL_93;
                goto LABEL_92;
              }
            }
LABEL_89:
            _InterlockedAdd64((volatile signed __int64 *)(v18 + 22528), v26);
            goto LABEL_90;
          }
        }
LABEL_76:
        _InterlockedAdd64((volatile signed __int64 *)(v18 + 23168), -v19);
        MiSignalCommitSignals(v18, _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 23104), -v19) - v19);
LABEL_78:
        v26 = 1LL;
        if ( (ULONG *)v18 != &MiSystemPartition )
          goto LABEL_89;
        goto LABEL_79;
      }
      v20 = (_DWORD *)(v18 + 17272);
      v21 = (volatile LONG *)(v18 + 17272);
      if ( KeGetCurrentIrql() == 2 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v21);
        v19 = MiRestockOverCommit(v18, 1LL);
      }
      else
      {
        v22 = ExAcquireSpinLockExclusive(v21);
        v19 = MiRestockOverCommit(v18, 1LL);
        if ( (_BYTE)v22 != 17 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
            *v20 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v18 + 17272), retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
          __writecr8(v22);
LABEL_70:
          if ( !v19 )
            goto LABEL_78;
          goto LABEL_71;
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        *v20 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v18 + 17272), retaddr);
      goto LABEL_70;
    }
  }
LABEL_93:
  if ( v5 )
    *(_DWORD *)(v5 + 16) = 1;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v2 <= 1u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
    result = v2;
    __writecr8(v2);
  }
  return result;
}
