/*
 * XREFs of __anonymous_namespace_::SetConfigurationValue_winrt::hstring__::_1_::catch$5 @ 0x1806E2FBF
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _anonymous_namespace_::SetConfigurationValue_winrt::hstring__::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 472),
    (void *)0x91,
    (int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
    a4);
  return 0LL;
}
