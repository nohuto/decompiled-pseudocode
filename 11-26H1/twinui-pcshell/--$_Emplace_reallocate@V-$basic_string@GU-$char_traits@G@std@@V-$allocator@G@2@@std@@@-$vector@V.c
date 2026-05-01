/*
 * XREFs of ??$_Emplace_reallocate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@$$QEAV21@@Z @ 0x18033D998
 * Callers:
 *     ??$_Emplace_one_at_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x1802C00B0 (--$_Emplace_one_at_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1801B9C94 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x180228B70 (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18033EB08 (--$_Uninitialized_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$alloc.c)
 *     ??1_Reallocation_guard@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180342DA4 (--1_Reallocation_guard@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-.c)
 *     ?_Calculate_growth@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEBA_K_K@Z @ 0x1803579C8 (-_Calculate_growth@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C.c)
 */

__int64 __fastcall std::vector<std::wstring>::_Emplace_reallocate<std::wstring>(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 size_of; // rax
  void *v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rdx
  void *v14; // r8
  __int64 v15; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h]
  __int64 v19; // [rsp+40h] [rbp-48h]

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Calculate_growth(
         a1,
         v6 + 1);
  size_of = std::_Get_size_of_n<32>(v9);
  v17[0] = a1;
  v17[2] = v9;
  v11 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = (__int64)v11 + ((a2 - v3) & 0xFFFFFFFFFFFFFFE0uLL);
  v19 = v12 + 32;
  std::wstring::wstring(v12, a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  v18 = v12;
  if ( a2 != v13 )
  {
    std::_Uninitialized_move<std::wstring *>(v15, a2, v11);
    v13 = a1[1];
    v14 = (void *)(v12 + 32);
    v15 = a2;
    v18 = (__int64)v11;
  }
  std::_Uninitialized_move<std::wstring *>(v15, v13, v14);
  v17[1] = 0LL;
  std::vector<std::wstring>::_Change_array((__int64)a1, (__int64)v11, v8, v9);
  std::vector<std::wstring>::_Reallocation_guard::~_Reallocation_guard(v17);
  return v12;
}
