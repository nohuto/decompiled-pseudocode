/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent$_ResumeCoro$1_::_1_::catch$3 @ 0x1806D3F8F
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C8C48 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent__ResumeCoro_1_::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  wil::details::in1diag3::Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 168),
    (void *)0xA81,
    (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    (const char *)*(unsigned int *)(*(_QWORD *)(a2 + 56) + 12LL));
  return 0LL;
}
