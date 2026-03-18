/*
 * XREFs of PopFxDeviceCriticalRegionEnter @ 0x1403955A8
 * Callers:
 *     PopFxActivateComponentWorker @ 0x14037AE70 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorker @ 0x140395300 (PopFxIdleWorker.c)
 *     PopFxIdleWorkerTail @ 0x140395604 (PopFxIdleWorkerTail.c)
 *     PopFxCompleteComponentActivation @ 0x1403AECF4 (PopFxCompleteComponentActivation.c)
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
