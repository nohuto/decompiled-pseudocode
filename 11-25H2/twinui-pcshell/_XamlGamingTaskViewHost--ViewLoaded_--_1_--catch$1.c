/*
 * XREFs of _XamlGamingTaskViewHost::ViewLoaded_::_1_::catch$1 @ 0x1806DDDF4
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlGamingTaskViewHost::ViewLoaded_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x13F,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlgamingtaskviewhost.cpp",
                           a4);
  return 0LL;
}
