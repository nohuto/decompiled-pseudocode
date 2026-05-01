/*
 * XREFs of ?GetMany@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVectorView@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAPEAXPEAI@Z @ 0x1805F6B00
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?GetMany@?$vector_view_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@Uhstring@winrt@@@2@@Z @ 0x1805F6C30 (-GetMany@-$vector_view_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocato.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVectorView<winrt::hstring>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        _DWORD *a5)
{
  signed __int64 v8; // rbx
  __int64 v9; // rcx
  void *v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]

  v8 = 8LL * a3;
  memset_0(a4, 0, v8);
  v9 = a1 + 16;
  if ( !a1 )
    v9 = 40LL;
  v11 = a4;
  v12 = v8 >> 3;
  *a5 = winrt::vector_view_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring,winrt::impl::collection_version>::GetMany(
          v9,
          a2,
          &v11);
  return 0LL;
}
