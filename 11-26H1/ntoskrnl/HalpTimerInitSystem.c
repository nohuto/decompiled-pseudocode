/*
 * XREFs of HalpTimerInitSystem @ 0x140579A20
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpInterruptModel @ 0x140434CC0 (HalpInterruptModel.c)
 *     HalQueryMaximumProcessorCount @ 0x1404362A0 (HalQueryMaximumProcessorCount.c)
 *     KeIpiGenericCall @ 0x1404A43F0 (KeIpiGenericCall.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1404DEEA0 (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x1404EF7A0 (HalpTimerQueryAndResetRtcErrors.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpInitializePnTimers @ 0x140579104 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x1405791C8 (HalpInitializeTimers.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x14057943C (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x140579EAC (HalpTimerInitializeEarlyStallSource.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x14057A288 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpTimerInitializeClock @ 0x14058396C (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeClockPn @ 0x140583B58 (HalpTimerInitializeClockPn.c)
 *     HalpTimerInitPowerManagement @ 0x1405846BC (HalpTimerInitPowerManagement.c)
 *     HalpTimerRegisterQueryCounterHandler @ 0x14058538C (HalpTimerRegisterQueryCounterHandler.c)
 *     HalpTscFallbackToPlatformSource @ 0x140586204 (HalpTscFallbackToPlatformSource.c)
 *     HalpTscReserveResources @ 0x140586310 (HalpTscReserveResources.c)
 *     HalpTimerInitializeProfiling @ 0x1405869C8 (HalpTimerInitializeProfiling.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x140586D60 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpTimerConfigureQpcBypass @ 0x1405871F8 (HalpTimerConfigureQpcBypass.c)
 *     HalpTimerSaveProcessorFrequency @ 0x140587318 (HalpTimerSaveProcessorFrequency.c)
 *     HalpTimerInitializeSystemWatchdog @ 0x140587924 (HalpTimerInitializeSystemWatchdog.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HalpTimerTraceTimingHardware @ 0x140782A5C (HalpTimerTraceTimingHardware.c)
 *     HalpTscReportSyncStatus @ 0x1407844C0 (HalpTscReportSyncStatus.c)
 *     HalpTimerWatchdogLogReset @ 0x140784620 (HalpTimerWatchdogLogReset.c)
 */

__int64 __fastcall HalpTimerInitSystem(int a1, __int64 a2, __int64 a3)
{
  unsigned int inited; // ebx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rcx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  const EVENT_DESCRIPTOR *v13; // rcx
  __int64 v14; // rcx
  unsigned int MaximumProcessorCount; // eax
  __int64 v16; // rcx
  int v18; // eax
  __int64 v19; // rdx
  unsigned __int8 v20; // cl
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR Context[2]; // [rsp+38h] [rbp-30h] BYREF
  int v23; // [rsp+48h] [rbp-20h]

  inited = 0;
  v5 = a1 - 1;
  if ( v5 )
  {
    v6 = v5 - 7;
    if ( !v6 )
    {
      v20 = HalpDeviceBlockUnblockPushLock.SavedApcStateFill[20];
      if ( !HalpDeviceBlockUnblockPushLock.SavedApcStateFill[20] )
        v20 = 50;
      HalpCmosCenturyOffset = v20;
      off_140E00CF8 = HalpTimerQueryRtcErrors;
      return inited;
    }
    v7 = v6 - 6;
    if ( !v7 )
    {
      if ( (unsigned int)HalpInterruptModel() == 1 )
        off_140E00910[0] = HalpTscSynchronization;
      off_140E00AD8[0] = HalpTimerClockActivate;
      off_140E00AE0[0] = HalpTimerClockInitialize;
      off_140E00AE8[0] = HalpTimerClockStop;
      off_140E00AF0[0] = (__int64 (__fastcall *)())HalpTimerClockArm;
      off_140E00AD0[0] = HalpTimerGetClockConfiguration;
      off_140E00AF8[0] = HalpTimerOnlyClockInterruptPending;
      off_140E00A50 = HalpTimerQueryCycleCounter;
      off_140E00C60 = (__int64 (__fastcall *)())HalpTimerGetReferencePage;
      off_140E00B88[0] = (__int64 (__fastcall *)())HalpTimerConvertAuxiliaryCounterToPerformanceCounter;
      off_140E00B80[0] = (__int64 (__fastcall *)())HalpTimerConvertPerformanceCounterToAuxiliaryCounter;
      off_140E00B90[0] = HalpTimerQueryAuxiliaryCounterFrequency;
      HalpInitializeTimers(a3);
      ((void (*)(void))HalpTimerSaveProcessorFrequency)();
      HalpTimerInitializeClock();
      KiProfileIrql = 15;
      v18 = HalpTimerInitializeProfiling();
      inited = v18;
      if ( v18 < 0 )
        KeBugCheckEx(0x5Cu, 0x110uLL, v18, 0LL, 0LL);
      HalpTimerPropagateQpcBiasUpdate(HalpPerformanceCounter, v19);
      return inited;
    }
    v8 = v7 - 3;
    if ( v8 )
    {
      v9 = (unsigned int)(v8 - 2);
      if ( !(_DWORD)v9 )
      {
        if ( !qword_140FBB3E8 )
        {
          v9 = 16LL;
          __writemsr(0x10u, 0LL);
        }
        HalpTimerSaveProcessorFrequency(v9);
        HalpInitializePnTimers();
        HalpTimerInitializeClockPn();
        return (unsigned int)HalpTimerInitializeProfiling();
      }
      v10 = v9 - 2;
      if ( v10 )
      {
        v11 = v10 - 4;
        if ( v11 )
        {
          v12 = v11 - 4;
          if ( v12 )
          {
            if ( v12 == 3 )
            {
              off_140E00BA8[0] = (__int64 (__fastcall *)())HalpTimerQueryAndResetRtcErrors;
              HalpTimerQueryAndResetRtcErrors(0, 1);
              HalpTimerTraceTimingHardware();
              HalpTscReportSyncStatus();
            }
          }
          else
          {
            inited = HalpTimerInitPowerManagement();
            HalpTimerWatchdogLogReset();
          }
        }
        else if ( HalpWatchdogTimer )
        {
          HalpTimerInitializeSystemWatchdog();
        }
        return inited;
      }
      HalpTimerSchedulePeriodicQueries();
      HalpTimerConfigureQpcBypass();
      off_140E00C40[0] = HalpTimerQueryHostPerformanceCounter;
      if ( (unsigned int)HalpInterruptModel() == 1 )
      {
        if ( !HalpTimerProcessorFrequencyKnown && *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
        {
          Context[0] = KeQueryActiveProcessorCountEx(0xFFFFu);
          Context[1] = 0LL;
          v23 = 5;
          KeIpiGenericCall(HalpTimerMeasureProcessorsWorker, (ULONG_PTR)Context);
        }
        if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
        {
          if ( HalpTscSynchronizationFailureFallback )
          {
            v13 = (const EVENT_DESCRIPTOR *)HAL_ETW_EVENT_UNEXPECTED_FALLBACK;
          }
          else
          {
            if ( !HalpTscProcessorFeatureFallback )
              goto LABEL_24;
            v13 = &HAL_ETW_EVENT_EXPECTED_FALLBACK;
          }
          HalpTscFallbackToPlatformSource(v13);
        }
      }
LABEL_24:
      v14 = HalpAuxiliaryCounter;
      PerformanceFrequency.QuadPart = 0LL;
      if ( HalpAuxiliaryCounter )
      {
        if ( HalpTimerAuxiliaryClockEnabled )
        {
          if ( (*(_DWORD *)(HalpAuxiliaryCounter + 224) & 0x6000) != 0 )
          {
            v14 = 0LL;
            HalpAuxiliaryCounter = 0LL;
          }
          if ( v14 )
          {
            if ( !HalpTimerQpcFreqForAuxQpcConversion )
            {
              KeQueryPerformanceCounter(&PerformanceFrequency);
              HalpTimerQpcFreqForAuxQpcConversion = PerformanceFrequency.QuadPart;
            }
            HalpTimerEarliestQpcAllowedToConvert = KeQueryPerformanceCounter(0LL).QuadPart;
            HalpTimerCaptureCloestAuxiliaryQpcPair();
          }
        }
        else
        {
          HalpAuxiliaryCounter = 0LL;
        }
      }
      return inited;
    }
    HalpTscReserveResources();
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    HalpTimerSavedProcessorCounter = HalpMmAllocCtxAlloc(v16, 8LL * MaximumProcessorCount);
    if ( !HalpTimerSavedProcessorCounter )
      return 3221225626LL;
    if ( (unsigned int)HalpInterruptModel() == 1 )
      HalpTimerInitializeHypervisorTimer();
  }
  else
  {
    HalpTimerDelayedQueryCounterIndex = HalpTimerRegisterQueryCounterHandler(HalpTimerDelayedQueryCounter, 0LL);
    inited = HalpTimerInitializeEarlyStallSource(a3);
    off_140E00998[0] = HalpTimerNotifyProcessorFreeze;
  }
  return inited;
}
