/*
 * XREFs of PopNetIsNetworkRefreshEnabled @ 0x1407DE524
 * Callers:
 *     PopNetLowPowerEpochCallback @ 0x1407DE550 (PopNetLowPowerEpochCallback.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1407DE6E0 (PopNetRefreshTimerWorkerCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopNetIsNetworkRefreshEnabled()
{
  return (PopPdcDeviceListLock.SchedulerApcFill3[48] & 0x4E) == 0
      && (PopPdcDeviceListLock.SchedulerApcFill3[48] & 0x80u) != 0
      && PopEnableDsNetRefresh != 0;
}
