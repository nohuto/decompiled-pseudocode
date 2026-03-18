/*
 * XREFs of DrvSetMonitorsDimState @ 0x14000C4E0
 * Callers:
 *     PowerDimUndimResend @ 0x14000AD94 (PowerDimUndimResend.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140172218 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     PowerDimMonitor @ 0x1401D6144 (PowerDimMonitor.c)
 *     PowerUnDimMonitor @ 0x1401D6960 (PowerUnDimMonitor.c)
 * Callees:
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x14000C714 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140029040 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DrvSetMonitorsDimState(__int64 a1, __int128 *a2)
{
  char v3; // r15
  __int64 i; // rbx
  unsigned int j; // edi
  __int64 DxgkWin32kInterface; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DEVICE_OBJECT *v8; // rsi
  __int128 v9; // xmm0
  IRP *v10; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-49h] BYREF
  PVOID Object; // [rsp+58h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-39h] BYREF
  int v14; // [rsp+70h] [rbp-29h]
  _BYTE v15[8]; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v16; // [rsp+80h] [rbp-19h]
  PVOID P; // [rsp+88h] [rbp-11h]
  struct _KEVENT Event; // [rsp+90h] [rbp-9h] BYREF
  _BYTE InputBuffer[20]; // [rsp+A8h] [rbp+Fh] BYREF

  v3 = a1;
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1184LL); i; i = *(_QWORD *)(i + 128) )
  {
    v16 = 0;
    P = 0LL;
    EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice(
      (EnsureMonitorDevices *)v15,
      (struct tagGRAPHICS_DEVICE *)i);
    for ( j = 0; j < v16; ++j )
    {
      v14 = 0;
      IoStatusBlock = 0LL;
      EnsureMonitorDevices::GetMonitorDevice(
        (EnsureMonitorDevices *)v15,
        j,
        (struct tagVIDEO_MONITOR_DEVICE *)&IoStatusBlock);
      DeviceObject = 0LL;
      Object = 0LL;
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
      if ( (*(int (__fastcall **)(__int64, _QWORD, PVOID *, PDEVICE_OBJECT *))(DxgkWin32kInterface + 456))(
             i + 240,
             HIDWORD(IoStatusBlock.Pointer),
             &Object,
             &DeviceObject) >= 0 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
        *(_OWORD *)InputBuffer = 0LL;
        v8 = AttachedDeviceReference;
        v9 = *a2;
        InputBuffer[0] = v3;
        *(_OWORD *)&InputBuffer[4] = v9;
        memset(&Event, 0, sizeof(Event));
        IoStatusBlock = 0LL;
        if ( AttachedDeviceReference )
        {
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          v10 = IoBuildDeviceIoControlRequest(0x2324D7u, v8, InputBuffer, 0x14u, 0LL, 0, 1u, &Event, &IoStatusBlock);
          if ( v10 )
          {
            if ( IofCallDriver(v8, v10) == 259 )
            {
              while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                ;
            }
          }
        }
        ObfDereferenceObject(v8);
        ObfDereferenceObject(Object);
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}
