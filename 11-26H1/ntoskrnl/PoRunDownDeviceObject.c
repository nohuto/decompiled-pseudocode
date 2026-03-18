/*
 * XREFs of PoRunDownDeviceObject @ 0x140437D0C
 * Callers:
 *     IoDeleteDevice @ 0x140437BA0 (IoDeleteDevice.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnlockPagableImageSection @ 0x140366CB0 (MmUnlockPagableImageSection.c)
 *     PoRegisterDeviceForIdleDetection @ 0x140437DF0 (PoRegisterDeviceForIdleDetection.c)
 *     MmLockPagableSectionByHandle @ 0x140A9C420 (MmLockPagableSectionByHandle.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PoRunDownDeviceObject(struct _DEVICE_OBJECT *a1)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdi
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rbx
  KIRQL v3; // al
  _LIST_ENTRY *p_Volume; // rcx
  KIRQL v5; // si
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // r8

  DeviceObjectExtension = a1->DeviceObjectExtension;
  PoRegisterDeviceForIdleDetection(a1, 0, 0, PowerDeviceUnspecified);
  Dope = DeviceObjectExtension->Dope;
  if ( Dope )
  {
    MmLockPagableSectionByHandle(ExPageLockHandle);
    ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F10828.SListFaultAddress);
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140F10808);
    p_Volume = &Dope->Volume;
    v5 = v3;
    Flink = Dope->Volume.Flink;
    if ( Flink )
    {
      if ( Flink->Blink != p_Volume || (Blink = Dope->Volume.Blink, Blink->Flink != p_Volume) )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      p_Volume->Flink = 0LL;
      Dope->Volume.Blink = 0LL;
    }
    DeviceObjectExtension->Dope = 0LL;
    ExFreePoolWithTag(Dope, 0);
    KeReleaseSpinLock(&qword_140F10808, v5);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F10828.SListFaultAddress);
    MmUnlockPagableImageSection(ExPageLockHandle);
  }
}
