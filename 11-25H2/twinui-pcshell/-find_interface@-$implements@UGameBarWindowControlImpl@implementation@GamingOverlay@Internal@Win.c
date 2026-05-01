/*
 * XREFs of ?find_interface@?$implements@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UGameBarWindowControl@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180353340
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@12@@Z @ 0x18033F990 (--$find@U-$find_iid_traits@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windo.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::GameBarWindowControl>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>>(v3);
}
