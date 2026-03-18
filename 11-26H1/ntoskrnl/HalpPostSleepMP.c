/*
 * XREFs of HalpPostSleepMP @ 0x140BECEF0
 * Callers:
 *     HaliAcpiSleep @ 0x1405A2710 (HaliAcpiSleep.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1404298AC (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptEnableNmi @ 0x140429E90 (HalpInterruptEnableNmi.c)
 *     HalpRestartProfiling @ 0x1404F3650 (HalpRestartProfiling.c)
 *     HalpMcUpdateMicrocode @ 0x140510840 (HalpMcUpdateMicrocode.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x140513164 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpTimerRestoreProcessorCounter @ 0x140514D2C (HalpTimerRestoreProcessorCounter.c)
 *     HalpTimerMarkWake @ 0x14052A6D4 (HalpTimerMarkWake.c)
 *     HalpHvIsReferenceTscConfigured @ 0x14052DDE4 (HalpHvIsReferenceTscConfigured.c)
 *     HalpTimerReinitializeThisProcessor @ 0x140577CC0 (HalpTimerReinitializeThisProcessor.c)
 *     HalpInterruptRestoreClock @ 0x14057D8C8 (HalpInterruptRestoreClock.c)
 *     HalpTscInitializeSynchronizationContext @ 0x140583D88 (HalpTscInitializeSynchronizationContext.c)
 *     HalpTscSynchronizationWorker @ 0x140584040 (HalpTscSynchronizationWorker.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x140585DB8 (HalpHvSetMachineCheckHandlerState.c)
 *     HalpSetResumeTime @ 0x140594834 (HalpSetResumeTime.c)
 *     KeLoadMTRR @ 0x140C06D50 (KeLoadMTRR.c)
 *     HalpMcaResumeProcessorConfig @ 0x140C0A7E0 (HalpMcaResumeProcessorConfig.c)
 *     HalpErrataApplyPerProcessor @ 0x140C0CBC0 (HalpErrataApplyPerProcessor.c)
 */

LARGE_INTEGER __fastcall HalpPostSleepMP(ULONG a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 Number; // rdx
  bool IsReferenceTscConfigured; // di
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  LARGE_INTEGER result; // rax
  ULONG v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+38h] [rbp+10h]

  v14 = a2;
  v13 = a1;
  CurrentPrcb = KeGetCurrentPrcb();
  PerformanceCounter.QuadPart = 0LL;
  Number = CurrentPrcb->Number;
  LODWORD(v14) = CurrentPrcb->Number;
  if ( !(_DWORD)v14 )
    qword_140F87ED8 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (_DWORD)v14 )
  {
    HalpInterruptReinitializeThisProcessor();
    while ( (_DWORD)v14 != dword_140F87668 )
      _mm_pause();
    __writecr8(0xFuLL);
    HalpTimerReinitializeThisProcessor();
  }
  if ( (HalpFeatureBits & 0xC) != 0 )
    HalpMcaResumeProcessorConfig(0LL);
  if ( (HalpFeatureBits & 1) != 0 )
    HalpInterruptEnablePerformanceEvents(0LL, Number, a3);
  IsReferenceTscConfigured = HalpHvIsReferenceTscConfigured();
  if ( !(_DWORD)v14 )
  {
    *(_DWORD *)&stru_140E3E928.SavedApcStateFill[16] = 0;
    HIDWORD(stru_140E3E928.NpxState) = a1 - 1;
    stru_140E3E928.SavedApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)&stru_140E3E928.536;
    stru_140E3E928.NextProcessor = 0;
    if ( !IsReferenceTscConfigured )
      HalpTscInitializeSynchronizationContext((__int64)&stru_140E3E928.Process, 0, 0LL, &v13);
  }
  _InterlockedIncrement(&dword_140F87668);
  while ( dword_140F87668 != a1 )
    ;
  if ( !(_DWORD)v14 && HalpHvWheaEnlightenedCpuManager && HalpMceEnabled )
    HalpHvSetMachineCheckHandlerState();
  if ( !(_DWORD)v14 )
    HalpSetResumeTime(0LL, 1LL);
  HalpTimerMarkWake();
  v9 = (unsigned int)v14;
  if ( !(_DWORD)v14 )
    qword_140F87EE0 = KeQueryPerformanceCounter(0LL).QuadPart;
  HalpTimerRestoreProcessorCounter(v9, v8);
  if ( !(_DWORD)v14 )
    qword_140F87EE8 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(_DWORD)v14 )
  {
    HalpDeviceBlockUnblockPushLock.NextProcessor = 1;
    HalpSetResumeTime(0LL, 2LL);
    HalpInterruptRestoreClock();
    HalpHiberInProgress = 0;
    stru_140E3E928.QueuePriority = 0;
  }
  _InterlockedIncrement((volatile signed __int32 *)&stru_140E3E928.SavedApcStateFill[16]);
  while ( *(_DWORD *)&stru_140E3E928.SavedApcStateFill[16] != a1 )
    ;
  while ( stru_140E3E928.QueuePriority < (int)v14 )
    ;
  if ( !(_DWORD)v14 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  HalpMcUpdateMicrocode();
  if ( !(_DWORD)v14 )
    qword_140F87EF0 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart;
  HalpErrataApplyPerProcessor();
  _InterlockedIncrement(&stru_140E3E928.QueuePriority);
  while ( stru_140E3E928.QueuePriority != a1 )
    ;
  HalpRestartProfiling(v11, v10);
  HalpInterruptEnableNmi();
  KeLoadMTRR(&stru_140E3E928.NpxState);
  if ( !IsReferenceTscConfigured )
    HalpTscSynchronizationWorker((ULONG_PTR)&stru_140E3E928.Process);
  HalpMcaResumeProcessorConfig(1LL);
  result.QuadPart = (unsigned int)v14;
  if ( !(_DWORD)v14 )
  {
    result = KeQueryPerformanceCounter(0LL);
    qword_140F87EF8 = result.QuadPart;
  }
  return result;
}
