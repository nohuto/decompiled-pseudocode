/*
 * XREFs of _SearchBoxOnTaskbarSearchAppPositioner::IsSearchButtonMode_::_1_::catch$0 @ 0x1806C0A2F
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SearchBoxOnTaskbarSearchAppPositioner::IsSearchButtonMode_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 152),
    (void *)0x2BE,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchboxontaskbarsearchapppositioner.cpp",
    a4);
  return 0LL;
}
