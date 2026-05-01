/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1_::_1_::catch$15 @ 0x1806D9C59
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync__ResumeCoro_1_::_1_::catch_15(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 232),
    (void *)0x65,
    (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
    a4);
  return 0LL;
}
