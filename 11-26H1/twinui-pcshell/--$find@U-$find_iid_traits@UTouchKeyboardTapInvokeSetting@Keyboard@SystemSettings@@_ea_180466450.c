/*
 * XREFs of ??$find@U?$find_iid_traits@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@impl@winrt@@@?$interface_list@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeSettingTester@23456@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@12@@Z @ 0x180466450
 * Callers:
 *     ??$find@U?$find_iid_traits@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@impl@winrt@@@?$interface_list@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@23456@UITapInvokeSettingTester@23456@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@12@@Z @ 0x180466414 (--$find@U-$find_iid_traits@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@impl@winrt@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::find<winrt::impl::find_iid_traits<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>
    && v1[1] == 0x332663119A87C789LL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>
    && v1[1] == 0xE17614BC2F3D7E87uLL )
  {
    v2 = *a1;
    v3 = *a1 + 32;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
