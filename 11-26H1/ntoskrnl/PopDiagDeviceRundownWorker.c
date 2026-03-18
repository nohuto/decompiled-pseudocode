/*
 * XREFs of PopDiagDeviceRundownWorker @ 0x140ADDE90
 * Callers:
 *     <none>
 * Callees:
 *     IoDiagTraceDevicesRundown @ 0x140ADDEB0 (IoDiagTraceDevicesRundown.c)
 */

__int64 PopDiagDeviceRundownWorker()
{
  _InterlockedExchange((volatile __int32 *)&PopSleepstudySessionLock.ForegroundLossTime, 0);
  return IoDiagTraceDevicesRundown();
}
