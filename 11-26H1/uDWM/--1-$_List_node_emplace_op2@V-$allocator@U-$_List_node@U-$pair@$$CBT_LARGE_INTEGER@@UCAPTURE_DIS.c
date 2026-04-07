/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009E1C0
 * Callers:
 *     ??$emplace@AEBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@std@@_N@1@AEBT_LARGE_INTEGER@@$$QEAUCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@Z @ 0x18009D9A8 (--$emplace@AEBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@-$_Hash@V-$_Umap_tra.c)
 *     _std::_Hash_std::_Umap_traits__LARGE_INTEGER_CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY_std::_Uhash_compare__LARGE_INTEGER_std::hash__LARGE_INTEGER__std::equal_to__LARGE_INTEGER____std::allocator_std::pair__LARGE_INTEGER_const__CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY____0___::emplace__LARGE_INTEGER_const_&_CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY__::_1_::dtor$0 @ 0x1800E8D42 (_std--_Hash_std--_Umap_traits__LARGE_INTEGER_CCaptureManager--CAPTURE_DISPLAY_MAP_E_ea_1800E8D42.c)
 * Callees:
 *     ??1CAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ @ 0x18009E334 (--1CAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY::~CAPTURE_DISPLAY_MAP_ENTRY((CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *)(v2 + 24));
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>,void *>>>(a1);
}
