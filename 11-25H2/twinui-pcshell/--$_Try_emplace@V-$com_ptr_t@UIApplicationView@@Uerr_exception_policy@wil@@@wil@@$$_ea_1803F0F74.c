/*
 * XREFs of ??$_Try_emplace@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$$V@?$map@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@std@@_N@1@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1803F0F74
 * Callers:
 *     ??$try_emplace@$$V@?$map@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1803F10CC (--$try_emplace@$$V@-$map@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppVi.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800F848C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180318F84 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1803F09E0 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$com_ptr_t@UIApplicationView@@Uerr_exception.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1803F13E8 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$com_ptr_t@UIApplicationView@@Uerr.c)
 */

__int64 __fastcall std::map<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::_Try_emplace<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rbx
  _QWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v14; // [rsp+70h] [rbp+10h] BYREF

  v6 = *a1;
  v7 = v6;
  v8 = *(_QWORD *)(v6 + 8);
  v13 = (unsigned __int64)v8;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    a4 = *a3;
    do
    {
      *(_QWORD *)&v13 = v8;
      if ( *(_QWORD *)(v8 + 32) >= a4 )
      {
        v7 = v8;
        DWORD2(v13) = 1;
        v8 = *(_QWORD *)v8;
      }
      else
      {
        DWORD2(v13) = 0;
        v8 = *(_QWORD *)(v8 + 16);
      }
    }
    while ( !*(_BYTE *)(v8 + 25) );
  }
  if ( *(_BYTE *)(v7 + 25) || (unsigned __int64)*a3 < *(_QWORD *)(v7 + 32) )
  {
    if ( a1[1] == 0x2E8BA2E8BA2E8BALL )
      std::_Throw_tree_length_error();
    v14 = a3;
    v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>,void *>>>(
           v12,
           (__int64)a1,
           v6,
           a4,
           &v14);
    v10 = v9[1];
    v9[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>,void *>>>(v12);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      a1,
                      (__int64)&v13,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
