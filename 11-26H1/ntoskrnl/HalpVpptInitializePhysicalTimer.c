/*
 * XREFs of HalpVpptInitializePhysicalTimer @ 0x1405857C4
 * Callers:
 *     HalpTimerInitializeVpptClockTimer @ 0x140529E60 (HalpTimerInitializeVpptClockTimer.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     ExtEnvCriticalFailure @ 0x140530120 (ExtEnvCriticalFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpVpptInitializePhysicalTimer()
{
  __int64 v0; // rcx
  __int64 InternalData; // rax
  __int64 v2; // rdx
  unsigned int v3; // ebx

  byte_140FBB798 = HalpAcquireHighLevelLock(&qword_140FBB790);
  if ( *(int **)&HalpVpptQueue != &HalpVpptQueue )
    ExtEnvCriticalFailure(v0, 0x115uLL, *(ULONG_PTR *)&HalpVpptPhysicalTimer, (ULONG_PTR)&HalpVpptQueue, 0LL);
  HalpVpptPhysicalTimerTarget = -1;
  InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
  v3 = guard_dispatch_icall_no_overrides(InternalData, v2);
  HalpReleaseHighLevelLock(&qword_140FBB790, byte_140FBB798);
  return v3;
}
