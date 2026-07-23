/*
 * XREFs of HalpPostSleepMP @ 0x140BF2EF0
 * Callers:
 *     HaliAcpiSleep @ 0x1405A4F20 (HaliAcpiSleep.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     HalpInterruptEnableNmi @ 0x140435DF0 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1404360DC (HalpInterruptEnablePerformanceEvents.c)
 *     HalpRestartProfiling @ 0x1404ECC30 (HalpRestartProfiling.c)
 *     HalpMcUpdateMicrocode @ 0x14050A2B0 (HalpMcUpdateMicrocode.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x14050CBD4 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpTimerRestoreProcessorCounter @ 0x14050E79C (HalpTimerRestoreProcessorCounter.c)
 *     HalpTimerMarkWake @ 0x14052CBF4 (HalpTimerMarkWake.c)
 *     HalpHvIsReferenceTscConfigured @ 0x140530304 (HalpHvIsReferenceTscConfigured.c)
 *     HalpTimerReinitializeThisProcessor @ 0x14057A1F0 (HalpTimerReinitializeThisProcessor.c)
 *     HalpInterruptRestoreClock @ 0x14057FDE8 (HalpInterruptRestoreClock.c)
 *     HalpTscInitializeSynchronizationContext @ 0x1405862A8 (HalpTscInitializeSynchronizationContext.c)
 *     HalpTscSynchronizationWorker @ 0x140586560 (HalpTscSynchronizationWorker.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x1405882D8 (HalpHvSetMachineCheckHandlerState.c)
 *     HalpSetResumeTime @ 0x140596FB4 (HalpSetResumeTime.c)
 *     KeLoadMTRR @ 0x140C0CF60 (KeLoadMTRR.c)
 *     HalpMcaResumeProcessorConfig @ 0x140C109F0 (HalpMcaResumeProcessorConfig.c)
 *     HalpErrataApplyPerProcessor @ 0x140C12DD0 (HalpErrataApplyPerProcessor.c)
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
    qword_140F882D8 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (_DWORD)v14 )
  {
    HalpInterruptReinitializeThisProcessor();
    while ( (_DWORD)v14 != dword_140F87A48 )
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
    *(_DWORD *)&stru_140E3EAA8.SavedApcStateFill[16] = 0;
    HIDWORD(stru_140E3EAA8.NpxState) = a1 - 1;
    stru_140E3EAA8.SavedApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)&stru_140E3EAA8.536;
    stru_140E3EAA8.NextProcessor = 0;
    if ( !IsReferenceTscConfigured )
      HalpTscInitializeSynchronizationContext((__int64)&stru_140E3EAA8.Process, 0, 0LL, &v13);
  }
  _InterlockedIncrement(&dword_140F87A48);
  while ( dword_140F87A48 != a1 )
    ;
  if ( !(_DWORD)v14 && HalpHvWheaEnlightenedCpuManager && HalpMceEnabled )
    HalpHvSetMachineCheckHandlerState();
  if ( !(_DWORD)v14 )
    HalpSetResumeTime(0LL, 1LL);
  HalpTimerMarkWake();
  v9 = (unsigned int)v14;
  if ( !(_DWORD)v14 )
    qword_140F882E0 = KeQueryPerformanceCounter(0LL).QuadPart;
  HalpTimerRestoreProcessorCounter(v9, v8);
  if ( !(_DWORD)v14 )
    qword_140F882E8 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(_DWORD)v14 )
  {
    LODWORD(HalpDeviceBlockUnblockPushLock.LastXStateSaveDebugInfo) = 1;
    HalpSetResumeTime(0LL, 2LL);
    HalpInterruptRestoreClock();
    HalpHiberInProgress = 0;
    stru_140E3EAA8.QueuePriority = 0;
  }
  _InterlockedIncrement((volatile signed __int32 *)&stru_140E3EAA8.SavedApcStateFill[16]);
  while ( *(_DWORD *)&stru_140E3EAA8.SavedApcStateFill[16] != a1 )
    ;
  while ( stru_140E3EAA8.QueuePriority < (int)v14 )
    ;
  if ( !(_DWORD)v14 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  HalpMcUpdateMicrocode();
  if ( !(_DWORD)v14 )
    qword_140F882F0 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart;
  HalpErrataApplyPerProcessor();
  _InterlockedIncrement(&stru_140E3EAA8.QueuePriority);
  while ( stru_140E3EAA8.QueuePriority != a1 )
    ;
  HalpRestartProfiling(v11, v10);
  HalpInterruptEnableNmi();
  KeLoadMTRR(&stru_140E3EAA8.NpxState);
  if ( !IsReferenceTscConfigured )
    HalpTscSynchronizationWorker((ULONG_PTR)&stru_140E3EAA8.Process);
  HalpMcaResumeProcessorConfig(1LL);
  result.QuadPart = (unsigned int)v14;
  if ( !(_DWORD)v14 )
  {
    result = KeQueryPerformanceCounter(0LL);
    qword_140F882F8 = result.QuadPart;
  }
  return result;
}
