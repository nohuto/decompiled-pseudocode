/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@std@@QEAA@XZ @ 0x1802CF434
 * Callers:
 *     __dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds___::_1_::dtor$3 @ 0x1806AF4C8 (__dynamic_initializer_for__Windows--Internal--Shell--CustomShell--CustomShellExperi_ea_1806AF4C8.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x1802A64E8 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 */

void __fastcall std::_Tidy_guard<std::vector<std::wstring>>::~_Tidy_guard<std::vector<std::wstring>>(__int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<std::wstring>::_Tidy(v1);
}
