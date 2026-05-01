/*
 * XREFs of ??1DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1802BC27C
 * Callers:
 *     ??_E?$heap_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180226BF0 (--_E-$heap_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Wind.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180066684 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 */

void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::~DesktopSnapLayoutManager(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *this)
{
  unsigned int **v2; // rcx

  v2 = (unsigned int **)((char *)this + 96);
  if ( *v2 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(v2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *)((char *)this + 88));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *)((char *)this + 64));
  if ( *((_QWORD *)this + 7) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 7);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::~root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>((__int64)this);
}
