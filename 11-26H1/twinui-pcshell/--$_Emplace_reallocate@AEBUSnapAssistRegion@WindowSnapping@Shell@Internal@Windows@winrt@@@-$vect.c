/*
 * XREFs of ??$_Emplace_reallocate@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x1805BDB30
 * Callers:
 *     ??$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@$$QEAU234567@@Z @ 0x1805BDC8C (--$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@-$vector@USnapAs.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1801B9C94 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@_K1@Z @ 0x180228C90 (-_Change_array@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$alloca.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Simple_reallocation_guard@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180342E0C (--1_Simple_reallocation_guard@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ?_Calculate_growth@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEBA_K_K@Z @ 0x1803579C8 (-_Calculate_growth@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C.c)
 *     ??$_Uninitialized_move@PEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@QEAU123456@0PEAU123456@AEAV?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1805BDC4C (--$_Uninitialized_move@PEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allo.c)
 */

char *__fastcall std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Emplace_reallocate<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion const &>(
        __int64 *a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 size_of; // rax
  char *v11; // rax
  __int128 v12; // xmm0
  char *v13; // rdi
  __int64 v14; // rsi
  _OWORD *v15; // r8
  __int128 v16; // xmm1
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD *v21; // [rsp+38h] [rbp-40h]
  _OWORD *v22; // [rsp+40h] [rbp-38h]

  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Calculate_growth(
         a1,
         v6 + 1);
  size_of = std::_Get_size_of_n<32>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = *a3;
  v20[0] = a1;
  v13 = &v11[v4 & 0xFFFFFFFFFFFFFFE0uLL];
  v20[2] = v9;
  v14 = (__int64)v11;
  v21 = v13;
  v15 = v11;
  *(_OWORD *)v13 = v12;
  v16 = a3[1];
  v22 = v13 + 32;
  *((_OWORD *)v13 + 1) = v16;
  v17 = a1[1];
  v18 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion *>(v18, a2, v11);
    v17 = a1[1];
    v15 = v13 + 32;
    v18 = a2;
    v21 = (_OWORD *)v14;
  }
  std::_Uninitialized_move<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion *>(v18, v17, v15);
  v20[1] = 0LL;
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Change_array(a1, v14, v8, v9);
  std::vector<std::wstring>::_Simple_reallocation_guard::~_Simple_reallocation_guard((__int64)v20);
  return v13;
}
