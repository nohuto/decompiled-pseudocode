/*
 * XREFs of ?Instance@InputTraceLogging@@KAPEAV1@XZ @ 0x1800121A0
 * Callers:
 *     ?EvaluatePosture@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_NK111@Z @ 0x18011642C (-EvaluatePosture@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_.c)
 *     ?EvaluatePostureRemote@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_N1@Z @ 0x180116500 (-EvaluatePostureRemote@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Wind.c)
 *     ?Thresholds@ShellGestures@InputTraceLogging@@SAX_J00000@Z @ 0x18015DF48 (-Thresholds@ShellGestures@InputTraceLogging@@SAX_J00000@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180012278 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18009A4BC (atexit.c)
 */

struct InputTraceLogging *InputTraceLogging::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  fPending = 0;
  if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    qword_180254680 = 0LL;
    Context = &qword_180254678;
    byte_180254688 = 0;
    dword_18025468C = 0;
    qword_180254678 = &RawInputProvidersContinuousTracing::`vftable';
    qword_180254690 = (struct _tlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)&qword_180254678,
      qword_180254690,
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))InputTraceLogging::Callback);
    InputTraceLogging::s_registered = 1;
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &qword_180254678);
  }
  return (struct InputTraceLogging *)Context;
}
