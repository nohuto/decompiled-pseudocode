/*
 * XREFs of ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800223F0
 * Callers:
 *     ?FallbackTelemetryCallback@AudioSrvPolicyManagerTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x18002EE40 (-FallbackTelemetryCallback@AudioSrvPolicyManagerTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     atexit @ 0x18002FCC4 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180037AB8 (--1Completer@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

struct AudioSrvPolicyManagerTelemetryProvider *AudioSrvPolicyManagerTelemetryProvider::Instance(void)
{
  union _RTL_RUN_ONCE *v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  Context = 0LL;
  fPending = 0;
  if ( InitOnceBeginInitialize(
         &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    v1 = &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1800688A0;
    qword_1800688A0 = (__int64)&AudioSrvPolicyManagerTelemetryProvider::`vftable';
    qword_1800688A8 = 0LL;
    byte_1800688B0 = 0;
    dword_1800688B4 = 0;
    qword_1800688B8 = (__int64)&`AudioSrvPolicyManagerTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_);
    v2 = 0;
    wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::Completer::~Completer(&v1);
  }
  return (struct AudioSrvPolicyManagerTelemetryProvider *)Context;
}
