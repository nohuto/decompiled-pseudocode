/*
 * XREFs of ??$find@U?$find_iid_traits@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@12@@Z @ 0x18033FA44
 * Callers:
 *     ?find_interface@?$implements@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UGameBarWindowControl@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1803594D0 (-find_interface@-$implements@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Win.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>
    && v1[1] == 0xCD2D1858D9B5CEB3uLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}
