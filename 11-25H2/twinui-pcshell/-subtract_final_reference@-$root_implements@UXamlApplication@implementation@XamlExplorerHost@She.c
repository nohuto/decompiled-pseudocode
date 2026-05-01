/*
 * XREFs of ?subtract_final_reference@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@IEAAIXZ @ 0x180197AC4
 * Callers:
 *     ?Release@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@67@X@impl@winrt@@UEAAIXZ @ 0x180197A70 (-Release@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inte_ea_180197A70.c)
 *     ??1?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@MEAA@XZ @ 0x18043E80C (--1-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@win.c)
 *     ?Release@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides2@Xaml@UI@67@X@impl@winrt@@UEAAIXZ @ 0x18043FA50 (-Release@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inte_ea_18043FA50.c)
 *     ?Release@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@X@impl@winrt@@UEAAIXZ @ 0x18043FAB0 (-Release@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inte_ea_18043FAB0.c)
 * Callees:
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x1800E9E50 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>::subtract_final_reference(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  unsigned int v4; // edx
  signed __int64 v5; // rtt

  v1 = *(_QWORD *)(a1 + 16);
  while ( v1 >= 0 )
  {
    v4 = v1 - 1;
    v5 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v1 - 1, v1);
    if ( v5 == v1 )
      return v4;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 24));
  if ( !v2 )
    winrt::impl::weak_ref<1,1>::Release((volatile signed __int32 *)(2 * v1));
  return v2;
}
