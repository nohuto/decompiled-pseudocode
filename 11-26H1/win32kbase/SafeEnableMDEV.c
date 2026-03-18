/*
 * XREFs of SafeEnableMDEV @ 0x14013AF00
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x14000A35C (UpdateGraphicsDeviceList.c)
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     DrvEnableMDEV @ 0x14013AF88 (DrvEnableMDEV.c)
 */

__int64 __fastcall SafeEnableMDEV(unsigned int a1, int a2, int a3)
{
  __int64 v4; // rcx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 UserSessionState; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d

  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 43276) )
  {
    if ( !*(_DWORD *)(W32GetUserGdiSessionState(v4) + 28) )
      return 0LL;
    UserSessionState = W32GetUserSessionState(v6, v5, v7);
    if ( !(unsigned int)DrvEnableMDEV(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 16LL), 1LL, a1) )
      return 0LL;
    _InterlockedExchange((volatile __int32 *)(W32GetUserSessionState(v10, v9, v11) + 43276), 0);
  }
  return 1LL;
}
