/*
 * XREFs of TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016F69C
 * Callers:
 *     RtlCapabilityCheck @ 0x18000DFF0 (RtlCapabilityCheck.c)
 *     RtlInitializeHeapLogging @ 0x1800598A0 (RtlInitializeHeapLogging.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006D830 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18009BBF0 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     UcpInitOnUnexpectedCodePathOnceCallBack @ 0x180157CF0 (UcpInitOnUnexpectedCodePathOnceCallBack.c)
 *     CastGuardTelemetryInitOnce @ 0x18015CE60 (CastGuardTelemetryInitOnce.c)
 *     LdrpResReportResourceAccessInternalInitOnce @ 0x18015DD20 (LdrpResReportResourceAccessInternalInitOnce.c)
 *     LibLoaderTelemetryInitOnce @ 0x18015DD50 (LibLoaderTelemetryInitOnce.c)
 *     VsmEnclaveTelemetryInitOnce @ 0x18015DDD0 (VsmEnclaveTelemetryInitOnce.c)
 * Callees:
 *     EtwEventRegister @ 0x180057A10 (EtwEventRegister.c)
 *     EtwEventSetInformation @ 0x180117E20 (EtwEventSetInformation.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(_QWORD *a1)
{
  __int64 *v1; // rsi
  bool v2; // zf
  unsigned int v4; // edi
  struct _SLIST_ENTRY v6; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 4;
  v2 = a1[4] == 0LL;
  v6 = *(struct _SLIST_ENTRY *)(a1[1] - 16LL);
  if ( !v2 )
    __fastfail(5u);
  a1[5] = 0LL;
  a1[6] = 0LL;
  v4 = EtwEventRegister(&v6, (_SLIST_ENTRY *)tlgEnableCallback, (__int64)a1, a1 + 4);
  if ( !v4 )
    EtwEventSetInformation(*v1, 2LL, a1[1], *(unsigned __int16 *)a1[1]);
  return v4;
}
