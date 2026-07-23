/*
 * XREFs of PopPowerAggregatorScheduleWorker @ 0x140ABC8DC
 * Callers:
 *     PopPowerAggregatorSessionSwitchWorker @ 0x1407D9FE0 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopUmpoProcessPowerMessage @ 0x1407DF428 (PopUmpoProcessPowerMessage.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409FABE4 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopNotifyCsStateExited @ 0x140ABC730 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x140B43B48 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140B48318 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall PopPowerAggregatorScheduleWorker(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 8) | 2;
  *(_DWORD *)(a1 + 8) = v1;
  if ( (v1 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 8) = v1 | 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 5584), DelayedWorkQueue);
  }
}
