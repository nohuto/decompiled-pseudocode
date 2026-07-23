/*
 * XREFs of MiAddPageToInsertList @ 0x140320F90
 * Callers:
 *     MiInsertProtectedStandbyPage @ 0x1402AEAF8 (MiInsertProtectedStandbyPage.c)
 *     MiUnlockMdlWritePages @ 0x14031F6AC (MiUnlockMdlWritePages.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402AE9B4 (MiReleaseWriteInProgressCharges.c)
 *     MiEnqueuePageList @ 0x1402AECA0 (MiEnqueuePageList.c)
 *     MiInsertPagesInList @ 0x1402AF3C0 (MiInsertPagesInList.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiPfnReferenceCountIsZero @ 0x14031E3A4 (MiPfnReferenceCountIsZero.c)
 *     MiHardFaultPageRelease @ 0x14031E950 (MiHardFaultPageRelease.c)
 *     MiCanBatchHardFaultPages @ 0x14031EEF0 (MiCanBatchHardFaultPages.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSignalCommitSignals @ 0x14042F350 (MiSignalCommitSignals.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     MiRestockOverCommit @ 0x1404F2AA4 (MiRestockOverCommit.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiAddPageToInsertList(__int64 a1, __int64 *a2, ULONG_PTR a3)
{
  int v3; // r14d
  __int64 v7; // rdi
  unsigned int v8; // ebx
  unsigned __int64 v9; // rbp
  int v10; // ebx
  unsigned __int64 v11; // rcx
  _DWORD *SubsectionFromPte; // rax
  int v13; // ecx
  _DWORD *v14; // rax
  int v15; // ecx
  int CanBatchHardFaultPages; // ecx
  int v17; // r11d
  int v18; // r10d
  char v19; // cl
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  _KPROCESS *v22; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rsi
  _DWORD *v29; // r14
  volatile LONG *v30; // rcx
  unsigned __int64 v31; // r15
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  __int64 v34; // rcx
  __int64 v35; // r9
  struct _KPRCB *v36; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v38; // zf
  signed __int32 v39; // eax
  __int64 result; // rax
  __int64 v41; // rcx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v3 = *(_DWORD *)(a1 + 112);
  v7 = 48 * a3 - 0x220000000000LL;
  if ( v3 == 3 )
  {
    CanBatchHardFaultPages = 1;
    goto LABEL_114;
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      MiInsertPagesInList((_QWORD *)a1);
      if ( !*(_QWORD *)(a1 + 16) )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v8);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
  }
  v9 = 1LL;
  if ( v3 == 2 )
  {
    CanBatchHardFaultPages = MiCanBatchHardFaultPages(a2, v7);
  }
  else
  {
    if ( v3 )
    {
      *(_DWORD *)(v7 + 32) &= ~0x80000u;
      if ( (*a2 & 0x42) != 0 )
      {
        v10 = *(_DWORD *)(v7 + 32);
        if ( *(__int64 *)(v7 + 40) < 0 )
        {
          v11 = *(_QWORD *)(v7 + 16);
          if ( (v11 & 0x400) != 0 && (v11 & 0x400000000000000LL) == 0 )
          {
            SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(v11);
            v13 = *(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL);
            if ( (v13 & 0x20) != 0 && (v13 & 0x800) == 0 && (SubsectionFromPte[8] & 0x20000) == 0 )
              KeBugCheckEx(0x1Au, 0x8840uLL, v7, 0LL, 1uLL);
          }
        }
        if ( *(__int64 *)(v7 + 40) < 0
          && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0
          && (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 )
        {
          v14 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v7 + 16));
          if ( (*(_DWORD *)(*(_QWORD *)v14 + 56LL) & 0x20) == 0 && (v14[38] & 1) == 0 )
            MiSetSubsectionModified(v14, 0LL);
        }
        if ( (v10 & 0x80000) != 0
          && (unsigned int)MiCanPfnOriginalPteBeLost(v7)
          && (v10 & 0x100000) == 0
          && (*(_DWORD *)(v7 + 16) & 8) != 0 )
        {
          *(_QWORD *)(v7 + 16) &= ~8uLL;
        }
        *(_DWORD *)(v7 + 32) = v10 | 0x100000;
      }
      v15 = *(_DWORD *)(v7 + 32);
      *(_DWORD *)(v7 + 32) = v15 ^ (unsigned __int16)(v15 ^ (v15 - 1));
      if ( (_WORD)v15 != 1 )
      {
        CanBatchHardFaultPages = 0;
        goto LABEL_76;
      }
      if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0
        && (*(_DWORD *)(v7 + 32) & 0x40000000) == 0
        && (*(_DWORD *)(v7 + 32) & 0x10000000) == 0 )
      {
        CanBatchHardFaultPages = ((unsigned int)MiGetPfnSlabType(v7) != 9) + 1;
        goto LABEL_76;
      }
      goto LABEL_41;
    }
    if ( *(_BYTE *)a2 )
      MiCaptureDirtyBitToPfn(v7);
    v17 = *(_DWORD *)(v7 + 32);
    if ( (*(_QWORD *)(v7 + 40) & 0x20000000000000LL) != 0 && (v17 & 0x100000) != 0 && byte_140E2D899 )
    {
      v18 = *(_DWORD *)(v7 + 32);
      if ( (v18 & 0x80000) != 0
        && (unsigned int)MiCanPfnOriginalPteBeLost(v7)
        && (v18 & 0x100000) == 0
        && (*(_DWORD *)(v7 + 16) & 8) != 0 )
      {
        *(_QWORD *)(v7 + 16) &= ~8uLL;
      }
      *(_DWORD *)(v7 + 32) = v18 & 0xFFEFFFFF;
    }
    if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0 || (v17 & 0x50000000) != 0 )
    {
LABEL_41:
      CanBatchHardFaultPages = 2;
      goto LABEL_76;
    }
    if ( (_WORD)v17 == 1
      && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
      && (!byte_140E3BEA6
       || (v19 = *(_BYTE *)(qword_140E3D240 + 2 * ((unsigned __int64)((v7 + 0x220000000000LL) / 48) >> 9))) == 0
       || v19 == 10) )
    {
      v20 = v7 + 16;
      *(_QWORD *)(v7 + 24) = ((*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (((*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL)
                                                                                   - 1) ^ *(_QWORD *)(v7 + 24)) & 0xC000000000000000uLL;
      *(_DWORD *)(v7 + 32) &= 0xFFFF0000;
      v21 = *(_QWORD *)(v7 + 16);
      if ( (unsigned __int64)(v7 + 16) >= 0xFFFFF6FB7DBED000uLL
        && v20 <= 0xFFFFF6FB7DBED7F8uLL
        && (v21 & 1) != 0
        && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
      {
        v22 = MiPteHasShadow();
        if ( v22 )
        {
          KernelWaitTime = v22[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v24 = *(_QWORD *)(KernelWaitTime + 8 * ((v20 >> 3) & 0x1FF));
            if ( (v24 & 0x20) != 0 )
              v21 |= 0x20uLL;
            v25 = v21;
            v21 |= 0x42uLL;
            if ( (v24 & 0x42) == 0 )
              v21 = v25;
          }
        }
      }
      v26 = -65537LL;
      if ( (v21 & 0x400) != 0 )
        v26 = -5LL;
      CanBatchHardFaultPages = 1;
      *(_QWORD *)v20 = v21 & v26;
    }
    else
    {
      CanBatchHardFaultPages = 2;
    }
  }
LABEL_76:
  if ( CanBatchHardFaultPages )
  {
LABEL_114:
    if ( !*(_QWORD *)(a1 + 16) )
      *(_DWORD *)(a1 + 28) = (*(_BYTE *)(v7 + 34) & 0x10 | 0x20u) >> 4;
    if ( CanBatchHardFaultPages == 1 )
      return MiEnqueuePageList(a1, a3);
    MiInsertPagesInList((_QWORD *)a1);
    if ( v3 )
    {
      if ( v3 == 2 )
      {
        MiHardFaultPageRelease(a2, v7);
      }
      else
      {
        MiReleaseWriteInProgressCharges(
          *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)),
          1LL,
          1);
        MiPfnReferenceCountIsZero(v7, a3);
      }
    }
    else
    {
      if ( (*(_BYTE *)(v7 + 34) & 7) != 6 )
        MiBadShareCount(v7);
      v41 = (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)(v7 + 24) = v41 ^ (v41 ^ *(_QWORD *)(v7 + 24)) & 0xC000000000000000uLL;
      if ( !v41 )
        MiPfnShareCountIsZero(v7, 0LL);
    }
    goto LABEL_125;
  }
  if ( v3 != 1 )
    goto LABEL_125;
  v27 = 1LL;
  v28 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
  if ( !*(_QWORD *)(v28 + 17288) )
    goto LABEL_94;
  v29 = (_DWORD *)(v28 + 17272);
  v30 = (volatile LONG *)(v28 + 17272);
  if ( KeGetCurrentIrql() == 2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(v30);
    v27 = MiRestockOverCommit(v28, 1LL);
LABEL_82:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v29 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v28 + 17272), retaddr);
    goto LABEL_93;
  }
  v31 = ExAcquireSpinLockExclusive(v30);
  v27 = MiRestockOverCommit(v28, 1LL);
  if ( (_BYTE)v31 == 17 )
    goto LABEL_82;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    *v29 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v28 + 17272), retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v31);
  __writecr8(v31);
LABEL_93:
  if ( !v27 )
    goto LABEL_100;
LABEL_94:
  if ( (ULONG *)v28 != &MiSystemPartition
    || *(_DWORD *)(v28 + 17296)
    || (CurrentPrcb = KeGetCurrentPrcb(),
        _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
        CachedCommit = CurrentPrcb->CachedCommit,
        (unsigned __int64)(v27 + CachedCommit) > 0x100) )
  {
LABEL_99:
    _InterlockedAdd64((volatile signed __int64 *)(v28 + 23168), -v27);
    MiSignalCommitSignals(v28, _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 23104), -v27) - v27);
LABEL_100:
    v35 = 1LL;
    if ( (ULONG *)v28 != &MiSystemPartition )
    {
LABEL_110:
      _InterlockedAdd64((volatile signed __int64 *)(v28 + 22528), v9);
      goto LABEL_125;
    }
    goto LABEL_101;
  }
  while ( 1 )
  {
    v34 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
            v27 + CachedCommit,
            CachedCommit);
    if ( v34 == CachedCommit )
      break;
    CachedCommit = v34;
    if ( (unsigned __int64)(v34 + v27) > 0x100 )
      goto LABEL_99;
  }
  v35 = 1LL;
LABEL_101:
  v36 = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)v36->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_110;
  if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
  {
    do
    {
      v39 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&v36->CachedResidentAvailable,
              CachedResidentAvailable + 1,
              CachedResidentAvailable);
      v38 = (_DWORD)CachedResidentAvailable == v39;
      LODWORD(CachedResidentAvailable) = v39;
      if ( v38 )
        goto LABEL_125;
    }
    while ( v39 != -1 && (unsigned __int64)(v39 + 1LL) <= 0x100 );
  }
  if ( (int)CachedResidentAvailable > 192
    && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&v36->CachedResidentAvailable,
                                            192,
                                            CachedResidentAvailable) )
  {
    v35 = (int)CachedResidentAvailable - 192 + 1LL;
  }
  v9 = v35;
  if ( v35 )
    goto LABEL_110;
LABEL_125:
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
