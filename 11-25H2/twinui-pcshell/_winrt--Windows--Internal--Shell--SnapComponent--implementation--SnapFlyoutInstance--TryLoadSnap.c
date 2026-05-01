/*
 * XREFs of _winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryLoadSnapLayoutPickerExtension_::_1_::catch$51 @ 0x1806ACF88
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180598A8C (-FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryLoadSnapLayoutPickerExtension_::_1_::catch_51(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::FailFast_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 232),
    (void *)0x1BB,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
    a4);
}
