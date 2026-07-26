/*
 * XREFs of NdisAcquireReadWriteLock @ 0x14003B0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x14003B550 (-ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 *     ?ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z @ 0x14003B5F0 (-ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z.c)
 *     ?ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z @ 0x140040E50 (-ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z.c)
 *     ?ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1400C57E0 (-ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __stdcall NdisAcquireReadWriteLock(PNDIS_RW_LOCK Lock, BOOLEAN fWrite, PLOCK_STATE LockState)
{
  __int16 v5; // bp
  _NDIS_RW_LOCK_REFCOUNT *v6; // rsi
  __int64 v7; // rax
  $822B11F23F464C83F16E59194F52E674 *v8; // rsi
  __int64 v9; // r14
  unsigned int RefCount; // r12d
  __int64 v11; // rbp
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( fWrite )
  {
    LockState->LockState = 1;
    if ( Lock->Context == KeGetCurrentThread() )
    {
      LockState->LockState = 2;
    }
    else if ( ndisMaxNumberOfProcessors > 0x100 )
    {
      LockState->OldIrql = KfRaiseIrql(2u);
      if ( (unsigned int)ndisAcquireWriteLockSharedRefCnt(Lock) )
        LockState->LockState = 4;
      else
        LockState->LockState = 5;
    }
    else
    {
      LockState->OldIrql = KeAcquireSpinLockRaiseToDpc(&Lock->SpinLock);
      LODWORD(v7) = KeGetPcr()->Prcb.Number;
      if ( ndisMaxNumberOfProcessors > 0x40 )
      {
        ndisAcquireWriteLockPerCpuRefCnt(Lock, (unsigned int *)&Lock->16 + (unsigned int)v7, 4uLL);
      }
      else
      {
        v8 = &Lock->16;
        v9 = 2 * (v7 + 1);
        RefCount = Lock->RefCount[v7].RefCount;
        Lock->RefCount[v7].RefCount = 0;
        v11 = 64LL;
        do
        {
          while ( v8->RefCount[0].RefCount )
            KeStallExecutionProcessor(1u);
          v8 = ($822B11F23F464C83F16E59194F52E674 *)((char *)v8 + 16);
          --v11;
        }
        while ( v11 );
        *((_DWORD *)&Lock->SpinLock + 2 * v9) = RefCount;
      }
      LockState->LockState = 4;
      Lock->Context = KeGetCurrentThread();
    }
  }
  else
  {
    HIBYTE(v5) = 0;
    LockState->LockState = 0;
    LockState->OldIrql = KfRaiseIrql(2u);
    if ( ndisMaxNumberOfProcessors > 0x40 )
    {
      if ( ndisMaxNumberOfProcessors > 0x100 )
      {
        LOBYTE(v5) = (unsigned int)ndisAcquireReadLockSharedRefCnt(&Lock->SpinLock) != 0;
        LockState->LockState = v5 + 2;
      }
      else
      {
        ndisAcquireReadLockPerCpuRefCnt(&Lock->SpinLock, (unsigned int *)&Lock->16 + KeGetPcr()->Prcb.Number);
        LockState->LockState = 3;
      }
    }
    else
    {
      v6 = &Lock->RefCount[KeGetPcr()->Prcb.Number];
      ++v6->RefCount;
      _InterlockedOr(v12, 0);
      if ( !KeTestSpinLock(&Lock->SpinLock) && v6->RefCount == 1 && Lock->Context != KeGetCurrentThread() )
      {
        v6->RefCount = 0;
        KeAcquireSpinLockAtDpcLevel(&Lock->SpinLock);
        ++v6->RefCount;
        KeReleaseSpinLockFromDpcLevel(&Lock->SpinLock);
      }
      LockState->LockState = 3;
    }
  }
}
