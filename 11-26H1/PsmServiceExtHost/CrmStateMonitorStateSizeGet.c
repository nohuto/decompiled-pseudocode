/*
 * XREFs of CrmStateMonitorStateSizeGet @ 0x180020280
 * Callers:
 *     CrmLogStateMonitorRundown @ 0x18001E23C (CrmLogStateMonitorRundown.c)
 *     CrmStateMonitorNetworkUpdateState @ 0x18001F050 (CrmStateMonitorNetworkUpdateState.c)
 *     CrmStateMonitorWNFCallback @ 0x18001F2A0 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorResourceUsagePoll @ 0x18001F4C8 (CrmStateMonitorResourceUsagePoll.c)
 *     CrmStateMonitorCPUUsageTimerCallback @ 0x18001FA50 (CrmStateMonitorCPUUsageTimerCallback.c)
 *     CrmStateMonitorSystemDiskUsageTimerCallback @ 0x18001FD00 (CrmStateMonitorSystemDiskUsageTimerCallback.c)
 *     CrmStateMonitorStateSet @ 0x1800200C0 (CrmStateMonitorStateSet.c)
 *     CrmLogStateMonitorStateSet @ 0x180020310 (CrmLogStateMonitorStateSet.c)
 *     CrmIsolatedPollingWorkerNpuUsageTimerCallback @ 0x180021120 (CrmIsolatedPollingWorkerNpuUsageTimerCallback.c)
 *     CrmStateMonitorAcDcDisplayStart @ 0x180048320 (CrmStateMonitorAcDcDisplayStart.c)
 *     CrmStateMonitorStart @ 0x180048F00 (CrmStateMonitorStart.c)
 *     CrmStateMonitorPostResumeUsageCallback @ 0x18005DE60 (CrmStateMonitorPostResumeUsageCallback.c)
 *     CrmStateMonitorSebCallback @ 0x18005E140 (CrmStateMonitorSebCallback.c)
 *     CrmLogStateMonitorStop @ 0x180067FE4 (CrmLogStateMonitorStop.c)
 *     CrmStateMonitorNetworkStart @ 0x18006A9F8 (CrmStateMonitorNetworkStart.c)
 *     CrmStateMonitorFanNoiseHysteresisStart @ 0x18006BC24 (CrmStateMonitorFanNoiseHysteresisStart.c)
 *     CrmStateMonitorWNFStart @ 0x18006BCB4 (CrmStateMonitorWNFStart.c)
 *     CrmLogStateMonitorStart @ 0x18006EC1C (CrmLogStateMonitorStart.c)
 *     CrmStateMonitorAcDcBatteryStart @ 0x180076034 (CrmStateMonitorAcDcBatteryStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x180076194 (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorCompositeTestStart @ 0x180076560 (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x18007660C (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x1800766E8 (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorDelayedCsStart @ 0x1800767D4 (CrmStateMonitorDelayedCsStart.c)
 *     CrmStateMonitorDelayedInternetLossStart @ 0x180076984 (CrmStateMonitorDelayedInternetLossStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x180076A7C (CrmStateMonitorDisconnectedStandbyStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x180076B94 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x180076CBC (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x180076D94 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x180076DFC (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorResourceUsageStart @ 0x180076FEC (CrmStateMonitorResourceUsageStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x180077288 (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorTestStart @ 0x180077374 (CrmStateMonitorTestStart.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x1800774A4 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x1800775B4 (CrmStateMonitorTimeSinceLogonStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorStateSizeGet(int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 10:
    case 18:
    case 19:
    case 20:
    case 24:
    case 25:
    case 27:
    case 28:
    case 29:
    case 31:
    case 33:
    case 37:
    case 42:
      result = 4LL;
      break;
    case 9:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 22:
    case 23:
    case 30:
    case 32:
    case 34:
    case 38:
    case 39:
    case 40:
    case 41:
      result = 32LL;
      break;
    case 11:
    case 12:
    case 26:
    case 35:
    case 36:
      result = 8LL;
      break;
    case 21:
      result = 40LL;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
