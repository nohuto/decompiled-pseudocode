/*
 * XREFs of _CmCreateDevice @ 0x140AF540C
 * Callers:
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407A15F0 (IoReportRootDevice.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1407AC988 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiCMGenerateDeviceInstance @ 0x1407B3B38 (PiCMGenerateDeviceInstance.c)
 *     _PnpDispatchDevice @ 0x140956100 (_PnpDispatchDevice.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmCreateDeviceWorker @ 0x140AF558C (_CmCreateDeviceWorker.c)
 */

__int64 __fastcall CmCreateDevice(__int64 a1, __int64 a2, int a3, HANDLE *a4, _BYTE *a5, int a6)
{
  __int64 v10; // rsi
  int v11; // eax
  int DeviceWorker; // eax
  int v13; // ebx
  int v14; // eax
  int v16[4]; // [rsp+40h] [rbp-59h] BYREF
  int v17; // [rsp+50h] [rbp-49h]
  HANDLE Handle; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v19[4]; // [rsp+60h] [rbp-39h] BYREF
  int v20; // [rsp+64h] [rbp-35h]

  memset_0(v16, 0, 0x58uLL);
  v10 = *(_QWORD *)(a1 + 504);
  if ( a3 || (v17 = 1, a4) )
    v17 = a3;
  v20 = a6;
  if ( v10 )
  {
    v11 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        goto LABEL_12;
      if ( v11 )
      {
LABEL_11:
        v13 = -1073741595;
        goto LABEL_14;
      }
    }
  }
  DeviceWorker = CmCreateDeviceWorker(a1, a2, v17, (unsigned int)&Handle, (__int64)v19, v20);
  v13 = DeviceWorker;
  if ( !v10 )
    goto LABEL_13;
  v16[0] = DeviceWorker;
  v14 = guard_dispatch_icall_no_overrides(a1, a2);
  if ( v14 == -1073741536 )
  {
LABEL_12:
    v13 = v16[0];
    goto LABEL_13;
  }
  if ( v14 != -1073741822 && v14 )
    goto LABEL_11;
LABEL_13:
  if ( v13 >= 0 && a4 )
  {
    *a4 = Handle;
LABEL_20:
    if ( a5 )
      *a5 = v19[0];
    return (unsigned int)v13;
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  if ( v13 >= 0 )
    goto LABEL_20;
  return (unsigned int)v13;
}
