/*
 * XREFs of ?SaveUserSetting@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHH@Z @ 0x180470210
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x18047023C (-SaveUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXW4TapInvokeSettingV.c)
 */

__int64 winrt::impl::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::SaveUserSetting()
{
  __int64 result; // rax
  int v1; // [rsp+38h] [rbp+10h] BYREF

  try
  {
    SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::SaveUserSetting();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v1);
  }
  return result;
}
