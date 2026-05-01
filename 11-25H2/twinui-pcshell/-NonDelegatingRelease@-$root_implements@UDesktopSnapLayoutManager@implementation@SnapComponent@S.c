/*
 * XREFs of ?NonDelegatingRelease@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAIXZ @ 0x1800E9B40
 * Callers:
 *     ?Release@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManager@34567@X@impl@winrt@@UEAAIXZ @ 0x18021B750 (-Release@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Wi.c)
 *     ?Release@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@X@impl@winrt@@UEAAIXZ @ 0x18029F610 (-Release@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shel_ea_18029F610.c)
 *     ?Release@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UINonDelegatingInspectable@impl@7@@impl@winrt@@UEAAIXZ @ 0x180596E70 (-Release@-$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows.c)
 *     ?Release@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UINonDelegatingInspectable@impl@7@X@impl@winrt@@UEAAIXZ @ 0x180596E90 (-Release@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shel_ea_180596E90.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAIXZ @ 0x1800E9B8C (-subtract_final_reference@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapCompone.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::NonDelegatingRelease(
        _QWORD *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::subtract_final_reference();
  if ( !v2 )
  {
    a1[4] = 1LL;
    if ( a1 )
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  }
  return v2;
}
