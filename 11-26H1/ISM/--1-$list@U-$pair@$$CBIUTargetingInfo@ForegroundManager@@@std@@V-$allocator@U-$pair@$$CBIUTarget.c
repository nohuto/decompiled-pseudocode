/*
 * XREFs of ??1?$list@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@2@@std@@QEAA@XZ @ 0x1800AB770
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_ResizeProcessor::PointerCache_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ResizeProcessor::PointerCache____0___::_Hash_std::_Umap_traits_unsigned_long_ResizeProcessor::PointerCache_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ResizeProcessor::PointerCache____0____::_1_::dtor$0 @ 0x1801D68E2 (_std--_Hash_std--_Umap_traits_unsigned_long_ResizeProcessor--PointerCache_std--_Uhash_compare_un.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$12 @ 0x1801DB655 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$12.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AB3DC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUPointerCache@DragNDropProcessor@@@std.c)
 */

void __fastcall std::list<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>::~list<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x30);
}
