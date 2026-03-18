/*
 * XREFs of PopDiagTracePrepareSleep @ 0x14077AD1C
 * Callers:
 *     PopPrepareSleep @ 0x1404FF018 (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
