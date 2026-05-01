/*
 * XREFs of ??$find@U?$find_iid_traits@Uiterator@?$iterable_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@Ucollection_version@23@@winrt@@@impl@winrt@@@?$interface_list@U?$IIterator@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@Uiterator@?$iterable_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@Ucollection_version@23@@winrt@@@12@@Z @ 0x1805FFC20
 * Callers:
 *     ?find_interface@?$implements@Uiterator@?$iterable_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@Ucollection_version@23@@winrt@@U?$IIterator@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@3@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180604630 (-find_interface@-$implements@Uiterator@-$iterable_base@U-$vector_impl@UMenuItem@UI@WindowsUdk@wi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IIterator<winrt::WindowsUdk::UI::MenuItem>>::find<winrt::impl::find_iid_traits<winrt::iterable_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::WindowsUdk::UI::MenuItem,winrt::impl::collection_version>::iterator>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterator<winrt::WindowsUdk::UI::MenuItem>>
    && v1[1] == 0x320772A7AAFA5A8BLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}
