/*
 * XREFs of ??$find@U?$find_iid_traits@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@impl@winrt@@@?$interface_list@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@U?$IVectorView@URect@Foundation@Windows@winrt@@@2345@U?$IIterable@URect@Foundation@Windows@winrt@@@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@12@@Z @ 0x18046ACA4
 * Callers:
 *     ?find_interface@?$implements@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@URect@Foundation@Windows@winrt@@@5673@U?$IIterable@URect@Foundation@Windows@winrt@@@5673@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180471E60 (-find_interface@-$implements@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Rect>>::find<winrt::impl::find_iid_traits<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Rect>>
    && v1[1] == 0xD32F3721F7262584uLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Rect>>::find<winrt::impl::find_iid_traits<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>>>();
  }
}
