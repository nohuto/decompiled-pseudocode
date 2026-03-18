/*
 * XREFs of IoUnregisterFileSystem @ 0x140796C50
 * Callers:
 *     RawShutdown @ 0x1407FFE80 (RawShutdown.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     IopDecrementDeviceObjectRefCount @ 0x14044AAD0 (IopDecrementDeviceObjectRefCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall IoUnregisterFileSystem(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *p_Queue; // r8
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _KTHREAD *v6; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16], 1u);
  p_Queue = &DeviceObject->Queue;
  Flink = DeviceObject->Queue.ListEntry.Flink;
  if ( Flink )
  {
    if ( (union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *)Flink->Blink != p_Queue
      || (Blink = DeviceObject->Queue.ListEntry.Blink,
          (union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *)Blink->Flink != p_Queue) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
  }
  v6 = *(struct _KTHREAD **)&IopSessionNotificationLock.Timer.Processor;
  while ( v6 != (struct _KTHREAD *)&IopSessionNotificationLock.Timer.Processor )
  {
    v6 = *(struct _KTHREAD **)&v6->Header.Lock;
    guard_dispatch_icall_no_overrides((__int64)DeviceObject, 0LL);
  }
  ++IopFsRegistrationOps;
  ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16]);
  KeLeaveCriticalRegion();
  IopDecrementDeviceObjectRefCount((ULONG_PTR)DeviceObject, 1);
}
