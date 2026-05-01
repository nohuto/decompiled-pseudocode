/*
 * XREFs of ??1?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UEAA@XZ @ 0x1801CEDFC
 * Callers:
 *     ??_G?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UEAAPEAXI@Z @ 0x1801CEDC0 (--_G-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundation@Windows@winrt@@V-$a.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>::~vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>(
        _QWORD *a1)
{
  __int64 v2; // rcx

  v2 = a1[6];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (a1[8] - v2) & 0xFFFFFFFFFFFFFFF0uLL);
    a1[6] = 0LL;
    a1[7] = 0LL;
    a1[8] = 0LL;
  }
  return winrt::impl::root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>::~root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>((__int64)a1);
}
