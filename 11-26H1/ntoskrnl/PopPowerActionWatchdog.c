/*
 * XREFs of PopPowerActionWatchdog @ 0x140607820
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x1404FE998 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PopInternalAddToDumpFile @ 0x140600824 (PopInternalAddToDumpFile.c)
 */

void PopPowerActionWatchdog()
{
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  qword_140F110B8 = 0LL;
  qword_140F110B0 = (__int64)PopStateTransitionTimeoutDispatch;
  qword_140F110A0.List.Flink = 0LL;
  ExQueueWorkItem(&qword_140F110A0, HyperCriticalWorkQueue);
}
