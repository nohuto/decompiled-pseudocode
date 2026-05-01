/*
 * XREFs of ??$find@U?$find_iid_traits@USnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@USnapAnimationTag@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180582274
 * Callers:
 *     ?find_interface@?$implements@USnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@U134567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180585990 (-find_interface@-$implements@USnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Wind.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::WindowSnapping::SnapAnimationTag>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAnimationTag>
    && v1[1] == 0x9211413C49676381uLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}
