/*
 * XREFs of _CmDeleteDevice @ 0x140808398
 * Callers:
 *     IoReportRootDevice @ 0x140711200 (IoReportRootDevice.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14071E398 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PpDevCfgProcessDevices @ 0x140721110 (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDeviceWorker @ 0x140724ED4 (PiCMDeleteDeviceWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x140725150 (PiCMGenerateDeviceInstance.c)
 *     _PnpDispatchDevice @ 0x1408CB4B0 (_PnpDispatchDevice.c)
 *     PipResetDevice @ 0x140C10C10 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     _CmDeleteDeviceWorker @ 0x14099FA74 (_CmDeleteDeviceWorker.c)
 */

__int64 __fastcall CmDeleteDevice(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  _DWORD v13[24]; // [rsp+40h] [rbp-88h] BYREF

  memset_0(v13, 0, 0x58uLL);
  v5 = *(_QWORD *)(a1 + 504);
  v13[4] = a3;
  if ( v5 )
  {
    v6 = guard_dispatch_icall_no_overrides(a1);
    if ( v6 == -1073741822 )
    {
      v5 = 0LL;
    }
    else
    {
      if ( v6 == -1073741536 )
        return v13[0];
      if ( v6 )
        return (unsigned int)-1073741595;
    }
  }
  v7 = CmDeleteDeviceWorker(a1);
  v8 = v7;
  if ( !v5 )
    return v8;
  v13[0] = v7;
  v9 = guard_dispatch_icall_no_overrides(a1);
  v10 = v9;
  if ( v9 == -1073741822 )
    return v8;
  if ( v9 == -1073741536 )
    return v13[0];
  v11 = v8;
  if ( v10 )
    return (unsigned int)-1073741595;
  return v11;
}
