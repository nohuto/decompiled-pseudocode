/*
 * XREFs of KeSetCoalescableTimer @ 0x140219CA0
 * Callers:
 *     CcRescheduleLazyWriteScanOnVolume @ 0x140218F44 (CcRescheduleLazyWriteScanOnVolume.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140219060 (PopFxScheduleDeviceIdleTimer.c)
 *     EtwpRequestFlushTimer @ 0x140219A50 (EtwpRequestFlushTimer.c)
 *     PopFxArmResidentTimer @ 0x14021B998 (PopFxArmResidentTimer.c)
 *     PopPepArmIdleTimer @ 0x14021C06C (PopPepArmIdleTimer.c)
 *     CcRescheduleLazyWriteScan @ 0x1403E429C (CcRescheduleLazyWriteScan.c)
 *     CmpArmLazyWriter @ 0x140468450 (CmpArmLazyWriter.c)
 *     ExpTimerResume @ 0x1404B9C14 (ExpTimerResume.c)
 *     CmpCompleteLazyWrite @ 0x1404CE15C (CmpCompleteLazyWrite.c)
 *     CcPostPVCMDelayedDelete @ 0x1404F07E4 (CcPostPVCMDelayedDelete.c)
 *     CcProcessDelayedDeletePVCM @ 0x140506DE0 (CcProcessDelayedDeletePVCM.c)
 *     CcBcbProfiler @ 0x1405424B0 (CcBcbProfiler.c)
 *     IopEnableTimer @ 0x1405CD05C (IopEnableTimer.c)
 *     DifKeSetCoalescableTimerWrapper @ 0x140667F00 (DifKeSetCoalescableTimerWrapper.c)
 *     ExpSetTimerObject @ 0x1406D2DD8 (ExpSetTimerObject.c)
 *     ExpTimerAdjust @ 0x1406D3490 (ExpTimerAdjust.c)
 *     ExpTimerDpcRoutine @ 0x1406D35D0 (ExpTimerDpcRoutine.c)
 *     sub_140782330 @ 0x140782330 (sub_140782330.c)
 *     ExpWorkQueueManagerThread @ 0x140A77D60 (ExpWorkQueueManagerThread.c)
 *     PiDrvDbNodeActionCallback @ 0x140A80C80 (PiDrvDbNodeActionCallback.c)
 *     IopErrorLogQueueRequest @ 0x140AD97D8 (IopErrorLogQueueRequest.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x140AF2334 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     CcTelemetryPeriodicTimerCallback @ 0x140B114C0 (CcTelemetryPeriodicTimerCallback.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140B623E8 (CcSetTelemetryPeriodicTimer.c)
 *     AnFwProgressIndicatorTransition @ 0x140C553F8 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140C571F4 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140C57380 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayFade @ 0x140C58BA0 (AnFwDisplayFade.c)
 *     CcInitializeBcbProfiler @ 0x140C86424 (CcInitializeBcbProfiler.c)
 *     PopInitializeSystemIdleDetection @ 0x140CD90F8 (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline @ 0x1403B7F0C (Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline.c)
 *     KiEncodeTolerableDelayValue @ 0x1403B7F44 (KiEncodeTolerableDelayValue.c)
 */

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  char v5; // si
  int v8; // r14d
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdi
  ULONG v12; // r8d
  ULONG v14; // eax

  v5 = 0;
  v8 = (int)Timer;
  if ( TolerableDelay )
  {
    v9 = 10000LL * TolerableDelay;
    v10 = (unsigned int)Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline() != 0
        ? 9600000LL
        : 63LL;
    if ( v9 > v10 )
    {
      v11 = v9 - v10;
      if ( DueTime.QuadPart < 0 )
      {
        v12 = DueTime.LowPart - v11;
        if ( (__int64)(DueTime.QuadPart - v11) > DueTime.QuadPart )
          v12 = 0;
      }
      else
      {
        v12 = v11 + DueTime.LowPart;
        if ( (__int64)(v11 + DueTime.QuadPart) < DueTime.QuadPart )
          v12 = -1;
      }
      if ( Period )
      {
        v14 = -1;
        if ( Period + (int)v11 / 10000 >= Period )
          v14 = Period + (int)v11 / 10000;
        Period = v14;
      }
      LODWORD(v9) = v10;
      DueTime.LowPart = v12;
    }
    v5 = 4 * KiEncodeTolerableDelayValue((unsigned int)v9);
  }
  LOBYTE(TolerableDelay) = v5;
  return KiSetTimerEx(v8, DueTime.LowPart, Period, TolerableDelay, (__int64)Dpc);
}
