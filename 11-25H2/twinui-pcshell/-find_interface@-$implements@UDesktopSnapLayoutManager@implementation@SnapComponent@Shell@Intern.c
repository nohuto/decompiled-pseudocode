/*
 * XREFs of ?find_interface@?$implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180215F70
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@USnapLayoutManagerExtension@PlatformExtensions@3456@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180594B4C (--$find@U-$find_iid_traits@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager>>(v3);
}
