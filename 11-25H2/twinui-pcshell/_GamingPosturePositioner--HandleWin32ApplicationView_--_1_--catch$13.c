/*
 * XREFs of _GamingPosturePositioner::HandleWin32ApplicationView_::_1_::catch$13 @ 0x1806CA9C2
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GamingPosturePositioner::HandleWin32ApplicationView_::_1_::catch_13(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 776),
    (void *)0x52D,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
    a4);
  return 0LL;
}
