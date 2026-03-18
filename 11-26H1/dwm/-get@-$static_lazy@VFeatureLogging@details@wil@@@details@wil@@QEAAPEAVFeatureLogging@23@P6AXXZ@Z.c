/*
 * XREFs of ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x14000BB6C
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x140007B70 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 * Callees:
 *     atexit @ 0x140004C14 (atexit.c)
 *     ??1Completer@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ @ 0x140007000 (--1Completer@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<wil::details::FeatureLogging>::get(__int64 a1, __int64 a2)
{
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  __int64 *v5; // [rsp+40h] [rbp+8h] BYREF
  WINBOOL v6; // [rsp+48h] [rbp+10h] BYREF
  int v7; // [rsp+4Ch] [rbp+14h]

  v7 = HIDWORD(a2);
  v5 = 0LL;
  v6 = 0;
  if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v5) && v6 )
  {
    v3 = &`wil::details::FeatureLogging::Instance'::`2'::wrapper;
    v5 = &qword_14001C378;
    qword_14001C378 = (__int64)&wil::details::FeatureLogging::`vftable';
    qword_14001C380 = 0LL;
    byte_14001C388 = 0;
    dword_14001C38C = 0;
    qword_14001C390 = (__int64)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(`wil::details::FeatureLogging::Instance'::`2'::_lambda_1_::_lambda_invoker_cdecl_);
    v4 = 0;
    wil::details::static_lazy<wil::details::FeatureLogging>::Completer::~Completer(&v3);
  }
  return v5;
}
