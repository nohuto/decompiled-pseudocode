/*
 * XREFs of ??$_Uninitialized_copy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBV12@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEBV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x180151F98
 * Callers:
 *     _dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__ @ 0x180151330 (_dynamic_initializer_for__Windows--Internal--Shell--CustomShell--CustomShellExperienceRepository.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1801528B8 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::_Uninitialized_copy<std::wstring const *,std::wstring const *,std::allocator<std::wstring>>(
        __int64 a1,
        __int64 a2,
        char *a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 32LL )
  {
    std::wstring::wstring((__int64)a3, i);
    a3 += 32;
  }
  std::_Destroy_range<std::allocator<std::wstring>>(a3);
  return a3;
}
