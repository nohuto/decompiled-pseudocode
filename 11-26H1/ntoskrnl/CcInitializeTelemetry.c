/*
 * XREFs of CcInitializeTelemetry @ 0x140C7FA64
 * Callers:
 *     CcInitializeCacheManager @ 0x140C7F4E8 (CcInitializeCacheManager.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140B5F268 (CcSetTelemetryPeriodicTimer.c)
 */

char __fastcall CcInitializeTelemetry(int a1)
{
  char result; // al

  if ( a1 == 1 )
  {
    memset_0(&EmpParseLock.216, 0, 0x210uLL);
    KeQueryPerformanceCounter((PLARGE_INTEGER)&EmpParseLock.WaitListEntry.Blink);
    EmpParseLock.Teb = (void *)MEMORY[0xFFFFF78000000014];
    EmpParseLock.Queue = (_DISPATCHER_HEADER *volatile)MEMORY[0xFFFFF78000000014];
    EmpParseLock.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)864000000000LL;
    result = 0;
    *(__m128i *)&EmpParseLock.RelativeTimerBias = _mm_load_si128((const __m128i *)&_xmm);
    if ( (unsigned int)CcDisableTelemetryRegKeyAtInit <= 1 )
      BYTE1(EmpParseLock.Timer.DueTime.LowPart) = CcDisableTelemetryRegKeyAtInit != 0;
    *(_QWORD *)&EmpParseLock.SchedulerApc.Type = 8LL;
    *(_QWORD *)&EmpParseLock.SchedulerApcFill5[80] = CcTelemetryPeriodicTimerCallback;
    *(_QWORD *)&EmpParseLock.SuspendEvent.Header.Lock = &EmpParseLock.SchedulerApc.SystemArgument1;
    EmpParseLock.SchedulerApc.ApcListEntry.Flink = (struct _LIST_ENTRY *)&EmpParseLock.SchedulerApcFill5[8];
    EmpParseLock.SchedulerApc.Thread = (struct _KTHREAD *)&EmpParseLock.SchedulerApcFill5[8];
    EmpParseLock.SavedApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)CcTelemetryPeriodicTimerDpc;
    EmpParseLock.SchedulerApc.SystemArgument1 = 0LL;
    EmpParseLock.SchedulerApc.ApcListEntry.Blink = 0LL;
    *(_DWORD *)&EmpParseLock.SchedulerApcFill5[60] = 0;
    *(_WORD *)&EmpParseLock.SchedulerApcFill5[56] = 0;
    EmpParseLock.SchedulerApcFill3[59] = 0;
    *(_DWORD *)&EmpParseLock.AffinityPrimaryGroup = 275;
    EmpParseLock.SavedApcState.ApcListHead[1].Flink = 0LL;
    *(_QWORD *)&EmpParseLock.SavedApcStateFill[40] = 0LL;
    EmpParseLock.SavedApcState.ApcListHead[0].Flink = 0LL;
  }
  else
  {
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06AF8, 0LL, 0LL);
    result = 0;
    LOBYTE(EmpParseLock.WaitListEntry.Flink) = 1;
    if ( !BYTE1(EmpParseLock.Timer.DueTime.LowPart) )
      return CcSetTelemetryPeriodicTimer((LARGE_INTEGER)-9000000000LL);
  }
  return result;
}
