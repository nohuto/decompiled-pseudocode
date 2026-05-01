/*
 * XREFs of ?HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180037AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180037B0C (--$HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@AEAEAEAW4ShellRequestType@Text@.c)
 *     ?IsAnyViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x1801CE284 (-IsAnyViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  *(_DWORD *)a3 = 0;
  *((_BYTE *)this + 599) = a2 != 0;
  if ( a2 && KeyboardHosting::TabTipAdapterPolicy::IsAnyViewShownInternal(this) )
    *(_DWORD *)a3 = 2;
  TouchKeyboardExperienceTelemetryLogger::HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged<unsigned char &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    &v5,
    a3);
  return 0LL;
}
