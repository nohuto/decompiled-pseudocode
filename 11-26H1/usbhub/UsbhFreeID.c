/*
 * XREFs of UsbhFreeID @ 0x1400081A4
 * Callers:
 *     UsbhRemoveAndDeletePdo @ 0x14000803C (UsbhRemoveAndDeletePdo.c)
 *     UsbhSetupDevice @ 0x14000901C (UsbhSetupDevice.c)
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 *     UsbhUpdateUxdSettings @ 0x1400220B4 (UsbhUpdateUxdSettings.c)
 *     UsbhGetProductIdString @ 0x140036108 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x1400389E8 (UsbhGetSerialNumber.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x140040B80 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 *     UsbhSetEnumerationFailed @ 0x140059728 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildUnknownIds @ 0x14005A430 (UsbhBuildUnknownIds.c)
 *     UsbhQueryParentHubConfig @ 0x14005FFA4 (UsbhQueryParentHubConfig.c)
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
