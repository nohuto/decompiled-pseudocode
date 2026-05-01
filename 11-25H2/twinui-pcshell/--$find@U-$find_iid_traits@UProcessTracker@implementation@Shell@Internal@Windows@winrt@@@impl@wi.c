/*
 * XREFs of ??$find@U?$find_iid_traits@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UProcessTracker@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18063A204
 * Callers:
 *     ?find_interface@?$implements@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18063B2B0 (-find_interface@-$implements@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@U13456.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::ProcessTracker>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::ProcessTracker>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::ProcessTracker>>::value
    && v1[1] == 0x8D91043AF61978B9uLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}
