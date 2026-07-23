/*
 * XREFs of TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016E69C
 * Callers:
 *     RtlInitializeHeapLogging @ 0x180043E20 (RtlInitializeHeapLogging.c)
 *     RtlCapabilityCheck @ 0x180059720 (RtlCapabilityCheck.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18008DC80 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18009AD20 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     UcpInitOnUnexpectedCodePathOnceCallBack @ 0x180157BC0 (UcpInitOnUnexpectedCodePathOnceCallBack.c)
 *     CastGuardTelemetryInitOnce @ 0x18015CD20 (CastGuardTelemetryInitOnce.c)
 *     LdrpResReportResourceAccessInternalInitOnce @ 0x18015DBE0 (LdrpResReportResourceAccessInternalInitOnce.c)
 *     LibLoaderTelemetryInitOnce @ 0x18015DC10 (LibLoaderTelemetryInitOnce.c)
 *     VsmEnclaveTelemetryInitOnce @ 0x18015DC90 (VsmEnclaveTelemetryInitOnce.c)
 * Callees:
 *     EtwEventRegister @ 0x180041F90 (EtwEventRegister.c)
 *     EtwEventSetInformation @ 0x180117BD0 (EtwEventSetInformation.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(char *CallbackContext)
{
  REGHANDLE *v1; // rsi
  bool v2; // zf
  unsigned __int32 v4; // edi
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v1 = (REGHANDLE *)(CallbackContext + 32);
  v2 = *((_QWORD *)CallbackContext + 4) == 0LL;
  ProviderId = *(GUID *)(*((_QWORD *)CallbackContext + 1) - 16LL);
  if ( !v2 )
    __fastfail(5u);
  *((_QWORD *)CallbackContext + 5) = 0LL;
  *((_QWORD *)CallbackContext + 6) = 0LL;
  v4 = EtwEventRegister(&ProviderId, tlgEnableCallback, CallbackContext, (PREGHANDLE)CallbackContext + 4);
  if ( !v4 )
    EtwEventSetInformation(
      *v1,
      (EVENT_INFO_CLASS)2,
      *((PVOID *)CallbackContext + 1),
      **((unsigned __int16 **)CallbackContext + 1));
  return v4;
}
