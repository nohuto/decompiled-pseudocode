/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140C0C530
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140437AA0 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
