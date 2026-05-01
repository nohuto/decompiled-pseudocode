/*
 * XREFs of _CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::catch$26 @ 0x1806E637D
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::DismissRequested__ResumeCoro_1_::_1_::catch_26(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 200),
    (void *)0x380,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    a4);
  return 0LL;
}
