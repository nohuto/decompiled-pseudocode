/*
 * XREFs of ??0?$producers_base@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@V?$tuple@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@23456@UITapInvokeSettingTester@23456@@std@@@impl@winrt@@QEAA@XZ @ 0x18014B200
 * Callers:
 *     ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x18014B040 (--0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producer_convert@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSettingTester@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18014B230 (--0-$producer_convert@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting.c)
 *     ??0?$producer_convert@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18014B248 (--0-$producer_convert@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemet.c)
 *     ??0?$producer_convert@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18014B260 (--0-$producer_convert@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITap_ea_18014B260.c)
 */

__int64 __fastcall winrt::impl::producers_base<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,std::tuple<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>>::producers_base<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,std::tuple<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8

  winrt::impl::producer_convert<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,void>::producer_convert<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,void>(
    a1,
    a2,
    a1);
  winrt::impl::producer_convert<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,void>::producer_convert<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,void>(v2 + 8);
  winrt::impl::producer_convert<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester,void>::producer_convert<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester,void>(v3 + 16);
  return v4;
}
