/*
 * XREFs of HalpPmuArbiterPeriodicTimerCallback @ 0x140582A50
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void HalpPmuArbiterPeriodicTimerCallback()
{
  if ( !_InterlockedExchange((volatile __int32 *)&HalpPmuArbiter.KernelStack, 1) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&HalpPmuArbiter.StackBase, DelayedWorkQueue);
}
