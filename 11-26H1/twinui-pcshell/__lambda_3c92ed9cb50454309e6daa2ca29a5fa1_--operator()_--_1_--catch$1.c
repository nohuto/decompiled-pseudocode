/*
 * XREFs of __lambda_3c92ed9cb50454309e6daa2ca29a5fa1_::operator()_::_1_::catch$1 @ 0x1806F6EFE
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_3c92ed9cb50454309e6daa2ca29a5fa1_::operator()_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x5E,
    (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
    a4);
  return 0LL;
}
