/*
 * XREFs of ?ReplaceAll@?$vector_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@@winrt@@QEAAXU?$array_view@$$CBUUri@Foundation@Windows@winrt@@@2@@Z @ 0x1805D5BDC
 * Callers:
 *     ?ReplaceAll@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x1805D5B90 (-ReplaceAll@-$produce@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@Wi.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801C53CC (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Assign_counted_range@PEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAXPEBUUri@Foundation@Windows@winrt@@_K@Z @ 0x1805C4934 (--$_Assign_counted_range@PEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundation@Windows@win.c)
 */

void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Uri>::ReplaceAll(
        volatile signed __int32 *a1,
        __int64 a2)
{
  __int64 v2; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v3; // rdi
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v4; // rsi
  __int64 v5; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  _InterlockedIncrement(a1);
  v2 = (__int64)(a1 + 2);
  if ( !a1 )
    v2 = 48LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( &v6 != (__int128 *)v2 )
  {
    v3 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)v2;
    *(_QWORD *)&v6 = *(_QWORD *)v2;
    *(_QWORD *)v2 = 0LL;
    v4 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(v2 + 8);
    *((_QWORD *)&v6 + 1) = v4;
    *(_QWORD *)(v2 + 8) = 0LL;
    v5 = *(_QWORD *)(v2 + 16);
    v7 = v5;
    *(_QWORD *)(v2 + 16) = 0LL;
  }
  std::vector<winrt::Windows::Foundation::Uri>::_Assign_counted_range<winrt::Windows::Foundation::Uri const *>(
    v2,
    *(__int64 **)a2,
    *(unsigned int *)(a2 + 8));
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(v3, v4);
    std::_Deallocate<16>(v3, (struct std::nothrow_t *)((v5 - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
  }
}
