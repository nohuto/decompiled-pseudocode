/*
 * XREFs of IoStartPacket @ 0x1404794E0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     KeInsertByKeyDeviceQueue @ 0x140479630 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x140479780 (KeInsertDeviceQueue.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall IoStartPacket(PDEVICE_OBJECT DeviceObject, PIRP Irp, PULONG Key, PDRIVER_CANCEL CancelFunction)
{
  PDEVICE_OBJECT v7; // rdi
  KIRQL v8; // r14
  unsigned __int8 CurrentIrql; // bp
  union _IRP::$66699B8BF83DC91F51A70E4C6E3F33A6 *p_Tail; // rdx
  struct _KDEVICE_QUEUE *p_DeviceQueue; // rcx
  BOOLEAN inserted; // al

  v7 = DeviceObject;
  v8 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(DeviceObject) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(DeviceObject, 2LL);
  }
  if ( CancelFunction )
  {
    v8 = KeAcquireQueuedSpinLock(7uLL);
    Irp->CancelRoutine = CancelFunction;
  }
  p_Tail = &Irp->Tail;
  p_DeviceQueue = &v7->DeviceQueue;
  if ( Key )
    inserted = KeInsertByKeyDeviceQueue(p_DeviceQueue, &p_Tail->Overlay.DeviceQueueEntry, *Key);
  else
    inserted = KeInsertDeviceQueue(p_DeviceQueue, &p_Tail->Overlay.DeviceQueueEntry);
  if ( !inserted )
  {
    v7->CurrentIrp = Irp;
    if ( CancelFunction )
    {
      if ( (v7->DeviceObjectExtension->StartIoFlags & 0x200) != 0 )
        Irp->CancelRoutine = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v8);
    }
    goto LABEL_14;
  }
  if ( CancelFunction )
  {
    if ( Irp->Cancel )
    {
      Irp->CancelIrql = v8;
      Irp->CancelRoutine = 0LL;
LABEL_14:
      guard_dispatch_icall_no_overrides(v7, Irp);
      goto LABEL_15;
    }
    KeReleaseQueuedSpinLock(7uLL, v8);
  }
LABEL_15:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
}
