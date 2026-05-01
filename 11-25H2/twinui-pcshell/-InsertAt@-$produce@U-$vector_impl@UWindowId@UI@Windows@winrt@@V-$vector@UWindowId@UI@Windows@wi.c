/*
 * XREFs of ?InsertAt@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIUstruct_Windows_UI_WindowId@23@@Z @ 0x1806400C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertAt@?$vector_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UWindowId@UI@Windows@3@@winrt@@QEAAXIAEBUWindowId@UI@Windows@2@@Z @ 0x1806400FC (-InsertAt@-$vector_base@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Window.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>>::InsertAt(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v4 = a1 + 24;
  if ( !a1 )
    v4 = 40LL;
  winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::WindowId>::InsertAt(
    v4,
    a2,
    &v6);
  return 0LL;
}
