/*
 * XREFs of ?GetAt@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAURect@Foundation@Windows@3@@Z @ 0x180479540
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAt@?$vector_view_base@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@URect@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBA?AURect@Foundation@Windows@2@I@Z @ 0x180479588 (-GetAt@-$vector_view_base@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundat.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Rect>>::GetAt(
        __int64 a1,
        unsigned int a2,
        __m128i *a3)
{
  __int64 v4; // rcx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a1 + 16;
  if ( !a1 )
    v4 = 40LL;
  *a3 = _mm_loadu_si128((const __m128i *)winrt::vector_view_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Rect,winrt::impl::collection_version>::GetAt(
                                           v4,
                                           v6,
                                           a2));
  return 0LL;
}
