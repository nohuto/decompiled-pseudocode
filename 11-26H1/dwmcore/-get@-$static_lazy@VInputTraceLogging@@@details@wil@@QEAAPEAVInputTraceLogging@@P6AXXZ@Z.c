/*
 * XREFs of ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180093EA0
 * Callers:
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x180092F10 (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180093A80 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1801D412C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180220674 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<InputTraceLogging>::get(__int64 a1, __int64 a2)
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPVOID Context; // [rsp+30h] [rbp+8h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp+10h] BYREF
  int v6; // [rsp+3Ch] [rbp+14h]

  v6 = HIDWORD(a2);
  Context = 0LL;
  fPending = 0;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    qword_1803DE7A0 = 0LL;
    Context = &qword_1803DE798;
    byte_1803DE7A8 = 0;
    dword_1803DE7AC = 0;
    qword_1803DE798 = &wil::details::FeatureLogging::`vftable';
    qword_1803DE7B0 = (struct _tlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(`InputTraceLogging::Instance'::`2'::_lambda_1_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1803DE798, qword_1803DE7B0, v3);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &qword_1803DE798);
  }
  return Context;
}
