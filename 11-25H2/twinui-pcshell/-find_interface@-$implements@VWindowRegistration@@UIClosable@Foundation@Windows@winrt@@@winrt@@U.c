/*
 * XREFs of ?find_interface@?$implements@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805D8970
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@VWindowRegistration@@@impl@winrt@@@?$interface_list@UIClosable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VWindowRegistration@@@12@@Z @ 0x1805D6A28 (--$find@U-$find_iid_traits@VWindowRegistration@@@impl@winrt@@@-$interface_list@UIClosable@Founda.c)
 */

__int64 __fastcall winrt::implements<WindowRegistration,winrt::Windows::Foundation::IClosable>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Foundation::IClosable>::find<winrt::impl::find_iid_traits<WindowRegistration>>(v3);
}
