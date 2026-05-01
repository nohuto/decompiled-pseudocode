/*
 * XREFs of ?AddRef@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@QEAAIXZ @ 0x1800E6E50
 * Callers:
 *     ?query_interface@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180146254 (-query_interface@-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Intern.c)
 *     ?AddRef@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides2@Xaml@UI@67@X@impl@winrt@@UEAAIXZ @ 0x18044B130 (-AddRef@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inter_ea_18044B130.c)
 *     ?AddRef@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@67@X@impl@winrt@@UEAAIXZ @ 0x18044B150 (-AddRef@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inter_ea_18044B150.c)
 *     ?AddRef@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@X@impl@winrt@@UEAAIXZ @ 0x18044B170 (-AddRef@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inter_ea_18044B170.c)
 *     ?query_interface_common@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18044C2EC (-query_interface_common@-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800E712C (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rcx
  volatile signed __int64 *v2; // r8
  unsigned int v3; // edx
  bool v5; // zf
  signed __int64 v6; // rax

  v1 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 16, 0LL);
  while ( v1 >= 0 )
  {
    v3 = v1 + 1;
    v6 = _InterlockedCompareExchange64(v2, v1 + 1, v1);
    v5 = v1 == v6;
    v1 = v6;
    if ( v5 )
      return v3;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 24));
}
