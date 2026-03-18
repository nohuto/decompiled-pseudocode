/*
 * XREFs of KeAcquireInterruptSpinLock @ 0x140476B00
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x14032F380 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14032F490 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

KIRQL __stdcall KeAcquireInterruptSpinLock(PKINTERRUPT Interrupt)
{
  unsigned __int64 SynchronizeIrql; // rdx
  PKINTERRUPT v2; // rdi
  KIRQL CurrentIrql; // bl
  volatile signed __int32 *ActualLock; // rcx

  SynchronizeIrql = Interrupt->SynchronizeIrql;
  v2 = Interrupt;
  if ( !(_BYTE)SynchronizeIrql )
    KeBugCheckEx(0x13Bu, 1uLL, (ULONG_PTR)Interrupt, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)SynchronizeIrql )
    __writecr8(SynchronizeIrql);
  if ( KiIrqlFlags )
  {
    LOBYTE(Interrupt) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Interrupt, SynchronizeIrql);
  }
  ActualLock = (volatile signed __int32 *)v2->ActualLock;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    if ( _interlockedbittestandset64(ActualLock, 0LL) )
      KxWaitForSpinLockAndAcquire(ActualLock);
  }
  else
  {
    KiAcquireSpinLockInstrumented(ActualLock);
  }
  return CurrentIrql;
}
