/*
 * XREFs of ?HandlePenInvocationSettingChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180483BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$HandlePenInvocationSettingChanged@AEAE@TouchKeyboardExperienceTelemetryLogger@@SAXAEAE@Z @ 0x1804821DC (--$HandlePenInvocationSettingChanged@AEAE@TouchKeyboardExperienceTelemetryLogger@@SAXAEAE@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandlePenInvocationSettingChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  char v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  *(_DWORD *)a3 = 0;
  *((_BYTE *)this + 856) = a2 != 0;
  TouchKeyboardExperienceTelemetryLogger::HandlePenInvocationSettingChanged<unsigned char &>(&v4);
  return 0LL;
}
