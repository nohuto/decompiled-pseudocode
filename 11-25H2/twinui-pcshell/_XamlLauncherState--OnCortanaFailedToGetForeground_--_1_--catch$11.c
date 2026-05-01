/*
 * XREFs of _XamlLauncherState::OnCortanaFailedToGetForeground_::_1_::catch$11 @ 0x1806C6846
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlLauncherState::OnCortanaFailedToGetForeground_::_1_::catch_11(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 568),
    (void *)0xA1D,
    (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    a4);
  return 0LL;
}
