/*
 * XREFs of ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x1800E61E0
 * Callers:
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x1800E5E7C (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x1800E605C (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 * Callees:
 *     atexit @ 0x18008E594 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x18008F037 (InitOnceBeginInitialize_0.c)
 *     ??1Completer@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ @ 0x1800E5EE4 (--1Completer@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<ScalingCompatLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  WINBOOL v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+44h] [rbp+Ch]
  __int64 *v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = HIDWORD(a1);
  v10 = 0LL;
  v8 = 0;
  if ( InitOnceBeginInitialize_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, &v8, (LPVOID *)&v10) && v8 )
  {
    v6 = &`ScalingCompatLogging::Instance'::`2'::wrapper;
    v10 = &qword_180118D80;
    qword_180118D80 = (__int64)&WindowFrameLogging::`vftable';
    qword_180118D88 = 0LL;
    byte_180118D90 = 0;
    dword_180118D94 = 0;
    qword_180118D98 = (__int64)&`ScalingCompatLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<ScalingCompatLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v10;
}
