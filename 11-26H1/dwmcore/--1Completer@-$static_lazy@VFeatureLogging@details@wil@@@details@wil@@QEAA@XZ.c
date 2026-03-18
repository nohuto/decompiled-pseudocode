/*
 * XREFs of ??1Completer@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D40EC
 * Callers:
 *     ?IsEnabled@FeatureLogging@details@wil@@SA_NE_K@Z @ 0x180098EB4 (-IsEnabled@FeatureLogging@details@wil@@SA_NE_K@Z.c)
 *     ?Provider@FeatureLogging@details@wil@@SAPEBU_tlgProvider_t@@XZ @ 0x180223904 (-Provider@FeatureLogging@details@wil@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1801D412C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 */

BOOL __fastcall wil::details::static_lazy<wil::details::FeatureLogging>::Completer::~Completer(
        _DWORD *a1,
        __int64 a2,
        void (*a3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))
{
  if ( !a1[2] )
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)(*(_QWORD *)a1 + 8LL),
      *(const struct _tlgProvider_t *const *)(*(_QWORD *)a1 + 32LL),
      a3);
  return InitOnceComplete(*(LPINIT_ONCE *)a1, a1[2], (LPVOID)(*(_QWORD *)a1 + 8LL));
}
