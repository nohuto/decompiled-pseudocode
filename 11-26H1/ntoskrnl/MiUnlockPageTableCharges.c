/*
 * XREFs of MiUnlockPageTableCharges @ 0x140318F40
 * Callers:
 *     MiProbeUnlockPage @ 0x14028B900 (MiProbeUnlockPage.c)
 *     MiUnlockPageTableRange @ 0x140317220 (MiUnlockPageTableRange.c)
 *     MiLockVirtualMemoryVa @ 0x140318C10 (MiLockVirtualMemoryVa.c)
 *     MiUnlockWsle @ 0x140324658 (MiUnlockWsle.c)
 *     MiDecrementCloneBlock @ 0x14036A250 (MiDecrementCloneBlock.c)
 *     MiCopyOnWriteReturnCharges @ 0x14036B1E0 (MiCopyOnWriteReturnCharges.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     MiUnlockPhysicalPageByVa @ 0x1406EA3E0 (MiUnlockPhysicalPageByVa.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiPfnShareCountIsZero @ 0x1402DC770 (MiPfnShareCountIsZero.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIsProtoPoolPfnInNonPagedPool @ 0x14031C220 (MiIsProtoPoolPfnInNonPagedPool.c)
 *     MiSignalCommitSignals @ 0x14043CAA0 (MiSignalCommitSignals.c)
 *     MiIsLowestPageTablePage @ 0x140467D50 (MiIsLowestPageTablePage.c)
 *     MiRestockOverCommit @ 0x1404F9494 (MiRestockOverCommit.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiUnlockPageTableCharges(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v2; // r14
  ULONG_PTR v3; // rdi
  int v4; // r12d
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // r15
  unsigned int v9; // ebx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v12; // zf
  _DWORD *v13; // rbx
  volatile LONG *v14; // rcx
  unsigned __int64 v15; // rdi
  struct _KPRCB *v16; // r8
  __int64 CachedCommit; // rdx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v2 = 0LL;
  v3 = BugCheckParameter2;
  if ( a2 == 2 )
  {
    v4 = 3;
    if ( !(unsigned int)MiIsLowestPageTablePage() )
      goto LABEL_66;
  }
  else if ( a2 )
  {
    if ( a2 == 1 )
    {
      result = MiIsProtoPoolPfnInNonPagedPool(BugCheckParameter2);
      if ( (_DWORD)result )
        return result;
    }
    v4 = 1;
  }
  else
  {
    v4 = 4;
  }
  if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_66:
    KeBugCheckEx(
      0x1Au,
      0x41791uLL,
      v3,
      *(_QWORD *)(v3 + 8) | 0x8000000000000000uLL,
      *(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v6 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v3 + 40) & 0xFFFFFFFFFFLL;
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    *(_QWORD *)(v3 + 24) = ((*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 0x10000) ^ (*(_QWORD *)(v3 + 24) ^ ((*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 0x10000)) & 0xC000000000000000uLL;
    if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
      break;
    if ( !v2 )
      v2 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL));
    result = *(_QWORD *)(v3 + 24);
    ++v6;
    if ( (result & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    {
      result = MiPfnShareCountIsZero(v3, 0LL);
      if ( (_DWORD)result != 3 )
        ++v7;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v4 )
      goto LABEL_29;
    v3 = 48 * v8 - 0x220000000000LL;
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_29:
  if ( v6 )
  {
    if ( (ULONG *)v2 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v6 + CachedResidentAvailable <= 0x100 && v6 < 0x80000 )
        {
          while ( 1 )
          {
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                     CachedResidentAvailable + v6,
                                     CachedResidentAvailable);
            v12 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
            CachedResidentAvailable = (int)result;
            if ( v12 )
              goto LABEL_42;
            if ( (_DWORD)result != -1 )
            {
              result = v6 + (int)result;
              if ( v6 + CachedResidentAvailable <= 0x100 )
                continue;
            }
            break;
          }
        }
        if ( (int)CachedResidentAvailable > 192 )
        {
          result = (unsigned int)_InterlockedCompareExchange(
                                   (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                   192,
                                   CachedResidentAvailable);
          if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
          {
            result = (unsigned int)(CachedResidentAvailable - 192);
            v6 += (int)result;
          }
        }
        if ( !v6 )
          goto LABEL_42;
      }
    }
    _InterlockedAdd64((volatile signed __int64 *)(v2 + 22528), v6);
  }
LABEL_42:
  if ( !v7 )
    return result;
  if ( *(_QWORD *)(v2 + 17288) )
  {
    v13 = (_DWORD *)(v2 + 17272);
    v14 = (volatile LONG *)(v2 + 17272);
    if ( KeGetCurrentIrql() == 2 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v14);
      result = MiRestockOverCommit(v2, v7);
      v7 = result;
    }
    else
    {
      v15 = ExAcquireSpinLockExclusive(v14);
      result = MiRestockOverCommit(v2, v7);
      v7 = result;
      if ( (_BYTE)v15 != 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
          || (result = LODWORD(stru_140F11D08.WaitStatus), LODWORD(stru_140F11D08.WaitStatus)) )
        {
          *v13 = 0;
        }
        else
        {
          result = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v2 + 17272), retaddr);
        }
        if ( KiIrqlFlags )
          result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
        __writecr8(v15);
LABEL_58:
        if ( !v7 )
          return result;
        goto LABEL_59;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = LODWORD(stru_140F11D08.WaitStatus), LODWORD(stru_140F11D08.WaitStatus)) )
    {
      *v13 = 0;
    }
    else
    {
      result = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v2 + 17272), retaddr);
    }
    goto LABEL_58;
  }
LABEL_59:
  if ( (ULONG *)v2 != &MiSystemPartition
    || *(_DWORD *)(v2 + 17296)
    || (v16 = KeGetCurrentPrcb(),
        _m_prefetchw((const void *)&v16->CachedCommit),
        CachedCommit = v16->CachedCommit,
        (unsigned __int64)(v7 + CachedCommit) > 0x100) )
  {
LABEL_64:
    _InterlockedAdd64((volatile signed __int64 *)(v2 + 23168), -v7);
    return MiSignalCommitSignals(v2, _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 23104), -v7) - v7);
  }
  else
  {
    while ( 1 )
    {
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&v16->CachedCommit,
                               CachedCommit + v7,
                               CachedCommit);
      if ( (int)result == CachedCommit )
        break;
      CachedCommit = (int)result;
      if ( (unsigned __int64)((int)result + v7) > 0x100 )
        goto LABEL_64;
    }
  }
  return result;
}
