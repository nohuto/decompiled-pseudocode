/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem__ @ 0x1801DE120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem__())(wil::details *this)
{
  char (__fastcall *result)(wil::details *); // rax

  wil::details::g_pfnGetModuleName = (__int64 (*)(void))wil::details::GetCurrentModuleName;
  wil::details::g_pfnDebugBreak = (__int64 (*)(void))wil::details::DebugBreak;
  wil::details::g_pfnRaiseFailFastException = (void (*)(struct _EXCEPTION_RECORD *, struct _CONTEXT *, unsigned int))wil::details::WilDynamicLoadRaiseFailFastException;
  wil::details::g_pfnFormatNtStatusMsg = (void (*)(int, unsigned __int16 *, unsigned int))wil::details::FormatNtStatusMsg;
  wil::details::g_pfnNotifyFailure = (__int64 (__fastcall *)(_QWORD))wil::details::MicrosoftInternalNotifyFailure;
  wil::details::g_pfnRtlNtStatusToDosErrorNoTeb = (__int64 (*)(void))wil::details::RtlNtStatusToDosErrorNoTeb;
  result = wil::details::RtlDllShutdownInProgress;
  wil::details::g_pfnDllShutdownInProgress = (__int64 (__fastcall *)(_QWORD))wil::details::RtlDllShutdownInProgress;
  return result;
}
