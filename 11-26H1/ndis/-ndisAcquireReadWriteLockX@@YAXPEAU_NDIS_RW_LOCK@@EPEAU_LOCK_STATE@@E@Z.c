/*
 * XREFs of ?ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z @ 0x14003B2F0
 * Callers:
 *     NdisDprAcquireReadWriteLock @ 0x1400C58A0 (NdisDprAcquireReadWriteLock.c)
 * Callees:
 *     ?ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x14003B550 (-ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 *     ?ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z @ 0x14003B5F0 (-ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z.c)
 *     ?ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z @ 0x140040E50 (-ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z.c)
 *     ?ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1400C57E0 (-ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __fastcall ndisAcquireReadWriteLockX(struct _NDIS_RW_LOCK *a1, char a2, struct _LOCK_STATE *a3, char a4)
{
  __int16 v6; // di
  _NDIS_RW_LOCK_REFCOUNT *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r15
  unsigned int RefCount; // r12d
  $822B11F23F464C83F16E59194F52E674 *v12; // rdi
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( a2 )
  {
    a3->LockState = 1;
    if ( a1->Context == KeGetCurrentThread() )
    {
      a3->LockState = 2;
    }
    else if ( ndisMaxNumberOfProcessors > 0x100 )
    {
      if ( !a4 )
        a3->OldIrql = KfRaiseIrql(2u);
      if ( (unsigned int)ndisAcquireWriteLockSharedRefCnt(a1) )
        a3->LockState = 4;
      else
        a3->LockState = 5;
    }
    else
    {
      if ( a4 )
        KeAcquireSpinLockAtDpcLevel(&a1->SpinLock);
      else
        a3->OldIrql = KeAcquireSpinLockRaiseToDpc(&a1->SpinLock);
      LODWORD(v8) = KeGetPcr()->Prcb.Number;
      if ( ndisMaxNumberOfProcessors > 0x40 )
      {
        ndisAcquireWriteLockPerCpuRefCnt(a1, (unsigned int *)&a1->16 + (unsigned int)v8, 4uLL);
      }
      else
      {
        v9 = 64LL;
        v10 = 2 * (v8 + 1);
        RefCount = a1->RefCount[v8].RefCount;
        a1->RefCount[v8].RefCount = 0;
        v12 = &a1->16;
        do
        {
          while ( v12->RefCount[0].RefCount )
            KeStallExecutionProcessor(1u);
          v12 = ($822B11F23F464C83F16E59194F52E674 *)((char *)v12 + 16);
          --v9;
        }
        while ( v9 );
        *((_DWORD *)&a1->SpinLock + 2 * v10) = RefCount;
      }
      a3->LockState = 4;
      a1->Context = KeGetCurrentThread();
    }
  }
  else
  {
    HIBYTE(v6) = 0;
    a3->LockState = 0;
    if ( !a4 )
      a3->OldIrql = KfRaiseIrql(2u);
    if ( ndisMaxNumberOfProcessors > 0x40 )
    {
      if ( ndisMaxNumberOfProcessors > 0x100 )
      {
        LOBYTE(v6) = (unsigned int)ndisAcquireReadLockSharedRefCnt(&a1->SpinLock) != 0;
        a3->LockState = v6 + 2;
      }
      else
      {
        ndisAcquireReadLockPerCpuRefCnt(&a1->SpinLock, (unsigned int *)&a1->16 + KeGetPcr()->Prcb.Number);
        a3->LockState = 3;
      }
    }
    else
    {
      v7 = &a1->RefCount[KeGetPcr()->Prcb.Number];
      ++v7->RefCount;
      _InterlockedOr(v13, 0);
      if ( !KeTestSpinLock(&a1->SpinLock) && v7->RefCount == 1 && a1->Context != KeGetCurrentThread() )
      {
        v7->RefCount = 0;
        KeAcquireSpinLockAtDpcLevel(&a1->SpinLock);
        ++v7->RefCount;
        KeReleaseSpinLockFromDpcLevel(&a1->SpinLock);
      }
      a3->LockState = 3;
    }
  }
}
