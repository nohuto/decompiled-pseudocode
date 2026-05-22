/*
 * XREFs of ??1?$list@U?$pair@$$CBI_K@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@@std@@QEAA@XZ @ 0x18008A5C8
 * Callers:
 *     _MPCInputRouter::MPCInputRouter_::_1_::dtor$9 @ 0x1801D4F93 (_MPCInputRouter--MPCInputRouter_--_1_--dtor$9.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$11 @ 0x1801D6D76 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$11.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_short_SimpleHapticsControllerFeedback_std::_Uhash_compare_unsigned_short_std::hash_unsigned_short__std::equal_to_unsigned_short____std::allocator_std::pair_unsigned_short_const__SimpleHapticsControllerFeedback____0___::_Hash_std::_Umap_traits_unsigned_short_SimpleHapticsControllerFeedback_std::_Uhash_compare_unsigned_short_std::hash_unsigned_short__std::equal_to_unsigned_short____std::allocator_std::pair_unsigned_short_const__SimpleHapticsControllerFeedback____0____std::allocator_std::_List_node_std::pair_unsigned_short_const__SimpleHapticsControllerFeedback__void________::_1_::dtor$0 @ 0x1801D6E8A (_std--_Hash_std--_Umap_traits_unsigned_short_SimpleHapticsControllerFeedback_std--_Uhash_compare.c)
 *     _std::_Hash_std::_Umap_traits_DWMPointerMapping_CursorId_std::_Uhash_compare_DWMPointerMapping_DWMMappingHash_std::equal_to_DWMPointerMapping____std::allocator_std::pair_DWMPointerMapping_const__CursorId____0___::_Hash_std::_Umap_traits_DWMPointerMapping_CursorId_std::_Uhash_compare_DWMPointerMapping_DWMMappingHash_std::equal_to_DWMPointerMapping____std::allocator_std::pair_DWMPointerMapping_const__CursorId____0____::_1_::dtor$0 @ 0x1801D711E (_std--_Hash_std--_Umap_traits_DWMPointerMapping_CursorId_std--_Uhash_compare_DWMPoi_ea_1801D711E.c)
 *     _PenHapticInterface::PenHapticInterface_::_1_::dtor$6 @ 0x1801DC66A (_PenHapticInterface--PenHapticInterface_--_1_--dtor$6.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18008A624 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 */

__int64 __fastcall std::list<std::pair<unsigned int const,unsigned __int64>>::~list<std::pair<unsigned int const,unsigned __int64>>(
        _QWORD *a1)
{
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    a1,
    *a1);
  return std::_Deallocate<16>(*a1, 32LL);
}
