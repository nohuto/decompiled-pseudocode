/*
 * XREFs of __lambda_b908b03b39898ddc08bf3fd6694a598e_::operator()_::_1_::catch$1 @ 0x1806D5DCB
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_b908b03b39898ddc08bf3fd6694a598e_::operator()_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 104),
    (void *)0x2BE,
    (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
    a4);
  return 0LL;
}
