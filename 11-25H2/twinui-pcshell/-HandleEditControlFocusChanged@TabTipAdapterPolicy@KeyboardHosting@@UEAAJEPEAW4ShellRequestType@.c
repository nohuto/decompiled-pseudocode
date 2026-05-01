/*
 * XREFs of ?HandleEditControlFocusChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180038520
 * Callers:
 *     <none>
 * Callees:
 *     ??$HandleEditControlFocusChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180038578 (--$HandleEditControlFocusChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKe.c)
 *     ??$HandleEditControlFocusChanged@AEAEAEBW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEBW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180472F60 (--$HandleEditControlFocusChanged@AEAEAEBW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKe.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlFocusChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( a3 )
  {
    *(_DWORD *)a3 = 0;
    TouchKeyboardExperienceTelemetryLogger::HandleEditControlFocusChanged<unsigned char &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
      &v6,
      a3);
  }
  else
  {
    TouchKeyboardExperienceTelemetryLogger::HandleEditControlFocusChanged<unsigned char &,enum Windows::Internal::Shell::Text::ShellRequestType const &>(&v6);
  }
  *((_BYTE *)this + 556) = 0;
  *((_BYTE *)this + 600) = a2 != 0;
  return 0LL;
}
