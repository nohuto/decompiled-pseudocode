/*
 * XREFs of HalpTimerMeasureProcessorsWorker @ 0x140588CB0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     HalpFindTimer @ 0x140583D54 (HalpFindTimer.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x140584520 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x140585238 (HalpTimerReadTimerPairWithLatencyLimit.c)
 */

ULONG_PTR __fastcall HalpTimerMeasureProcessorsWorker(ULONG_PTR Argument)
{
  int v1; // ebx
  bool v3; // r15
  ULONG ActiveProcessorCount; // eax
  KPCR *Pcr; // r14
  ULONG v6; // esi
  ULONG_PTR *Timer; // rbx
  unsigned __int64 v8; // rcx
  unsigned int i; // ecx
  unsigned int Latency; // esi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  LARGE_INTEGER v15[2]; // [rsp+30h] [rbp-10h] BYREF
  LARGE_INTEGER v16; // [rsp+80h] [rbp+40h] BYREF
  LARGE_INTEGER v17; // [rsp+88h] [rbp+48h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+50h] BYREF
  LARGE_INTEGER v19; // [rsp+98h] [rbp+58h] BYREF

  v1 = *(_DWORD *)(Argument + 16);
  v19.QuadPart = 0LL;
  v16.QuadPart = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v15[0].QuadPart = 0LL;
  v17.QuadPart = 0LL;
  v3 = HalpDisableInterrupts();
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  Pcr = KeGetPcr();
  v6 = ActiveProcessorCount;
  Timer = HalpFindTimer(v1, 0, 0, 0, 1);
  v8 = __readcr2();
  __writecr2(v8);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument, 0xFFFFFFFF) != 1 )
  {
    do
      _mm_pause();
    while ( *(_DWORD *)Argument );
  }
  if ( KeGetCurrentPrcb()->Number )
  {
    for ( i = KeGetCurrentPrcb()->Number; *(_DWORD *)(Argument + 4) != i; i = KeGetCurrentPrcb()->Number )
      _mm_pause();
    KeQueryPerformanceCounter(&PerformanceFrequency);
    Latency = HalpTimerDetermineValidTimerPairReadLatency((__int64)Timer, HalpPerformanceCounter);
    HalpTimerReadTimerPairWithLatencyLimit(Latency, (__int64)Timer, HalpPerformanceCounter, v15, &v17);
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 4));
    while ( *(_DWORD *)(Argument + 8) != KeGetCurrentPrcb()->Number )
      _mm_pause();
    HalpTimerReadTimerPairWithLatencyLimit(Latency, (__int64)Timer, HalpPerformanceCounter, &v19, &v16);
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 8));
    do
      _mm_pause();
    while ( !*(_DWORD *)(Argument + 12) );
    v11 = HalpTimerScaleCounter(v16.QuadPart - v17.QuadPart, PerformanceFrequency.QuadPart, 1000000LL);
    v12 = 1000000 * (v19.QuadPart - v15[0].QuadPart) / v11;
    *(_QWORD *)Pcr->HalReserved = 10000 * ((v12 + 5000) / 0x2710);
    v13 = 1000000 * ((v12 + 500000) / 0xF4240);
    Pcr->StallScaleFactor = v13 / 0xF4240;
    KeGetCurrentPrcb()->MHz = v13 / 0xF4240;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 4));
    do
      _mm_pause();
    while ( *(_DWORD *)(Argument + 4) != v6 );
    KeStallExecutionProcessor(0x1E848u);
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 8));
    do
      _mm_pause();
    while ( *(_DWORD *)(Argument + 8) != v6 );
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 12));
  }
  if ( v3 )
    _enable();
  return 0LL;
}
