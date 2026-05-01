/*
 * XREFs of _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_ResumeCoro$1_::_1_::catch$5 @ 0x1806CD105
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync__ResumeCoro_1_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0x5B,
    (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
    a4);
  return 0LL;
}
