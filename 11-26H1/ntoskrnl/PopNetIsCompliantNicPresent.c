/*
 * XREFs of PopNetIsCompliantNicPresent @ 0x140B48304
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

bool PopNetIsCompliantNicPresent()
{
  return *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[44] != 0;
}
