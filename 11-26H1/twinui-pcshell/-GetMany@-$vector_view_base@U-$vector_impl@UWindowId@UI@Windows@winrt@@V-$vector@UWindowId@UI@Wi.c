/*
 * XREFs of ?GetMany@?$vector_view_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UWindowId@UI@Windows@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@UWindowId@UI@Windows@winrt@@@2@@Z @ 0x180665918
 * Callers:
 *     ?GetMany@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAUstruct_Windows_UI_WindowId@23@PEAI@Z @ 0x1806657A0 (-GetMany@-$produce@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Windows@win.c)
 *     ?GetMany@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAUstruct_Windows_UI_WindowId@23@PEAI@Z @ 0x180665800 (-GetMany@-$produce@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@U_ea_180665800.c)
 * Callees:
 *     ??$_Copy_memmove_n@PEBUWindowId@UI@Windows@winrt@@PEAU1234@@std@@YAPEAUWindowId@UI@Windows@winrt@@PEBU1234@_KPEAU1234@@Z @ 0x1805A5BBC (--$_Copy_memmove_n@PEBUWindowId@UI@Windows@winrt@@PEAU1234@@std@@YAPEAUWindowId@UI@Windows@winrt.c)
 */

__int64 __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::WindowId,winrt::impl::collection_version>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // ecx

  v3 = a1 + 8;
  if ( !a1 )
    v3 = 48LL;
  v4 = *(_QWORD *)v3;
  v5 = a1 + 16;
  if ( !a1 )
    v5 = 56LL;
  v6 = (*(_QWORD *)v5 - v4) >> 3;
  if ( a2 >= (unsigned int)v6 )
    return 0LL;
  v8 = *(_DWORD *)(a3 + 8);
  v9 = v6 - a2;
  if ( v8 >= v9 )
    v8 = v9;
  if ( v8 )
    std::_Copy_memmove_n<winrt::Windows::UI::WindowId const *,winrt::Windows::UI::WindowId *>(
      (void *)(v4 + 8LL * a2),
      v8,
      *(void **)a3);
  return v8;
}
