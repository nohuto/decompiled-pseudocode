/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x140C03D38
 * Callers:
 *     PopZeroHiberFile @ 0x1407D3F4C (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
