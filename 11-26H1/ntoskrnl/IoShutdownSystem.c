/*
 * XREFs of IoShutdownSystem @ 0x140C12A68
 * Callers:
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReference @ 0x1402F8660 (IoGetAttachedDeviceReference.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IopInterlockedRemoveHeadList @ 0x1404E0328 (IopInterlockedRemoveHeadList.c)
 *     VfIsVerifierEnabled @ 0x1404F5560 (VfIsVerifierEnabled.c)
 *     IoNotifyDump @ 0x1405C9BE4 (IoNotifyDump.c)
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x14072B760 (ZwSetSystemInformation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IoBuildSynchronousFsdRequest @ 0x140AD2BD0 (IoBuildSynchronousFsdRequest.c)
 *     PnpShutdownDevices @ 0x140B6EEA4 (PnpShutdownDevices.c)
 *     IopShutdownBaseFileSystems @ 0x140BF750C (IopShutdownBaseFileSystems.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     IovUnloadDrivers @ 0x140C26E9C (IovUnloadDrivers.c)
 *     VfNotifyVerifierOfEvent @ 0x140C27350 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall IoShutdownSystem(int a1)
{
  __int64 v2; // rdx
  struct _DEVICE_OBJECT *v3; // rdi
  IRP *v4; // rax
  PVOID *v5; // rax
  __int64 v6; // rdx
  PVOID *v7; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v9; // rax
  PVOID *v10; // rax
  PVOID *v11; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-20h] BYREF
  int SystemInformation; // [rsp+80h] [rbp+10h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( (unsigned int)VfIsVerifierEnabled() )
    VfNotifyVerifierOfEvent(1LL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      ExWaitForRundownProtectionRelease(&IopFilesystemDatabaseShutdownRundown);
      ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
      IopShutdownBaseFileSystems((LONG_PTR **)&IopDiskFileSystemQueueHead);
      IopShutdownBaseFileSystems((LONG_PTR **)&IopCdRomFileSystemQueueHead);
      IopShutdownBaseFileSystems((LONG_PTR **)&IopTapeFileSystemQueueHead);
      while ( 1 )
      {
        v10 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopNotifyLastChanceShutdownQueueHead);
        v11 = v10;
        if ( !v10 )
          break;
        AttachedDeviceReference = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v10[2]);
        v9 = IoBuildSynchronousFsdRequest(0x10u, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
        if ( v9 && IofCallDriver(AttachedDeviceReference, v9) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        ObfDereferenceObject(AttachedDeviceReference);
        ObfDereferenceObject(v11[2]);
        ExFreePoolWithTag(v11, 0);
        KeResetEvent(&Event);
      }
    }
  }
  else
  {
    SystemInformation = 0;
    if ( ZwQuerySystemInformation(SystemSoftRebootInformation, &SystemInformation, 4u, 0LL) >= 0
      && (SystemInformation & 0x20) != 0 )
    {
      guard_dispatch_icall_no_overrides(0LL, v2);
      SystemInformation = 0;
      ZwSetSystemInformation(SystemSoftRebootInformation, &SystemInformation, 4u);
    }
    PnpShutdownDevices();
    while ( 1 )
    {
      v5 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopNotifyShutdownQueueHead);
      v7 = v5;
      if ( !v5 )
        break;
      v3 = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v5[2]);
      v4 = IoBuildSynchronousFsdRequest(0x10u, v3, 0LL, 0, 0LL, &Event, &IoStatusBlock);
      if ( v4 && IofCallDriver(v3, v4) == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ObfDereferenceObject(v3);
      ObfDereferenceObject(v7[2]);
      ExFreePoolWithTag(v7, 0);
      KeResetEvent(&Event);
    }
    if ( (MmVerifierData & 0x10) != 0 )
      IovUnloadDrivers();
    if ( (SystemInformation & 0x10) != 0 )
      IoNotifyDump(5LL, v6);
    SystemInformation = 2;
    ZwSetSystemInformation(SystemSoftRebootInformation, &SystemInformation, 4u);
  }
}
