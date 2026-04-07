/*
 * XREFs of ?RegisterMonitorPowerNotification@CDesktopManager@@AEAAJXZ @ 0x1800AC6B0
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800720A0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDesktopManager::RegisterMonitorPowerNotification(HPOWERNOTIFY *this)
{
  signed int v1; // eax
  unsigned int v2; // ebx
  _QWORD Recipient[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Recipient[1] = *((unsigned int *)this + 282);
  Recipient[0] = CDesktopManager::s_PowerNotification;
  v1 = PowerSettingRegisterNotification(&GUID_SESSION_DISPLAY_STATUS, 2u, Recipient, this + 158);
  v2 = v1;
  if ( v1 > 0 )
    v2 = (unsigned __int16)v1 | 0x80070000;
  if ( (v2 & 0x80000000) == 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD6A,
    (int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
    (const char *)v2);
  return v2;
}
