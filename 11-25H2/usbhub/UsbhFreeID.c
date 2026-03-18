/*
 * XREFs of UsbhFreeID @ 0x14001A68C
 * Callers:
 *     UsbhRemoveAndDeletePdo @ 0x14000F9CC (UsbhRemoveAndDeletePdo.c)
 *     UsbhGetProductIdString @ 0x14001A4C4 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x14001A728 (UsbhGetSerialNumber.c)
 *     UsbhSetupDevice @ 0x14001ADE8 (UsbhSetupDevice.c)
 *     UsbhReset2Complete @ 0x14001BA40 (UsbhReset2Complete.c)
 *     UsbhUpdateUxdSettings @ 0x14001D3EC (UsbhUpdateUxdSettings.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x140041060 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 *     UsbhSetEnumerationFailed @ 0x1400591B8 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildUnknownIds @ 0x140059EB8 (UsbhBuildUnknownIds.c)
 *     UsbhQueryParentHubConfig @ 0x14005F8F8 (UsbhQueryParentHubConfig.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbhFreeID(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
  }
}
