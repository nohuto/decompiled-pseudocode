/*
 * XREFs of HalpTimerDetermineValidTimerPairReadLatency @ 0x140584520
 * Callers:
 *     HalpTimerMeasureFrequencies @ 0x1405847E8 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x140588CB0 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerDetermineValidTimerPairReadLatency(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 InternalData; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax

  v4 = -1;
  v5 = 25LL;
  do
  {
    v6 = __readcr2();
    __writecr2(v6);
    v7 = __rdtsc();
    v8 = __readcr2();
    __writecr2(v8);
    if ( a1 == HalpPerformanceCounter && HalpTimerFrequenciesMeasured )
    {
      KeQueryPerformanceCounter(0LL);
    }
    else
    {
      InternalData = HalpTimerGetInternalData(a1);
      guard_dispatch_icall_no_overrides(InternalData, v10);
    }
    v11 = __readcr2();
    __writecr2(v11);
    if ( a2 == HalpPerformanceCounter && HalpTimerFrequenciesMeasured )
    {
      KeQueryPerformanceCounter(0LL);
    }
    else
    {
      v12 = HalpTimerGetInternalData(a2);
      guard_dispatch_icall_no_overrides(v12, v13);
    }
    v14 = __readcr2();
    __writecr2(v14);
    v15 = __rdtsc();
    v16 = __readcr2();
    __writecr2(v16);
    v17 = (((unsigned __int64)HIDWORD(v15) << 32) | (unsigned int)v15) - v7;
    if ( v17 >= v4 )
      LODWORD(v17) = v4;
    v4 = v17;
    --v5;
  }
  while ( v5 );
  return (unsigned int)(4 * v17);
}
