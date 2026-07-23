/*
 * XREFs of PopPowerActionWatchdog @ 0x14060A380
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x1404F7F48 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PopInternalAddToDumpFile @ 0x1406032D4 (PopInternalAddToDumpFile.c)
 */

void PopPowerActionWatchdog()
{
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  PopStateTransitionTimeoutWorker.Parameter = 0LL;
  PopStateTransitionTimeoutWorker.WorkerRoutine = (void (__fastcall *)(void *))PopStateTransitionTimeoutDispatch;
  PopStateTransitionTimeoutWorker.List.Flink = 0LL;
  ExQueueWorkItem(&PopStateTransitionTimeoutWorker, HyperCriticalWorkQueue);
}
