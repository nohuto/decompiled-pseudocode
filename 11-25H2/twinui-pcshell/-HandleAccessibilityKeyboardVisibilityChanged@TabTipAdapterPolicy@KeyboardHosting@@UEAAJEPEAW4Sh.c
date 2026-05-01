/*
 * XREFs of ?HandleAccessibilityKeyboardVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804740B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$HandleAccessibilityKeyboardVisibilityChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180472E60 (--$HandleAccessibilityKeyboardVisibilityChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Wi.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleAccessibilityKeyboardVisibilityChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  char v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  *(_DWORD *)a3 = 0;
  *((_BYTE *)this + 608) = a2 != 0;
  TouchKeyboardExperienceTelemetryLogger::HandleAccessibilityKeyboardVisibilityChanged<unsigned char &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    &v4,
    (char *)a3);
  return 0LL;
}
