/*
 * XREFs of __lambda_bfcda2f4b09e169516dee7a5816294eb_::operator()_::_1_::catch$0 @ 0x1806CCB22
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_bfcda2f4b09e169516dee7a5816294eb_::operator()_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0x192,
    (int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
    a4);
  return 0LL;
}
