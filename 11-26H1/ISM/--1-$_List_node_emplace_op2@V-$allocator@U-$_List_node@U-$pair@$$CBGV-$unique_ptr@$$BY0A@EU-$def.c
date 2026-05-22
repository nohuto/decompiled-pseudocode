/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801927B0
 * Callers:
 *     ??$_Try_emplace@G$$V@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@_N@1@$$QEAG@Z @ 0x1801923D8 (--$_Try_emplace@G$$V@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@s.c)
 *     ??$emplace@AEAEV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAE$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@1@@Z @ 0x1801924E8 (--$emplace@AEAEV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@@-$_Hash@V-$_Umap_tra.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_short_std::unique_ptr_unsigned_char_[0]_std::default_delete_unsigned_char_[0]____std::_Uhash_compare_unsigned_short_std::hash_unsigned_short__std::equal_to_unsigned_short____std::allocator_std::pair_unsigned_short_const__std::unique_ptr_unsigned_char_[0]_std::default_delete_unsigned_char_[0]________0___::_Try_emplace_unsigned_short__::_1_::dtor$0 @ 0x1801DC5E8 (_std--_Hash_std--_Umap_traits_unsigned_short_std--unique_ptr_unsigned_char_[0]_std--default_dele.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_short_std::unique_ptr_unsigned_char_[0]_std::default_delete_unsigned_char_[0]____std::_Uhash_compare_unsigned_short_std::hash_unsigned_short__std::equal_to_unsigned_short____std::allocator_std::pair_unsigned_short_const__std::unique_ptr_unsigned_char_[0]_std::default_delete_unsigned_char_[0]________0___::emplace_unsigned_char_&_std::unique_ptr_unsigned_char_[0]_std::default_delete_unsigned_char_[0]______::_1_::dtor$0 @ 0x1801DC5FA (_std--_Hash_std--_Umap_traits_unsigned_short_std--unique_ptr_unsigned_char_[0]_std-_ea_1801DC5FA.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>,void *>>>(
        __int64 a1,
        const struct std::nothrow_t *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)(v3 + 24), a2);
  return std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>,void *>>>(a1);
}
