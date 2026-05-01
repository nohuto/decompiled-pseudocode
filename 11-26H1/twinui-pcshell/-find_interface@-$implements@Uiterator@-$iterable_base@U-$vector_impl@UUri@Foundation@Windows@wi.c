/*
 * XREFs of ?find_interface@?$implements@Uiterator@?$iterable_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805DC310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Uri,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Uri>>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Uri>>
    && a2[1] == 0xA507AFE96C0CD6BBuLL )
  {
    return (a1 + 16) & -(__int64)(a1 != 0);
  }
  else
  {
    return 0LL;
  }
}
