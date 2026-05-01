/*
 * XREFs of ??1?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UEAA@XZ @ 0x18066546C
 * Callers:
 *     ??_E?$heap_implements@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1806654C0 (--_E-$heap_implements@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Windows@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>::~vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>(
        _QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[6];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)((a1[8] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[6] = 0LL;
    a1[7] = 0LL;
    a1[8] = 0LL;
  }
  return winrt::impl::root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>::~root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>((__int64)a1);
}
