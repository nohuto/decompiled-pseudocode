/*
 * XREFs of ?Provider@FeatureLogging@details@wil@@SAPEBU_tlgProvider_t@@XZ @ 0x180223904
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180098A70 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D40EC (--1Completer@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180220674 (atexit.c)
 */

const struct _tlgProvider_t *wil::details::FeatureLogging::Provider(void)
{
  __int64 v0; // rdx
  void (*v1)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  WINBOOL v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v5 = 0;
  if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v3 = &`wil::details::FeatureLogging::Instance'::`2'::wrapper;
    v6 = &qword_1803DDD20;
    qword_1803DDD20 = (__int64)&wil::details::FeatureLogging::`vftable';
    qword_1803DDD28 = 0LL;
    byte_1803DDD30 = 0;
    dword_1803DDD34 = 0;
    qword_1803DDD38 = (__int64)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(`wil::details::FeatureLogging::Instance'::`2'::_lambda_1_::_lambda_invoker_cdecl_);
    v4 = 0;
    wil::details::static_lazy<wil::details::FeatureLogging>::Completer::~Completer(&v3, v0, v1);
  }
  return (const struct _tlgProvider_t *)v6[1];
}
