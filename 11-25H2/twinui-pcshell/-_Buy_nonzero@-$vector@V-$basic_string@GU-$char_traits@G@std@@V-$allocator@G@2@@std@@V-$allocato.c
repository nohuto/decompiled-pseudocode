/*
 * XREFs of ?_Buy_nonzero@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAX_K@Z @ 0x180152004
 * Callers:
 *     _dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__ @ 0x180151330 (_dynamic_initializer_for__Windows--Internal--Shell--CustomShell--CustomShellExperienceRepository.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18015288C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802B070C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 */

void *__fastcall std::vector<std::wstring>::_Buy_nonzero(__int64 a1, unsigned __int64 a2)
{
  size_t size_of; // rax
  void *result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  size_of = std::_Get_size_of_n<32>(a2);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)&Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds = result;
  qword_180899FA8 = (__int64)result + 32 * a2;
  *((_QWORD *)&Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds + 1) = result;
  return result;
}
