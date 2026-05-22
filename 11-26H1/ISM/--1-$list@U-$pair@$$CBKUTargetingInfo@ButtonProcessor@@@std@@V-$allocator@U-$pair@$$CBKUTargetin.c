/*
 * XREFs of ??1?$list@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x18008A2E4
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_Win32kInterop::TargetingInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo____0___::_Hash_std::_Umap_traits_unsigned_long_Win32kInterop::TargetingInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo____0____::_1_::dtor$0 @ 0x1801D7108 (_std--_Hash_std--_Umap_traits_unsigned_long_Win32kInterop--TargetingInfo_std--_Uhash_compare_uns.c)
 *     _ButtonProcessor::ButtonProcessor_::_1_::dtor$6 @ 0x1801D71E4 (_ButtonProcessor--ButtonProcessor_--_1_--dtor$6.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18008A864 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PE.c)
 */

__int64 __fastcall std::list<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>::~list<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>(
        _QWORD *a1)
{
  std::_List_node<std::pair<unsigned long const,Win32kInterop::TargetingInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,Win32kInterop::TargetingInfo>,void *>>>(
    a1,
    *a1);
  return std::_Deallocate<16>(*a1, 40LL);
}
