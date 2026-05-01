/*
 * XREFs of ?UpdateOrganizationSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXXZ @ 0x180473F0C
 * Callers:
 *     ??R?$__func@V_lambda_27e2a3ac73e95be6f7403a2f326512f5_@@$$A6AXXZ@__function@wistd@@UEAAXXZ @ 0x18046B570 (--R-$__func@V_lambda_27e2a3ac73e95be6f7403a2f326512f5_@@$$A6AXXZ@__function@wistd@@UEAAXXZ.c)
 *     ?UpdateOrganizationSetting@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSettingTester@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x180473EE0 (-UpdateOrganizationSetting@-$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UIT.c)
 * Callees:
 *     SystemSettings::Keyboard::LoadPolicy @ 0x1802A62C0 (SystemSettings--Keyboard--LoadPolicy.c)
 *     ?UpdateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ @ 0x180473D94 (-UpdateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ.c)
 */

void __fastcall SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::UpdateOrganizationSetting(
        SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *this)
{
  __int32 Policy; // eax

  Policy = SystemSettings::Keyboard::LoadPolicy();
  if ( Policy != _InterlockedExchange((volatile __int32 *)this + 18, Policy) )
    SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::UpdateEffectiveSetting(this);
}
