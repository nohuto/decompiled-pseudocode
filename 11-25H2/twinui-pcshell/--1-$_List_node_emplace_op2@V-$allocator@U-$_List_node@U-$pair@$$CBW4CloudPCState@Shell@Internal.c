/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802C8F2C
 * Callers:
 *     ??$emplace@U?$pair@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@1@@Z @ 0x18063CD08 (--$emplace@U-$pair@IV-$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ??$emplace@U?$pair@KV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@KV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@1@@Z @ 0x18063CE38 (--$emplace@U-$pair@KV-$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@.c)
 *     _std::_Hash_std::_Umap_traits_enum_winrt::Windows::Internal::Shell::CloudPCState_std::shared_ptr_winrt::Windows::Internal::Shell::implementation::ConnectionStateBase__std::_Uhash_compare_enum_winrt::Windows::Internal::Shell::CloudPCState_std::hash_enum_winrt::Windows::Internal::Shell::CloudPCState__std::equal_to_enum_winrt::Windows::Internal::Shell::CloudPCState____std::allocator_std::pair_enum_winrt::Windows::Internal::Shell::CloudPCState_const__std::shared_ptr_winrt::Windows::Internal::Shell::implementation::ConnectionStateBase______0___::emplace_std::pair_enum_winrt::Windows::Internal::Shell::CloudPCState_const__std::shared_ptr_winrt::Windows::Internal::Shell::implementation::ConnectionStateBase____const_&__::_1_::dtor$0 @ 0x1806B0F6E (_std--_Hash_std--_Umap_traits_enum_winrt--Windows--Internal--Shell--CloudPCState_st_ea_1806B0F6E.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(std::_Ref_count_base **)(v2 + 32);
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
  }
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>(a1);
}
