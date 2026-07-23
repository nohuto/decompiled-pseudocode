/*
 * XREFs of ExDisableAllLookasideLists @ 0x1406D2B44
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140C265DC (VfInitSystemNoRebootNeeded.c)
 *     KasanInitSystem @ 0x140CCDE10 (KasanInitSystem.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void ExDisableAllLookasideLists()
{
  KIRQL v0; // al
  struct _KTHREAD *i; // rdx
  KIRQL v2; // al
  struct _KTHREAD *j; // rdx

  ExMinimumLookasideDepth = 0;
  v0 = KeAcquireSpinLockRaiseToDpc(&ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit.AllFields);
  for ( i = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.WpsFeedback;
        i != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.WpsFeedback;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    LODWORD(i[-1].SchedulerAssistLastYieldBoostTime) = -65536;
  }
  KeReleaseSpinLock(&ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit.AllFields, v0);
  v2 = KeAcquireSpinLockRaiseToDpc(&ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask);
  for ( j = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.Spare35[1];
        j != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.Spare35[1];
        j = *(struct _KTHREAD **)&j->Header.Lock )
  {
    LODWORD(j[-1].SchedulerAssistLastYieldBoostTime) = -65536;
  }
  KeReleaseSpinLock(&ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask, v2);
}
