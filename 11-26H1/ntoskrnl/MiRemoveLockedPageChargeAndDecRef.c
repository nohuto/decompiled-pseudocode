/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30
 * Callers:
 *     MiProbeUnlockPage @ 0x14028AE60 (MiProbeUnlockPage.c)
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 *     MiDecommitFreePagesTail @ 0x1402BC510 (MiDecommitFreePagesTail.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiReleaseCachedPageLocks @ 0x1402CBF70 (MiReleaseCachedPageLocks.c)
 *     MiProbeLockFrame @ 0x1402D0680 (MiProbeLockFrame.c)
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiCompleteTransitionPfnFault @ 0x1402E40B0 (MiCompleteTransitionPfnFault.c)
 *     MiHardFaultPageRelease @ 0x14031E950 (MiHardFaultPageRelease.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x140320354 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiInitializeImageProtos @ 0x14033A684 (MiInitializeImageProtos.c)
 *     MiBuildReservationCluster @ 0x14033F334 (MiBuildReservationCluster.c)
 *     MiUnlockCodePage @ 0x140369D48 (MiUnlockCodePage.c)
 *     MiHandleCollidedFault @ 0x14038D1C8 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038D338 (MiWaitForCollidedFaultComplete.c)
 *     MiJumpStackTarget @ 0x1403E7E30 (MiJumpStackTarget.c)
 *     MiSwapStackPage @ 0x140409E34 (MiSwapStackPage.c)
 *     MiDoubleUnlockMdlPage @ 0x140475B64 (MiDoubleUnlockMdlPage.c)
 *     MiUnlockMirrorWritePages @ 0x1404A872C (MiUnlockMirrorWritePages.c)
 *     MiCopyFileOnlyPage @ 0x1404AF42C (MiCopyFileOnlyPage.c)
 *     MiFinalizeImageHeaderPage @ 0x1404C18CC (MiFinalizeImageHeaderPage.c)
 *     MiFinishLastForkPageTable @ 0x1404CA0CC (MiFinishLastForkPageTable.c)
 *     MiLockProcessParentPage @ 0x140507ED4 (MiLockProcessParentPage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14050DFD8 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140703CCC (MmDbgMarkPfnModifiedWorker.c)
 *     MiSoftFaultClusterTradeAcquireLocks @ 0x140717048 (MiSoftFaultClusterTradeAcquireLocks.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPfnReferenceCountIsZero @ 0x14031E3A4 (MiPfnReferenceCountIsZero.c)
 *     MiSignalCommitSignals @ 0x14042F350 (MiSignalCommitSignals.c)
 *     MiRestockOverCommit @ 0x1404F2AA4 (MiRestockOverCommit.c)
 *     MiBadRefCount @ 0x140500054 (MiBadRefCount.c)
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
  v10 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
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
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
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
