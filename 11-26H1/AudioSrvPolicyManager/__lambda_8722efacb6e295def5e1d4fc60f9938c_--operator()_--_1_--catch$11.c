/*
 * XREFs of __lambda_8722efacb6e295def5e1d4fc60f9938c_::operator()_::_1_::catch$11 @ 0x18004BB52
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180038E48 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_8722efacb6e295def5e1d4fc60f9938c_::operator()_::_1_::catch_11(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x5B3,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    a4);
  return 0LL;
}
