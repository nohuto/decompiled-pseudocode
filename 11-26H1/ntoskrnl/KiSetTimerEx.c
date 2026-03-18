/*
 * XREFs of KiSetTimerEx @ 0x1403ABF20
 * Callers:
 *     CcRescheduleLazyWriteScanOnVolume @ 0x140218EC0 (CcRescheduleLazyWriteScanOnVolume.c)
 *     KeSetCoalescableTimer @ 0x140219B40 (KeSetCoalescableTimer.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402C3770 (KiInvokeInterruptServiceRoutine.c)
 *     CcUninitializeCacheMap @ 0x14039C460 (CcUninitializeCacheMap.c)
 *     CcSetDirtyInMask @ 0x14039D5F0 (CcSetDirtyInMask.c)
 *     PopEnableIrpWatchdog @ 0x1403AACCC (PopEnableIrpWatchdog.c)
 *     PopSetWatchdog @ 0x1403AAE58 (PopSetWatchdog.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x1403AB570 (PopFxEnableWorkOrderWatchdog.c)
 *     PopFxDispatchPluginWorkOnce @ 0x1403AE3C4 (PopFxDispatchPluginWorkOnce.c)
 *     MiRebuildLargePagesThread @ 0x1403C7830 (MiRebuildLargePagesThread.c)
 *     CcScheduleLazyWriteScan @ 0x1403E0640 (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindInternal @ 0x1403E07DC (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1403E0844 (CcNotifyWriteBehindVolume.c)
 *     MiInsertUnusedSegment @ 0x1404807E0 (MiInsertUnusedSegment.c)
 *     PpmEndHighPerfRequest @ 0x1404A6098 (PpmEndHighPerfRequest.c)
 *     MiSetDeleteOnCloseTimer @ 0x1404B5BD0 (MiSetDeleteOnCloseTimer.c)
 *     PfSnTraceTimerRoutine @ 0x1404BA030 (PfSnTraceTimerRoutine.c)
 *     PopCoalescingSetTimer @ 0x1404C3348 (PopCoalescingSetTimer.c)
 *     PfSnStartTraceTimer @ 0x1404CDE28 (PfSnStartTraceTimer.c)
 *     PopUserPresentSetWorker @ 0x1404CF520 (PopUserPresentSetWorker.c)
 *     PopSetPowerActionWatchdogState @ 0x1404FE998 (PopSetPowerActionWatchdogState.c)
 *     MiStoreExtendVirtualPagefile @ 0x1405117D8 (MiStoreExtendVirtualPagefile.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x140577D58 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpCmcStartPolling @ 0x14057AB8C (HalpCmcStartPolling.c)
 *     PfpServiceMainThreadBoost @ 0x1405FFE34 (PfpServiceMainThreadBoost.c)
 *     DifKeSetTimerExWrapper @ 0x140664650 (DifKeSetTimerExWrapper.c)
 *     DifKeSetTimerWrapper @ 0x1406647E0 (DifKeSetTimerWrapper.c)
 *     MiStartBackgroundZeroTimer @ 0x14070EAF4 (MiStartBackgroundZeroTimer.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14077BB44 (FsRtlpOplockTryStartBreakAckTimeout.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14078C2F0 (DbgkpWerDeferredWriteRoutine.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x1407C6EBC (PfSnQueueEnablePrefetcherTimer.c)
 *     PopSetSystemAwayMode @ 0x1407D1390 (PopSetSystemAwayMode.c)
 *     PopBatteryWorker @ 0x1407D7EF0 (PopBatteryWorker.c)
 *     TtmiResetInactivityTimer @ 0x1407EBFE0 (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x1407EC7E4 (TtmpResetEvaluationTimer.c)
 *     CmpCmdInit @ 0x140854874 (CmpCmdInit.c)
 *     CmpLazyCommitWorker @ 0x14085BCC0 (CmpLazyCommitWorker.c)
 *     PfSnPowerBoost @ 0x1409B7C4C (PfSnPowerBoost.c)
 *     PiDrvDbNodeActionCallback @ 0x140A781E0 (PiDrvDbNodeActionCallback.c)
 *     PpmWmiDispatch @ 0x140A8C7C0 (PpmWmiDispatch.c)
 *     CmFreezeRegistry @ 0x140AE3390 (CmFreezeRegistry.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B1209C (ExpRefreshTimeZoneInformation.c)
 *     CmSetLazyFlushState @ 0x140B46A24 (CmSetLazyFlushState.c)
 *     CmpDelayFreeCmRm @ 0x140B48250 (CmpDelayFreeCmRm.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140B607C0 (PopCancelIgnoreBatteryStatusChange.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140BEC328 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PfSnBeginBootPhase @ 0x140BF8FAC (PfSnBeginBootPhase.c)
 *     PopBuildDeviceNotifyList @ 0x140C04CC8 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140C0C798 (PfpStartLoggingHardFaultEvents.c)
 *     KdpTimeSlipWork @ 0x140C15460 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x140C30308 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140C33208 (ViShutdownScheduleWatchdog.c)
 *     ViWdStartTimer @ 0x140C3A414 (ViWdStartTimer.c)
 *     PfSnInitializePrefetcher @ 0x140CCE1F8 (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiExitDispatcher @ 0x140246C20 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x1403ACC88 (KiInsertTimerTable.c)
 *     KiDecodeTolerableDelayValue @ 0x1403ACEEC (KiDecodeTolerableDelayValue.c)
 *     KiTimerWaitTest @ 0x1403ACF4C (KiTimerWaitTest.c)
 *     KiCancelTimer @ 0x1403AD2D0 (KiCancelTimer.c)
 *     DifObjTrkRemoveItem @ 0x1403ADC70 (DifObjTrkRemoveItem.c)
 *     KiObjTrkTimerPend @ 0x1403ADE18 (KiObjTrkTimerPend.c)
 *     KiTraceSetTimer @ 0x1403E5D48 (KiTraceSetTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiSetTimerEx(__int64 a1, __int64 a2, int a3, unsigned __int8 a4, __int64 a5)
{
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int8 v12; // r12
  _KPROCESS *Process; // rdx
  bool v14; // cl
  unsigned __int8 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  volatile signed __int32 v19; // [rsp+30h] [rbp-48h]
  char v20; // [rsp+98h] [rbp+20h]

  v20 = KiObjTrkTimerPend();
  v9 = KiWaitNever ^ __ROR8__(
                       a1 ^ _byteswap_uint64((__int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ a5),
                       KiWaitNever);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = KiCancelTimer(a1, 0LL);
  v14 = 0;
  if ( !KiGlobalTimerResolutionRequests )
  {
    if ( CurrentPrcb->NestingLevel
      || (Process = KeGetCurrentThread()->ApcState.Process, (Process[1].DirectoryTableBase & 0x100000000000LL) == 0)
      || (Process[3].ActiveGroupsMask.Masks[1] & 0x400000000000000LL) != 0 )
    {
      v14 = 1;
    }
  }
  *(_BYTE *)(a1 + 58) = v14;
  *(_QWORD *)(a1 + 48) = v9;
  *(_DWORD *)(a1 + 60) = a3;
  v19 = *(_DWORD *)a1;
  BYTE1(v19) = a4;
  if ( a2 >= 0 )
  {
    a4 |= 1u;
    BYTE1(v19) = a4;
    a2 = MEMORY[0xFFFFF78000000014] - a2;
    if ( a2 >= 0 )
    {
      *(_DWORD *)a1 = v19;
      *(_QWORD *)(a1 + 24) = 0LL;
      if ( v20 )
      {
        _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 59), 0, 1);
        DifObjTrkRemoveItem(49LL, a1, 0LL);
      }
LABEL_20:
      KiTimerWaitTest(CurrentPrcb, a1, 0LL);
      goto LABEL_21;
    }
  }
  v15 = a4 >> 2;
  v16 = 0LL;
  if ( v15 )
    v16 = (unsigned int)KiDecodeTolerableDelayValue(v15);
  HIBYTE(v19) |= 0x40u;
  v17 = MEMORY[0xFFFFF78000000008] - a2;
  *(_QWORD *)(a1 + 24) = MEMORY[0xFFFFF78000000008] - a2;
  BYTE2(v19) = (unsigned __int64)(v16 + v17) >> 18;
  *(_DWORD *)a1 = v19;
  if ( v20 )
    _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 59), 2, 1);
  *(_DWORD *)(a1 + 4) = 0;
  if ( !(unsigned __int8)KiInsertTimerTable(
                           (_DWORD)CurrentPrcb,
                           a1,
                           a5,
                           (unsigned __int8)((unsigned __int64)(v16 + v17) >> 18),
                           0LL) )
    goto LABEL_20;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(a1, a5, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_21:
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v12;
}
