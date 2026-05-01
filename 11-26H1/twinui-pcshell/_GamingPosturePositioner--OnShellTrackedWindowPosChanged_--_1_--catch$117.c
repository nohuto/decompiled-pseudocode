/*
 * XREFs of _GamingPosturePositioner::OnShellTrackedWindowPosChanged_::_1_::catch$117 @ 0x1806F2FDF
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GamingPosturePositioner::OnShellTrackedWindowPosChanged_::_1_::catch_117(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 760),
    (void *)0xA24,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
    a4);
  return 0LL;
}
