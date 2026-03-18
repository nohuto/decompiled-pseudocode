/*
 * XREFs of ExpWnfWorkItemRoutine @ 0x14094C320
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDispatchKernelSubscription @ 0x14094C3A0 (ExpWnfDispatchKernelSubscription.c)
 */

__int64 ExpWnfWorkItemRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _InterlockedAnd((volatile signed __int32 *)PspSiloMonitorLock.StackLimit + 10, 0xFFFFFFFD);
  ExpWnfDispatchKernelSubscription();
  while ( _InterlockedCompareExchange((volatile signed __int32 *)PspSiloMonitorLock.StackLimit + 10, 0, 1) != 1 )
  {
    _InterlockedAnd((volatile signed __int32 *)PspSiloMonitorLock.StackLimit + 10, 0xFFFFFFFD);
    ExpWnfDispatchKernelSubscription();
  }
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v1, v2);
}
