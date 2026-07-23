/*
 * XREFs of ExpWnfStartKernelDispatcher @ 0x1409C2020
 * Callers:
 *     ExpWnfNotifySubscription @ 0x1409C38A8 (ExpWnfNotifySubscription.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1409C7D10 (ExpWnfDispatchKernelSubscription.c)
 */

void __fastcall ExpWnfStartKernelDispatcher(int a1)
{
  if ( a1 )
  {
    ExpWnfDispatchKernelSubscription();
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)PspSiloMonitorLock.StackLimit + 10, 2u);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)PspSiloMonitorLock.StackLimit + 10, 3, 2) == 2 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)PspSiloMonitorLock.StackLimit + 8), DelayedWorkQueue);
  }
}
