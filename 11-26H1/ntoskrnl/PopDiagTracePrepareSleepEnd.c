/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x140B5FA0C
 * Callers:
 *     PopPrepareSleep @ 0x1404F8808 (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
