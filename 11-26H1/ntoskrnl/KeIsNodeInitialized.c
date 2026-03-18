/*
 * XREFs of KeIsNodeInitialized @ 0x14038227C
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1402020DC (ExpTryQueueWorkItem.c)
 *     ExpCheckForWorker @ 0x140344BD8 (ExpCheckForWorker.c)
 *     ExpQueueWorkItem @ 0x140381D74 (ExpQueueWorkItem.c)
 *     ExTryQueueWorkItem @ 0x140382070 (ExTryQueueWorkItem.c)
 *     ExpEnumerateNextActiveWorkSubQueue @ 0x1403822A8 (ExpEnumerateNextActiveWorkSubQueue.c)
 *     ExInitializeProcessor @ 0x1406CB480 (ExInitializeProcessor.c)
 *     ExpLegacyWorkerInitialization @ 0x1406D0AB4 (ExpLegacyWorkerInitialization.c)
 *     ExpWorkQueueHealthMetricsMonitorCallback @ 0x1406D0CF0 (ExpWorkQueueHealthMetricsMonitorCallback.c)
 *     ExpPartitionCreatePool @ 0x14077211C (ExpPartitionCreatePool.c)
 *     ExpPartitionCreatePoolDelayed @ 0x140772290 (ExpPartitionCreatePoolDelayed.c)
 *     ExStartStopWorkQueueProvider @ 0x14083F6BC (ExStartStopWorkQueueProvider.c)
 *     ExpPartitionDestroy @ 0x14083FAC8 (ExpPartitionDestroy.c)
 *     ExpPartitionInitialize @ 0x14083FCA4 (ExpPartitionInitialize.c)
 *     ExpPartitionStart @ 0x14083FE48 (ExpPartitionStart.c)
 *     ExpWorkerInitialization @ 0x140CE6768 (ExpWorkerInitialization.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsNodeInitialized(unsigned __int16 a1)
{
  int *v1; // rcx

  v1 = (int *)KeNodeBlock[a1];
  return v1 && v1 != &dword_140F268E8;
}
