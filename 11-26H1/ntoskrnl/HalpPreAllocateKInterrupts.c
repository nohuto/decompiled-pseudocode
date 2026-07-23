/*
 * XREFs of HalpPreAllocateKInterrupts @ 0x140CB913C
 * Callers:
 *     HalpInterruptInitSystem @ 0x140BF1450 (HalpInterruptInitSystem.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14057F37C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 HalpPreAllocateKInterrupts()
{
  int MaximumRegisteredProcessorCount; // eax
  int v1; // ebx
  ULONG_PTR Pool2; // rax

  if ( !HalpKInterruptPostPhaseZero )
  {
    MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
    v1 = 16 * MaximumRegisteredProcessorCount;
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(4736 * MaximumRegisteredProcessorCount), 0x4B6C6148u);
    if ( !Pool2 )
    {
      HalpInterruptSetProblemEx(0LL, 30, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\kintrupt.c", 0xD8u);
      return 3221225495LL;
    }
    HalpKInterruptPostPhaseZero = Pool2;
    HalpKInterruptPostPhaseZeroTotal = v1;
  }
  return 0LL;
}
