/*
 * XREFs of __lambda_687e5a8c7a4f05ed052b2b78739515ed_::operator()_::_1_::catch$6 @ 0x1806D74F4
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_687e5a8c7a4f05ed052b2b78739515ed_::operator()_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x107,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           a4);
  return 0LL;
}
