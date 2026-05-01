/*
 * XREFs of ?HandleTabletPostureChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18016D200
 * Callers:
 *     <none>
 * Callees:
 *     ??$HandleTabletPostureChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18016D234 (--$HandleTabletPostureChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeybo.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleTabletPostureChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  char v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  *(_DWORD *)a3 = 0;
  *((_BYTE *)this + 593) = a2 != 0;
  TouchKeyboardExperienceTelemetryLogger::HandleTabletPostureChanged<unsigned char &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    &v4,
    a3);
  return 0LL;
}
