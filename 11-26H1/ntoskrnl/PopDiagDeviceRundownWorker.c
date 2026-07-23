/*
 * XREFs of PopDiagDeviceRundownWorker @ 0x140ADAC00
 * Callers:
 *     <none>
 * Callees:
 *     IoDiagTraceDevicesRundown @ 0x140ADAC20 (IoDiagTraceDevicesRundown.c)
 */

__int64 PopDiagDeviceRundownWorker()
{
  _InterlockedExchange(&PopDiagDeviceRundownRequests, 0);
  return IoDiagTraceDevicesRundown();
}
