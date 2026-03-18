/*
 * XREFs of ?PowerOnLocToString@InputTraceLogging@@CAPEBDW4_POWERON_LOC@@@Z @ 0x1401B03F0
 * Callers:
 *     ?PowerOnMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z @ 0x14007FE18 (-PowerOnMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z.c)
 *     ?PowerOnSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z @ 0x1401B0538 (-PowerOnSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::PowerOnLocToString(int a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case -1:
      return "Undefined";
    case 0:
      return "PsW32MonitorOn";
    case 1:
      return "PsW32PostMonitorOn";
    case 2:
      return "PowerStateEndPartitionReplace";
    case 3:
      return "WaitForVideoPortCalloutReady";
    case 4:
      return "RemoteDisconnect";
  }
  result = "PowerStateResumeApps";
  if ( a1 != 5 )
    return "UNKNOWN";
  return result;
}
