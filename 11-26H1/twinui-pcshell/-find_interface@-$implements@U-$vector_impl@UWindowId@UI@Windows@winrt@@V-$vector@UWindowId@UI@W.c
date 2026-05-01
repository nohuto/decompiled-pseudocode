/*
 * XREFs of ?find_interface@?$implements@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UWindowId@UI@Windows@winrt@@@5673@U?$IIterable@UWindowId@UI@Windows@winrt@@@5673@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180665FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@impl@winrt@@@?$interface_list@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@U?$IVectorView@UWindowId@UI@Windows@winrt@@@2345@U?$IIterable@UWindowId@UI@Windows@winrt@@@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@12@@Z @ 0x180665140 (--$find@U-$find_iid_traits@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Win.c)
 */

__int64 __fastcall winrt::implements<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::WindowId>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::WindowId>>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::WindowId>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::WindowId>>::find<winrt::impl::find_iid_traits<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>>>(v3);
}
