/*
 * XREFs of ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14013B978
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1401AB540 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     DrvEnumDisplaySettings @ 0x14013BA10 (DrvEnumDisplaySettings.c)
 */

__int64 __fastcall NtUserEnumDisplaySettingsShared(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        struct _devicemodeW *a3,
        __int64 a4)
{
  bool v5; // bl
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx

  v5 = a4;
  EnterSharedCrit(0LL, 1LL, (__int64)a3, a4);
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v6) + 32) )
  {
    W32GetUserSessionState(v8, v7, v9);
    v11 = DrvEnumDisplaySettings(a1, v5);
  }
  else
  {
    v11 = -1073741823;
  }
  UserSessionSwitchLeaveCritWithNonPaged(v8, v7, v9, v10);
  return v11;
}
