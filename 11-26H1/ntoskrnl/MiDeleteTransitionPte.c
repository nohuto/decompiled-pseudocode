/*
 * XREFs of MiDeleteTransitionPte @ 0x140340870
 * Callers:
 *     MiDecommitHandleTransitionPte @ 0x14033FE54 (MiDecommitHandleTransitionPte.c)
 *     MiTryDeleteTransitionPte @ 0x14034050C (MiTryDeleteTransitionPte.c)
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 *     MiDeletePerSessionProtos @ 0x14044FF10 (MiDeletePerSessionProtos.c)
 *     MiDiscardPteTransitionPage @ 0x14052AE60 (MiDiscardPteTransitionPage.c)
 *     MiWalkReadInProgressPte @ 0x14070A398 (MiWalkReadInProgressPte.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiRemoveUnusedSubsection @ 0x1402EE21C (MiRemoveUnusedSubsection.c)
 *     MiInvalidateCollidedIos @ 0x1402F1414 (MiInvalidateCollidedIos.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInsertUnusedSubsectionInternal @ 0x1403704C4 (MiInsertUnusedSubsectionInternal.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteTransitionPte(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned __int8 a3, char a4)
{
  ULONG_PTR v6; // r9
  __int64 v7; // rdx
  ULONG_PTR v8; // rbp
  _KPROCESS *v9; // rax
  ULONG_PTR v10; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 inserted; // r12
  __int64 v15; // r15
  __int64 SubsectionFromPte; // rax
  __int64 v17; // r15
  __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v21; // rsi
  unsigned __int64 v22; // r9
  __int64 v23; // r13
  volatile signed __int64 *v24; // rsi
  unsigned int v25; // edi
  __int64 v26; // rsi
  __int64 v27; // rcx
  struct _KEVENT *v29; // [rsp+38h] [rbp-70h]
  __int64 v30; // [rsp+48h] [rbp-60h]
  ULONG_PTR v31; // [rsp+50h] [rbp-58h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]
  BOOL v33; // [rsp+B0h] [rbp+8h]
  unsigned int v34; // [rsp+B0h] [rbp+8h]
  int v35; // [rsp+B8h] [rbp+10h]

  v6 = *(_QWORD *)BugCheckParameter2;
  v7 = (unsigned __int128)((__int64)(a2 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = ((unsigned __int64)v7 >> 63) + (v7 >> 3);
  v31 = v8;
  if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
    && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v9 = MiPteHasShadow();
    if ( v9 )
    {
      KernelWaitTime = v9[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v12 = *(_QWORD *)(KernelWaitTime + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
        if ( (v12 & 0x20) != 0 )
          v10 |= 0x20uLL;
        v6 = v10 | 0x42;
        if ( (v12 & 0x42) == 0 )
          v6 = v10;
      }
    }
  }
  if ( (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x402uLL, BugCheckParameter2, v6, *(_QWORD *)(a2 + 8));
  v13 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  inserted = 0LL;
  v15 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL;
  v29 = 0LL;
  v30 = v15;
  v35 = *(_DWORD *)(a2 + 32);
  if ( !(_WORD)v35 )
    MiUnlinkPageFromListEx(a2, 0);
  if ( (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
  {
    SubsectionFromPte = MiGetSubsectionFromPte(*(_QWORD *)(a2 + 16));
    v17 = SubsectionFromPte;
    v18 = *(_QWORD *)SubsectionFromPte;
    if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x20) != 0
      || (v19 = SubsectionFromPte, !*(_QWORD *)(v18 + 64)) )
    {
      v19 = 0LL;
    }
    v33 = *(_QWORD *)(v18 + 64) != 0LL;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
    if ( v19 )
    {
      if ( (*(_DWORD *)(v19 + 104))-- == 1 && !*(_QWORD *)(v19 + 80) && (*(_DWORD *)(v17 + 32) & 0x90000) == 0x80000 )
      {
        MiRemoveUnusedSubsection(v19);
        inserted = MiInsertUnusedSubsectionInternal(v19, 0LL);
      }
    }
    --*(_QWORD *)(v18 + 32);
    if ( inserted )
      v21 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v18 + 60) & 0x3FF));
    else
      v21 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)(v18 + 72) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v18 + 72), retaddr);
    if ( inserted )
      MiReturnCrossPartitionSectionCharges(v21, v33, inserted);
    v15 = v30;
    v22 = MiTransferSoftwarePte(*(_QWORD *)(a2 + 16), 0LL, 0, 0);
    v8 = v31;
  }
  else
  {
    v22 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  v23 = 0LL;
  if ( (_WORD)v35 )
  {
    v24 = (volatile signed __int64 *)(a2 + 24);
    v34 = 3;
    *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
    if ( (*(_BYTE *)(a2 + 34) & 0x20) != 0 )
    {
      v23 = *(_QWORD *)a2 - 32LL;
      if ( *(_QWORD *)(v23 + 16) == v23 + 16 )
        v23 = 0LL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
    {
      v13 = *(_QWORD *)(a2 + 16);
      if ( (v13 & 8) == 0 )
      {
        v13 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
          v13 = *(_QWORD *)(a2 + 16);
      }
      v29 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
    }
    v34 = 4;
    v24 = (volatile signed __int64 *)(a2 + 24);
  }
  *(_QWORD *)BugCheckParameter2 = v22;
  if ( v34 == 4 )
    MiInsertPageInFreeOrZeroedList(v8);
  _InterlockedAnd64(v24, 0x7FFFFFFFFFFFFFFFuLL);
  v25 = 0;
  v26 = 48 * v15 - 0x220000000000LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v25 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v25);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v26 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v26 + 34) & 7) != 6 )
    MiBadShareCount(v26);
  v27 = (*(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v26 + 24) = v27 ^ (v27 ^ *(_QWORD *)(v26 + 24)) & 0xC000000000000000uLL;
  if ( !v27 )
    MiPfnShareCountIsZero(v26, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 <= 1u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a3);
    __writecr8(a3);
  }
  if ( v23 )
    MiInvalidateCollidedIos(v23);
  if ( v13 && (a4 & 2) == 0 )
    MiReleasePageFileInfo(v29, v13, a3 == 17);
  return v34;
}
