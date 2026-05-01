/*
 * XREFs of ??0?$atomic@W4PreloadPreference@KeyboardHosting@@@std@@QEAA@W4PreloadPreference@KeyboardHosting@@@Z @ 0x180136A84
 * Callers:
 *     ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x1801366D8 (--0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ.c)
 *     ??0InputAppPreloader@KeyboardHosting@@QEAA@PEAVTouchKeyboardExperienceManager@@@Z @ 0x1802A6CA4 (--0InputAppPreloader@KeyboardHosting@@QEAA@PEAVTouchKeyboardExperienceManager@@@Z.c)
 * Callees:
 *     ??0?$_Atomic_storage@W4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@$03@std@@QEAA@AEBW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1802A6E24 (--0-$_Atomic_storage@W4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@$03@std.c)
 */

__int64 __fastcall std::atomic<enum KeyboardHosting::PreloadPreference>::atomic<enum KeyboardHosting::PreloadPreference>(
        __int64 a1)
{
  __int64 v1; // rcx
  _DWORD v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 0;
  std::_Atomic_storage<enum winrt::Windows::Internal::Shell::TouchKeyboard::TapInvokeSettingValue,4>::_Atomic_storage<enum winrt::Windows::Internal::Shell::TouchKeyboard::TapInvokeSettingValue,4>(
    a1,
    v3);
  return v1;
}
