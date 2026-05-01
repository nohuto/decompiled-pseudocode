/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180482C6C
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1801B0D40 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@I.c)
 *     ??1?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180482C90 (--1-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_trait.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1805747F8 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$cha_ea_1805747F8.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_int_const__KeyboardHosting::ViewState__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_int_const__KeyboardHosting::ViewState__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_int_const_&__std::tuple_____::_1_::dtor$0 @ 0x1806EF4B7 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned_int_const__Keyboa.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______void________std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&__::_1_::dtor$1 @ 0x1806F4FF9 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_std--basic_string_un_ea_1806F4FF9.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, (struct std::nothrow_t *)0x60);
}
