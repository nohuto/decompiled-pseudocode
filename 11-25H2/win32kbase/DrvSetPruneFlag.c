/*
 * XREFs of DrvSetPruneFlag @ 0x14014D2F0
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001D340 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     DrvGetDeviceFromName @ 0x14004A170 (DrvGetDeviceFromName.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x14014D43C (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvSetPruneFlag(const UNICODE_STRING *a1, unsigned __int8 a2, int a3)
{
  int v3; // ebp
  __int64 DeviceFromName; // rax
  __int64 v6; // rdi
  HANDLE RegistryHandleFromDeviceMap; // rsi
  NTSTATUS v9; // ebx
  __int64 v10; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v12; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 )
    return 4294967291LL;
  DeviceFromName = DrvGetDeviceFromName(a1);
  v6 = DeviceFromName;
  if ( !DeviceFromName
    || a3 && !*(_QWORD *)(DeviceFromName + 136) && (*(_DWORD *)(DeviceFromName + 160) & 0x6000008) == 0 )
  {
    return 4294967291LL;
  }
  if ( (unsigned int)DrvIsPermanentSettingChangesDisabled() )
    return 4294967293LL;
  Data = v3;
  RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)v6, 0, 0LL, 0LL, 0, 0LL);
  if ( !RegistryHandleFromDeviceMap )
    return 0xFFFFFFFFLL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PruningMode");
  v9 = ZwSetValueKey(RegistryHandleFromDeviceMap, &DestinationString, 0, 4u, &Data, 4u);
  ZwClose(RegistryHandleFromDeviceMap);
  if ( v9 < 0 )
    return 0xFFFFFFFFLL;
  if ( (*(_DWORD *)(v6 + 160) & 0x800000) != 0
    && (DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v10),
        LOBYTE(v12) = (_BYTE)v3 == 0,
        (*(int (__fastcall **)(__int64))(DxgkWin32kInterface + 336))(v12) < 0) )
  {
    return 0xFFFFFFFFLL;
  }
  else
  {
    return 0LL;
  }
}
