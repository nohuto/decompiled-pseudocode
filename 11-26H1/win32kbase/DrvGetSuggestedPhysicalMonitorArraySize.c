/*
 * XREFs of DrvGetSuggestedPhysicalMonitorArraySize @ 0x14000C3E0
 * Callers:
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1400086E0 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 * Callees:
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x14000C714 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14000C7AC (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140029040 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ??1EnsureMonitorDevices@@QEAA@XZ @ 0x14015DDBC (--1EnsureMonitorDevices@@QEAA@XZ.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall DrvGetSuggestedPhysicalMonitorArraySize(struct _UNICODE_STRING *a1, enum _MODE a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned int i; // esi
  unsigned int v7; // eax
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+30h] [rbp-28h]
  _BYTE v10[8]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v11; // [rsp+40h] [rbp-18h]
  PVOID P; // [rsp+48h] [rbp-10h]
  struct tagGRAPHICS_DEVICE *v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  result = DrvGetDeviceFromNameAndValidateDevice(a1, a2, &v13);
  if ( (int)result >= 0 )
  {
    v11 = 0;
    P = 0LL;
    EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v10, v13);
    v5 = 0;
    for ( i = 0; i < v11; ++i )
    {
      v8 = 0LL;
      v9 = 0;
      EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v10, i, (struct tagVIDEO_MONITOR_DEVICE *)&v8);
      v7 = v5 + 1;
      if ( (v8 & 1) == 0 )
        v7 = v5;
      v5 = v7;
    }
    if ( v5 )
    {
      RtlWriteULongToUser(a3, v5);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return 0LL;
    }
    else
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
      return 3223193061LL;
    }
  }
  return result;
}
