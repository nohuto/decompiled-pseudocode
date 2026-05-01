/*
 * XREFs of ??$find@U?$find_iid_traits@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@UIControlWindow@23456@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805B222C
 * Callers:
 *     ?find_interface@?$implements@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@UIControlWindow@34567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180206DF0 (-find_interface@-$implements@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Win.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>
    && v1[1] == 0xF9CF5C9F3E19B9BEuLL )
  {
    v2 = *a1;
    v3 = *a1 + 16;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>
    && v1[1] == 0x5C9A05111426D88FLL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
