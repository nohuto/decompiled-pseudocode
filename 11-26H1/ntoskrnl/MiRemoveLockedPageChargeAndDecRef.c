/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0
 * Callers:
 *     MiProbeUnlockPage @ 0x14028B900 (MiProbeUnlockPage.c)
 *     MmCopyToCachedPage @ 0x1402D05F0 (MmCopyToCachedPage.c)
 *     MiDecommitFreePagesTail @ 0x1402DA750 (MiDecommitFreePagesTail.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiReleaseCachedPageLocks @ 0x1402E9F30 (MiReleaseCachedPageLocks.c)
 *     MiProbeLockFrame @ 0x1402EE600 (MiProbeLockFrame.c)
 *     MiHandleTransitionFault @ 0x1402F6550 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x1402F6990 (MiMigratePfn.c)
 *     MiCompleteTransitionPfnFault @ 0x140302030 (MiCompleteTransitionPfnFault.c)
 *     MiHardFaultPageRelease @ 0x14031C920 (MiHardFaultPageRelease.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x14031E324 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiInitializeImageProtos @ 0x140338604 (MiInitializeImageProtos.c)
 *     MiBuildReservationCluster @ 0x14033D2B4 (MiBuildReservationCluster.c)
 *     MiUnlockCodePage @ 0x140367FA8 (MiUnlockCodePage.c)
 *     MiHandleCollidedFault @ 0x14038B418 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038B588 (MiWaitForCollidedFaultComplete.c)
 *     MiJumpStackTarget @ 0x1403E4C40 (MiJumpStackTarget.c)
 *     MiSwapStackPage @ 0x140415804 (MiSwapStackPage.c)
 *     MiDoubleUnlockMdlPage @ 0x14047C1F4 (MiDoubleUnlockMdlPage.c)
 *     MiUnlockMirrorWritePages @ 0x1404AF09C (MiUnlockMirrorWritePages.c)
 *     MiCopyFileOnlyPage @ 0x1404B5FDC (MiCopyFileOnlyPage.c)
 *     MiFinalizeImageHeaderPage @ 0x1404C7B8C (MiFinalizeImageHeaderPage.c)
 *     MiFinishLastForkPageTable @ 0x1404D069C (MiFinishLastForkPageTable.c)
 *     MiLockProcessParentPage @ 0x14050E464 (MiLockProcessParentPage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140514568 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1406FEFFC (MmDbgMarkPfnModifiedWorker.c)
 *     MiSoftFaultClusterTradeAcquireLocks @ 0x140712350 (MiSoftFaultClusterTradeAcquireLocks.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPfnReferenceCountIsZero @ 0x14031C374 (MiPfnReferenceCountIsZero.c)
 *     MiSignalCommitSignals @ 0x14043CAA0 (MiSignalCommitSignals.c)
 *     MiRestockOverCommit @ 0x1404F9494 (MiRestockOverCommit.c)
 *     MiBadRefCount @ 0x1405067A4 (MiBadRefCount.c)
 */

__int64 __fastcall MiRemoveLockedPageChargeAndDecRef(__int64 a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // edx
  __int64 v5; // rax
  int v6; // r8d
  BOOL v8; // r15d
  char v9; // al
  __int64 v10; // rbp
  __int64 v11; // rdi
  _DWORD *v12; // rsi
  volatile LONG *v13; // rcx
  unsigned __int64 v14; // r14
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  struct _KPRCB *v19; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v21; // zf
  signed __int32 v22; // eax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( !(unsigned __int16)*(_DWORD *)(a1 + 32) )
    MiBadRefCount(a1);
  v2 = *(_DWORD *)(a1 + 32);
  v3 = v2 ^ (unsigned __int16)(v2 ^ (v2 - 1));
  *(_DWORD *)(a1 + 32) = v3;
  if ( (_WORD)v2 == 1 && (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_63;
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 || (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v6 = 0;
  if ( (_WORD)v4 )
  {
    if ( (_WORD)v4 == 1 )
    {
      if ( v5 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
        v6 = 1;
      if ( !v6 )
        return 0LL;
    }
    else if ( (_WORD)v4 != 2 || !v5 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
    {
      return 0LL;
    }
  }
  v8 = (_WORD)v3 == 0;
  if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
    || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL )
  {
    v9 = *(_BYTE *)(a1 + 35);
    if ( (v9 & 0x20) != 0 )
    {
      *(_BYTE *)(a1 + 35) = v9 & 0xDF;
      goto LABEL_62;
    }
  }
  v10 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  if ( (*(__int64 *)(a1 + 40) >= 0 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0)
    && ((*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
     || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL
     || (*(_BYTE *)(a1 + 35) & 0x20) == 0)
    && ((_WORD)v3 || (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0) )
  {
    goto LABEL_49;
  }
  v11 = 1LL;
  if ( *(_QWORD *)(v10 + 17288) )
  {
    v12 = (_DWORD *)(v10 + 17272);
    v13 = (volatile LONG *)(v10 + 17272);
    if ( KeGetCurrentIrql() == 2 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v13);
      v11 = MiRestockOverCommit(v10, 1LL);
    }
    else
    {
      v14 = ExAcquireSpinLockExclusive(v13);
      v11 = MiRestockOverCommit(v10, 1LL);
      if ( (_BYTE)v14 != 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          *v12 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v10 + 17272), retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
        __writecr8(v14);
LABEL_42:
        if ( !v11 )
          goto LABEL_49;
        goto LABEL_43;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      *v12 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v10 + 17272), retaddr);
    goto LABEL_42;
  }
LABEL_43:
  if ( (ULONG *)v10 == &MiSystemPartition && !*(_DWORD *)(v10 + 17296) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
    CachedCommit = CurrentPrcb->CachedCommit;
    if ( (unsigned __int64)(v11 + CachedCommit) <= 0x100 )
    {
      while ( 1 )
      {
        v17 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                v11 + CachedCommit,
                CachedCommit);
        if ( v17 == CachedCommit )
          break;
        CachedCommit = v17;
        if ( (unsigned __int64)(v17 + v11) > 0x100 )
          goto LABEL_48;
      }
      v18 = 1LL;
      goto LABEL_50;
    }
  }
LABEL_48:
  _InterlockedAdd64((volatile signed __int64 *)(v10 + 23168), -v11);
  MiSignalCommitSignals(v10, _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 23104), -v11) - v11);
LABEL_49:
  v18 = 1LL;
  if ( (ULONG *)v10 != &MiSystemPartition )
  {
LABEL_61:
    _InterlockedAdd64((volatile signed __int64 *)(v10 + 22528), v18);
    goto LABEL_62;
  }
LABEL_50:
  v19 = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)v19->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
  {
    v18 = 1LL;
    goto LABEL_61;
  }
  if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
  {
LABEL_57:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v19->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v18 = (int)CachedResidentAvailable - 192 + 1LL;
    }
    if ( v18 )
      goto LABEL_61;
  }
  else
  {
    while ( 1 )
    {
      v22 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&v19->CachedResidentAvailable,
              CachedResidentAvailable + 1,
              CachedResidentAvailable);
      v21 = (_DWORD)CachedResidentAvailable == v22;
      LODWORD(CachedResidentAvailable) = v22;
      if ( v21 )
        break;
      if ( v22 == -1 || (unsigned __int64)(v22 + 1LL) > 0x100 )
        goto LABEL_57;
    }
  }
LABEL_62:
  if ( !v8 )
    return 0LL;
LABEL_63:
  MiPfnReferenceCountIsZero(a1, (a1 + 0x220000000000LL) / 48);
  return 1LL;
}
