/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180065D24
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800D46FC (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$shared_ptr@ULegacyDeviceI.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_std::shared_ptr_LegacyDeviceInfo__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::shared_ptr_LegacyDeviceInfo______0___::_Try_emplace_unsigned_long_const_&__::_1_::dtor$1 @ 0x1801D98E2 (_std--_Hash_std--_Umap_traits_unsigned_long_std--shared_ptr_LegacyDeviceInfo__std--_ea_1801D98E2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>,void *>>>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return std::_Deallocate<16>(v1, 40LL);
  return result;
}
