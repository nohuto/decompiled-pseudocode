/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x140C03D1C
 * Callers:
 *     PopZeroHiberFile @ 0x1407D3F4C (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
