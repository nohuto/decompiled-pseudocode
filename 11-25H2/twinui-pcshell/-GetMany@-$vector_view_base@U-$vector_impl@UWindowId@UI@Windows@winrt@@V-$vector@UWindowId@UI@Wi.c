/*
 * XREFs of ?GetMany@?$vector_view_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UWindowId@UI@Windows@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@UWindowId@UI@Windows@winrt@@@2@@Z @ 0x18063FDD4
 * Callers:
 *     ?GetMany@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAUstruct_Windows_UI_WindowId@23@PEAI@Z @ 0x18063FC40 (-GetMany@-$produce@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Windows@win.c)
 *     ?GetMany@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAUstruct_Windows_UI_WindowId@23@PEAI@Z @ 0x18063FCA0 (-GetMany@-$produce@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@U_ea_18063FCA0.c)
 * Callees:
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

__int64 __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::WindowId,winrt::impl::collection_version>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx

  v3 = a2;
  v4 = a1 + 16;
  v5 = a1 + 8;
  if ( !a1 )
    v5 = 48LL;
  if ( !a1 )
    v4 = 56LL;
  if ( a2 >= (unsigned int)((__int64)(*(_QWORD *)v4 - *(_QWORD *)v5) >> 3) )
    return 0LL;
  v8 = *(_DWORD *)(a3 + 8);
  v9 = a1 + 8;
  v10 = a1 + 16;
  if ( !a1 )
  {
    v10 = 56LL;
    v9 = 48LL;
  }
  if ( v8 >= (unsigned int)((__int64)(*(_QWORD *)v10 - *(_QWORD *)v9) >> 3) - a2 )
    v8 = ((__int64)(*(_QWORD *)v10 - *(_QWORD *)v9) >> 3) - a2;
  v11 = a1 + 8;
  if ( !a1 )
    v11 = 48LL;
  if ( v8 )
    memmove_0(*(void **)a3, (const void *)(*(_QWORD *)v11 + 8 * v3), 8LL * v8);
  return v8;
}
