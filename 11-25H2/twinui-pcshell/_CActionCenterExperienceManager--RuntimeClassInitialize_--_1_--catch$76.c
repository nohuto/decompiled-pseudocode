/*
 * XREFs of _CActionCenterExperienceManager::RuntimeClassInitialize_::_1_::catch$76 @ 0x1806AF981
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::RuntimeClassInitialize_::_1_::catch_76(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 424),
                           (void *)0x175,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
                           a4);
  return 0LL;
}
