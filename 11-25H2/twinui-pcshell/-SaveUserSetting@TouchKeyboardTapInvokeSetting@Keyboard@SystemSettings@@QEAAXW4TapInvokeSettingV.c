/*
 * XREFs of ?SaveUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x18046456C
 * Callers:
 *     ?SaveUserSetting@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHH@Z @ 0x180464540 (-SaveUserSetting@-$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSe.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802C8390 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ?UpdateUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAA_NW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x180467F68 (-UpdateUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAA_NW4TapInvokeSetti.c)
 */

void __fastcall SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::SaveUserSetting(__int64 a1, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v7; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned __int8)SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::UpdateUserSetting(a1) )
  {
    v7 = a2;
    v3 = SHRegSetDWORD(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", L"TouchKeyboardTapInvoke", a2);
    if ( v3 >= 0 )
    {
      v4 = RtlPublishWnfStateData(WNF_TKBN_DESKTOP_MODE_AUTO_IHM, 0LL, &v7, 4LL, 0LL) | 0x10000000;
      if ( v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x361,
          (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
          (const char *)(unsigned int)v4,
          v5);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x109,
        (int)"shellcommon\\internal\\shell\\inc\\TouchKeyboardTapInvokeSetting.h",
        (const char *)(unsigned int)v3);
    }
  }
}
