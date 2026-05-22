/*
 * XREFs of ?get@?$static_lazy@VRawInputProvidersTelemetry@@@details@wil@@QEAAPEAVRawInputProvidersTelemetry@@P6AXXZ@Z @ 0x180081E10
 * Callers:
 *     ?Provider@RawInputProvidersTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1800DFCF0 (-Provider@RawInputProvidersTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ @ 0x180096C38 (--1Completer@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18009A4BC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<RawInputProvidersTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`RawInputProvidersTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8)
    && v6 )
  {
    v4 = &`RawInputProvidersTelemetry::Instance'::`2'::wrapper;
    v8 = &qword_180254F08;
    qword_180254F08 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180254F10 = 0LL;
    byte_180254F18 = 0;
    dword_180254F1C = 0;
    qword_180254F20 = (__int64)&`RawInputProvidersTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::Completer::~Completer(&v4);
  }
  return v8;
}
