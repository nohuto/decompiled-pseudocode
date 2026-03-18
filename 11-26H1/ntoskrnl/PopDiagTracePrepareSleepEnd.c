/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x140B5CAEC
 * Callers:
 *     PopPrepareSleep @ 0x1404FF018 (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
