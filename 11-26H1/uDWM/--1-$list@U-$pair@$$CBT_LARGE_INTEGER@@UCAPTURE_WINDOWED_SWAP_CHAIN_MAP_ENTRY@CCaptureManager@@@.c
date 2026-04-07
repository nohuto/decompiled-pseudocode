/*
 * XREFs of ??1?$list@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@2@@std@@QEAA@XZ @ 0x18009E2A8
 * Callers:
 *     _std::_Hash_std::_Umap_traits__LARGE_INTEGER_CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY_std::_Uhash_compare__LARGE_INTEGER_std::hash__LARGE_INTEGER__std::equal_to__LARGE_INTEGER____std::allocator_std::pair__LARGE_INTEGER_const__CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY____0___::_Hash_std::_Umap_traits__LARGE_INTEGER_CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY_std::_Uhash_compare__LARGE_INTEGER_std::hash__LARGE_INTEGER__std::equal_to__LARGE_INTEGER____std::allocator_std::pair__LARGE_INTEGER_const__CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY____0____::_1_::dtor$0 @ 0x1800E8EBC (_std--_Hash_std--_Umap_traits__LARGE_INTEGER_CCaptureManager--CAPTURE_WINDOWED_SWAP_CHAIN_MAP_EN.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18009D660 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP.c)
 */

void __fastcall std::list<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>>::~list<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>>(
        __int64 *a1)
{
  std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16>((void *)*a1, 0x38uLL);
}
