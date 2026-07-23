/*
 * XREFs of MiLockProtoPoolPage @ 0x1402D7150
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282330 (MiMakePageAvoidRead.c)
 *     MiReplaceLockedPage @ 0x140294BC4 (MiReplaceLockedPage.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiQueryPteAttributes @ 0x1402B4C40 (MiQueryPteAttributes.c)
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiCombineWithStandbyExisting @ 0x1402E9D44 (MiCombineWithStandbyExisting.c)
 *     MiCombineWithExisting @ 0x1402EA2C4 (MiCombineWithExisting.c)
 *     MiResolveProtoCombine @ 0x1402EAA7C (MiResolveProtoCombine.c)
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiTranslatePageForCopy @ 0x14033ADCC (MiTranslatePageForCopy.c)
 *     MiDeleteMergedPte @ 0x14033E880 (MiDeleteMergedPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403413D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiAllocateInPageSupport @ 0x1403732B0 (MiAllocateInPageSupport.c)
 *     MiResolveProtoPteFault @ 0x1403A7B0C (MiResolveProtoPteFault.c)
 *     MiSoftFaultMappedView @ 0x1403C5480 (MiSoftFaultMappedView.c)
 *     MiMakeProtoPoolReadOnly @ 0x1404BF168 (MiMakeProtoPoolReadOnly.c)
 *     MiGetPageFileSectionForReservation @ 0x1404CB260 (MiGetPageFileSectionForReservation.c)
 *     MiInsertLargeVadMapping @ 0x140509CA4 (MiInsertLargeVadMapping.c)
 *     MiSoftFaultClusterTradeAcquireLocks @ 0x140717048 (MiSoftFaultClusterTradeAcquireLocks.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiChargePartitionResidentAvailable @ 0x1402D8150 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiGetLeafPfnBuddy @ 0x14040AE80 (MiGetLeafPfnBuddy.c)
 *     MiSpinForProtoPoolLock @ 0x14040AEE0 (MiSpinForProtoPoolLock.c)
 */

__int64 __fastcall MiLockProtoPoolPage(ULONG_PTR BugCheckParameter4, _BYTE *a2)
{
  unsigned __int64 v2; // rbp
  BOOL v5; // r12d
  __int64 v6; // r8
  ULONG_PTR v7; // r13
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // rdi
  ULONG_PTR ContainingPageTable; // rdi
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // r14d
  unsigned __int8 v15; // dl
  unsigned __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rax
  int v19; // ecx
  bool v20; // zf
  unsigned __int64 v21; // rax
  volatile signed __int64 *v22; // r8
  signed __int64 i; // rcx
  signed __int64 v24; // rax
  char v25; // r14
  __int64 v26; // rax
  ULONG *v27; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v30; // ett
  char v31; // al
  __int64 LeafPfnBuddy; // rax
  _QWORD *v33; // rcx
  _BYTE v34[4]; // [rsp+60h] [rbp+0h] BYREF

  v2 = (unsigned __int64)v34 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( a2 )
    *a2 = 17;
  v5 = BugCheckParameter4 >= 0xFFFF800000000000uLL
    && *((_BYTE *)&MiState + ((BugCheckParameter4 >> 39) & 0x1FF) + 46064) == 4;
  while ( 1 )
  {
    v6 = 0xFFFFF68000000000uLL;
    if ( !v5 )
      goto LABEL_7;
    ContainingPageTable = MiGetContainingPageTable(BugCheckParameter4);
    v7 = BugCheckParameter4 & 0xFFFFFFFFFFFFLL;
LABEL_17:
    v12 = 6 * ContainingPageTable;
    v13 = 48 * ContainingPageTable - 0x220000000000LL;
    if ( !a2 )
      break;
    v31 = MiSafeLockPage(ContainingPageTable, (__int64)v8, v6);
    *(_BYTE *)v2 = v31;
    v15 = v31;
    if ( v31 != 17 )
      goto LABEL_21;
  }
  *(_BYTE *)v2 = 17;
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v14 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12, v8, v6) )
      {
        HvlNotifyLongSpinWait(v14);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v13 + 24) < 0 );
  }
  v15 = *(_BYTE *)v2;
LABEL_21:
  if ( !v5 )
  {
    v6 = 0xFFFFF68000000000uLL;
    v16 = *(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL);
    if ( (v16 & 1) == 0 || (v16 & 0x200) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v15 <= 1u )
      {
        if ( KiIrqlFlags )
        {
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
          v15 = *(_BYTE *)v2;
        }
        __writecr8(v15);
      }
    }
    else
    {
      if ( ContainingPageTable == ((v16 >> 12) & 0xFFFFFFFFFFLL) )
      {
        if ( (*(_QWORD *)(v13 + 40) & 0x10000000000LL) == 0 && (*(_QWORD *)(v13 + 40) & 0x20000000000000LL) == 0 )
        {
          v17 = *(_DWORD *)(v13 + 32);
          v18 = *(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          v19 = 0;
          if ( !(_WORD)v17 )
            goto LABEL_51;
          if ( (_WORD)v17 == 1 )
          {
            if ( v18 || (*(_BYTE *)(v13 + 34) & 8) != 0 )
              v19 = 1;
            if ( !v19 )
              goto LABEL_32;
LABEL_51:
            v25 = 0;
            if ( *(__int64 *)(v13 + 40) < 0 && (*(_DWORD *)(v13 + 16) & 0x400LL) != 0
              || (*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
              && (*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
              && (*(_BYTE *)(v13 + 35) & 0x20) != 0 )
            {
              v25 = 1;
            }
            v26 = (*(_QWORD *)(v13 + 40) >> 43) & 0x3FFLL;
            v27 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8 * v26);
            if ( v25
              && !(unsigned int)MiChargeCommit(
                                  *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v26),
                                  1LL,
                                  4LL,
                                  0x8000000000000000uLL) )
            {
              goto LABEL_33;
            }
            if ( v27 == &MiSystemPartition )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
              while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
              {
                v30 = CachedResidentAvailable;
                CachedResidentAvailable = _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                            CachedResidentAvailable - 1,
                                            CachedResidentAvailable);
                if ( v30 == CachedResidentAvailable )
                  goto LABEL_32;
              }
            }
            if ( !(unsigned int)MiChargePartitionResidentAvailable(v27, 1LL, 0xFFFFFFFFLL) )
            {
              if ( v25 )
                MiReturnCommit(v27, 1LL, 0LL);
              goto LABEL_33;
            }
            goto LABEL_32;
          }
          if ( (_WORD)v17 == 2 && v18 && (*(_BYTE *)(v13 + 34) & 8) != 0 )
            goto LABEL_51;
        }
LABEL_32:
        *(_DWORD *)(v13 + 32) = (*(_DWORD *)(v13 + 32) + 1) ^ ((*(_DWORD *)(v13 + 32) + 1) ^ *(_DWORD *)(v13 + 32)) & 0xFFFF0000;
        goto LABEL_33;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v15 <= 1u )
      {
        if ( KiIrqlFlags )
        {
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
          v15 = *(_BYTE *)v2;
          v6 = 0xFFFFF68000000000uLL;
        }
        __writecr8(v15);
      }
LABEL_7:
      v7 = BugCheckParameter4 & 0xFFFFFFFFFFFFLL;
      v8 = (unsigned __int64 *)((((BugCheckParameter4 & 0xFFFFFFFFFFFFLL) >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL);
      while ( 1 )
      {
        v9 = *v8;
        if ( (*v8 & 1) == 0 || (v9 & 0x200) != 0 )
          break;
        ContainingPageTable = (v9 >> 12) & 0xFFFFFFFFFFLL;
        if ( ContainingPageTable <= qword_140E2D920
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
  v20 = (*(_BYTE *)(v13 + 34) & 0x20) == 0;
  *(_OWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
  *(_OWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
  *(_OWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
  *(_OWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
  if ( v20 )
  {
    *(_DWORD *)(v13 + 32) |= 0x200000u;
  }
  else
  {
    *(_DWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
    LeafPfnBuddy = MiGetLeafPfnBuddy(v13, 1LL);
    if ( LeafPfnBuddy )
    {
      v33 = *(_QWORD **)(LeafPfnBuddy + 8);
      if ( *v33 != LeafPfnBuddy )
        __fastfail(3u);
      *(_QWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v33;
      *(_QWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = LeafPfnBuddy;
      *v33 = v2 + 64;
      *(_QWORD *)(LeafPfnBuddy + 8) = v2 + 64;
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v34 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ((unsigned __int64)v34 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)v13 = ((v2 + 64) >> 3) ^ (*(_QWORD *)v13 ^ ((v2 + 64) >> 3)) & 0xFFFFF00000000001uLL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiSpinForProtoPoolLock(v2 + 64);
    *(_DWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx((_DWORD *)(v2 + 4));
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
  }
  if ( (*(_QWORD *)(v13 + 24) & 0x4000000000000000LL) == 0 && (*(_QWORD *)(v13 + 40) & 0x10000000000LL) == 0 )
  {
    v21 = (__int64)(*(_QWORD *)(v13 + 8) << 25) >> 16;
    if ( v21 < 0xFFFF800000000000uLL || *((_BYTE *)&MiState + ((v21 >> 39) & 0x1FF) + 46064) != 4 )
    {
      v22 = (volatile signed __int64 *)(*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL);
      if ( (*v22 & 0x20) == 0 )
      {
        for ( i = *v22; ; i = v24 )
        {
          if ( (MiFlags & 0x8000000) != 0 )
            _mm_lfence();
          v24 = _InterlockedCompareExchange64(v22, i | 0x20, i);
          if ( i == v24 )
            break;
        }
      }
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v13;
}
