/*
 * XREFs of DrvSetMonitorsDimState @ 0x140080510
 * Callers:
 *     PowerUnDimMonitor @ 0x140080194 (PowerUnDimMonitor.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140137A28 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     PowerDimUndimResend @ 0x140142374 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x140146808 (PowerDimMonitor.c)
 * Callees:
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140049CA4 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x1400810F0 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DrvSetMonitorsDimState(__int64 a1, __int128 *a2)
{
  char v3; // r15
  __int64 i; // rbx
  unsigned int j; // edi
  __int64 v6; // rcx
  __int64 DxgkWin32kInterface; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DEVICE_OBJECT *v9; // rsi
  __int128 v10; // xmm0
  IRP *v11; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-49h] BYREF
  PVOID Object; // [rsp+58h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-39h] BYREF
  int v15; // [rsp+70h] [rbp-29h]
  _BYTE v16[8]; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v17; // [rsp+80h] [rbp-19h]
  PVOID P; // [rsp+88h] [rbp-11h]
  struct _KEVENT Event; // [rsp+90h] [rbp-9h] BYREF
  _BYTE InputBuffer[20]; // [rsp+A8h] [rbp+Fh] BYREF

  v3 = a1;
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1096LL); i; i = *(_QWORD *)(i + 128) )
  {
    v17 = 0;
    P = 0LL;
    EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice(
      (EnsureMonitorDevices *)v16,
      (struct tagGRAPHICS_DEVICE *)i);
    for ( j = 0; j < v17; ++j )
    {
      v15 = 0;
      IoStatusBlock = 0LL;
      EnsureMonitorDevices::GetMonitorDevice(
        (EnsureMonitorDevices *)v16,
        j,
        (struct tagVIDEO_MONITOR_DEVICE *)&IoStatusBlock);
      DeviceObject = 0LL;
      Object = 0LL;
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v6);
      if ( (*(int (__fastcall **)(__int64, _QWORD, PVOID *, PDEVICE_OBJECT *))(DxgkWin32kInterface + 456))(
             i + 240,
             HIDWORD(IoStatusBlock.Pointer),
             &Object,
             &DeviceObject) >= 0 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
        *(_OWORD *)InputBuffer = 0LL;
        v9 = AttachedDeviceReference;
        v10 = *a2;
        InputBuffer[0] = v3;
        *(_OWORD *)&InputBuffer[4] = v10;
        memset(&Event, 0, sizeof(Event));
        IoStatusBlock = 0LL;
        if ( AttachedDeviceReference )
        {
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          v11 = IoBuildDeviceIoControlRequest(0x2324D7u, v9, InputBuffer, 0x14u, 0LL, 0, 1u, &Event, &IoStatusBlock);
          if ( v11 )
          {
            if ( IofCallDriver(v9, v11) == 259 )
            {
              while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                ;
            }
          }
        }
        ObfDereferenceObject(v9);
        ObfDereferenceObject(Object);
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}
