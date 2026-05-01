/*
 * XREFs of ?find_interface@?$implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowFactoryInternal@345@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18055BC70
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UITabProxyWindowFactoryInternal@Shell@Internal@Windows@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180558B7C (--$find@U-$find_iid_traits@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 8;
  return winrt::impl::interface_list<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory>>(v3);
}
