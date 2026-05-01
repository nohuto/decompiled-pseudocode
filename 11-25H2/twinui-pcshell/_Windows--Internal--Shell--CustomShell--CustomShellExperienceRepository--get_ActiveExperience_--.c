/*
 * XREFs of _Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::get_ActiveExperience_::_1_::catch$3 @ 0x1806BA505
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::get_ActiveExperience_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 40) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 104),
                           (void *)0x4D,
                           (int)"pcshell\\twinui\\customshellexperiencerepository\\lib\\customshellexperiencerepository.cpp",
                           a4);
  return 0LL;
}
