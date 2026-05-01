/*
 * XREFs of _GamingPosturePositioner::TryGetTopTwoApplicationViews_::_1_::catch$1 @ 0x1806CADE2
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GamingPosturePositioner::TryGetTopTwoApplicationViews_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x1D4,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
    a4);
  return 0LL;
}
