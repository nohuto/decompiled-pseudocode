/*
 * XREFs of IoShutdownSystem @ 0x140C0C858
 * Callers:
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     IoGetAttachedDeviceReference @ 0x1403EB070 (IoGetAttachedDeviceReference.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     IopInterlockedRemoveHeadList @ 0x1404E6F6C (IopInterlockedRemoveHeadList.c)
 *     VfIsVerifierEnabled @ 0x1404FC020 (VfIsVerifierEnabled.c)
 *     IoNotifyDump @ 0x1405C7314 (IoNotifyDump.c)
 *     ZwQuerySystemInformation @ 0x140723AB0 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x140726B90 (ZwSetSystemInformation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     IoBuildSynchronousFsdRequest @ 0x140AD5C20 (IoBuildSynchronousFsdRequest.c)
 *     PnpShutdownDevices @ 0x140B6BDA8 (PnpShutdownDevices.c)
 *     IopShutdownBaseFileSystems @ 0x140BF150C (IopShutdownBaseFileSystems.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     IovUnloadDrivers @ 0x140C20E8C (IovUnloadDrivers.c)
 *     VfNotifyVerifierOfEvent @ 0x140C21340 (VfNotifyVerifierOfEvent.c)
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
  int v14; // [rsp+80h] [rbp+10h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( (unsigned int)VfIsVerifierEnabled() )
    VfNotifyVerifierOfEvent(1LL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&IopSessionNotificationLock.WaitBlockFill11[136]);
      ExAcquireResourceExclusiveLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16], 1u);
      IopShutdownBaseFileSystems((LONG_PTR **)&IopSessionNotificationLock.WaitBlock[2].Thread);
      IopShutdownBaseFileSystems((LONG_PTR **)&IopSessionNotificationLock.WaitBlock[2].WaitListEntry.Blink);
      IopShutdownBaseFileSystems((LONG_PTR **)&IopSessionNotificationLock.WaitBlock[1].SparePtr);
      while ( 1 )
      {
        v10 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopSessionNotificationLock.WaitBlock[0].WaitListEntry.Blink);
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
    v14 = 0;
    if ( (int)ZwQuerySystemInformation(151LL, (__int64)&v14) >= 0 && (v14 & 0x20) != 0 )
    {
      guard_dispatch_icall_no_overrides(0LL, v2);
      v14 = 0;
      ZwSetSystemInformation(151LL, (__int64)&v14);
    }
    PnpShutdownDevices();
    while ( 1 )
    {
      v5 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopSessionNotificationLock.WaitBlock[0].Thread);
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
    if ( (v14 & 0x10) != 0 )
      IoNotifyDump(5LL, v6);
    v14 = 2;
    ZwSetSystemInformation(151LL, (__int64)&v14);
  }
}
