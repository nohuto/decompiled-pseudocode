/*
 * XREFs of ??1GamingFallbackWindow@@UEAA@XZ @ 0x1804E16E8
 * Callers:
 *     ??_GGamingFallbackWindow@@UEAAPEAXI@Z @ 0x1804E1D6C (--_GGamingFallbackWindow@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GamingFallbackWindow::~GamingFallbackWindow(GamingFallbackWindow *this)
{
  _QWORD *v1; // rbx
  HWND v2; // rcx

  v1 = (_QWORD *)((char *)this + 8);
  *(_QWORD *)this = &winrt::impl::heap_implements<GamingFallbackWindow>::`vftable'{for `winrt::impl::producers_base<GamingFallbackWindow,std::tuple<IInspectable>>'};
  v2 = (HWND)*((_QWORD *)this + 3);
  *v1 = &winrt::impl::heap_implements<GamingFallbackWindow>::`vftable'{for `winrt::impl::root_implements<GamingFallbackWindow,IInspectable>'};
  DestroyWindow(v2);
  winrt::impl::root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>::~root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>((__int64)v1);
}
