/*
 * XREFs of ??0?$atomic@W4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@@@std@@QEAA@W4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@@@Z @ 0x180136B24
 * Callers:
 *     ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x1801366D8 (--0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ.c)
 * Callees:
 *     ??0?$_Atomic_storage@W4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@$03@std@@QEAA@AEBW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1802A6E24 (--0-$_Atomic_storage@W4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@$03@std.c)
 */

__int64 __fastcall std::atomic<enum Windows::Internal::Shell::TouchKeyboard::TapInvokeSettingValue>::atomic<enum Windows::Internal::Shell::TouchKeyboard::TapInvokeSettingValue>(
        __int64 a1)
{
  __int64 v1; // rcx
  int v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 1;
  std::_Atomic_storage<enum winrt::Windows::Internal::Shell::TouchKeyboard::TapInvokeSettingValue,4>::_Atomic_storage<enum winrt::Windows::Internal::Shell::TouchKeyboard::TapInvokeSettingValue,4>(
    a1,
    v3);
  return v1;
}
