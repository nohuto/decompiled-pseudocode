/*
 * XREFs of UserGetIsSwitchInProgress @ 0x140191AC0
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1400096D0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall UserGetIsSwitchInProgress(__int64 a1)
{
  return *(_DWORD *)(W32GetUserGdiSessionState(a1) + 36) != 0;
}
