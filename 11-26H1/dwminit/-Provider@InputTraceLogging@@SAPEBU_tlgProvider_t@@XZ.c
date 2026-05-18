/*
 * XREFs of ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001035C
 * Callers:
 *     ?EnterWait@DWM@KST@InputTraceLogging@@SAXXZ @ 0x180010114 (-EnterWait@DWM@KST@InputTraceLogging@@SAXXZ.c)
 *     ?ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x180010184 (-ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 *     ?SignalReset@DWM@KST@InputTraceLogging@@SAXXZ @ 0x1800108B4 (-SignalReset@DWM@KST@InputTraceLogging@@SAXXZ.c)
 *     ?ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x180010BC4 (-ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180001200 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     atexit @ 0x1800025C4 (atexit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const struct _tlgProvider_t *InputTraceLogging::Provider(void)
{
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &v1, (LPVOID *)&v2) && v1 )
  {
    qword_18001E6C8 = 0LL;
    v2 = &qword_18001E6C0;
    qword_18001E6C0 = (__int64)&wil::details::FeatureLogging::`vftable';
    byte_18001E6D0 = 0;
    dword_18001E6D4 = 0;
    CallbackContext = &`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(`InputTraceLogging::Instance'::`2'::_lambda_1_::_lambda_invoker_cdecl_);
    qword_18001E6C8 = (__int64)CallbackContext;
    byte_18001E6D0 = 1;
    TraceLoggingRegisterEx_EventRegister_EventSetInformation(CallbackContext);
    dword_18001E6D4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_18001E6C0 + 8))(&qword_18001E6C0);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &qword_18001E6C0);
  }
  return (const struct _tlgProvider_t *)v2[1];
}
