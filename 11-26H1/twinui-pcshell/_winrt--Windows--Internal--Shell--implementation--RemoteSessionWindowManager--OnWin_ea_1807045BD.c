/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::OnWindowDestroyed_::_1_::catch$56 @ 0x1807045BD
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::OnWindowDestroyed_::_1_::catch_56(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 808),
    (void *)0x2A3,
    (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
    a4);
  return 0LL;
}
