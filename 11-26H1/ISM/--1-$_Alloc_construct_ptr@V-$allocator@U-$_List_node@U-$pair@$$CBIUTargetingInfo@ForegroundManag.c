/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18007B49C
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUTargetingInfo@ForegroundManager@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18004A79C (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUTargetingInfo@ForegroundManager@@V-$_Uhash_com.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18007B490 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBIUTargetingInfo@ForegroundMan.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_ForegroundManager::TargetingInfo_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__ForegroundManager::TargetingInfo____0___::_Try_emplace_unsigned_int_const_&__::_1_::dtor$1 @ 0x1801D6C00 (_std--_Hash_std--_Umap_traits_unsigned_int_ForegroundManager--TargetingInfo_std--_U_ea_1801D6C00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned int const,ForegroundManager::TargetingInfo>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned int const,ForegroundManager::TargetingInfo>,void *>>>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return std::_Deallocate<16>(v1, 48LL);
  return result;
}
