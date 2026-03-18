/*
 * XREFs of DrvPVPGetFirstActiveMonitor @ 0x1401F7FB4
 * Callers:
 *     GetCertificateLengthAndMonitorPDO @ 0x1401F424C (GetCertificateLengthAndMonitorPDO.c)
 * Callees:
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x14000C714 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14000C7AC (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140029040 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ??1EnsureMonitorDevices@@QEAA@XZ @ 0x14015DDBC (--1EnsureMonitorDevices@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvPVPGetFirstActiveMonitor(struct _UNICODE_STRING *a1, __int64 a2, PVOID *a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  unsigned int i; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 DxgkWin32kInterface; // rax
  PVOID Object; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v11[8]; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-30h]
  __int64 v13; // [rsp+48h] [rbp-28h]
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF
  int v15; // [rsp+60h] [rbp-10h]

  v3 = 0;
  Object = 0LL;
  result = DrvGetDeviceFromNameAndValidateDevice(a1, UserMode, (struct tagGRAPHICS_DEVICE **)&Object);
  if ( (int)result >= 0 )
  {
    v12 = 0;
    v13 = 0LL;
    EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice(
      (EnsureMonitorDevices *)v11,
      (struct tagGRAPHICS_DEVICE *)Object);
    for ( i = 0; i < v12; ++i )
    {
      v15 = 0;
      v14 = 0LL;
      EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v11, i, (struct tagVIDEO_MONITOR_DEVICE *)&v14);
      if ( (v14 & 1) != 0 )
      {
        Object = 0LL;
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v8, v7);
        if ( (*(int (__fastcall **)(char *, _QWORD, PVOID *, PVOID *))(DxgkWin32kInterface + 456))(
               (char *)&v14 + 8,
               DWORD1(v14),
               &Object,
               a3) >= 0 )
        {
          ObfReferenceObject(*a3);
          ObfDereferenceObject(Object);
          goto LABEL_9;
        }
      }
    }
    v3 = -1071774235;
LABEL_9:
    EnsureMonitorDevices::~EnsureMonitorDevices((EnsureMonitorDevices *)v11);
    return v3;
  }
  return result;
}
