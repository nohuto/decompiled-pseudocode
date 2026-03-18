/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x140BE957C
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140437AA0 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
