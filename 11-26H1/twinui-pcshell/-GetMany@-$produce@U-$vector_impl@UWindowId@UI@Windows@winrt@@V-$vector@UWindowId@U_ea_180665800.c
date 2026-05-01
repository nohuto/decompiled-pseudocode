/*
 * XREFs of ?GetMany@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAUstruct_Windows_UI_WindowId@23@PEAI@Z @ 0x180665800
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMany@?$vector_view_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UWindowId@UI@Windows@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@UWindowId@UI@Windows@winrt@@@2@@Z @ 0x180665918 (-GetMany@-$vector_view_base@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Wi.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::WindowId>>::GetMany(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  v8 = a4;
  v9 = a3;
  v6 = a1 + 16;
  if ( !a1 )
    v6 = 40LL;
  *a5 = winrt::vector_view_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::WindowId,winrt::impl::collection_version>::GetMany(
          v6,
          a2,
          &v8);
  return 0LL;
}
