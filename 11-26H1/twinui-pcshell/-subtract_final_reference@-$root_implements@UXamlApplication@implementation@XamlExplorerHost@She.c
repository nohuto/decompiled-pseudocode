/*
 * XREFs of ?subtract_final_reference@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@IEAAIXZ @ 0x1800E6B58
 * Callers:
 *     ?Release@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@67@X@impl@winrt@@UEAAIXZ @ 0x180221D50 (-Release@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inte_ea_180221D50.c)
 *     ??1?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@MEAA@XZ @ 0x18044AE34 (--1-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@win.c)
 *     ?Release@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides2@Xaml@UI@67@X@impl@winrt@@UEAAIXZ @ 0x18044C010 (-Release@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inte_ea_18044C010.c)
 *     ?Release@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@X@impl@winrt@@UEAAIXZ @ 0x18044C070 (-Release@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inte_ea_18044C070.c)
 * Callees:
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x1800E6270 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800E712C (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>::subtract_final_reference(
        __int64 a1)
{
  signed __int64 v1; // rax
  volatile signed __int64 *v2; // r8
  unsigned __int32 v3; // ebx
  unsigned int v5; // ecx
  signed __int64 v6; // rtt

  v1 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 16, 0LL);
  while ( v1 >= 0 )
  {
    v5 = v1 - 1;
    v6 = v1;
    v1 = _InterlockedCompareExchange64(v2, v1 - 1, v1);
    if ( v6 == v1 )
      return v5;
  }
  v3 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 24));
  if ( !v3 )
    winrt::impl::weak_ref<1,1>::Release((volatile signed __int32 *)(2 * v1));
  return v3;
}
