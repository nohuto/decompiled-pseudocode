/*
 * XREFs of ??1?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA@XZ @ 0x18049A1D8
 * Callers:
 *     _winrt::vector_base_winrt::impl::vector_impl_winrt::hstring_std::vector_winrt::hstring_std::allocator_winrt::hstring____winrt::impl::single_threaded_collection_base__winrt::hstring_::ReplaceAll_::_1_::dtor$0 @ 0x1806D9A75 (_winrt--vector_base_winrt--impl--vector_impl_winrt--hstring_std--vector_winrt--hstring_std--allo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x180499F08 (--$_Destroy_range@V-$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV-$al.c)
 */

void __fastcall std::vector<winrt::hstring>::~vector<winrt::hstring>(__int64 a1)
{
  volatile signed __int32 **v2; // rcx

  v2 = *(volatile signed __int32 ***)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::hstring>>(v2, *(volatile signed __int32 ***)(a1 + 8));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
