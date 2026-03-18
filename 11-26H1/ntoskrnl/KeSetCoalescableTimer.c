/*
 * XREFs of KeSetCoalescableTimer @ 0x140219B40
 * Callers:
 *     CcRescheduleLazyWriteScanOnVolume @ 0x140218EC0 (CcRescheduleLazyWriteScanOnVolume.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140218FDC (PopFxScheduleDeviceIdleTimer.c)
 *     EtwpRequestFlushTimer @ 0x1402198F0 (EtwpRequestFlushTimer.c)
 *     PopFxArmResidentTimer @ 0x14021A008 (PopFxArmResidentTimer.c)
 *     PopPepArmIdleTimer @ 0x14021A6DC (PopPepArmIdleTimer.c)
 *     CcRescheduleLazyWriteScan @ 0x1403E10AC (CcRescheduleLazyWriteScan.c)
 *     CmpArmLazyWriter @ 0x14046ECD0 (CmpArmLazyWriter.c)
 *     ExpTimerResume @ 0x1404C03C4 (ExpTimerResume.c)
 *     CmpCompleteLazyWrite @ 0x1404D48EC (CmpCompleteLazyWrite.c)
 *     CcPostPVCMDelayedDelete @ 0x1404F71D4 (CcPostPVCMDelayedDelete.c)
 *     CcProcessDelayedDeletePVCM @ 0x14050D370 (CcProcessDelayedDeletePVCM.c)
 *     CcBcbProfiler @ 0x140540030 (CcBcbProfiler.c)
 *     IopEnableTimer @ 0x1405CA78C (IopEnableTimer.c)
 *     DifKeSetCoalescableTimerWrapper @ 0x140664320 (DifKeSetCoalescableTimerWrapper.c)
 *     ExpSetTimerObject @ 0x1406CEDA8 (ExpSetTimerObject.c)
 *     ExpTimerAdjust @ 0x1406CF460 (ExpTimerAdjust.c)
 *     ExpTimerDpcRoutine @ 0x1406CF5A0 (ExpTimerDpcRoutine.c)
 *     sub_14077F830 @ 0x14077F830 (sub_14077F830.c)
 *     ExpWorkQueueManagerThread @ 0x140A039A0 (ExpWorkQueueManagerThread.c)
 *     PiDrvDbNodeActionCallback @ 0x140A781E0 (PiDrvDbNodeActionCallback.c)
 *     IopErrorLogQueueRequest @ 0x140ADC288 (IopErrorLogQueueRequest.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x140AEF394 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     CcTelemetryPeriodicTimerCallback @ 0x140B0FC90 (CcTelemetryPeriodicTimerCallback.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140B5F268 (CcSetTelemetryPeriodicTimer.c)
 *     AnFwProgressIndicatorTransition @ 0x140C4F3F8 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140C511F4 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140C51380 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayFade @ 0x140C52BA0 (AnFwDisplayFade.c)
 *     CcInitializeBcbProfiler @ 0x140C80424 (CcInitializeBcbProfiler.c)
 *     PopInitializeSystemIdleDetection @ 0x140CD2F58 (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline @ 0x1403AE1FC (Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline.c)
 *     KiEncodeTolerableDelayValue @ 0x1403AE234 (KiEncodeTolerableDelayValue.c)
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
