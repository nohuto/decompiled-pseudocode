/*
 * XREFs of PopFxDeviceCriticalRegionEnter @ 0x140397328
 * Callers:
 *     PopFxActivateComponentWorker @ 0x14037CC20 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorker @ 0x140397080 (PopFxIdleWorker.c)
 *     PopFxIdleWorkerTail @ 0x140397384 (PopFxIdleWorkerTail.c)
 *     PopFxCompleteComponentActivation @ 0x1403B8A04 (PopFxCompleteComponentActivation.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PopFxDeviceCriticalRegionEnter(__int64 a1)
{
  struct _KTHREAD *result; // rax

  result = (struct _KTHREAD *)KeGetCurrentIrql();
  if ( (unsigned __int8)result < 2u )
  {
    result = (struct _KTHREAD *)*(unsigned int *)(a1 + 864);
    if ( ((unsigned __int16)result & 0x1000) != 0 )
    {
      result = KeGetCurrentThread();
      --result->SpecialApcDisable;
    }
  }
  return result;
}
