/*
 * XREFs of ExDisableAllLookasideLists @ 0x1406CEB14
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140C205D0 (VfInitSystemNoRebootNeeded.c)
 *     KasanInitSystem @ 0x140CC7D20 (KasanInitSystem.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void ExDisableAllLookasideLists()
{
  KIRQL v0; // al
  struct _KTHREAD *i; // rdx
  KIRQL v2; // al
  struct _KTHREAD *j; // rdx

  ExMinimumLookasideDepth = 0;
  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.KernelShadowStack);
  for ( i = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.KernelShadowStackBase;
        i != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.KernelShadowStackBase;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    LODWORD(i[-1].SchedulerAssistLastYieldBoostTime) = -65536;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.KernelShadowStack, v0);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.1008);
  for ( j = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
        j != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.InGlobalUpdateVpThreadPriorityList;
        j = *(struct _KTHREAD **)&j->Header.Lock )
  {
    LODWORD(j[-1].SchedulerAssistLastYieldBoostTime) = -65536;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.1008, v2);
}
