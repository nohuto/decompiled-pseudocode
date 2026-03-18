/*
 * XREFs of IoRegisterFsRegistrationChangeMountAware @ 0x140796800
 * Callers:
 *     IoRegisterFsRegistrationChange @ 0x1407967E0 (IoRegisterFsRegistrationChange.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x14044F210 (IopIsKnownGoodLegacyFsFilter.c)
 *     IoGetActivityIdThread @ 0x14046F440 (IoGetActivityIdThread.c)
 *     IopGetFsRegistrationInProgress @ 0x140531684 (IopGetFsRegistrationInProgress.c)
 *     McTemplateK0hzr0_EtwWriteTransfer @ 0x1405CB784 (McTemplateK0hzr0_EtwWriteTransfer.c)
 *     FsRtlSetDriverBacking @ 0x14078FF20 (FsRtlSetDriverBacking.c)
 *     IopNotifyAlreadyRegisteredFileSystems @ 0x140796DD8 (IopNotifyAlreadyRegisteredFileSystems.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoRegisterFsRegistrationChangeMountAware(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine,
        BOOLEAN SynchronizeWithMounts)
{
  __int64 v6; // rbx
  struct _LIST_ENTRY *ActivityIdThread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v12; // ebx
  struct _LIST_ENTRY *Pool2; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8

  if ( IopBlockLegacyFsFilters && !IopIsKnownGoodLegacyFsFilter((const void **)&DriverObject->DriverName) )
  {
    if ( (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
    {
      v6 = DriverObject->DriverName.Length >> 1;
      ActivityIdThread = IoGetActivityIdThread();
      McTemplateK0hzr0_EtwWriteTransfer(
        v9,
        v8,
        (const GUID *)ActivityIdThread,
        v6,
        (__int64)DriverObject->DriverName.Buffer);
    }
    return -1073741637;
  }
  result = FsRtlSetDriverBacking((__int64)DriverObject, 1);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !SynchronizeWithMounts )
  {
LABEL_11:
    ExAcquireResourceExclusiveLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16], 1u);
    goto LABEL_12;
  }
  if ( !ExAcquireResourceExclusiveLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16], 0) )
  {
    if ( IopGetFsRegistrationInProgress() )
    {
      v12 = -1073741267;
LABEL_18:
      KeLeaveCriticalRegion();
      return v12;
    }
    goto LABEL_11;
  }
LABEL_12:
  if ( *(struct _KTHREAD **)&IopSessionNotificationLock.Timer.Processor != (struct _KTHREAD *)&IopSessionNotificationLock.Timer.Processor
    && (PDRIVER_OBJECT)IopSessionNotificationLock.WaitBlock[0].WaitListEntry.Flink[1].Flink == DriverObject
    && (PDRIVER_FS_NOTIFICATION)IopSessionNotificationLock.WaitBlock[0].WaitListEntry.Flink[1].Blink == DriverNotificationRoutine )
  {
    ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16]);
    v12 = -1073741768;
    goto LABEL_18;
  }
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
  {
    ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16]);
    v12 = -1073741670;
    goto LABEL_18;
  }
  Pool2[1].Flink = (struct _LIST_ENTRY *)DriverObject;
  Pool2[1].Blink = (struct _LIST_ENTRY *)DriverNotificationRoutine;
  Flink = IopSessionNotificationLock.WaitBlock[0].WaitListEntry.Flink;
  if ( IopSessionNotificationLock.WaitBlock[0].WaitListEntry.Flink->Flink != (struct _LIST_ENTRY *)&IopSessionNotificationLock.Timer.Processor )
    __fastfail(3u);
  Pool2->Flink = (struct _LIST_ENTRY *)&IopSessionNotificationLock.Timer.Processor;
  Pool2->Blink = Flink;
  Flink->Flink = Pool2;
  IopSessionNotificationLock.WaitBlock[0].WaitListEntry.Flink = Pool2;
  if ( SynchronizeWithMounts == 1 )
  {
    while ( IopMountsInProgress )
    {
      ++IopMountCompletionWaiters;
      ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16]);
      KeWaitForSingleObject(&IopMountCompletionEvent, Executive, 0, 0, 0LL);
      ExAcquireResourceExclusiveLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16], 1u);
      if ( --IopMountCompletionWaiters )
      {
        if ( !IopMountsInProgress )
          break;
      }
      KeResetEvent(&IopMountCompletionEvent);
    }
  }
  IopNotifyAlreadyRegisteredFileSystems(&IopSessionNotificationLock.WaitBlockFill11[72], DriverNotificationRoutine, 0LL);
  LOBYTE(v15) = 1;
  IopNotifyAlreadyRegisteredFileSystems(
    &IopSessionNotificationLock.WaitBlockFill11[104],
    DriverNotificationRoutine,
    v15);
  LOBYTE(v16) = 1;
  IopNotifyAlreadyRegisteredFileSystems(
    &IopSessionNotificationLock.WaitBlockFill11[120],
    DriverNotificationRoutine,
    v16);
  LOBYTE(v17) = 1;
  IopNotifyAlreadyRegisteredFileSystems(&IopSessionNotificationLock.WaitBlockFill11[88], DriverNotificationRoutine, v17);
  ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16]);
  KeLeaveCriticalRegion();
  PsReferenceSiloContext(DriverObject);
  return 0;
}
