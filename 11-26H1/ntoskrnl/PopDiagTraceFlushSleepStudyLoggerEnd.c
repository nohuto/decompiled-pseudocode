/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140C12740
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140424B5C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
