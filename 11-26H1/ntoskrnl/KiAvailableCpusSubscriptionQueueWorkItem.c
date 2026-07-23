/*
 * XREFs of KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404D98B0
 * Callers:
 *     KeTransitionProcessorParkState @ 0x1404208A0 (KeTransitionProcessorParkState.c)
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404D9868 (KiNotifyAvailableCpusChangeProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405E83B0 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KiNotifyAvailableCpusChangeCpuPartition @ 0x1405E850C (KiNotifyAvailableCpusChangeCpuPartition.c)
 *     KeCpuPartitionMoveCpus @ 0x1405F6240 (KeCpuPartitionMoveCpus.c)
 *     KeRegisterAvailableCpusChangeNotification @ 0x1407BBE24 (KeRegisterAvailableCpusChangeNotification.c)
 *     KiAvailableCpusProcessWorkItemCallback @ 0x140B06CA0 (KiAvailableCpusProcessWorkItemCallback.c)
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall KiAvailableCpusSubscriptionQueueWorkItem(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, BackgroundWorkQueue);
  }
}
