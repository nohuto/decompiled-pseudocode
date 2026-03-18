/*
 * XREFs of wil::details::_lambda_1_::operator() @ 0x1400071B4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem__ @ 0x140001E60 (wil--details--_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem.c)
 * Callees:
 *     <none>
 */

__int64 wil::details::_lambda_1_::operator()()
{
  wil::details::g_pfnGetModuleName = (__int64 (__fastcall *)(_QWORD))wil::details::GetCurrentModuleName;
  wil::details::g_pfnDebugBreak = (__int64 (__fastcall *)(_QWORD))wil::details::DebugBreak;
  wil::details::g_pfnRaiseFailFastException = (void (*)(struct _EXCEPTION_RECORD *, struct _CONTEXT *, unsigned int))wil::details::WilDynamicLoadRaiseFailFastException;
  wil::details::g_pfnFormatNtStatusMsg = (void (*)(int, unsigned __int16 *, unsigned int))wil::details::FormatNtStatusMsg;
  wil::details::g_pfnNotifyFailure = (__int64 (__fastcall *)(_QWORD))wil::details::MicrosoftInternalNotifyFailure;
  wil::details::g_pfnRtlNtStatusToDosErrorNoTeb = (__int64)wil::details::RtlNtStatusToDosErrorNoTeb;
  wil::details::g_pfnDllShutdownInProgress = (__int64 (__fastcall *)(_QWORD))wil::details::RtlDllShutdownInProgress;
  return 1LL;
}
