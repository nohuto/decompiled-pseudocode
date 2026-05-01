/*
 * XREFs of ??0?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x18014B608
 * Callers:
 *     ??0?$producer@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18014B5F0 (--0-$producer@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataPr.c)
 * Callees:
 *     ??0?$produce_base@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1802D02D0 (--0-$produce_base@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDa.c)
 */

_QWORD *winrt::impl::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,void>::produce_base<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,void>();
  result = v0;
  *v0 = &winrt::impl::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::`vftable';
  return result;
}
