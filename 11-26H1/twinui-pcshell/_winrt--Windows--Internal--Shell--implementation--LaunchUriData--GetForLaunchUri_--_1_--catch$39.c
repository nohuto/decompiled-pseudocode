/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::LaunchUriData::GetForLaunchUri_::_1_::catch$39 @ 0x180704E5B
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::LaunchUriData::GetForLaunchUri_::_1_::catch_39(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 248),
    (void *)0xB6,
    (int)"pcshell\\twinui\\cloudpc\\lib\\launchuridata.cpp",
    a4);
  **(_QWORD **)(a2 + 152) = 0LL;
  return 0LL;
}
