/*
 * XREFs of PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140424B5C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     PopUmpoSendPowerMessage @ 0x140426614 (PopUmpoSendPowerMessage.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140BEF57C (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140C12740 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 */

__int64 PopUmpoSendFlushSleepStudyLoggerNotification()
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  qword_140F109F8 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceFlushSleepStudyLogger();
  memset_0(Src, 0, 0x48uLL);
  Src[0] = 13;
  PopUmpoSendPowerMessage(Src, 0x48uLL);
  qword_140F10A00 = KeQueryPerformanceCounter(0LL).QuadPart;
  return PopDiagTraceFlushSleepStudyLoggerEnd();
}
