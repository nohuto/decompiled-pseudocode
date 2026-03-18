/*
 * XREFs of ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x140185B40
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1401580D0 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 * Callees:
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140028F20 (UserIsRemoteAndNotDisconnectConnection.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x140040BF0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 */

void __fastcall DrvUpdateAttachFlag(struct tagGRAPHICS_DEVICE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  WCHAR *RegistryHandleFromDeviceMap; // rbx
  int ValueData; // [rsp+48h] [rbp+10h] BYREF

  ValueData = a2;
  if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection((__int64)a1, a2, a3, a4) )
  {
    *((_DWORD *)a1 + 63) = ValueData;
  }
  else
  {
    RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                             (unsigned __int16 *)a1,
                                             2,
                                             0LL,
                                             0LL,
                                             0,
                                             0LL);
    if ( RegistryHandleFromDeviceMap )
    {
      RtlWriteRegistryValue(0x40000000u, RegistryHandleFromDeviceMap, L"Attach.ToDesktop", 4u, &ValueData, 4u);
      ZwClose(RegistryHandleFromDeviceMap);
    }
  }
}
