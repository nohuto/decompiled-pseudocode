/*
 * XREFs of CcInitializeTelemetry @ 0x140C85A64
 * Callers:
 *     CcInitializeCacheManager @ 0x140C854E8 (CcInitializeCacheManager.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140B623E8 (CcSetTelemetryPeriodicTimer.c)
 */

char __fastcall CcInitializeTelemetry(int a1)
{
  char result; // al

  if ( a1 == 1 )
  {
    memset_0(&EmpParseLock.SwapListEntry + 1, 0, 0x210uLL);
    KeQueryPerformanceCounter((PLARGE_INTEGER)&EmpParseLock.Queue);
    EmpParseLock.RelativeTimerBias = MEMORY[0xFFFFF78000000014];
    EmpParseLock.Teb = (void *)MEMORY[0xFFFFF78000000014];
    EmpParseLock.Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)864000000000LL;
    result = 0;
    *(__m128i *)&EmpParseLock.Timer.Header.Lock = _mm_load_si128((const __m128i *)&_xmm);
    if ( (unsigned int)CcDisableTelemetryRegKeyAtInit <= 1 )
      BYTE1(EmpParseLock.Timer.TimerListEntry.Flink) = CcDisableTelemetryRegKeyAtInit != 0;
    EmpParseLock.SchedulerApc.Thread = (struct _KTHREAD *)8;
    *(_QWORD *)&EmpParseLock.SuspendEvent.Header.Lock = CcTelemetryPeriodicTimerCallback;
    EmpParseLock.SuspendEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&EmpParseLock.SchedulerApcFill5[72];
    EmpParseLock.SchedulerApc.ApcListEntry.Blink = &EmpParseLock.SchedulerApc.ApcListEntry;
    EmpParseLock.SchedulerApc.ApcListEntry.Flink = &EmpParseLock.SchedulerApc.ApcListEntry;
    EmpParseLock.SavedApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)CcTelemetryPeriodicTimerDpc;
    EmpParseLock.SchedulerApc.SystemArgument2 = 0LL;
    EmpParseLock.SchedulerApc.Reserved[0] = 0LL;
    *(_DWORD *)&EmpParseLock.SchedulerApcFill5[68] = 0;
    *(_WORD *)&EmpParseLock.SchedulerApcFill5[64] = 0;
    EmpParseLock.SchedulerApcFill4[67] = 0;
    LODWORD(EmpParseLock.NpxState) = 275;
    EmpParseLock.SavedApcState.ApcListHead[1].Blink = 0LL;
    *(_QWORD *)&EmpParseLock.SchedulerApc.Type = 0LL;
    EmpParseLock.SavedApcState.ApcListHead[0].Blink = 0LL;
  }
  else
  {
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06AF8, 0LL, 0LL);
    result = 0;
    *((_BYTE *)&EmpParseLock.SwapListEntry + 8) = 1;
    if ( !BYTE1(EmpParseLock.Timer.TimerListEntry.Flink) )
      return CcSetTelemetryPeriodicTimer((LARGE_INTEGER)-9000000000LL);
  }
  return result;
}
