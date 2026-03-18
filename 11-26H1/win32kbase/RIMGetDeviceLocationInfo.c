/*
 * XREFs of RIMGetDeviceLocationInfo @ 0x140130414
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 *     RIMEnableMonitorMappingForDevice @ 0x140200E20 (RIMEnableMonitorMappingForDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetContainerId @ 0x1400EEEE8 (RIMGetContainerId.c)
 *     RIMGetPanelId @ 0x1400EF0E4 (RIMGetPanelId.c)
 */

__int64 __fastcall RIMGetDeviceLocationInfo(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  ULONG v4; // r8d

  *(_DWORD *)(a2 + 16) = 2;
  RIMGetContainerId(a1, (void *)a2, (_DWORD *)(a2 + 16));
  return RIMGetPanelId(a1, (_WORD *)(a2 + 20), v4);
}
