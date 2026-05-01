/*
 * XREFs of ??$make@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEBUDisplayRegion@WindowManagement@UI@67@@winrt@@YA?A_PAEBUDisplayRegion@WindowManagement@UI@Windows@0@@Z @ 0x1805B8E1C
 * Callers:
 *     ?GetForDisplayRegion@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x1805B9FA0 (-GetForDisplayRegion@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Sh.c)
 * Callees:
 *     ??$create_and_initialize@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEBUDisplayRegion@WindowManagement@UI@67@@impl@winrt@@YAPEAUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@1@AEBUDisplayRegion@WindowManagement@UI@71@@Z @ 0x1805B89EC (--$create_and_initialize@UDesktopSnapLayoutManager@implementation@SnapComponent@She_ea_1805B89EC.c)
 */

unsigned __int64 *__fastcall winrt::make<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::UI::WindowManagement::DisplayRegion const &>(
        unsigned __int64 *a1,
        struct winrt::Windows::UI::WindowManagement::DisplayRegion *a2)
{
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *v3; // rax

  v3 = winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::UI::WindowManagement::DisplayRegion const &>(a2);
  *a1 = ((unsigned __int64)v3 + 40) & -(__int64)(v3 != 0LL);
  return a1;
}
