/*
 * XREFs of ?UpdateUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAA_NW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x180473F38
 * Callers:
 *     ??R?$__func@V_lambda_919ed0165ca58c719ea15f04406310d9_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK@Z @ 0x18046B660 (--R-$__func@V_lambda_919ed0165ca58c719ea15f04406310d9_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK.c)
 *     ?SaveUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x18047023C (-SaveUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXW4TapInvokeSettingV.c)
 * Callees:
 *     ?UpdateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ @ 0x180473D94 (-UpdateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ.c)
 */

char __fastcall SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::UpdateUserSetting(
        volatile __int32 *a1,
        __int32 a2)
{
  char v2; // bl

  if ( a2 == _InterlockedExchange(a1 + 17, a2) )
    return 0;
  v2 = 1;
  SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::UpdateEffectiveSetting((SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *)a1);
  return v2;
}
