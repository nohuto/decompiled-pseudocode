/*
 * XREFs of MiLockProtoPoolPage @ 0x1402F50D0
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282DC0 (MiMakePageAvoidRead.c)
 *     MiReplaceLockedPage @ 0x140295664 (MiReplaceLockedPage.c)
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MiQueryPteAttributes @ 0x1402D2E80 (MiQueryPteAttributes.c)
 *     MiWalkVaRange @ 0x1402D3560 (MiWalkVaRange.c)
 *     MiMigratePfn @ 0x1402F6990 (MiMigratePfn.c)
 *     MiCombineWithStandbyExisting @ 0x140307CC4 (MiCombineWithStandbyExisting.c)
 *     MiCombineWithExisting @ 0x140308244 (MiCombineWithExisting.c)
 *     MiResolveProtoCombine @ 0x1403089FC (MiResolveProtoCombine.c)
 *     MiWalkEntireSubsection @ 0x14031B370 (MiWalkEntireSubsection.c)
 *     MiTranslatePageForCopy @ 0x140338D4C (MiTranslatePageForCopy.c)
 *     MiDeleteMergedPte @ 0x14033C800 (MiDeleteMergedPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033F350 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiAllocateInPageSupport @ 0x140371500 (MiAllocateInPageSupport.c)
 *     MiResolveProtoPteFault @ 0x1403A5DAC (MiResolveProtoPteFault.c)
 *     MiSoftFaultMappedView @ 0x1403BB610 (MiSoftFaultMappedView.c)
 *     MiMakeProtoPoolReadOnly @ 0x1404C57B8 (MiMakeProtoPoolReadOnly.c)
 *     MiGetPageFileSectionForReservation @ 0x1404D16B4 (MiGetPageFileSectionForReservation.c)
 *     MiInsertLargeVadMapping @ 0x140510234 (MiInsertLargeVadMapping.c)
 *     MiSoftFaultClusterTradeAcquireLocks @ 0x140712350 (MiSoftFaultClusterTradeAcquireLocks.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetContainingPageTable @ 0x1402D9BF0 (MiGetContainingPageTable.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F60D0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiGetLeafPfnBuddy @ 0x140416870 (MiGetLeafPfnBuddy.c)
 *     MiSpinForProtoPoolLock @ 0x1404168D0 (MiSpinForProtoPoolLock.c)
 */

__int64 __fastcall MiLockProtoPoolPage(ULONG_PTR BugCheckParameter4, _BYTE *a2)
{
  unsigned __int64 v2; // rbp
  BOOL v5; // r12d
  ULONG_PTR v6; // r13
  unsigned __int64 *v7; // rdx
  unsigned __int64 v8; // rdi
  ULONG_PTR ContainingPageTable; // rdi
  __int64 v11; // rbx
  unsigned int v12; // r14d
  unsigned __int8 v13; // dl
  unsigned __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  int v17; // ecx
  bool v18; // zf
  unsigned __int64 v19; // rax
  volatile signed __int64 *v20; // r8
  signed __int64 i; // rcx
  signed __int64 v22; // rax
  char v23; // r14
  __int64 v24; // rax
  ULONG *v25; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v28; // ett
  char v29; // al
  __int64 LeafPfnBuddy; // rax
  _QWORD *v31; // rcx
  _BYTE v32[4]; // [rsp+60h] [rbp+0h] BYREF

  v2 = (unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( a2 )
    *a2 = 17;
  v5 = BugCheckParameter4 >= 0xFFFF800000000000uLL
    && *((_BYTE *)&MiState + ((BugCheckParameter4 >> 39) & 0x1FF) + 46064) == 4;
  while ( 1 )
  {
    if ( !v5 )
      goto LABEL_7;
    ContainingPageTable = MiGetContainingPageTable(BugCheckParameter4);
    v6 = BugCheckParameter4 & 0xFFFFFFFFFFFFLL;
LABEL_17:
    v11 = 48 * ContainingPageTable - 0x220000000000LL;
    if ( !a2 )
      break;
    v29 = MiSafeLockPage(ContainingPageTable, (__int64)v7);
    *(_BYTE *)v2 = v29;
    v13 = v29;
    if ( v29 != 17 )
      goto LABEL_21;
  }
  *(_BYTE *)v2 = 17;
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v12);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v11 + 24) < 0 );
  }
  v13 = *(_BYTE *)v2;
LABEL_21:
  if ( !v5 )
  {
    v14 = *(_QWORD *)(((v6 >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL);
    if ( (v14 & 1) == 0 || (v14 & 0x200) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v13 <= 1u )
      {
        if ( KiIrqlFlags )
        {
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
          v13 = *(_BYTE *)v2;
        }
        __writecr8(v13);
      }
    }
    else
    {
      if ( ContainingPageTable == ((v14 >> 12) & 0xFFFFFFFFFFLL) )
      {
        if ( (*(_QWORD *)(v11 + 40) & 0x10000000000LL) == 0 && (*(_QWORD *)(v11 + 40) & 0x20000000000000LL) == 0 )
        {
          v15 = *(_DWORD *)(v11 + 32);
          v16 = *(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          v17 = 0;
          if ( !(_WORD)v15 )
            goto LABEL_51;
          if ( (_WORD)v15 == 1 )
          {
            if ( v16 || (*(_BYTE *)(v11 + 34) & 8) != 0 )
              v17 = 1;
            if ( !v17 )
              goto LABEL_32;
LABEL_51:
            v23 = 0;
            if ( *(__int64 *)(v11 + 40) < 0 && (*(_DWORD *)(v11 + 16) & 0x400LL) != 0
              || (*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
              && (*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
              && (*(_BYTE *)(v11 + 35) & 0x20) != 0 )
            {
              v23 = 1;
            }
            v24 = (*(_QWORD *)(v11 + 40) >> 43) & 0x3FFLL;
            v25 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8 * v24);
            if ( v23
              && !(unsigned int)MiChargeCommit(
                                  *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * v24),
                                  1LL,
                                  4LL,
                                  0x8000000000000000uLL) )
            {
              goto LABEL_33;
            }
            if ( v25 == &MiSystemPartition )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
              while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
              {
                v28 = CachedResidentAvailable;
                CachedResidentAvailable = _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                            CachedResidentAvailable - 1,
                                            CachedResidentAvailable);
                if ( v28 == CachedResidentAvailable )
                  goto LABEL_32;
              }
            }
            if ( !(unsigned int)MiChargePartitionResidentAvailable(v25, 1LL, 0xFFFFFFFFLL) )
            {
              if ( v23 )
                MiReturnCommit(v25, 1LL, 0LL);
              goto LABEL_33;
            }
            goto LABEL_32;
          }
          if ( (_WORD)v15 == 2 && v16 && (*(_BYTE *)(v11 + 34) & 8) != 0 )
            goto LABEL_51;
        }
LABEL_32:
        *(_DWORD *)(v11 + 32) = (*(_DWORD *)(v11 + 32) + 1) ^ ((*(_DWORD *)(v11 + 32) + 1) ^ *(_DWORD *)(v11 + 32)) & 0xFFFF0000;
        goto LABEL_33;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v13 <= 1u )
      {
        if ( KiIrqlFlags )
        {
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
          v13 = *(_BYTE *)v2;
        }
        __writecr8(v13);
      }
LABEL_7:
      v6 = BugCheckParameter4 & 0xFFFFFFFFFFFFLL;
      v7 = (unsigned __int64 *)((((BugCheckParameter4 & 0xFFFFFFFFFFFFLL) >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL);
      while ( 1 )
      {
        v8 = *v7;
        if ( (*v7 & 1) == 0 || (v8 & 0x200) != 0 )
          break;
        ContainingPageTable = (v8 >> 12) & 0xFFFFFFFFFFLL;
        if ( ContainingPageTable <= qword_140E2D7A0
          && (*(_QWORD *)(48 * ContainingPageTable - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
        {
          goto LABEL_17;
        }
      }
    }
    return 0LL;
  }
LABEL_33:
  if ( *(_BYTE *)v2 != 17 )
    *a2 = *(_BYTE *)v2;
  v18 = (*(_BYTE *)(v11 + 34) & 0x20) == 0;
  *(_OWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
  *(_OWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
  *(_OWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
  *(_OWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
  if ( v18 )
  {
    *(_DWORD *)(v11 + 32) |= 0x200000u;
  }
  else
  {
    *(_DWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
    LeafPfnBuddy = MiGetLeafPfnBuddy(v11, 1LL);
    if ( LeafPfnBuddy )
    {
      v31 = *(_QWORD **)(LeafPfnBuddy + 8);
      if ( *v31 != LeafPfnBuddy )
        __fastfail(3u);
      *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v31;
      *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = LeafPfnBuddy;
      *v31 = v2 + 64;
      *(_QWORD *)(LeafPfnBuddy + 8) = v2 + 64;
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)v11 = ((v2 + 64) >> 3) ^ (*(_QWORD *)v11 ^ ((v2 + 64) >> 3)) & 0xFFFFF00000000001uLL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiSpinForProtoPoolLock(v2 + 64);
    *(_DWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx((_DWORD *)(v2 + 4));
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
  }
  if ( (*(_QWORD *)(v11 + 24) & 0x4000000000000000LL) == 0 && (*(_QWORD *)(v11 + 40) & 0x10000000000LL) == 0 )
  {
    v19 = (__int64)(*(_QWORD *)(v11 + 8) << 25) >> 16;
    if ( v19 < 0xFFFF800000000000uLL || *((_BYTE *)&MiState + ((v19 >> 39) & 0x1FF) + 46064) != 4 )
    {
      v20 = (volatile signed __int64 *)(*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL);
      if ( (*v20 & 0x20) == 0 )
      {
        for ( i = *v20; ; i = v22 )
        {
          if ( (MiFlags & 0x8000000) != 0 )
            _mm_lfence();
          v22 = _InterlockedCompareExchange64(v20, i | 0x20, i);
          if ( i == v22 )
            break;
        }
      }
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v11;
}
