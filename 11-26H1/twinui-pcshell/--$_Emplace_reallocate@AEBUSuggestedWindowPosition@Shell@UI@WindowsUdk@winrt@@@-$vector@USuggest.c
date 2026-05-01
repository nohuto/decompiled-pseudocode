/*
 * XREFs of ??$_Emplace_reallocate@AEBUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@AEAAPEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@QEAU23456@AEBU23456@@Z @ 0x1805B1E90
 * Callers:
 *     ?GetSuggestedWindowPositions@SnapFlyoutHost@@QEAA?AV?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@XZ @ 0x1805B3E38 (-GetSuggestedWindowPositions@SnapFlyoutHost@@QEAA-AV-$vector@USuggestedWindowPosition@Shell@UI@W.c)
 *     ?ItemSnapped@SnapAssistState@@QEAA?AU?$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@PEAUHWND__@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBURect@Foundation@9winrt@@@Z @ 0x1806C025C (-ItemSnapped@SnapAssistState@@QEAA-AU-$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801C5238 (--$_Uninitialized_move@PEAUMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@wi.c)
 *     ?_Change_array@?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXQEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@_K1@Z @ 0x1801E37C4 (-_Change_array@-$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V-$allocator@USugges.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x180499FE0 (--1_Reallocation_guard@-$vector@UIAsyncAction@Foundation@Windows@winrt@@V-$allocator@UIAsyncActi.c)
 */

__int64 *__fastcall std::vector<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>::_Emplace_reallocate<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition const &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v13; // rax
  __int64 v14; // rcx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v15; // rsi
  __int64 *v16; // r14
  __int64 *v17; // rdx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v18; // r8
  __int64 *v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  void *v22; // [rsp+38h] [rbp-40h]
  __int64 *v23; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = ((__int64)a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = v13;
  v21[0] = a1;
  v21[2] = v3;
  v16 = (__int64 *)((char *)v13 + 8 * v5);
  *v16 = v14;
  v23 = v16 + 1;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v16);
  v17 = *(__int64 **)(a1 + 8);
  v18 = v15;
  v19 = *(__int64 **)a1;
  v22 = v16;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<winrt::WindowsUdk::UI::MenuItem *>(v19, a2, v15);
    v17 = *(__int64 **)(a1 + 8);
    v18 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v16 + 1);
    v19 = a2;
    v22 = v15;
  }
  std::_Uninitialized_move<winrt::WindowsUdk::UI::MenuItem *>(v19, v17, v18);
  v21[1] = 0LL;
  std::vector<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>::_Change_array(
    (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)a1,
    v15,
    v9,
    v3);
  std::vector<winrt::Windows::Foundation::IAsyncAction>::_Reallocation_guard::~_Reallocation_guard((__int64)v21);
  return v16;
}
