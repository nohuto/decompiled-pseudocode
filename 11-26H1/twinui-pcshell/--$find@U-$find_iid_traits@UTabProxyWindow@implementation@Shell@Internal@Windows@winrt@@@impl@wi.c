/*
 * XREFs of ??$find@U?$find_iid_traits@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UITabProxyWindowInternal@Shell@Internal@Windows@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18058024C
 * Callers:
 *     ?find_interface@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805805A0 (-find_interface@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<Windows::Internal::Shell::ITabProxyWindowInternal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<Windows::Internal::Shell::ITabProxyWindowInternal> && v1[1] == 0x9BE78A66E4D495A0uLL )
    return *a1;
  else
    return 0LL;
}
