/*
 * XREFs of __lambda_75452c5cb5e77a67412b4cfed81632b0_::operator()_::_1_::catch$11 @ 0x1806EEED6
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_75452c5cb5e77a67412b4cfed81632b0_::operator()_::_1_::catch_11(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 8LL) + 1012LL) = 0;
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 232),
                           (void *)0x7C0,
                           (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                           a4);
  return 0LL;
}
