/*
 * XREFs of ??$find@U?$find_iid_traits@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UImmersiveShellThreadDispatcher@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18059C470
 * Callers:
 *     ?find_interface@?$implements@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180205580 (-find_interface@-$implements@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher>>(
        _QWORD *a1)
{
  if ( *(_OWORD *)a1[1] == winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcher> )
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  else
    return 0LL;
}
