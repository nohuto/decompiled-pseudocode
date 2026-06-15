/*
 * XREFs of ??1?$list@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18002E5B4
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_std::unique_ptr_TSSession_std::default_delete_TSSession____std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::unique_ptr_TSSession_std::default_delete_TSSession________0___::_Hash_std::_Umap_traits_unsigned_long_std::unique_ptr_TSSession_std::default_delete_TSSession____std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::unique_ptr_TSSession_std::default_delete_TSSession________0____::_1_::dtor$0 @ 0x18004D82D (_std--_Hash_std--_Umap_traits_unsigned_long_std--unique_ptr_TSSession_std--default_delete_TSSess.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18002E5E0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VTSSession@@U-$default_d.c)
 */

void __fastcall std::list<std::pair<unsigned long const,std::unique_ptr<TSSession>>>::~list<std::pair<unsigned long const,std::unique_ptr<TSSession>>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>(
    a1,
    *a1);
  std::_Deallocate<16>(*a1, (const struct std::nothrow_t *)0x20);
}
