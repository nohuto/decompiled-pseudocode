/*
 * XREFs of ??1?$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@impl@winrt@@MEAA@XZ @ 0x1801BD120
 * Callers:
 *     ??1XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180066B48 (--1XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEA.c)
 *     ??1?$XamlExplorerHostChildWindow_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@Unon_agile@7@@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18023687C (--1-$XamlExplorerHostChildWindow_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHo.c)
 *     ??_G?$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIXamlExplorerHostChildWindow_WASDK3@34567@UIXamlExplorerHostChildWindow_WASDK4@34567@UIClosable@Foundation@67@Unon_agile@7@@winrt@@UEAAPEAXI@Z @ 0x1804418A0 (--_G-$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Intern.c)
 *     ??1SnapWindowProvider@SnapLauncher@@UEAA@XZ @ 0x18059EB38 (--1SnapWindowProvider@SnapLauncher@@UEAA@XZ.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@IEAAIXZ @ 0x1801BD1A8 (-subtract_final_reference@-$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExpl.c)
 */

__int64 winrt::impl::root_implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>::~root_implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>()
{
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::subtract_final_reference();
  return winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
}
