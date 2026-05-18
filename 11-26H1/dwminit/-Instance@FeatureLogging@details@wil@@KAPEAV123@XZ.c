/*
 * XREFs of ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x1800111D8
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180010CF0 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180001200 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     atexit @ 0x1800025C4 (atexit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct wil::details::FeatureLogging *wil::details::FeatureLogging::Instance(void)
{
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &v1, (LPVOID *)&v2) && v1 )
  {
    qword_18001E6F0 = 0LL;
    v2 = &qword_18001E6E8;
    qword_18001E6E8 = (__int64)&wil::details::FeatureLogging::`vftable';
    byte_18001E6F8 = 0;
    dword_18001E6FC = 0;
    qword_18001E700 = &`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(`wil::details::FeatureLogging::Instance'::`2'::_lambda_1_::_lambda_invoker_cdecl_);
    qword_18001E6F0 = (__int64)qword_18001E700;
    byte_18001E6F8 = 1;
    TraceLoggingRegisterEx_EventRegister_EventSetInformation(qword_18001E700);
    dword_18001E6FC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_18001E6E8 + 8))(&qword_18001E6E8);
    InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &qword_18001E6E8);
  }
  return (struct wil::details::FeatureLogging *)v2;
}
