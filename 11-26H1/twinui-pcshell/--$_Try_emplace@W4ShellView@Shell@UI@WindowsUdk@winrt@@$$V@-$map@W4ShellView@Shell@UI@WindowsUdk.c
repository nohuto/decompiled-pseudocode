/*
 * XREFs of ??$_Try_emplace@W4ShellView@Shell@UI@WindowsUdk@winrt@@$$V@?$map@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@U?$less@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@_N@1@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180465E28
 * Callers:
 *     _lambda_4ce12a90e81ea4b4c570078f6f58eac4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180463F20 (_lambda_4ce12a90e81ea4b4c570078f6f58eac4_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CF550 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ?_Check_grow_by_1@?$_Tree@V?$_Tmap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@U?$less@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@7@$0A@@std@@@std@@IEAAXXZ @ 0x1801C5210 (-_Check_grow_by_1@-$_Tree@V-$_Tmap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$shared_ptr@V.c)
 *     ??$_Find_lower_bound@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@?$_Tree@V?$_Tmap_traits@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_KU?$less@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@@8@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@PEAX@std@@@1@AEBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@Z @ 0x18020C5EC (--$_Find_lower_bound@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@-$_Tree@V-$_Tmap_.c)
 *     ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@@1@@Z @ 0x18020F354 (--0-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4ShellView@Shell@UI@WindowsUd.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802C069C (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winr.c)
 *     ??$?0V?$tuple@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@AEAA@AEAV?$tuple@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x180463EA0 (--$-0V-$tuple@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@.c)
 */

__int64 __fastcall std::map<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>::_Try_emplace<enum winrt::WindowsUdk::UI::Shell::ShellView,>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  _DWORD *v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h]
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]
  _DWORD *v14; // [rsp+98h] [rbp+38h] BYREF

  std::_Tree<std::_Tmap_traits<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier,unsigned __int64,std::less<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier>,std::allocator<std::pair<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier const,unsigned __int64>>,0>>::_Find_lower_bound<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier>(
    a1,
    &v12,
    a3);
  if ( *(_BYTE *)(v13 + 25) || *v6 < *(_DWORD *)(v13 + 32) )
  {
    std::_Tree<std::_Tmap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>,std::less<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>>,0>>::_Check_grow_by_1((__int64)a1);
    v7 = *a1;
    std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>,void *>>>(
      &v10,
      (__int64)a1);
    v14 = a3;
    ____0V__tuple___QEAW4ShellView_Shell_UI_WindowsUdk_winrt___std__V__tuple___V_1__0A___Z_S___pair___CBW4ShellView_Shell_UI_WindowsUdk_winrt__V__shared_ptr_VInputAppViewCoodinatorHandler___std___std__AEAA_AEAV__tuple___QEAW4ShellView_Shell_UI_WindowsUdk_winrt___1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
      v11 + 32,
      &v14);
    *(_QWORD *)v11 = v7;
    *(_QWORD *)(v11 + 8) = v7;
    *(_QWORD *)(v11 + 16) = v7;
    *(_BYTE *)(v11 + 24) = 0;
    *(_BYTE *)(v11 + 25) = 0;
    v8 = v11;
    v11 = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>,void *>>>((__int64)&v10);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v12,
                      v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
