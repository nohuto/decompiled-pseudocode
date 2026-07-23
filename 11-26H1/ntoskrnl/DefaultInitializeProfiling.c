/*
 * XREFs of DefaultInitializeProfiling @ 0x140BF0D10
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     InitCounterGroupAps @ 0x140BF0DF8 (InitCounterGroupAps.c)
 *     InitCounterGroupBsp @ 0x140BF0EC0 (InitCounterGroupBsp.c)
 */

__int64 DefaultInitializeProfiling()
{
  unsigned int Number; // ebx

  Number = KeGetPcr()->Prcb.Number;
  if ( Number )
  {
    InitCounterGroupAps(1LL, Number);
    InitCounterGroupAps(0LL, Number);
    InitCounterGroupAps(100LL, Number);
    InitCounterGroupAps(101LL, Number);
  }
  else
  {
    HalpProfileSourceDescriptorListLock = 0LL;
    HalpProfileIntervalLimits = (__int64)DefaultProfileIntervalLimits;
    HalpProfileSourceDescriptorCount = 1;
    qword_140E02508 = (__int64)&HalpProfileSourceDescriptorListHead;
    qword_140E02510 = (__int64)&HalpProfileSourceDescriptorListHead;
    HalpProfileSourceDescriptorListHead = (__int64)&qword_140E02508;
    qword_140FBC2E8 = (__int64)&qword_140E02508;
    InitCounterGroupBsp(1LL, 1LL);
    InitCounterGroupBsp(0LL, 0LL);
    InitCounterGroupBsp(100LL, 0LL);
    InitCounterGroupBsp(101LL, 0LL);
  }
  return KeAddProcessorAffinityEx(word_140E02520, Number);
}
