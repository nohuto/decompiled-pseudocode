/*
 * XREFs of __lambda_cde4a48620a5d22db594fe5feaac6c81_::operator()_::_1_::catch$1 @ 0x1806FE1D2
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_cde4a48620a5d22db594fe5feaac6c81_::operator()_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x2E8,
    (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
    a4);
  return 0LL;
}
