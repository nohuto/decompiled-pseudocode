/*
 * XREFs of ?find_interface@?$implements@VSnapLayoutProvider@@UIInspectable@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180581010
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIInspectable@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180578D70 (--$find@U-$find_iid_traits@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@impl@w.c)
 */

__int64 __fastcall winrt::implements<SnapLayoutProvider,IInspectable>::find_interface(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 8;
  return winrt::impl::interface_list<IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris>>(v3);
}
