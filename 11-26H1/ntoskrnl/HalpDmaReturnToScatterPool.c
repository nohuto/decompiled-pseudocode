/*
 * XREFs of HalpDmaReturnToScatterPool @ 0x14035B454
 * Callers:
 *     HalpDmaReturnPageToOwner @ 0x14035B200 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaFreeMapRegisters @ 0x14035B5C0 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaReturnPageToSource @ 0x140534F0C (HalpDmaReturnPageToSource.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall HalpDmaReturnToScatterPool(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r15
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // bp
  volatile __int64 *v7; // rdi
  unsigned __int8 v8; // si
  __int64 v9; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a3;
  v5 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
  {
    v7 = (volatile __int64 *)(a1 + 128);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 128);
    v8 = KeGetCurrentIrql();
    if ( v8 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = v8;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    LockHandle.OldIrql = v8;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v9 = _InterlockedExchange64(v7, (__int64)&LockHandle);
      if ( v9 )
        KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v9, a3);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v7);
    }
  }
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(v5 + 32);
  ++*(_DWORD *)(v5 + 40);
  *(_QWORD *)(v5 + 32) = a2;
  if ( v3 )
    ++*(_DWORD *)(v5 + 216);
  if ( CurrentIrql != 15 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
