/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009E088
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009E220 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WIN.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair__LARGE_INTEGER_const__CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair__LARGE_INTEGER_const__CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY__void________std::pair__LARGE_INTEGER_const__CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY____::_1_::dtor$0 @ 0x1800E8D30 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair__LARGE_INTEGER_const__CCap.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, 0x40uLL);
}
