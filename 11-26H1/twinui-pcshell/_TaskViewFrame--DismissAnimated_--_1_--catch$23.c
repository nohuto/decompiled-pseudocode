/*
 * XREFs of _TaskViewFrame::DismissAnimated_::_1_::catch$23 @ 0x1806D94E7
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TaskViewFrame::DismissAnimated_::_1_::catch_23(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0xE3,
    (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
    a4);
  return 0LL;
}
