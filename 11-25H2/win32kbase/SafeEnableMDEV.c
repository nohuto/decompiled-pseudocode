/*
 * XREFs of SafeEnableMDEV @ 0x14014C4A0
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x14006A7C8 (UpdateGraphicsDeviceList.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     DrvEnableMDEV @ 0x1400879E0 (DrvEnableMDEV.c)
 */

__int64 __fastcall SafeEnableMDEV(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = a1;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 43276) )
  {
    if ( !*(_DWORD *)(W32GetUserGdiSessionState(v3) + 28) )
      return 0LL;
    UserSessionState = W32GetUserSessionState(v5, v4);
    if ( !(unsigned int)DrvEnableMDEV(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 16LL), 1, v2) )
      return 0LL;
    _InterlockedExchange((volatile __int32 *)(W32GetUserSessionState(v8, v7) + 43276), 0);
  }
  return 1LL;
}
