/*
 * XREFs of _XamlGamingTaskViewHost::Show_::_1_::catch$30 @ 0x1807069D8
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlGamingTaskViewHost::Show_::_1_::catch_30(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 1464),
                           (void *)0xDD,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlgamingtaskviewhost.cpp",
                           a4);
  return 0LL;
}
