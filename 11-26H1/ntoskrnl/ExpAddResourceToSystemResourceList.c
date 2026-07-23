/*
 * XREFs of ExpAddResourceToSystemResourceList @ 0x14021B4EC
 * Callers:
 *     CcAllocateInitializeBcb @ 0x140219DA4 (CcAllocateInitializeBcb.c)
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     RtlpCreateHeap @ 0x1404DCF18 (RtlpCreateHeap.c)
 *     DifExInitializeResourceLiteWrapper @ 0x140655FF0 (DifExInitializeResourceLiteWrapper.c)
 *     ExInitializeResourceLite2 @ 0x1406D2760 (ExInitializeResourceLite2.c)
 *     FsRtlInitSystem @ 0x140CBEAB0 (FsRtlInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 *     PnpInitPhase0 @ 0x140CC97F8 (PnpInitPhase0.c)
 *     PiDeviceDependencyInit @ 0x140CC9B0C (PiDeviceDependencyInit.c)
 *     PpInitializeBootDDB @ 0x140CCB264 (PpInitializeBootDDB.c)
 *     PiSwInit @ 0x140CCC9EC (PiSwInit.c)
 *     PiDmaGuardQueueInitialize @ 0x140CCDCAC (PiDmaGuardQueueInitialize.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 *     PopInitializeAdpm @ 0x140CDCA70 (PopInitializeAdpm.c)
 *     PopDripsWatchdogInitialize @ 0x140CDCC40 (PopDripsWatchdogInitialize.c)
 *     SepInitializeWorkList @ 0x140CE0EAC (SepInitializeWorkList.c)
 *     SepRmDbInitialization @ 0x140CE48BC (SepRmDbInitialization.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140CE6318 (WmipGetSMBiosFromLoaderBlock.c)
 *     ExpInitSystemPhase0 @ 0x140CEA460 (ExpInitSystemPhase0.c)
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     DifObjTrkInsertItem @ 0x14064EAB0 (DifObjTrkInsertItem.c)
 *     DifIsPluginEnabled @ 0x1406503B0 (DifIsPluginEnabled.c)
 */

__int64 __fastcall ExpAddResourceToSystemResourceList(_KSWAPPABLE_PAGE *a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  _KSWAPPABLE_PAGE *SchedulerSharedSwappablePage; // rcx
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  unsigned int v7; // r10d
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ExAcquireSpinLockExclusive(&ExpResourceSpinLock);
  SchedulerSharedSwappablePage = ExSaPageGroupDescriptorArrayLock.SchedulerSharedSwappablePage;
  v5 = v2;
  result = (__int64)&ExSaPageGroupDescriptorArrayLock.ResourceIndex;
  if ( ExSaPageGroupDescriptorArrayLock.SchedulerSharedSwappablePage->RegionStart != &ExSaPageGroupDescriptorArrayLock.ResourceIndex )
    __fastfail(3u);
  a1->RegionStart = &ExSaPageGroupDescriptorArrayLock.ResourceIndex;
  a1->TransitionLock = (unsigned __int64)SchedulerSharedSwappablePage;
  SchedulerSharedSwappablePage->RegionStart = a1;
  ExSaPageGroupDescriptorArrayLock.SchedulerSharedSwappablePage = a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    ExpResourceSpinLock = 0;
  else
    result = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = v5;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  __writecr8(v5);
  if ( KernelVerifier == 1 )
  {
    result = DifIsPluginEnabled(48LL);
    if ( (_BYTE)result )
      return DifObjTrkInsertItem(v7, a1, v7 + 56, 0LL);
  }
  return result;
}
