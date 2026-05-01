/*
 * XREFs of CrmStateRoutineConnectedStandby @ 0x18001D3E0
 * Callers:
 *     CrmStateMonitorResourceUsageIsolatedPollCSCallback @ 0x18001CD20 (CrmStateMonitorResourceUsageIsolatedPollCSCallback.c)
 *     CrmStateMonitorSystemDiskUsageCSCallback @ 0x18001CE10 (CrmStateMonitorSystemDiskUsageCSCallback.c)
 *     CrmStateMonitorDisconnectedStandbyCallback @ 0x18001CF00 (CrmStateMonitorDisconnectedStandbyCallback.c)
 *     CrmStateMonitorCPUUsageCSCallback @ 0x18001CFD0 (CrmStateMonitorCPUUsageCSCallback.c)
 *     CrmComparisonRoutineConnectedStandbyOff @ 0x18001D180 (CrmComparisonRoutineConnectedStandbyOff.c)
 *     CrmStateMonitorDelayedCsCallback @ 0x18001D1B0 (CrmStateMonitorDelayedCsCallback.c)
 *     CrmStateMonitorResourceUsageLocalPollCSCallback @ 0x18001D270 (CrmStateMonitorResourceUsageLocalPollCSCallback.c)
 *     CrmComparisonRoutineConnectedStandby @ 0x18001D3C0 (CrmComparisonRoutineConnectedStandby.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateRoutineConnectedStandby(_DWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a1 )
  {
    if ( *a1 != -1 )
      return 1LL;
  }
  return result;
}
