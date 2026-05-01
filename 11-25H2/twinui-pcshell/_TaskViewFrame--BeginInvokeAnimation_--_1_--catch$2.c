/*
 * XREFs of _TaskViewFrame::BeginInvokeAnimation_::_1_::catch$2 @ 0x1806B7347
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TaskViewFrame::BeginInvokeAnimation_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0xD2,
    (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
    a4);
  return 0LL;
}
