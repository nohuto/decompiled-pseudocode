/*
 * XREFs of ??$find@U?$find_iid_traits@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802AF3F4
 * Callers:
 *     ?find_interface@?$implements@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@U134567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1802AF3D0 (-find_interface@-$implements@UShellAnimationCoordinator@implementation@Animations@Shell@Internal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::Animations::IShellAnimationCoordinator>
    && v1[1] == 0x2B2072C3EC1D4D91LL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}
