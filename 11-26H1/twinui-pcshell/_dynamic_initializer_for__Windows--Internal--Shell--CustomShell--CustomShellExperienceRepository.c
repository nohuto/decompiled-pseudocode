/*
 * XREFs of _dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__ @ 0x1801B9A90
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??0?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@V?$initializer_list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@AEBV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1801B9B64 (--0-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802CDC8C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=2
int dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__()
{
  unsigned __int64 v0; // rax
  const void *v1; // rcx
  unsigned __int64 v2; // rax
  const void *v3; // rcx
  _QWORD v5[2]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v6[2]; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v7[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v8; // [rsp+70h] [rbp-10h] BYREF

  memset(v6, 0, sizeof(v6));
  v0 = std::_WChar_traits<wchar_t>::length((__int64)L"Windows.Internal.Shell.ShellLauncher.ShellLauncherExperience");
  std::wstring::_Construct<1,unsigned short const *>((char **)v6, v1, v0);
  memset(v7, 0, sizeof(v7));
  v2 = std::_WChar_traits<wchar_t>::length((__int64)L"Windows.Internal.AssignedAccess.AssignedAccessShellExperience");
  std::wstring::_Construct<1,unsigned short const *>((char **)v7, v3, v2);
  v5[0] = v6;
  v5[1] = &v8;
  std::vector<std::wstring>::vector<std::wstring>(
    &Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds,
    v5);
  `eh vector destructor iterator'(
    v6,
    0x20uLL,
    2uLL,
    (void (*)(void *))wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>);
  return atexit(dynamic_atexit_destructor_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__);
}
