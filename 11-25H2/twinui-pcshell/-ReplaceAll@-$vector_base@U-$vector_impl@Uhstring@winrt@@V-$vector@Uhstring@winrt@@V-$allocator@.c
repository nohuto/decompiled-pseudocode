/*
 * XREFs of ?ReplaceAll@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXU?$array_view@$$CBUhstring@winrt@@@2@@Z @ 0x1805F83FC
 * Callers:
 *     ?ReplaceAll@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x1805F83B0 (-ReplaceAll@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhst.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x180499F08 (--$_Destroy_range@V-$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV-$al.c)
 *     ??$_Assign_counted_range@PEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXPEBUhstring@winrt@@_K@Z @ 0x1805F3F78 (--$_Assign_counted_range@PEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring>::ReplaceAll(
        volatile signed __int32 *a1,
        __int64 a2)
{
  __int64 v3; // rax
  volatile signed __int32 **v4; // rdi
  volatile signed __int32 **v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  _InterlockedIncrement(a1);
  v3 = (__int64)(a1 + 2);
  if ( !a1 )
    v3 = 48LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( &v8 != (__int128 *)v3 )
  {
    v4 = *(volatile signed __int32 ***)v3;
    *(_QWORD *)&v8 = *(_QWORD *)v3;
    *(_QWORD *)v3 = 0LL;
    v5 = *(volatile signed __int32 ***)(v3 + 8);
    *((_QWORD *)&v8 + 1) = v5;
    *(_QWORD *)(v3 + 8) = 0LL;
    v6 = *(_QWORD *)(v3 + 16);
    v9 = v6;
    *(_QWORD *)(v3 + 16) = 0LL;
  }
  v7 = (__int64)(a1 + 2);
  if ( !a1 )
    v7 = 48LL;
  std::vector<winrt::hstring>::_Assign_counted_range<winrt::hstring const *>(
    v7,
    *(__int64 **)a2,
    *(unsigned int *)(a2 + 8));
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<winrt::hstring>>(v4, v5);
    std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)((v6 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
  }
}
