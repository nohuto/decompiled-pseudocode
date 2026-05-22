/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18008B47C
 * Callers:
 *     _InputSiteHierarchyManager::GetInputSiteListToRoot_::_1_::dtor$9 @ 0x1801D5D2A (_InputSiteHierarchyManager--GetInputSiteListToRoot_--_1_--dtor$9.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_InputSiteHierarchyManager::InputSiteHierarchyEntry_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__InputSiteHierarchyManager::InputSiteHierarchyEntry____0___::_Try_emplace_unsigned___int64_const_&__::_1_::dtor$0 @ 0x1801D5E0D (_std--_Hash_std--_Umap_traits_unsigned___int64_InputSiteHierarchyManager--InputSiteHierarchyEntr.c)
 * Callees:
 *     ??1InputSiteHierarchyEntry@InputSiteHierarchyManager@@QEAA@XZ @ 0x18002C5EC (--1InputSiteHierarchyEntry@InputSiteHierarchyManager@@QEAA@XZ.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    InputSiteHierarchyManager::InputSiteHierarchyEntry::~InputSiteHierarchyEntry((InputSiteHierarchyManager::InputSiteHierarchyEntry *)(v2 + 24));
  return std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>(a1);
}
