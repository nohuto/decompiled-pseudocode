/*
 * XREFs of IoAcquireCancelSpinLock @ 0x14044F400
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __stdcall IoAcquireCancelSpinLock(PKIRQL Irql)
{
  __int64 v1; // r8
  KIRQL CurrentIrql; // bl
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
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
