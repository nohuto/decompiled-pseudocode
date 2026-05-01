/*
 * XREFs of ??1GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAA@XZ @ 0x18032BDB0
 * Callers:
 *     ??_G?$heap_implements@UGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18032C220 (--_G-$heap_implements@UGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Intern.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::~GamingPostureSystemDialog(
        winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog *this)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog *)((char *)this + 64));
  if ( *((_QWORD *)this + 7) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 7);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 3);
  winrt::impl::root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>::~root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>((__int64)this);
}
