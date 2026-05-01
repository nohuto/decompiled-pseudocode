/*
 * XREFs of ?ReplaceAll@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXU?$array_view@$$CBUhstring@winrt@@@2@@Z @ 0x18061C54C
 * Callers:
 *     ?ReplaceAll@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x18061C500 (-ReplaceAll@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhst.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1804AADE0 (--$_Destroy_range@V-$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV-$al.c)
 *     ??$_Assign_counted_range@PEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXPEBUhstring@winrt@@_K@Z @ 0x1806186BC (--$_Assign_counted_range@PEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring>::ReplaceAll(
        volatile signed __int32 *a1,
        __int64 a2)
{
  __int64 v2; // rax
  volatile signed __int32 **v3; // rdi
  volatile signed __int32 **v4; // rsi
  __int64 v5; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  _InterlockedIncrement(a1);
  v2 = (__int64)(a1 + 2);
  if ( !a1 )
    v2 = 48LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( &v6 != (__int128 *)v2 )
  {
    v3 = *(volatile signed __int32 ***)v2;
    *(_QWORD *)&v6 = *(_QWORD *)v2;
    *(_QWORD *)v2 = 0LL;
    v4 = *(volatile signed __int32 ***)(v2 + 8);
    *((_QWORD *)&v6 + 1) = v4;
    *(_QWORD *)(v2 + 8) = 0LL;
    v5 = *(_QWORD *)(v2 + 16);
    v7 = v5;
    *(_QWORD *)(v2 + 16) = 0LL;
  }
  std::vector<winrt::hstring>::_Assign_counted_range<winrt::hstring const *>(
    v2,
    *(__int64 **)a2,
    *(unsigned int *)(a2 + 8));
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<winrt::hstring>>(v3, v4);
    std::_Deallocate<16>(v3, (struct std::nothrow_t *)((v5 - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
  }
}
