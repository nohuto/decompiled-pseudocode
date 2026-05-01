/*
 * XREFs of ??$_Try_emplace@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$$V@?$map@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@_N@1@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18017D384
 * Callers:
 *     ?AddItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18017D14C (-AddItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@C.c)
 * Callees:
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1800CF680 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1800CF6D4 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$?0V?$tuple@$$QEAV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@AEAA@AEAV?$tuple@$$QEAV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x1802C36CC (--$-0V-$tuple@$$QEAV-$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_ex.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>>::_Try_emplace<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,>(
        __int64 ***a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 **v6; // r15
  __int64 *v7; // rdi
  int v8; // ebp
  __int64 **v9; // rcx
  __int64 *v10; // rdx
  unsigned __int64 v11; // r9
  char v12; // r8
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 **v16; // r11
  __int64 v17; // r9
  __int64 i; // rax
  __int64 v20; // rdx
  __int64 *v21; // rcx
  __int64 v22; // rax
  unsigned __int64 *v23; // [rsp+80h] [rbp+8h] BYREF

  v6 = *a1;
  v7 = (*a1)[1];
  v8 = 0;
  v9 = *a1;
  v10 = v7;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v11 = *a3;
    do
    {
      v7 = v10;
      if ( v10[4] < v11 )
      {
        v12 = 1;
        v8 = 0;
      }
      else
      {
        v12 = 0;
        v8 = 1;
        v9 = (__int64 **)v10;
      }
      v13 = v10 + 2;
      if ( !v12 )
        v13 = v10;
      v10 = (__int64 *)*v13;
    }
    while ( !*(_BYTE *)(*v13 + 25) );
  }
  if ( *((_BYTE *)v9 + 25) || *a3 < (unsigned __int64)v9[4] )
  {
    if ( a1[1] == (__int64 **)0x555555555555555LL )
      std::_Throw_tree_length_error();
    v14 = std::_Allocate<16,std::_Default_allocate_traits>(48LL);
    v23 = a3;
    ____0V__tuple___QEAV__com_ptr_t_UIViewWrapper_ViewManagerInterop_Shell_Internal_Windows__Uerr_exception_policy_wil___wil___std__V__tuple___V_1__0A___Z_S___pair___CBV__com_ptr_t_UIViewWrapper_ViewManagerInterop_Shell_Internal_Windows__Uerr_exception_policy_wil___wil__V__com_ptr_t_UIWindowingEnvironmentSettings_ViewManagerInterop_Shell_Internal_Windows__Uerr_exception_policy_wil___2__std__AEAA_AEAV__tuple___QEAV__com_ptr_t_UIViewWrapper_ViewManagerInterop_Shell_Internal_Windows__Uerr_exception_policy_wil___wil___1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
      v14 + 32,
      &v23);
    *(_QWORD *)v15 = v6;
    *(_QWORD *)(v15 + 8) = v6;
    *(_QWORD *)(v15 + 16) = v6;
    *(_WORD *)(v15 + 24) = 0;
    a1[1] = (__int64 **)((char *)a1[1] + 1);
    v16 = *a1;
    *(_QWORD *)(v15 + 8) = v7;
    if ( v7 != (__int64 *)v16 )
    {
      if ( v8 )
      {
        *v7 = v15;
        if ( v7 == *v16 )
          *v16 = (__int64 *)v15;
      }
      else
      {
        v7[2] = v15;
        if ( v7 == v16[2] )
          v16[2] = (__int64 *)v15;
      }
      v17 = v15;
      for ( i = *(_QWORD *)(v15 + 8); ; i = *(_QWORD *)(v17 + 8) )
      {
        if ( *(_BYTE *)(i + 24) )
        {
          *((_BYTE *)v16[1] + 24) = 1;
          goto LABEL_18;
        }
        v20 = *(_QWORD *)(v17 + 8);
        v21 = *(__int64 **)(v20 + 8);
        v22 = *v21;
        if ( v20 == *v21 )
        {
          v22 = v21[2];
          if ( !*(_BYTE *)(v22 + 24) )
          {
LABEL_23:
            *(_BYTE *)(v20 + 24) = 1;
            *(_BYTE *)(v22 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL) + 24LL) = 0;
            v17 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL);
            continue;
          }
          if ( v17 == *(_QWORD *)(v20 + 16) )
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
              (__int64)a1,
              v20);
          *(_BYTE *)(*(_QWORD *)(v17 + 8) + 24LL) = 1;
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL) + 24LL) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
            (__int64)a1,
            *(_QWORD **)(*(_QWORD *)(v17 + 8) + 8LL));
        }
        else
        {
          if ( !*(_BYTE *)(v22 + 24) )
            goto LABEL_23;
          if ( v17 == *(_QWORD *)v20 )
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v20);
          *(_BYTE *)(*(_QWORD *)(v17 + 8) + 24LL) = 1;
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL) + 24LL) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
            (__int64)a1,
            *(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL));
        }
      }
    }
    *v16 = (__int64 *)v15;
    v16[1] = (__int64 *)v15;
    v16[2] = (__int64 *)v15;
    *(_BYTE *)(v15 + 24) = 1;
LABEL_18:
    *(_QWORD *)a2 = v15;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
