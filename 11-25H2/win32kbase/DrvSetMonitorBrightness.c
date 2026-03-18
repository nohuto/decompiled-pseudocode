/*
 * XREFs of DrvSetMonitorBrightness @ 0x14007F6BC
 * Callers:
 *     PowerUnDimMonitor @ 0x140080194 (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x140142374 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x140146808 (PowerDimMonitor.c)
 * Callees:
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140049CA4 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     UserIsRemoteConnection @ 0x14007F600 (UserIsRemoteConnection.c)
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x1400810F0 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvSetMonitorBrightness(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5, char a6)
{
  unsigned int v7; // r12d
  int v8; // ebx
  unsigned int v9; // edi
  struct tagGRAPHICS_DEVICE *v10; // rdx
  unsigned int i; // ebx
  __int64 v12; // rcx
  __int64 DxgkWin32kInterface; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rsi
  IRP *v15; // rax
  NTSTATUS Status; // eax
  __int64 result; // rax
  unsigned int InputBuffer; // [rsp+50h] [rbp-69h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-61h] BYREF
  PVOID Object; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v21[8]; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v22; // [rsp+70h] [rbp-49h]
  PVOID P; // [rsp+78h] [rbp-41h]
  struct _KEVENT Event; // [rsp+80h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-21h] BYREF
  __int128 v26; // [rsp+A8h] [rbp-11h] BYREF
  int v27; // [rsp+B8h] [rbp-1h]

  v7 = a2;
  v8 = -1073741823;
  if ( !UserIsRemoteConnection(a1, a2) )
  {
    WdLogSingleEntry2(4LL, a1, v7);
    *a5 = 0;
    v9 = 0;
    for ( WdLogGlobalForLineNumber = 7454; v9 < *(_DWORD *)(a1 + 20); ++v9 )
    {
      v10 = *(struct tagGRAPHICS_DEVICE **)(*(_QWORD *)(56LL * v9 + a1 + 40) + 2568LL);
      v22 = 0;
      P = 0LL;
      EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v21, v10);
      for ( i = 0; i < v22; ++i )
      {
        v27 = 0;
        v26 = 0LL;
        EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v21, i, (struct tagVIDEO_MONITOR_DEVICE *)&v26);
        if ( (v26 & 1) != 0 )
        {
          DeviceObject = 0LL;
          Object = 0LL;
          InputBuffer = 0;
          if ( !a6 || (_BYTE)v27 )
          {
            DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v12);
            if ( (*(int (__fastcall **)(char *, _QWORD, PVOID *, PDEVICE_OBJECT *))(DxgkWin32kInterface + 456))(
                   (char *)&v26 + 8,
                   DWORD1(v26),
                   &Object,
                   &DeviceObject) >= 0 )
            {
              InputBuffer = v7;
              AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
              IoStatusBlock = 0LL;
              memset(&Event, 0, sizeof(Event));
              if ( AttachedDeviceReference )
              {
                KeInitializeEvent(&Event, SynchronizationEvent, 0);
                v15 = IoBuildDeviceIoControlRequest(
                        0x232433u,
                        AttachedDeviceReference,
                        &InputBuffer,
                        4u,
                        0LL,
                        0,
                        1u,
                        &Event,
                        &IoStatusBlock);
                if ( v15 )
                {
                  Status = IofCallDriver(AttachedDeviceReference, v15);
                  if ( Status == 259 )
                  {
                    while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                      ;
                    Status = IoStatusBlock.Status;
                  }
                  if ( Status >= 0 && (_BYTE)v27 )
                    *a5 = 1;
                }
              }
              ObfDereferenceObject(AttachedDeviceReference);
              ObfDereferenceObject(Object);
            }
          }
        }
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    v8 = 0;
  }
  WdLogSingleEntry1(5LL, v8);
  result = (unsigned int)v8;
  WdLogGlobalForLineNumber = 7542;
  return result;
}
