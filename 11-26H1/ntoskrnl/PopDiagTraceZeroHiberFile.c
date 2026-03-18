/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x140BFDCD0
 * Callers:
 *     PopZeroHiberFile @ 0x1407D0EAC (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
