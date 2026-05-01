/*
 * XREFs of ??1RemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1802C1D60
 * Callers:
 *     ??_E?$heap_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180216E40 (--_E-$heap_implements@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Founda.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs::~RemoteSystemDisplayInfoChangedEventArgs(
        volatile signed __int32 **this)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(this + 4);
  winrt::handle_type<winrt::impl::hstring_traits>::close(this + 3);
  winrt::impl::root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>::~root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>((__int64)this);
}
