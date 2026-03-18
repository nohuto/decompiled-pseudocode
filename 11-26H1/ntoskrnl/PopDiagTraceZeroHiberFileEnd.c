/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x140BFDCEC
 * Callers:
 *     PopZeroHiberFile @ 0x1407D0EAC (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
