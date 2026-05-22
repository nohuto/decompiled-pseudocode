/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18008A2C0
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18008A8E4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBUtagMsgRoutingInfo@@UtagInput.c)
 *     ??$_Try_emplace@AEBG$$V@?$map@GU_HIDP_VALUE_CAPS@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@_N@1@AEBG@Z @ 0x18019DACC (--$_Try_emplace@AEBG$$V@-$map@GU_HIDP_VALUE_CAPS@@U-$less@G@std@@V-$allocator@U-$pair@$$CBGU_HID.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_unsigned_int_const__std::function_void___cdecl(bool)____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_unsigned_int_const__std::function_void___cdecl(bool)____void________std::piecewise_construct_t_const_&_std::tuple_unsigned_int_const_&__std::tuple_____::_1_::dtor$1 @ 0x1801D76D5 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_unsigned_int_const__std--function.c)
 *     _std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_tagInputRoutingInfo_std::_Uhash_compare_tagMsgRoutingInfo_std::hash_tagMsgRoutingInfo__std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo____0___::emplace_tagMsgRoutingInfo_const_&_tagInputRoutingInfo_const_&__::_1_::dtor$1 @ 0x1801D78E3 (_std--_Hash_std--_Umap_traits_tagMsgRoutingInfo_tagInputRoutingInfo_std--_Uhash_com_ea_1801D78E3.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_unsigned_short_const___HIDP_VALUE_CAPS__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_unsigned_short_const___HIDP_VALUE_CAPS__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_short_const_&__std::tuple_____::_1_::dtor$1 @ 0x1801DCA36 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_unsigned_short_const___HIDP_VALUE.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *>>>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return std::_Deallocate<16>(v1, 104LL);
  return result;
}
