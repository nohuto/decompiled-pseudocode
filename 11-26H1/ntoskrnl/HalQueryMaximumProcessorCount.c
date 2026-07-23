/*
 * XREFs of HalQueryMaximumProcessorCount @ 0x1404362A0
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140255B30 (PpmParkSteerInterrupts.c)
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x140436338 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     HalpTimerInitSystem @ 0x140579A20 (HalpTimerInitSystem.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14057F37C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x140580330 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpMmReservePageTablePages @ 0x1405804A4 (HalpMmReservePageTablePages.c)
 *     HalpEfiBugCheckAddPagesCallback @ 0x1405893F0 (HalpEfiBugCheckAddPagesCallback.c)
 *     HalpHvDiscover @ 0x140599910 (HalpHvDiscover.c)
 *     HalpHvTimerInitialize @ 0x140599A80 (HalpHvTimerInitialize.c)
 *     HalpTimerRegister @ 0x14059A8EC (HalpTimerRegister.c)
 *     HvlStartBootLogicalProcessors @ 0x1405BC1D8 (HvlStartBootLogicalProcessors.c)
 *     KiComputeEstimatedMaximumProcessors @ 0x1405ED2F0 (KiComputeEstimatedMaximumProcessors.c)
 *     RtlpHpHeapCreate @ 0x14063B29C (RtlpHpHeapCreate.c)
 *     HalpInterruptGetIrtInfo @ 0x1407840A8 (HalpInterruptGetIrtInfo.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407886E4 (HalpQueryAcpiResourceRequirements.c)
 *     EtwpInitLoggerContext @ 0x140AB20E0 (EtwpInitLoggerContext.c)
 *     VfAvlInitializeTreeEx @ 0x140C280DC (VfAvlInitializeTreeEx.c)
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     HalpInitializeInterrupts @ 0x140CB3DD8 (HalpInitializeInterrupts.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140CB47C8 (HalpInitializePmcCounterSetInfo.c)
 * Callees:
 *     HalpInterruptModel @ 0x140434CC0 (HalpInterruptModel.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 HalQueryMaximumProcessorCount()
{
  int v0; // eax
  unsigned int v1; // r8d
  unsigned int v2; // r10d
  ULONG_PTR BugCheckParameter4; // r10

  if ( !HalpInterruptMaxProcessors || !HalpNumaInitializationComplete )
  {
    HalpInterruptSetProblemEx(0LL, 11, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c", 0x2DFu);
    KeBugCheckEx(0x5Cu, 0x8000uLL, HalpInterruptLastProblem, 0LL, BugCheckParameter4);
  }
  v0 = HalpInterruptModel();
  if ( (v0 == 1 || v0 == 2 || (unsigned int)(v0 - 3) <= 1) && HalpNumaConfig )
    v2 = *(_DWORD *)(HalpNumaConfig + 60);
  if ( v2 < v1 )
    return v1;
  return v2;
}
