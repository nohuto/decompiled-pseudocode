/*
 * XREFs of RIMGetDeviceLocationInfo @ 0x1400AFCDC
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1401DA730 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetContainerId @ 0x1400B180C (RIMGetContainerId.c)
 *     RIMGetPanelId @ 0x1400B1AA0 (RIMGetPanelId.c)
 */

__int64 __fastcall RIMGetDeviceLocationInfo(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 16) = 2;
  RIMGetContainerId();
  return RIMGetPanelId(a1, a2 + 20);
}
