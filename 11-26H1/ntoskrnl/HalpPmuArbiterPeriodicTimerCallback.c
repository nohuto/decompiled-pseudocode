/*
 * XREFs of HalpPmuArbiterPeriodicTimerCallback @ 0x140580530
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void HalpPmuArbiterPeriodicTimerCallback()
{
  if ( !_InterlockedExchange((volatile __int32 *)&HalpPmuArbiter.KernelStack, 1) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&HalpPmuArbiter.StackBase, DelayedWorkQueue);
}
