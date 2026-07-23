/*
 * XREFs of KeIsNodeInitialized @ 0x14038402C
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1402020DC (ExpTryQueueWorkItem.c)
 *     ExpCheckForWorker @ 0x140346C58 (ExpCheckForWorker.c)
 *     ExpQueueWorkItem @ 0x140383B24 (ExpQueueWorkItem.c)
 *     ExTryQueueWorkItem @ 0x140383E20 (ExTryQueueWorkItem.c)
 *     ExpEnumerateNextActiveWorkSubQueue @ 0x140384058 (ExpEnumerateNextActiveWorkSubQueue.c)
 *     ExInitializeProcessor @ 0x1406CF4B0 (ExInitializeProcessor.c)
 *     ExpLegacyWorkerInitialization @ 0x1406D4AE4 (ExpLegacyWorkerInitialization.c)
 *     ExpWorkQueueHealthMetricsMonitorCallback @ 0x1406D4D20 (ExpWorkQueueHealthMetricsMonitorCallback.c)
 *     ExpPartitionCreatePool @ 0x14077511C (ExpPartitionCreatePool.c)
 *     ExpPartitionCreatePoolDelayed @ 0x140775290 (ExpPartitionCreatePoolDelayed.c)
 *     ExStartStopWorkQueueProvider @ 0x1408458FC (ExStartStopWorkQueueProvider.c)
 *     ExpPartitionDestroy @ 0x140845D08 (ExpPartitionDestroy.c)
 *     ExpPartitionInitialize @ 0x140845EE4 (ExpPartitionInitialize.c)
 *     ExpPartitionStart @ 0x140846088 (ExpPartitionStart.c)
 *     ExpWorkerInitialization @ 0x140CECB08 (ExpWorkerInitialization.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsNodeInitialized(unsigned __int16 a1)
{
  int *v1; // rcx

  v1 = (int *)KeNodeBlock[a1];
  return v1 && v1 != &dword_140F26D28;
}
