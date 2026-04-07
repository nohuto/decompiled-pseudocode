/*
 * XREFs of ?get@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemetry@@P6AXXZ@Z @ 0x1800BB8D8
 * Callers:
 *     ?FallbackTelemetryCallback@WindowFrameLoggingTelemetry@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x1800BB860 (-FallbackTelemetryCallback@WindowFrameLoggingTelemetry@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     atexit @ 0x18008E594 (atexit.c)
 *     ??1Completer@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ @ 0x1800BB7EC (--1Completer@-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<WindowFrameLoggingTelemetry>::get(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 *v6; // [rsp+40h] [rbp+8h] BYREF
  WINBOOL v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+4Ch] [rbp+14h]

  v8 = HIDWORD(a2);
  v6 = 0LL;
  v7 = 0;
  if ( InitOnceBeginInitialize(&`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v6) && v7 )
  {
    v4 = &`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper;
    v6 = &qword_180118CD8;
    qword_180118CE0 = 0LL;
    qword_180118CD8 = (__int64)&wil::TraceLoggingProvider::`vftable';
    byte_180118CE8 = 0;
    dword_180118CEC = 0;
    atexit(`WindowFrameLoggingTelemetry::Instance'::`2'::_lambda_1_::_lambda_invoker_cdecl_);
    v5 = 0;
    wil::details::static_lazy<WindowFrameLoggingTelemetry>::Completer::~Completer((__int64)&v4, v2);
  }
  return v6;
}
