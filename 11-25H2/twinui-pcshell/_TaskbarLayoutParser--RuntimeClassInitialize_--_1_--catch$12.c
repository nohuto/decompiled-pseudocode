/*
 * XREFs of _TaskbarLayoutParser::RuntimeClassInitialize_::_1_::catch$12 @ 0x1806BA750
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TaskbarLayoutParser::RuntimeClassInitialize_::_1_::catch_12(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x60,
                           (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
                           a4);
  return 0LL;
}
