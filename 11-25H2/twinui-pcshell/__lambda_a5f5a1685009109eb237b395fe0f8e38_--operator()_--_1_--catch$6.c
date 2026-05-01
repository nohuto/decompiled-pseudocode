/*
 * XREFs of __lambda_a5f5a1685009109eb237b395fe0f8e38_::operator()_::_1_::catch$6 @ 0x1806D2D3F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_a5f5a1685009109eb237b395fe0f8e38_::operator()_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0xB4D,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           a4);
  return 0LL;
}
