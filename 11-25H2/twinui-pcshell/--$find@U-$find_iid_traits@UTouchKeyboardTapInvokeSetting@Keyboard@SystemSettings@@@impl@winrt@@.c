/*
 * XREFs of ??$find@U?$find_iid_traits@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@impl@winrt@@@?$interface_list@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@23456@UITapInvokeSettingTester@23456@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@12@@Z @ 0x18045A134
 * Callers:
 *     ?find_interface@?$implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@56789@UITapInvokeSettingTester@56789@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180469750 (-find_interface@-$implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvoke.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::find<winrt::impl::find_iid_traits<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>
    && v1[1] == 0x5B94300B77D7FADLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return winrt::impl::interface_list<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::find<winrt::impl::find_iid_traits<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>>();
  }
}
