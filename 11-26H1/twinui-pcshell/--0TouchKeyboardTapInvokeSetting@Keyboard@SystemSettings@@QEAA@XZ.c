/*
 * XREFs of ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x1801083A0
 * Callers:
 *     ??$make@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$V@winrt@@YA?A_PXZ @ 0x1801073D8 (--$make@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$V@winrt@@YA-A_PXZ.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$atomic@I@std@@QEAA@I@Z @ 0x1800DC258 (--0-$atomic@I@std@@QEAA@I@Z.c)
 *     SystemSettings::Keyboard::LoadSetting @ 0x1801084B0 (SystemSettings--Keyboard--LoadSetting.c)
 *     DeviceConvertibilityHelpers::QueryDeviceConvertibility @ 0x180108528 (DeviceConvertibilityHelpers--QueryDeviceConvertibility.c)
 *     ??0?$producers_base@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@V?$tuple@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@23456@UITapInvokeSettingTester@23456@@std@@@impl@winrt@@QEAA@XZ @ 0x18010868C (--0-$producers_base@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@V-$tuple@UITapInvoke.c)
 *     ?CalculateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEBA?AW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@XZ @ 0x180108740 (-CalculateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEBA-AW4TapInv.c)
 *     ?SubscribeEvents@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ @ 0x1801087B8 (-SubscribeEvents@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ.c)
 *     SystemSettings::Keyboard::LoadPolicy @ 0x1802A62C0 (SystemSettings--Keyboard--LoadPolicy.c)
 */

SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *__fastcall SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::TouchKeyboardTapInvokeSetting(
        SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *this)
{
  int v2; // r8d
  int Setting; // eax
  int Policy; // eax

  winrt::impl::producers_base<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,std::tuple<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>>::producers_base<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,std::tuple<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>>((char *)this + 16);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)this + 8, 1LL);
  *(_QWORD *)this = &winrt::impl::heap_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  std::atomic<unsigned int>::atomic<unsigned int>((__int64)this + 64, v2);
  Setting = SystemSettings::Keyboard::LoadSetting(-2147483647LL, L"TouchKeyboardTapInvoke");
  std::atomic<unsigned int>::atomic<unsigned int>((__int64)this + 68, Setting);
  Policy = SystemSettings::Keyboard::LoadPolicy();
  std::atomic<unsigned int>::atomic<unsigned int>((__int64)this + 72, Policy);
  *((_DWORD *)this + 19) = DeviceConvertibilityHelpers::QueryDeviceConvertibility();
  *((_DWORD *)this + 20) = SystemSettings::Keyboard::LoadSetting(-2147483646LL, L"TouchKeyboardTapInvoke");
  *((_DWORD *)this + 21) = SystemSettings::Keyboard::LoadSetting(-2147483647LL, L"EnableDesktopModeAutoInvoke");
  *((_DWORD *)this + 22) = SystemSettings::Keyboard::LoadSetting(-2147483646LL, L"EnableDesktopModeAutoInvoke");
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  _InterlockedExchange(
    (volatile __int32 *)this + 16,
    SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::CalculateEffectiveSetting(this));
  SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::SubscribeEvents(this);
  return this;
}
