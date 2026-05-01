/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::subscribe_to_services_::_1_::catch$39 @ 0x1806DB321
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::subscribe_to_services_::_1_::catch_39(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x4B,
    (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\penmenusystemtraymanager.cpp",
    a4);
  return 0LL;
}
