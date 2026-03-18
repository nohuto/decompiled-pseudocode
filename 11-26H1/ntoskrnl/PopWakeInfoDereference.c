/*
 * XREFs of PopWakeInfoDereference @ 0x1404FE7D4
 * Callers:
 *     PopDereferenceWakeInfos @ 0x1404FA21C (PopDereferenceWakeInfos.c)
 *     PopQueryMostRecentWakeSourceAttributes @ 0x1407CF840 (PopQueryMostRecentWakeSourceAttributes.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1407D6B00 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopQueryMostRecentWakeSourceInfo @ 0x140B62680 (PopQueryMostRecentWakeSourceInfo.c)
 *     PopNewWakeInfo @ 0x140C09008 (PopNewWakeInfo.c)
 *     PopIsMostRecentWakeAttended @ 0x140C0C3F8 (PopIsMostRecentWakeAttended.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall PopWakeInfoDereference(__int64 a1)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 0xFFFFFFFF) == 1 )
  {
    v2 = (struct _WORK_QUEUE_ITEM *)(a1 + 48);
    v2->Parameter = (void *)a1;
    v2->WorkerRoutine = (void (__fastcall *)(void *))PopFreeWakeInfo;
    v2->List.Flink = 0LL;
    ExQueueWorkItem(v2, DelayedWorkQueue);
  }
}
