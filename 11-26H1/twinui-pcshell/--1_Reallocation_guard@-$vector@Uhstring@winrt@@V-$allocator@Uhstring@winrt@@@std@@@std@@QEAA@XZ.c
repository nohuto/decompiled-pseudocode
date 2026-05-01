/*
 * XREFs of ??1_Reallocation_guard@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA@XZ @ 0x1804AB360
 * Callers:
 *     ??$_Emplace_reallocate@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAPEAUhstring@winrt@@QEAU23@AEBU23@@Z @ 0x180618840 (--$_Emplace_reallocate@AEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@.c)
 *     _std::vector_winrt::hstring_std::allocator_winrt::hstring___::_Emplace_reallocate_winrt::hstring_const_&__::_1_::dtor$0 @ 0x1807021C4 (_std--vector_winrt--hstring_std--allocator_winrt--hstring___--_Emplace_reallocate_winrt--hstring.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1804AADE0 (--$_Destroy_range@V-$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV-$al.c)
 */

void __fastcall std::vector<winrt::hstring>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<winrt::hstring>>(
      *(volatile signed __int32 ***)(a1 + 24),
      *(volatile signed __int32 ***)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(8LL * *(_QWORD *)(a1 + 16)));
  }
}
