/*
 * XREFs of IopErrorLogConnectSession @ 0x140ADC230
 * Callers:
 *     IopErrorLogThread @ 0x140ADBA70 (IopErrorLogThread.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     IopErrorLogQueueRequest @ 0x140ADC288 (IopErrorLogQueueRequest.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140B2AA20 (EtwQueryTraceHandleByLoggerName.c)
 */

char IopErrorLogConnectSession()
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( ErrorLogSessionOpened )
    return 1;
  RtlInitUnicodeString(&DestinationString, L"Eventlog-System");
  if ( (int)EtwQueryTraceHandleByLoggerName(&DestinationString, &IopErrorLogSession) >= 0 )
  {
    ErrorLogSessionOpened = 1;
    return 1;
  }
  IopErrorLogQueueRequest(v2, v1);
  return 0;
}
