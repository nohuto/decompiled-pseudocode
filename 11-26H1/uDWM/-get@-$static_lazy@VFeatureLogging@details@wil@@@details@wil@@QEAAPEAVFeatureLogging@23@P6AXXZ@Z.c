/*
 * XREFs of ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x18006F7C0
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18006F350 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ @ 0x180068030 (--1Completer@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18008E594 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<wil::details::FeatureLogging>::get(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  __int64 *v7; // [rsp+40h] [rbp+8h] BYREF
  WINBOOL v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+4Ch] [rbp+14h]

  v9 = HIDWORD(a2);
  v7 = 0LL;
  v8 = 0;
  if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &v8, (LPVOID *)&v7) && v8 )
  {
    v5 = &`wil::details::FeatureLogging::Instance'::`2'::wrapper;
    v7 = &qword_180118B40;
    qword_180118B40 = (__int64)&WindowFrameLogging::`vftable';
    qword_180118B48 = 0LL;
    byte_180118B50 = 0;
    dword_180118B54 = 0;
    qword_180118B58 = (__int64)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(`wil::details::FeatureLogging::Instance'::`2'::_lambda_1_::_lambda_invoker_cdecl_);
    v6 = 0;
    wil::details::static_lazy<wil::details::FeatureLogging>::Completer::~Completer(&v5, v3, v4);
  }
  return v7;
}
