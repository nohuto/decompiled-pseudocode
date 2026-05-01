/*
 * XREFs of ?get_EffectiveSettingData@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180469930
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?load@?$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA?AW4PreloadPreference@KeyboardHosting@@W4memory_order@2@@Z @ 0x1802DEC4C (-load@-$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA-AW4PreloadPreference@.c)
 *     SystemSettings::Keyboard::ConvertToSettingStringValue @ 0x18045FF8C (SystemSettings--Keyboard--ConvertToSettingStringValue.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::get_EffectiveSettingData(
        __int64 a1,
        volatile signed __int32 **a2)
{
  __int64 v4; // rcx
  int v5; // eax
  const unsigned __int16 *v6; // rax
  volatile signed __int32 *v7; // rax
  __int64 result; // rax
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = a1 + 40;
  if ( !a1 )
    v4 = 64LL;
  v5 = std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((unsigned int *)v4);
  v6 = SystemSettings::Keyboard::ConvertToSettingStringValue(v5);
  try
  {
    winrt::hstring::hstring((winrt::hstring *)&v9, v6);
    v7 = v9;
    v9 = 0LL;
    *a2 = v7;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
