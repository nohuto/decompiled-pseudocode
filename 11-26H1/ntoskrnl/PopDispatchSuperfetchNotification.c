/*
 * XREFs of PopDispatchSuperfetchNotification @ 0x140B4EF08
 * Callers:
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140C06470 (PopCheckpointSystemSleep.c)
 *     PfPowerActionNotify @ 0x140C071B0 (PfPowerActionNotify.c)
 */

__int64 __fastcall PopDispatchSuperfetchNotification(int a1)
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_START);
  PopCheckpointSystemSleep(6LL);
  PfPowerActionNotify(1LL, (a1 >> 31) & 2);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_STOP);
  return PopCheckpointSystemSleep(7LL);
}
