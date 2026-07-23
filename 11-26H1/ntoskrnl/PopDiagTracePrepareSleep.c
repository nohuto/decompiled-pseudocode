/*
 * XREFs of PopDiagTracePrepareSleep @ 0x14077DC4C
 * Callers:
 *     PopPrepareSleep @ 0x1404F8808 (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
