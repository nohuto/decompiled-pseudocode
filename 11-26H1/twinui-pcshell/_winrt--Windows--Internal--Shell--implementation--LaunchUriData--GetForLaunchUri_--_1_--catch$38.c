/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::LaunchUriData::GetForLaunchUri_::_1_::catch$38 @ 0x180704E1E
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::LaunchUriData::GetForLaunchUri_::_1_::catch_38(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 248),
    (void *)0x83,
    (int)"pcshell\\twinui\\cloudpc\\lib\\launchuridata.cpp",
    a4);
  return 0LL;
}
