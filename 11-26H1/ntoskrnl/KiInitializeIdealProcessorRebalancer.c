/*
 * XREFs of KiInitializeIdealProcessorRebalancer @ 0x1405F7538
 * Callers:
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KiInitializeTimer2 @ 0x14044E75C (KiInitializeTimer2.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 KiInitializeIdealProcessorRebalancer()
{
  __int64 result; // rax
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  memset_0(&KiIdealProcessorRebalancerContext, 0, 0xB8uLL);
  KiInitializeTimer2(
    (unsigned __int64)&KiIdealProcessorRebalancerContext,
    (__int64)KiIdealProcessorRebalancerTimerCallback,
    0LL,
    8);
  stru_140E16388.WorkerRoutine = KiIdealProcessorRebalancerWorker;
  result = (unsigned int)KiCacheAwareScheduling;
  stru_140E16388.Parameter = 0LL;
  stru_140E16388.List.Flink = 0LL;
  SpinLock = 0LL;
  if ( (KiCacheAwareScheduling & 8) != 0 )
  {
    v1[0] = 0LL;
    v1[1] = -1LL;
    return KeSetTimer2((__int64)&KiIdealProcessorRebalancerContext, -10000000LL, 10000000LL, (__int64)v1);
  }
  return result;
}
