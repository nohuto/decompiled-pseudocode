/*
 * XREFs of ?Release@?$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIXamlExplorerHostChildWindow_WASDK3@34567@UIXamlExplorerHostChildWindow_WASDK4@34567@UIClosable@Foundation@67@Unon_agile@7@@winrt@@QEAAKXZ @ 0x1802B6F58
 * Callers:
 *     ?unconditional_release_ref@?$com_ptr@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1802B6F20 (-unconditional_release_ref@-$com_ptr@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplo.c)
 *     ?Release@?$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@X@impl@winrt@@UEAAIXZ @ 0x1802B6F40 (-Release@-$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell.c)
 *     ?Release@?$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@X@impl@winrt@@UEAAIXZ @ 0x18044ED90 (-Release@-$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplo_ea_18044ED90.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@impl@winrt@@IEAAIXZ @ 0x18044FC80 (-subtract_final_reference@-$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK2,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK3,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK4,winrt::Windows::Foundation::IClosable,winrt::non_agile>::Release(
        _QWORD *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::root_implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>::subtract_final_reference();
  if ( !v2 )
  {
    a1[1] = 1LL;
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  }
  return v2;
}
