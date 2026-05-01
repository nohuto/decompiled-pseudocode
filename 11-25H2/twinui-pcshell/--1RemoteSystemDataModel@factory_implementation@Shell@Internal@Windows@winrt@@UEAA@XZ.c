/*
 * XREFs of ??1RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180624594
 * Callers:
 *     ??_G?$heap_implements@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180624BF0 (--_G-$heap_implements@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180066684 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??1?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U12@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180623B44 (--1-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U12@V-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstrin.c)
 *     ??1?$unique_ptr@VRemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@VRemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18062442C (--1-$unique_ptr@VRemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@U-$.c)
 */

void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::~RemoteSystemDataModel(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this)
{
  unsigned int **v2; // rcx

  v2 = (unsigned int **)((char *)this + 272);
  if ( *v2 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(v2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)((char *)this + 256));
  if ( *((_QWORD *)this + 29) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref((unsigned int **)this + 29);
  if ( *((_QWORD *)this + 26) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref((unsigned int **)this + 26);
  if ( *((_QWORD *)this + 23) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref((unsigned int **)this + 23);
  if ( *((_QWORD *)this + 20) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref((unsigned int **)this + 20);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)((char *)this + 152));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)((char *)this + 144));
  std::_Hash<std::_Umap_traits<winrt::hstring,winrt::hstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,0>>::~_Hash<std::_Umap_traits<winrt::hstring,winrt::hstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,0>>((__int64 *)this + 8);
  std::unique_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper>::~unique_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper>((winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper **)this + 4);
  winrt::impl::root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>::~root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>((__int64)this);
}
