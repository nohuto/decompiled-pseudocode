/*
 * XREFs of HalQueryMaximumProcessorCount @ 0x1404FB520
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402541D0 (PpmParkSteerInterrupts.c)
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x1404FB490 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     HalpTimerInitSystem @ 0x1405774F0 (HalpTimerInitSystem.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14057CE5C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x14057DE10 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpMmReservePageTablePages @ 0x14057DF84 (HalpMmReservePageTablePages.c)
 *     HalpEfiBugCheckAddPagesCallback @ 0x140586ED0 (HalpEfiBugCheckAddPagesCallback.c)
 *     HalpHvDiscover @ 0x140597190 (HalpHvDiscover.c)
 *     HalpHvTimerInitialize @ 0x140597300 (HalpHvTimerInitialize.c)
 *     HalpTimerRegister @ 0x14059816C (HalpTimerRegister.c)
 *     HvlStartBootLogicalProcessors @ 0x1405B9968 (HvlStartBootLogicalProcessors.c)
 *     KiComputeEstimatedMaximumProcessors @ 0x1405EA980 (KiComputeEstimatedMaximumProcessors.c)
 *     RtlpHpHeapCreate @ 0x140638298 (RtlpHpHeapCreate.c)
 *     HalpInterruptGetIrtInfo @ 0x1407815A8 (HalpInterruptGetIrtInfo.c)
 *     HalpQueryAcpiResourceRequirements @ 0x140785BB4 (HalpQueryAcpiResourceRequirements.c)
 *     EtwpInitLoggerContext @ 0x140A6DD54 (EtwpInitLoggerContext.c)
 *     VfAvlInitializeTreeEx @ 0x140C220CC (VfAvlInitializeTreeEx.c)
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     HalpInitializeInterrupts @ 0x140CADD98 (HalpInitializeInterrupts.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140CAE788 (HalpInitializePmcCounterSetInfo.c)
 * Callees:
 *     HalpInterruptModel @ 0x140427BB0 (HalpInterruptModel.c)
 *     HalpInterruptSetProblemEx @ 0x14042A15C (HalpInterruptSetProblemEx.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
