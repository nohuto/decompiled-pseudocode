/*
 * XREFs of KeSynchronizeExecution @ 0x140332860
 * Callers:
 *     DifKeSynchronizeExecutionWrapper @ 0x140668550 (DifKeSynchronizeExecutionWrapper.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1404FD660 (KiSynchronizePassiveInterruptExecution.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __stdcall KeSynchronizeExecution(
        PKINTERRUPT Interrupt,
        PKSYNCHRONIZE_ROUTINE SynchronizeRoutine,
        PVOID SynchronizeContext)
{
  unsigned __int64 SynchronizeIrql; // rdx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 *ActualLock; // rcx
  BOOLEAN v9; // si
  unsigned __int64 *v10; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  SynchronizeIrql = Interrupt->SynchronizeIrql;
  if ( !(_BYTE)SynchronizeIrql )
    return KiSynchronizePassiveInterruptExecution(Interrupt, SynchronizeRoutine);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)SynchronizeIrql )
    __writecr8(SynchronizeIrql);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, SynchronizeIrql);
  ActualLock = Interrupt->ActualLock;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)ActualLock, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)ActualLock);
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)ActualLock);
  }
  v9 = guard_dispatch_icall_no_overrides(SynchronizeContext, SynchronizeIrql, SynchronizeContext);
  v10 = Interrupt->ActualLock;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v10, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v9;
}
