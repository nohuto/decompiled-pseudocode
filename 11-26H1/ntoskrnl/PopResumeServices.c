/*
 * XREFs of PopResumeServices @ 0x140A39A90
 * Callers:
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x140A39B10 (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x140C06470 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopResumeServices(__int64 a1)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 32) = 6;
  v3 = 0;
  stru_140F10070.Timer.Dpc = (_KDPC *)KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES);
  PopCheckpointSystemSleep(39LL);
  PopDispatchStateCallout(a1, &v3);
  *(LARGE_INTEGER *)&stru_140F10070.Timer.Processor = KeQueryPerformanceCounter(0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES_END);
  return PopCheckpointSystemSleep(40LL);
}
