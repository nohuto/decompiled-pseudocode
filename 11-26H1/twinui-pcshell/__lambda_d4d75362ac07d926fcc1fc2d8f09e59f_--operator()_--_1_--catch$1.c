/*
 * XREFs of __lambda_d4d75362ac07d926fcc1fc2d8f09e59f_::operator()_::_1_::catch$1 @ 0x1806E597E
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_d4d75362ac07d926fcc1fc2d8f09e59f_::operator()_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x373,
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
                           a4);
  return 0LL;
}
