/*
 * XREFs of HalpVpptInitializePhysicalTimer @ 0x1405832A4
 * Callers:
 *     HalpTimerInitializeVpptClockTimer @ 0x1405277F0 (HalpTimerInitializeVpptClockTimer.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1402C4DEC (HalpReleaseHighLevelLock.c)
 *     HalpTimerGetInternalData @ 0x140426EC0 (HalpTimerGetInternalData.c)
 *     HalpAcquireHighLevelLock @ 0x140426EEC (HalpAcquireHighLevelLock.c)
 *     ExtEnvCriticalFailure @ 0x14052DC00 (ExtEnvCriticalFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpVpptInitializePhysicalTimer()
{
  __int64 v0; // rcx
  __int64 InternalData; // rax
  __int64 v2; // rdx
  unsigned int v3; // ebx

  byte_140FBB3F8 = HalpAcquireHighLevelLock(&qword_140FBB3F0);
  if ( *(int **)&HalpVpptQueue != &HalpVpptQueue )
    ExtEnvCriticalFailure(v0, 0x115uLL, *(ULONG_PTR *)&HalpVpptPhysicalTimer, (ULONG_PTR)&HalpVpptQueue, 0LL);
  HalpVpptPhysicalTimerTarget = -1;
  InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
  v3 = guard_dispatch_icall_no_overrides(InternalData, v2);
  HalpReleaseHighLevelLock(&qword_140FBB3F0, byte_140FBB3F8);
  return v3;
}
