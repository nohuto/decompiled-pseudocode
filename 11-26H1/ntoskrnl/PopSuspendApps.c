/*
 * XREFs of PopSuspendApps @ 0x1409F5528
 * Callers:
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x1409F5718 (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x140C0C680 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopSuspendApps(__int64 a1)
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS);
  PopCheckpointSystemSleep(2LL);
  *(_DWORD *)(a1 + 32) = 2;
  PopDispatchStateCallout(a1, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS_END);
  return PopCheckpointSystemSleep(3LL);
}
