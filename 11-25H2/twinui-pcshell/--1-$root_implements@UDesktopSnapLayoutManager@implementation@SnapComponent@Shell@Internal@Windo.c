/*
 * XREFs of ??1?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@MEAA@XZ @ 0x1800E9B14
 * Callers:
 *     ??1DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1802BC27C (--1DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1?$DesktopSnapLayoutManager_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@USnapLayoutManagerExtension@PlatformExtensions@4567@@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1802D17B0 (--1-$DesktopSnapLayoutManager_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAIXZ @ 0x1800E9B8C (-subtract_final_reference@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapCompone.c)
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E9F14 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::~root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>(
        __int64 a1)
{
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::subtract_final_reference();
  winrt::impl::module_lock_updater<1>::~module_lock_updater<1>(a1 + 32);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 8));
}
