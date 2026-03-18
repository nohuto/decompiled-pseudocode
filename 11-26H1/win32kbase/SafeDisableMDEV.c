/*
 * XREFs of SafeDisableMDEV @ 0x14019B620
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x14000A35C (UpdateGraphicsDeviceList.c)
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     DrvDisableMDEV @ 0x1400C6E50 (DrvDisableMDEV.c)
 */

__int64 __fastcall SafeDisableMDEV(unsigned int a1, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d

  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 43276) )
    return 1LL;
  UserSessionState = W32GetUserSessionState(v5, v4, v6);
  if ( !(unsigned int)DrvDisableMDEV(*(struct _MDEV **)(*(_QWORD *)(UserSessionState + 56968) + 16LL), 1, a1) )
    return 0LL;
  _InterlockedExchange((volatile __int32 *)(W32GetUserSessionState(v9, v8, v10) + 43276), 1);
  return 1LL;
}
