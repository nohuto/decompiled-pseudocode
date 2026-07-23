/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x140B49AC8
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404BCB04 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopPrintEx @ 0x1404BCBF8 (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3, (int)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
