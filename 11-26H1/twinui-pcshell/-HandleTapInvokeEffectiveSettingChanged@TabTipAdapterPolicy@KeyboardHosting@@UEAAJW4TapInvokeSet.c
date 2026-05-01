/*
 * XREFs of ?HandleTapInvokeEffectiveSettingChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@@PEAW4ShellRequestType@Text@567@@Z @ 0x180203660
 * Callers:
 *     <none>
 * Callees:
 *     ??$HandleTapInvokeEffectiveSettingChanged@HAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAHAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180203694 (--$HandleTapInvokeEffectiveSettingChanged@HAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@T.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleTapInvokeEffectiveSettingChanged(
        __int64 a1,
        __int32 a2,
        _DWORD *a3)
{
  __int32 v4; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0;
  _InterlockedExchange((volatile __int32 *)(a1 + 860), a2);
  v4 = a2;
  TouchKeyboardExperienceTelemetryLogger::HandleTapInvokeEffectiveSettingChanged<int,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    &v4,
    a3);
  return 0LL;
}
