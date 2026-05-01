/*
 * XREFs of ?query_interface@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180146254
 * Callers:
 *     ?QueryInterface@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplication@34567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801461F0 (-QueryInterface@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@W.c)
 *     ?QueryInterface@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides2@Xaml@UI@67@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18044BEC0 (-QueryInterface@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@She_ea_18044BEC0.c)
 *     ?QueryInterface@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@67@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18044BF30 (-QueryInterface@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@She_ea_18044BF30.c)
 *     ?QueryInterface@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18044BFA0 (-QueryInterface@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@She_ea_18044BFA0.c)
 * Callees:
 *     ?AddRef@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@QEAAIXZ @ 0x1800E6E50 (-AddRef@-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Window.c)
 *     ?query_interface_common@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18044C2EC (-query_interface_common@-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>::query_interface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rax

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( !v6 )
    return winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>::query_interface_common(
             a1,
             a2,
             a3);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>::AddRef(a1);
  return 0LL;
}
