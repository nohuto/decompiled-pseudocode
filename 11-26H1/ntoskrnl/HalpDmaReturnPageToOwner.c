/*
 * XREFs of HalpDmaReturnPageToOwner @ 0x14035B200
 * Callers:
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140358724 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     HalpDmaReturnToContiguousPool @ 0x14035B35C (HalpDmaReturnToContiguousPool.c)
 *     HalpDmaReturnToScatterPool @ 0x14035B454 (HalpDmaReturnToScatterPool.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall HalpDmaReturnPageToOwner(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)(a3 + 56) = a3;
  if ( !a1 )
  {
    if ( (*(_BYTE *)(a3 + 48) & 8) != 0 )
      goto LABEL_16;
    goto LABEL_18;
  }
  v5 = *(_QWORD *)(a3 + 48);
  if ( !*(_BYTE *)(a1 + 442) )
  {
    if ( (v5 & 4) == 0 )
    {
      v9 = a1;
      goto LABEL_19;
    }
LABEL_18:
    v9 = a2;
LABEL_19:
    HalpDmaReturnToContiguousPool(v9, a3, 0LL, a2);
    return;
  }
  if ( (v5 & 4) != 0 )
  {
    if ( (v5 & 8) != 0 )
    {
LABEL_16:
      HalpDmaReturnToScatterPool(a2, a3, 0LL);
      return;
    }
    goto LABEL_18;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 128);
    v7 = KeGetCurrentIrql();
    if ( v7 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = v7;
      KiRaiseIrqlProcessIrqlFlags(v5, 2LL);
    }
    LockHandle.OldIrql = v7;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v8 = _InterlockedExchange64((volatile __int64 *)(a1 + 128), (__int64)&LockHandle);
      if ( v8 )
        KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v8, a3);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(a1 + 128));
    }
  }
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 32);
  ++*(_DWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 32) = a3;
  if ( CurrentIrql != 15 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
