/*
 * XREFs of ??1?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@MEAA@XZ @ 0x1804462E4
 * Callers:
 *     ??1?$implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@winrt@@UEAA@XZ @ 0x1804462B0 (--1-$implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Wind.c)
 *     ??1XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180446338 (--1XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEA.c)
 *     ??_E?$XamlApplication_WASDK_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1804465B0 (--_E-$XamlApplication_WASDK_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Sh.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E9F14 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 *     ?subtract_final_reference@?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@IEAAIXZ @ 0x18028F018 (-subtract_final_reference@-$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExpl.c)
 */

void __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Microsoft::UI::Xaml::IApplicationOverrides>::~root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Microsoft::UI::Xaml::IApplicationOverrides>(
        __int64 a1)
{
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Microsoft::UI::Xaml::IApplicationOverrides>::subtract_final_reference(a1);
  winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 8));
}
