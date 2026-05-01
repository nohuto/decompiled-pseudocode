/*
 * XREFs of ?get_SystemSettingData@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180469AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     SystemSettings::Keyboard::ConvertToSettingStringValue @ 0x18045FF8C (SystemSettings--Keyboard--ConvertToSettingStringValue.c)
 */

__int64 __fastcall winrt::impl::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::get_SystemSettingData(
        __int64 a1,
        volatile signed __int32 **a2)
{
  __int64 v4; // rcx
  const unsigned __int16 *v5; // rax
  volatile signed __int32 *v6; // rax
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = a1 + 56;
  if ( !a1 )
    v4 = 80LL;
  v5 = SystemSettings::Keyboard::ConvertToSettingStringValue(*(_DWORD *)v4);
  winrt::hstring::hstring((winrt::hstring *)&v8, v5);
  v6 = v8;
  v8 = 0LL;
  *a2 = v6;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
  return 0LL;
}
