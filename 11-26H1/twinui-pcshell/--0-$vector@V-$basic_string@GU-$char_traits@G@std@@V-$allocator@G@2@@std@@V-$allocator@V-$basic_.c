/*
 * XREFs of ??0?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@V?$initializer_list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@AEBV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1801B9B64
 * Callers:
 *     _dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__ @ 0x1801B9A90 (_dynamic_initializer_for__Windows--Internal--Shell--CustomShell--CustomShellExperienceRepository.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180625824 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 * Callees:
 *     ??$_Uninitialized_copy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBV12@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEBV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1801B9C28 (--$_Uninitialized_copy@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBV12@V.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1801B9C94 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::vector<std::wstring>::vector<std::wstring>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 size_of; // rax
  __int64 v7; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = a2[1];
  v4 = *a2;
  v5 = (v3 - *a2) >> 5;
  if ( v5 )
  {
    if ( v5 > 0x7FFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    size_of = std::_Get_size_of_n<32>((a2[1] - *a2) >> 5);
    v7 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = v7;
    a1[1] = v7;
    a1[2] = v7 + 32 * v5;
    a1[1] = std::_Uninitialized_copy<std::wstring const *,std::wstring const *,std::allocator<std::wstring>>(
              v4,
              v3,
              v7,
              a1);
  }
  return a1;
}
