/*
 * XREFs of IoUnregisterShutdownNotification @ 0x140C09840
 * Callers:
 *     IoDeleteDevice @ 0x140437BA0 (IoDeleteDevice.c)
 *     DifIoUnregisterShutdownNotificationWrapper @ 0x14065EE30 (DifIoUnregisterShutdownNotificationWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     MmUnlockPagableImageSection @ 0x140366CB0 (MmUnlockPagableImageSection.c)
 *     MmLockPagableSectionByHandle @ 0x140A9C420 (MmLockPagableSectionByHandle.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  KIRQL v2; // al
  struct _KTHREAD *Thread; // rbx
  KIRQL v4; // bp
  struct _KTHREAD *v5; // rsi
  struct _LIST_ENTRY *v6; // rdx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *v9; // rsi
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY *Blink; // rdx

  MmLockPagableSectionByHandle(ExPageLockHandle);
  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  Thread = IopSessionNotificationLock.WaitBlock[0].Thread;
  v4 = v2;
  while ( Thread != (struct _KTHREAD *)&IopSessionNotificationLock.WaitBlockFill11[24] )
  {
    v5 = Thread;
    if ( (PDEVICE_OBJECT)Thread->Header.WaitListHead.Blink == DeviceObject )
    {
      v6 = *(struct _LIST_ENTRY **)&Thread->Header.Lock;
      if ( *(struct _KTHREAD **)(*(_QWORD *)&Thread->Header.Lock + 8LL) != Thread
        || (Flink = Thread->Header.WaitListHead.Flink, (struct _KTHREAD *)Flink->Flink != Thread) )
      {
LABEL_16:
        __fastfail(3u);
      }
      Flink->Flink = v6;
      v6->Blink = Flink;
      Thread = (struct _KTHREAD *)Thread->Header.WaitListHead.Flink;
      ObfDereferenceObject(DeviceObject);
      ExFreePoolWithTag(v5, 0);
    }
    Thread = *(struct _KTHREAD **)&Thread->Header.Lock;
  }
  for ( i = IopSessionNotificationLock.WaitBlock[0].WaitListEntry.Blink;
        i != (struct _LIST_ENTRY *)&IopSessionNotificationLock.WaitBlockFill10[8];
        i = i->Flink )
  {
    v9 = i;
    if ( (PDEVICE_OBJECT)i[1].Flink == DeviceObject )
    {
      v10 = i->Flink;
      if ( i->Flink->Blink != i )
        goto LABEL_16;
      Blink = i->Blink;
      if ( Blink->Flink != i )
        goto LABEL_16;
      Blink->Flink = v10;
      v10->Blink = Blink;
      i = i->Blink;
      ObfDereferenceObject(DeviceObject);
      ExFreePoolWithTag(v9, 0);
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  MmUnlockPagableImageSection(ExPageLockHandle);
  DeviceObject->Flags &= ~0x800u;
}
