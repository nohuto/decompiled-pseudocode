/*
 * XREFs of KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404E01D0
 * Callers:
 *     KeTransitionProcessorParkState @ 0x14042C1D0 (KeTransitionProcessorParkState.c)
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404E0188 (KiNotifyAvailableCpusChangeProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405E5A40 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KiNotifyAvailableCpusChangeCpuPartition @ 0x1405E5B9C (KiNotifyAvailableCpusChangeCpuPartition.c)
 *     KeCpuPartitionMoveCpus @ 0x1405F3880 (KeCpuPartitionMoveCpus.c)
 *     KeRegisterAvailableCpusChangeNotification @ 0x1407B8DC4 (KeRegisterAvailableCpusChangeNotification.c)
 *     KiAvailableCpusProcessWorkItemCallback @ 0x140B05090 (KiAvailableCpusProcessWorkItemCallback.c)
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall KiAvailableCpusSubscriptionQueueWorkItem(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, BackgroundWorkQueue);
  }
}
