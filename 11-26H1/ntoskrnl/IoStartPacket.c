/*
 * XREFs of IoStartPacket @ 0x140472E40
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     KeInsertByKeyDeviceQueue @ 0x140472F90 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x1404730E0 (KeInsertDeviceQueue.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
