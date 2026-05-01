/*
 * XREFs of ?AddRef@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@QEAAIXZ @ 0x180192850
 * Callers:
 *     ?query_interface@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180158C44 (-query_interface@-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Intern.c)
 *     ?AddRef@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides2@Xaml@UI@67@X@impl@winrt@@UEAAIXZ @ 0x18043EB10 (-AddRef@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inter_ea_18043EB10.c)
 *     ?AddRef@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@67@X@impl@winrt@@UEAAIXZ @ 0x18043EB30 (-AddRef@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inter_ea_18043EB30.c)
 *     ?AddRef@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@X@impl@winrt@@UEAAIXZ @ 0x18043EB50 (-AddRef@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inter_ea_18043EB50.c)
 *     ?query_interface_common@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18043FD1C (-query_interface_common@-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r8d
  bool v4; // zf
  signed __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 16);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v1 + 1, v1);
    v4 = v1 == v5;
    v1 = v5;
    if ( v4 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 24));
}
