/*
 * XREFs of ?find_interface@?$implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@56789@UITapInvokeSettingTester@56789@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180469750
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@impl@winrt@@@?$interface_list@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@23456@UITapInvokeSettingTester@23456@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@12@@Z @ 0x18045A134 (--$find@U-$find_iid_traits@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@impl@winrt@@.c)
 */

__int64 __fastcall winrt::implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::find<winrt::impl::find_iid_traits<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>>(v3);
}
