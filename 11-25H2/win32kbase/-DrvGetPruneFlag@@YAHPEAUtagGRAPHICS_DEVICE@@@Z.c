/*
 * XREFs of ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140048BFC
 * Callers:
 *     DrvEnumDisplayDevices @ 0x140047DF0 (DrvEnumDisplayDevices.c)
 *     DrvUpdateGraphicsDeviceList @ 0x14006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     DrvChangeDisplaySettings @ 0x14013C570 (DrvChangeDisplaySettings.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001D340 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall DrvGetPruneFlag(struct tagGRAPHICS_DEVICE *a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  HANDLE RegistryHandleFromDeviceMap; // rsi
  ULONG Length; // [rsp+38h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-1h] BYREF
  _OWORD KeyValueInformation[3]; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v8; // [rsp+80h] [rbp+3Fh]

  Length = 52;
  v1 = 0;
  v8 = 0LL;
  v2 = 1;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)a1, 0, 0LL, 0LL, 0, 0LL);
  if ( RegistryHandleFromDeviceMap )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"PruningMode");
    if ( ZwQueryValueKey(
           RegistryHandleFromDeviceMap,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           Length,
           &Length) >= 0 )
      v2 = *(_DWORD *)((char *)KeyValueInformation + DWORD2(KeyValueInformation[0]));
    ZwClose(RegistryHandleFromDeviceMap);
  }
  LOBYTE(v1) = v2 != 0;
  return v1;
}
