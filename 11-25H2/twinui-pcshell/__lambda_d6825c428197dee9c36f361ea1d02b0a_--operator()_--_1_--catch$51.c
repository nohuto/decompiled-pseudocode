/*
 * XREFs of __lambda_d6825c428197dee9c36f361ea1d02b0a_::operator()_::_1_::catch$51 @ 0x1806DB661
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_d6825c428197dee9c36f361ea1d02b0a_::operator()_::_1_::catch_51(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 472),
    (void *)0x95,
    (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
    a4);
  return 0LL;
}
