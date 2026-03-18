/*
 * XREFs of IoRegisterFileSystem @ 0x140796630
 * Callers:
 *     RawInitialize @ 0x140CD9A40 (RawInitialize.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1403EAEB0 (IopIncrementDeviceObjectRefCount.c)
 *     IopSetFsRegistrationInProgress @ 0x1405CB750 (IopSetFsRegistrationInProgress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlSetDriverBacking @ 0x14078FF20 (FsRtlSetDriverBacking.c)
 */

void __stdcall IoRegisterFileSystem(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rdx
  ULONG DeviceType; // eax
  struct _LIST_ENTRY *Thread; // rcx
  ULONG Flags; // eax
  struct _LIST_ENTRY *Blink; // rcx
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *p_Queue; // rax
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v9; // rax
  struct _LIST_ENTRY *v10; // r8
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v11; // rax
  struct _KTHREAD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8

  FsRtlSetDriverBacking((__int64)DeviceObject->DriverObject, 1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  IopSetFsRegistrationInProgress(1);
  ExAcquireResourceExclusiveLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16], 1u);
  DeviceType = DeviceObject->DeviceType;
  switch ( DeviceType )
  {
    case 0x14u:
      Thread = (struct _LIST_ENTRY *)IopSessionNotificationLock.WaitBlock[1].Thread;
      Flink = (struct _LIST_ENTRY *)&IopSessionNotificationLock.WaitBlockFill11[72];
      goto LABEL_9;
    case 3u:
      Flink = (struct _LIST_ENTRY *)&IopSessionNotificationLock.WaitBlockFill11[104];
      DeviceObject->DriverObject->Flags |= 0x80u;
      Thread = IopSessionNotificationLock.WaitBlock[2].WaitListEntry.Blink;
      goto LABEL_9;
    case 8u:
      Flink = (struct _LIST_ENTRY *)&IopSessionNotificationLock.WaitBlockFill11[120];
      DeviceObject->DriverObject->Flags |= 0x80u;
      Thread = (struct _LIST_ENTRY *)IopSessionNotificationLock.WaitBlock[2].Thread;
      goto LABEL_9;
    case 0x20u:
      Flink = (struct _LIST_ENTRY *)&IopSessionNotificationLock.WaitBlockFill11[88];
      DeviceObject->DriverObject->Flags |= 0x80u;
      Thread = (struct _LIST_ENTRY *)IopSessionNotificationLock.WaitBlock[1].SparePtr;
LABEL_9:
      Flags = DeviceObject->Flags;
      if ( (Flags & 0x10000) != 0 )
      {
        Blink = Flink->Blink;
        p_Queue = &DeviceObject->Queue;
        Flink = Blink->Blink;
        if ( Flink->Flink == Blink )
        {
          p_Queue->ListEntry.Flink = Blink;
          DeviceObject->Queue.ListEntry.Blink = Flink;
          Flink->Flink = &p_Queue->ListEntry;
          Blink->Blink = &p_Queue->ListEntry;
          break;
        }
      }
      else if ( (Flags & 0x200) != 0 )
      {
        v9 = &DeviceObject->Queue;
        if ( Thread->Blink == Flink )
        {
          v9->ListEntry.Flink = Thread;
          DeviceObject->Queue.ListEntry.Blink = Flink;
          Thread->Blink = &v9->ListEntry;
          Flink->Flink = &v9->ListEntry;
          break;
        }
      }
      else
      {
        v10 = Flink;
        while ( Thread != Flink && _bittest((const signed __int32 *)&Thread[-2], 9u) )
        {
          v10 = Thread;
          Thread = Thread->Flink;
        }
        Flink = v10->Flink;
        v11 = &DeviceObject->Queue;
        if ( v10->Flink->Blink == v10 )
        {
          v11->ListEntry.Flink = Flink;
          DeviceObject->Queue.ListEntry.Blink = v10;
          Flink->Blink = &v11->ListEntry;
          v10->Flink = &v11->ListEntry;
          break;
        }
      }
      __fastfail(3u);
  }
  ++IopFsRegistrationOps;
  DeviceObject->Flags &= ~0x80u;
  v12 = *(struct _KTHREAD **)&IopSessionNotificationLock.Timer.Processor;
  while ( v12 != (struct _KTHREAD *)&IopSessionNotificationLock.Timer.Processor )
  {
    LOBYTE(Flink) = 1;
    v12 = *(struct _KTHREAD **)&v12->Header.Lock;
    guard_dispatch_icall_no_overrides((__int64)DeviceObject, (__int64)Flink);
  }
  IopSetFsRegistrationInProgress(0);
  ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16]);
  IopSetFsRegistrationInProgress(0);
  KeLeaveCriticalRegion();
  LOBYTE(v13) = 1;
  IopIncrementDeviceObjectRefCount((ULONG_PTR)DeviceObject, v13, v14);
}
