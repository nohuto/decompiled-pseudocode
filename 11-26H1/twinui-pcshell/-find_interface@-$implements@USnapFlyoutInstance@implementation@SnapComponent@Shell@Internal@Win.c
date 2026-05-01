/*
 * XREFs of ?find_interface@?$implements@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@UIControlWindow@34567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180206DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@UIControlWindow@23456@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805B222C (--$find@U-$find_iid_traits@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windo.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>(v3);
}
