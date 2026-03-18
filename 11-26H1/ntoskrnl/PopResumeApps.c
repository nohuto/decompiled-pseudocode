/*
 * XREFs of PopResumeApps @ 0x140A39974
 * Callers:
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x140A39B10 (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x140C06470 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopResumeApps(__int64 a1)
{
  PopHiberBootForceMonitorOff = 0;
  *(_DWORD *)(a1 + 32) = 5;
  stru_140F10070.Timer.TimerListEntry.Flink = (struct _LIST_ENTRY *)KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS);
  PopCheckpointSystemSleep(37LL);
  PopDispatchStateCallout(a1, 0LL);
  stru_140F10070.Timer.TimerListEntry.Blink = (struct _LIST_ENTRY *)KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS_END);
  return PopCheckpointSystemSleep(38LL);
}
