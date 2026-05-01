/*
 * XREFs of ??$_Try_emplace@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$$V@?$map@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@std@@_N@1@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1803FB180
 * Callers:
 *     ??$try_emplace@$$V@?$map@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1803FB318 (--$try_emplace@$$V@-$map@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppVi.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CF550 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0V?$tuple@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@AEAA@AEAV?$tuple@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x1803FABE0 (--$-0V-$tuple@$$QEAV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V-$tup.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1803FB658 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$com_ptr_t@UIApplicationView@@Uerr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::_Try_emplace<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v6; // r15
  __int64 *v7; // r9
  __int64 *v8; // rdx
  unsigned __int64 v9; // r8
  char v10; // cl
  __int64 *v11; // rax
  _QWORD *v12; // rbx
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h]
  __int64 *v16; // [rsp+80h] [rbp+20h] BYREF

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v15 = (unsigned __int64)v7;
  v8 = v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v9 = *a3;
    do
    {
      *(_QWORD *)&v15 = v7;
      if ( v7[4] >= v9 )
      {
        v10 = 0;
        DWORD2(v15) = 1;
        v8 = v7;
      }
      else
      {
        v10 = 1;
        DWORD2(v15) = 0;
      }
      v11 = v7 + 2;
      if ( !v10 )
        v11 = v7;
      v7 = (__int64 *)*v11;
    }
    while ( !*(_BYTE *)(*v11 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) || *a3 < (unsigned __int64)v8[4] )
  {
    if ( a1[1] == 0x2E8BA2E8BA2E8BALL )
      std::_Throw_tree_length_error();
    *(_QWORD *)&v14 = a1;
    v12 = std::_Allocate<16,std::_Default_allocate_traits>(0x58uLL);
    v16 = a3;
    ____0V__tuple___QEAV__com_ptr_t_UIApplicationView__Uerr_exception_policy_wil___wil___std__V__tuple___V_1__0A___Z_S___pair___CBV__com_ptr_t_UIApplicationView__Uerr_exception_policy_wil___wil__UAppViewInfoValue_AppViewInfoCache_DataEngine_TaskFlow_Shell_Internal_Windows___std__AEAA_AEAV__tuple___QEAV__com_ptr_t_UIApplicationView__Uerr_exception_policy_wil___wil___1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
      (__int64)(v12 + 4),
      &v16);
    *v12 = v6;
    v12[1] = v6;
    v12[2] = v6;
    *((_WORD *)v12 + 12) = 0;
    *((_QWORD *)&v14 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>,void *>>>(&v14);
    v14 = v15;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v14,
                      (__int64)v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
