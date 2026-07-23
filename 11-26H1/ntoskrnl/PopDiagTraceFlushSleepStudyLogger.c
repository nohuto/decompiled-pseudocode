/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x140BEF57C
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140424B5C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
