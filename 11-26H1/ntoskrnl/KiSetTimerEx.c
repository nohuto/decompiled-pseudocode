/*
 * XREFs of KiSetTimerEx @ 0x1403B5C30
 * Callers:
 *     CcRescheduleLazyWriteScanOnVolume @ 0x140218F44 (CcRescheduleLazyWriteScanOnVolume.c)
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14030E430 (KiInvokeInterruptServiceRoutine.c)
 *     CcUninitializeCacheMap @ 0x14039E1C0 (CcUninitializeCacheMap.c)
 *     CcSetDirtyInMask @ 0x14039F350 (CcSetDirtyInMask.c)
 *     PopEnableIrpWatchdog @ 0x1403B49DC (PopEnableIrpWatchdog.c)
 *     PopSetWatchdog @ 0x1403B4B68 (PopSetWatchdog.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x1403B5280 (PopFxEnableWorkOrderWatchdog.c)
 *     PopFxDispatchPluginWorkOnce @ 0x1403B80D4 (PopFxDispatchPluginWorkOnce.c)
 *     MiRebuildLargePagesThread @ 0x1403D1720 (MiRebuildLargePagesThread.c)
 *     CcScheduleLazyWriteScan @ 0x1403E3830 (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindInternal @ 0x1403E39CC (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1403E3A34 (CcNotifyWriteBehindVolume.c)
 *     MiInsertUnusedSegment @ 0x14047A120 (MiInsertUnusedSegment.c)
 *     PpmEndHighPerfRequest @ 0x14049F728 (PpmEndHighPerfRequest.c)
 *     MiSetDeleteOnCloseTimer @ 0x1404AEF30 (MiSetDeleteOnCloseTimer.c)
 *     PfSnTraceTimerRoutine @ 0x1404B38C0 (PfSnTraceTimerRoutine.c)
 *     PopCoalescingSetTimer @ 0x1404BCB98 (PopCoalescingSetTimer.c)
 *     PfSnStartTraceTimer @ 0x1404C7858 (PfSnStartTraceTimer.c)
 *     PopUserPresentSetWorker @ 0x1404C8F50 (PopUserPresentSetWorker.c)
 *     PopSetPowerActionWatchdogState @ 0x1404F7F48 (PopSetPowerActionWatchdogState.c)
 *     MiStoreExtendVirtualPagefile @ 0x14050B248 (MiStoreExtendVirtualPagefile.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x14057A288 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpCmcStartPolling @ 0x14057D0BC (HalpCmcStartPolling.c)
 *     PfpServiceMainThreadBoost @ 0x1406028E4 (PfpServiceMainThreadBoost.c)
 *     DifKeSetTimerExWrapper @ 0x140668230 (DifKeSetTimerExWrapper.c)
 *     DifKeSetTimerWrapper @ 0x1406683C0 (DifKeSetTimerWrapper.c)
 *     MiStartBackgroundZeroTimer @ 0x1407137F4 (MiStartBackgroundZeroTimer.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14077E784 (FsRtlpOplockTryStartBreakAckTimeout.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14078EE20 (DbgkpWerDeferredWriteRoutine.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x1407C9F1C (PfSnQueueEnablePrefetcherTimer.c)
 *     PopSetSystemAwayMode @ 0x1407D4430 (PopSetSystemAwayMode.c)
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 *     TtmiResetInactivityTimer @ 0x1407F1B44 (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x1407F2344 (TtmpResetEvaluationTimer.c)
 *     CmpCmdInit @ 0x14085AB84 (CmpCmdInit.c)
 *     CmpLazyCommitWorker @ 0x140861FB0 (CmpLazyCommitWorker.c)
 *     PfSnPowerBoost @ 0x140988C2C (PfSnPowerBoost.c)
 *     PiDrvDbNodeActionCallback @ 0x140A80C80 (PiDrvDbNodeActionCallback.c)
 *     PpmWmiDispatch @ 0x140A91490 (PpmWmiDispatch.c)
 *     CmFreezeRegistry @ 0x140AE0F10 (CmFreezeRegistry.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 *     CmSetLazyFlushState @ 0x140B48A54 (CmSetLazyFlushState.c)
 *     CmpDelayFreeCmRm @ 0x140B49FE0 (CmpDelayFreeCmRm.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140B63860 (PopCancelIgnoreBatteryStatusChange.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140BF2328 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PfSnBeginBootPhase @ 0x140BFEFAC (PfSnBeginBootPhase.c)
 *     PopBuildDeviceNotifyList @ 0x140C0AED8 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140C129A8 (PfpStartLoggingHardFaultEvents.c)
 *     KdpTimeSlipWork @ 0x140C1B460 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x140C36318 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140C39218 (ViShutdownScheduleWatchdog.c)
 *     ViWdStartTimer @ 0x140C40424 (ViWdStartTimer.c)
 *     PfSnInitializePrefetcher @ 0x140CD4358 (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x1403B6998 (KiInsertTimerTable.c)
 *     KiDecodeTolerableDelayValue @ 0x1403B6BFC (KiDecodeTolerableDelayValue.c)
 *     KiTimerWaitTest @ 0x1403B6C5C (KiTimerWaitTest.c)
 *     KiCancelTimer @ 0x1403B6FE0 (KiCancelTimer.c)
 *     DifObjTrkRemoveItem @ 0x1403B7980 (DifObjTrkRemoveItem.c)
 *     KiObjTrkTimerPend @ 0x1403B7B28 (KiObjTrkTimerPend.c)
 *     KiTraceSetTimer @ 0x1403E8F38 (KiTraceSetTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
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
                       a1 ^ _byteswap_uint64((__int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ a5),
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
