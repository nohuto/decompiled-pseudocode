/*
 * XREFs of KiIntSteerInit @ 0x140CD1CE0
 * Callers:
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140CD1C54 (KiIntSteerDetermineSteeringEnabled.c)
 *     IntPartGetClassAffinityGroup @ 0x140D08330 (IntPartGetClassAffinityGroup.c)
 *     IntPartCreate @ 0x140D08614 (IntPartCreate.c)
 */

__int64 __fastcall KiIntSteerInit(int a1)
{
  unsigned int v1; // ebx
  ULONG_PTR Pool2; // rax
  ULONG ActiveProcessorCount; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // eax

  v1 = 0;
  if ( a1 == 1 )
  {
    KiIntTrackRootCount = 0;
    qword_140F14EC8 = (__int64)&KiIntTrackRootList;
    KiIntTrackRootList = (__int64)&KiIntTrackRootList;
    KsepShimDbLock.InGlobalUpdateVpThreadPriorityList = 0LL;
    KsepShimDbLock.KernelShadowStack = (void *)2097153;
    memset_0(&KsepShimDbLock.KernelShadowStackInitial, 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)&KsepShimDbLock.KernelShadowStack, 0);
    *(_QWORD *)&KiIntSteerAffinitizedInterrupts.Count = 2097153LL;
    memset_0(&KiIntSteerAffinitizedInterrupts.8, 0, sizeof(KiIntSteerAffinitizedInterrupts.8));
    guard_dispatch_icall_no_overrides(39LL, 4LL);
    KiIntSteerEnabled = KiIntSteerDetermineSteeringEnabled();
    if ( KiIntSteerEnabled )
    {
      KiIntSteerDistributionContext = (void *)ExAllocatePool2(64LL, 0x204uLL, 0x6B725449u);
      Pool2 = ExAllocatePool2(64LL, 0x200uLL, 0x6B725449u);
      KiIntSteerPerProcIsrDpcTimeAffinitized = Pool2;
      if ( !KiIntSteerDistributionContext || !Pool2 )
        return (unsigned int)-1073741670;
    }
  }
  else if ( a1 == 2 && KiIntSteerEnabled )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
    KiInterruptEfficiencyClassGroup = IntPartGetClassAffinityGroup(v4, ActiveProcessorCount);
    if ( KiInterruptEfficiencyClassGroup )
    {
      v6 = IntPartCreate(v5, (KiInterruptSteeringFlags & 4) != 0);
      KiIntPartInitialized = 1;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
    return v6;
  }
  return v1;
}
