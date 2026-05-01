/*
 * XREFs of _dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__ @ 0x180151330
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Uninitialized_copy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBV12@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEBV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x180151F98 (--$_Uninitialized_copy@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBV12@V.c)
 *     ?_Buy_nonzero@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAX_K@Z @ 0x180152004 (-_Buy_nonzero@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocato.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802D566C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=3
int dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__()
{
  __int64 v0; // rcx
  char *v2[4]; // [rsp+30h] [rbp-58h] BYREF
  char *v3; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v4[3]; // [rsp+70h] [rbp-18h] BYREF

  std::wstring::wstring(v2, L"Windows.Internal.Shell.ShellLauncher.ShellLauncherExperience");
  std::wstring::wstring(&v3, L"Windows.Internal.AssignedAccess.AssignedAccessShellExperience");
  Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds = 0LL;
  qword_180899FA8 = 0LL;
  std::vector<std::wstring>::_Buy_nonzero(v0, 2LL);
  *((_QWORD *)&Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds + 1) = std::_Uninitialized_copy<std::wstring const *,std::wstring const *,std::allocator<std::wstring>>(v2, v4, Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds);
  `eh vector destructor iterator'(v2, 0x20uLL, 2uLL, (void (*)(void *))std::wstring::_Tidy_deallocate);
  return atexit(dynamic_atexit_destructor_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__);
}
