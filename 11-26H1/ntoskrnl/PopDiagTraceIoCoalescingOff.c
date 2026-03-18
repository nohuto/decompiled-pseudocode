/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x140B47D38
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404C32B4 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopPrintEx @ 0x1404C33A8 (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3, (int)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
