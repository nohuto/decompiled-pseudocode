/*
 * XREFs of DxgkEngNotifyDisplayChange @ 0x1401C5CE0
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5CB0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserNotifyDisplayChange @ 0x14007F1A0 (UserNotifyDisplayChange.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x14013B610 (GreIncrementDisplaySettingsUniqueness.c)
 */

__int64 __fastcall DxgkEngNotifyDisplayChange(__int64 a1)
{
  if ( (_BYTE)a1 )
  {
    LOBYTE(a1) = 1;
    GreIncrementDisplaySettingsUniqueness(a1);
  }
  return UserNotifyDisplayChange();
}
