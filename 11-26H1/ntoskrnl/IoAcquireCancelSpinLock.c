/*
 * XREFs of IoAcquireCancelSpinLock @ 0x140447530
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __stdcall IoAcquireCancelSpinLock(PKIRQL Irql)
{
  __int64 v1; // r8
  UCHAR CurrentIrql; // bl
  void *ArbitraryUserPointer; // rax
  volatile __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v5 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 15);
  v6 = (__int64)ArbitraryUserPointer + 112;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v7 = _InterlockedExchange64(v5, v6);
    if ( v7 )
      KxWaitForLockOwnerShip(v6, v7, v1);
    *Irql = CurrentIrql;
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v6, v5);
    *Irql = CurrentIrql;
  }
}
