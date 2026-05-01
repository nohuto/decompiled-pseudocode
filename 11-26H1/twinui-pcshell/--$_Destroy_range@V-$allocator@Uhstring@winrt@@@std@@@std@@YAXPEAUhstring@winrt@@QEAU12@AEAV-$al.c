/*
 * XREFs of ??$_Destroy_range@V?$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1804AADE0
 * Callers:
 *     ??$_Uninitialized_move@PEAUhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring@winrt@@QEAU12@0PEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1804AAE18 (--$_Uninitialized_move@PEAUhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA@XZ @ 0x1804AB2F8 (--1-$_Uninitialized_backout_al@V-$allocator@Uhstring@winrt@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA@XZ @ 0x1804AB30C (--1-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@QEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA@XZ @ 0x1804AB360 (--1_Reallocation_guard@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXQEAUhstring@winrt@@_K1@Z @ 0x1804AB430 (-_Change_array@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@AEAAXQEAUhstrin.c)
 *     ??$_Assign_counted_range@PEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXPEBUhstring@winrt@@_K@Z @ 0x1806186BC (--$_Assign_counted_range@PEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winr.c)
 *     ??$_Uninitialized_copy_n@PEBUhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring@winrt@@PEBU12@_KPEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x180618964 (--$_Uninitialized_copy_n@PEBUhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstri.c)
 *     ??0DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180619D24 (--0DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@UEAA@XZ @ 0x18061A014 (--1-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@s.c)
 *     ?Clear@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x18061A790 (-Clear@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstring@.c)
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXU?$array_view@$$CBUhstring@winrt@@@2@@Z @ 0x18061C54C (-ReplaceAll@-$vector_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<winrt::hstring>>(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 **v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      winrt::handle_type<winrt::impl::hstring_traits>::close(v3++);
    while ( v3 != a2 );
  }
}
