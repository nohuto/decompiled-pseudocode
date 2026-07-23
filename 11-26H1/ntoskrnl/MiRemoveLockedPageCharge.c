/*
 * XREFs of MiRemoveLockedPageCharge @ 0x14031F1B0
 * Callers:
 *     MiWalkImageReleasePage @ 0x1402AE49C (MiWalkImageReleasePage.c)
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiHardFaultPageRelease @ 0x14031E950 (MiHardFaultPageRelease.c)
 *     MiSwapHardFaultPage @ 0x14031ED1C (MiSwapHardFaultPage.c)
 *     MiCanBatchHardFaultPages @ 0x14031EEF0 (MiCanBatchHardFaultPages.c)
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 *     MiFileOnlyPfnMarkedBad @ 0x1406FE828 (MiFileOnlyPfnMarkedBad.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSignalCommitSignals @ 0x14042F350 (MiSignalCommitSignals.c)
 *     MiRestockOverCommit @ 0x1404F2AA4 (MiRestockOverCommit.c)
 *     MiBadRefCount @ 0x140500054 (MiBadRefCount.c)
 */

__int64 __fastcall MiRemoveLockedPageCharge(__int64 a1)
{
  int v2; // edx
  int v3; // ecx
  int v5; // edx
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // r9d
  BOOL v9; // r15d
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rdi
  _DWORD *v13; // r14
  volatile LONG *v14; // rcx
  unsigned __int64 v15; // rbp
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  struct _KPRCB *v20; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v22; // zf
  signed __int32 v23; // eax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( !(unsigned __int16)*(_DWORD *)(a1 + 32) )
    MiBadRefCount(a1);
  v2 = *(_DWORD *)(a1 + 32);
  v3 = v2 ^ (unsigned __int16)(v2 ^ (v2 - 1));
  *(_DWORD *)(a1 + 32) = v3;
  if ( (_WORD)v2 == 1 && (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
    return 1LL;
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 || (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
    return 0LL;
  v5 = *(_DWORD *)(a1 + 32);
  v6 = 1LL;
  v7 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v8 = 0;
  if ( (_WORD)v5 )
  {
    if ( (_WORD)v5 == 1 )
    {
      if ( v7 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
        v8 = 1;
      if ( !v8 )
        return 0LL;
    }
    else if ( (_WORD)v5 != 2 || !v7 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
    {
      return 0LL;
    }
  }
  v9 = (_WORD)v3 == 0;
  if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
    || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL )
  {
    v10 = *(_BYTE *)(a1 + 35);
    if ( (v10 & 0x20) != 0 )
    {
      *(_BYTE *)(a1 + 35) = v10 & 0xDF;
      return (_WORD)v3 == 0;
    }
  }
  v11 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  if ( (*(__int64 *)(a1 + 40) >= 0 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0)
    && ((*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
     || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL
     || (*(_BYTE *)(a1 + 35) & 0x20) == 0)
    && ((_WORD)v3 || (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0) )
  {
    goto LABEL_50;
  }
  v12 = 1LL;
  if ( *(_QWORD *)(v11 + 17288) )
  {
    v13 = (_DWORD *)(v11 + 17272);
    v14 = (volatile LONG *)(v11 + 17272);
    if ( KeGetCurrentIrql() == 2 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v14);
      v12 = MiRestockOverCommit(v11, 1LL);
    }
    else
    {
      v15 = ExAcquireSpinLockExclusive(v14);
      v12 = MiRestockOverCommit(v11, 1LL);
      if ( (_BYTE)v15 != 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v13 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v11 + 17272), retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
        __writecr8(v15);
LABEL_43:
        if ( !v12 )
          goto LABEL_50;
        goto LABEL_44;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v13 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v11 + 17272), retaddr);
    goto LABEL_43;
  }
LABEL_44:
  if ( (ULONG *)v11 == &MiSystemPartition && !*(_DWORD *)(v11 + 17296) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
    CachedCommit = CurrentPrcb->CachedCommit;
    if ( (unsigned __int64)(v12 + CachedCommit) <= 0x100 )
    {
      while ( 1 )
      {
        v18 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                v12 + CachedCommit,
                CachedCommit);
        if ( v18 == CachedCommit )
          break;
        CachedCommit = v18;
        if ( (unsigned __int64)(v18 + v12) > 0x100 )
          goto LABEL_49;
      }
      v19 = 1LL;
      goto LABEL_51;
    }
  }
LABEL_49:
  _InterlockedAdd64((volatile signed __int64 *)(v11 + 23168), -v12);
  MiSignalCommitSignals(v11, _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 23104), -v12) - v12);
LABEL_50:
  v19 = 1LL;
  if ( (ULONG *)v11 != &MiSystemPartition )
  {
LABEL_60:
    _InterlockedAdd64((volatile signed __int64 *)(v11 + 22528), v6);
    return v9;
  }
LABEL_51:
  v20 = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)v20->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_60;
  if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
  {
    do
    {
      v23 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&v20->CachedResidentAvailable,
              CachedResidentAvailable + 1,
              CachedResidentAvailable);
      v22 = (_DWORD)CachedResidentAvailable == v23;
      LODWORD(CachedResidentAvailable) = v23;
      if ( v22 )
        return v9;
    }
    while ( v23 != -1 && (unsigned __int64)(v23 + 1LL) <= 0x100 );
  }
  if ( (int)CachedResidentAvailable > 192
    && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&v20->CachedResidentAvailable,
                                            192,
                                            CachedResidentAvailable) )
  {
    v19 = (int)CachedResidentAvailable - 192 + 1LL;
  }
  v6 = v19;
  if ( v19 )
    goto LABEL_60;
  return v9;
}
