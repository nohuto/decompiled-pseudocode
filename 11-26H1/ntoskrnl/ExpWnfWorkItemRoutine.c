/*
 * XREFs of ExpWnfWorkItemRoutine @ 0x1409C7C90
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1409C7D10 (ExpWnfDispatchKernelSubscription.c)
 */

__int64 ExpWnfWorkItemRoutine()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _InterlockedAnd((volatile signed __int32 *)PspSiloMonitorLock.StackLimit + 10, 0xFFFFFFFD);
  ExpWnfDispatchKernelSubscription();
  while ( _InterlockedCompareExchange((volatile signed __int32 *)PspSiloMonitorLock.StackLimit + 10, 0, 1) != 1 )
  {
    _InterlockedAnd((volatile signed __int32 *)PspSiloMonitorLock.StackLimit + 10, 0xFFFFFFFD);
    ExpWnfDispatchKernelSubscription();
  }
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
