/*
 * XREFs of DrvDisplayConfigGetDeviceInfo @ 0x1400FA910
 * Callers:
 *     <none>
 * Callees:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfo(struct DISPLAYCONFIG_DEVICE_INFO_HEADER *a1)
{
  return DrvDisplayConfigGetDeviceInfoInternal(a1, 0);
}
