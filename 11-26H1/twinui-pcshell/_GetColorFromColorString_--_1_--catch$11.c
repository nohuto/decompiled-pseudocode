/*
 * XREFs of _GetColorFromColorString_::_1_::catch$11 @ 0x1806EF06D
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GetColorFromColorString_::_1_::catch_11(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0x1624,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    a4);
  return 0LL;
}
