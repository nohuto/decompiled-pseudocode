/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::CloudPCComponent::SubscribeToLogon_::_1_::catch$5 @ 0x1806DAB9D
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::SubscribeToLogon_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 184),
    (void *)0xFE,
    (int)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
    a4);
  return 0LL;
}
