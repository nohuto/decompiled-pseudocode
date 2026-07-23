/*
 * XREFs of KeCancelTimer @ 0x1403B74A0
 * Callers:
 *     MiUnlinkUnusedControlArea @ 0x1402EDDD4 (MiUnlinkUnusedControlArea.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14030E430 (KiInvokeInterruptServiceRoutine.c)
 *     PopSetWatchdog @ 0x1403B4B68 (PopSetWatchdog.c)
 *     ExpDeleteTimer @ 0x1403B60F0 (ExpDeleteTimer.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1403B8400 (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxProcessWork @ 0x1403B8BD0 (PopFxProcessWork.c)
 *     PopCompleteIrpWatchdog @ 0x1403BDEDC (PopCompleteIrpWatchdog.c)
 *     MiRebuildLargePagesThread @ 0x1403D1720 (MiRebuildLargePagesThread.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403E7080 (CcDeletePrivateVolumeCacheMap.c)
 *     FsRtlpSyncWithAckTimeout @ 0x1403FABC0 (FsRtlpSyncWithAckTimeout.c)
 *     MiModifiedWriterWakeStore @ 0x1403FF9C8 (MiModifiedWriterWakeStore.c)
 *     PfSnCancelTraceTimer @ 0x14045C800 (PfSnCancelTraceTimer.c)
 *     CmpArmLazyWriter @ 0x140468450 (CmpArmLazyWriter.c)
 *     PopCoalescingSetActiveState @ 0x1404BCB04 (PopCoalescingSetActiveState.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1404CFA94 (PopFxUpdateDeviceIdleTimer.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1404D57E8 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopDisableIrpWatchdog @ 0x1404D64E4 (PopDisableIrpWatchdog.c)
 *     PopSetPowerActionWatchdogState @ 0x1404F7F48 (PopSetPowerActionWatchdogState.c)
 *     MiZeroNodeExiting @ 0x14050CC64 (MiZeroNodeExiting.c)
 *     PopIgnoreBatteryStatusChange @ 0x14050E888 (PopIgnoreBatteryStatusChange.c)
 *     MiModifiedPageWriterExit @ 0x14052AA78 (MiModifiedPageWriterExit.c)
 *     CcDeletePartition @ 0x1405B4A24 (CcDeletePartition.c)
 *     IopDisableTimer @ 0x1405CCFD0 (IopDisableTimer.c)
 *     DifKeCancelTimerWrapper @ 0x140664570 (DifKeCancelTimerWrapper.c)
 *     ExpCancelTimer @ 0x1406D2CE0 (ExpCancelTimer.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14078EE20 (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingNotify @ 0x1407D2370 (PopCoalescingNotify.c)
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 *     TtmiResetInactivityTimer @ 0x1407F1B44 (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x1407F2344 (TtmpResetEvaluationTimer.c)
 *     ExpTimeZoneCleanupSiloState @ 0x14083C694 (ExpTimeZoneCleanupSiloState.c)
 *     ExpPartitionDestroy @ 0x140845D08 (ExpPartitionDestroy.c)
 *     CmpShutdownWorkers @ 0x14085AEB4 (CmpShutdownWorkers.c)
 *     CmThawRegistry @ 0x14085D580 (CmThawRegistry.c)
 *     PfSnPowerBoost @ 0x140988C2C (PfSnPowerBoost.c)
 *     EtwpLogger @ 0x140A12D80 (EtwpLogger.c)
 *     EtwpFreeLoggerContext @ 0x140A16604 (EtwpFreeLoggerContext.c)
 *     PiDrvDbLoadNode @ 0x140A80DA8 (PiDrvDbLoadNode.c)
 *     PpmWmiDispatch @ 0x140A91490 (PpmWmiDispatch.c)
 *     HalpCmcWorkerRoutine @ 0x140AD17A0 (HalpCmcWorkerRoutine.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 *     CmSetLazyFlushState @ 0x140B48A54 (CmSetLazyFlushState.c)
 *     PopBuildDeviceNotifyList @ 0x140C0AED8 (PopBuildDeviceNotifyList.c)
 *     ViPendingDelayCompletion @ 0x140C36318 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x140C3FF60 (VfWdCheckForSettingsChange.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140C553CC (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140C571F4 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpFadeAnimationTimer @ 0x140C58350 (AnFwpFadeAnimationTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140C5932C (AnFwpDisableProgressTimer.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     DifObjTrkRemoveItem @ 0x1403B7980 (DifObjTrkRemoveItem.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __stdcall KeCancelTimer(PKTIMER a1)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v3; // r14d
  char v4; // bp
  BOOLEAN v5; // r15
  unsigned int v6; // r12d
  unsigned int v7; // edi
  unsigned __int64 Size; // r13
  unsigned __int64 v9; // rax
  volatile signed __int32 *v10; // rdi
  unsigned __int8 TimerType; // r8
  __int64 v12; // r10
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v15; // r9
  __int64 v16; // r12
  unsigned __int64 v17; // rbp
  volatile signed __int32 *v19; // r14
  unsigned int v20; // r15d
  __int64 v21; // rcx
  unsigned int v22; // edi
  unsigned int v23; // r15d
  signed __int8 Reserved1; // al
  PKTIMER v25; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-48h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  v3 = 0;
  v25 = 0LL;
  if ( _InterlockedCompareExchange8(&a1->TimerDifObjTracking, 1, 2) == 2 )
  {
    v4 = 1;
    DifObjTrkRemoveItem(49LL, a1, 0LL);
  }
  else
  {
    v4 = 0;
  }
  v5 = 0;
  v6 = -129;
  while ( 1 )
  {
    v7 = 0;
    if ( _interlockedbittestandset(&a1->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v7);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (a1->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&a1->Header.Lock, 7u) );
    }
    if ( v4 )
      _InterlockedCompareExchange8(&a1->TimerDifObjTracking, 0, 1);
    if ( (a1->Header.Reserved1 & 0xC0) == 0 )
      goto LABEL_25;
    Size = a1->Header.Size;
    v9 = (unsigned __int64)a1->TimerType << 8;
    v26[0] = KiProcessorBlock[a1->Processor];
    v10 = (volatile signed __int32 *)(v26[0] + 16640LL + 32 * (v9 + Size + 16));
    while ( _interlockedbittestandset64(v10, 0LL) )
    {
      do
      {
        if ( (++v3 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v3);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v10 );
    }
    if ( (a1->Header.Reserved1 & 0x80u) == 0 )
    {
      TimerType = a1->TimerType;
      v12 = v26[0];
      Flink = a1->TimerListEntry.Flink;
      Blink = a1->TimerListEntry.Blink;
      v15 = v26[0] + 16640LL;
      v16 = v26[0] + 16640LL + 32 * (Size + ((TimerType ^ 1LL) << 8) + 16);
      v17 = v26[0] + 16640LL + 32 * (Size + ((unsigned __int64)TimerType << 8) + 16);
      if ( Flink->Blink != &a1->TimerListEntry || Blink->Flink != &a1->TimerListEntry )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      if ( Blink != Flink )
        goto LABEL_22;
      *(_DWORD *)(v17 + 28) = -1;
      if ( TimerType )
      {
        v19 = (volatile signed __int32 *)(v15 + 32 * (Size + 16));
        if ( _interlockedbittestandset64(v19, 0LL) )
        {
          _mm_pause();
        }
        else if ( v19 )
        {
          goto LABEL_38;
        }
        _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
        v22 = 0;
        while ( _interlockedbittestandset64(v19, 0LL) )
        {
          do
          {
            if ( (++v22 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v22);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v19 );
        }
        v10 = (volatile signed __int32 *)(v26[0] + 16640LL + 32 * (Size + 272));
        v23 = 0;
        while ( _interlockedbittestandset64(v10, 0LL) )
        {
          do
          {
            if ( (++v23 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v23);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v10 );
        }
      }
      else
      {
        v19 = (volatile signed __int32 *)(v15 + 32 * (Size + 272));
        v20 = 0;
        while ( _interlockedbittestandset64(v19, 0LL) )
        {
          do
          {
            if ( (++v20 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v20);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v19 );
        }
      }
      v12 = v26[0];
LABEL_38:
      if ( *(_DWORD *)(v17 + 28) == -1 && *(_DWORD *)(v16 + 28) == -1 )
      {
        v21 = qword_140FC2698[2 * *(unsigned __int8 *)(v12 + 208)];
        if ( !KiSerializeTimerExpiration )
        {
          _interlockedbittestandreset64((volatile signed __int32 *)((Size << 6) + v21), *(unsigned __int8 *)(v12 + 209));
          _InterlockedAnd64((volatile signed __int64 *)v19, 0LL);
          goto LABEL_22;
        }
        _interlockedbittestandreset64((volatile signed __int32 *)(v21 + 8 * (Size >> 6)), Size & 0x3F);
      }
      _InterlockedAnd64((volatile signed __int64 *)v19, 0LL);
LABEL_22:
      _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
      v5 = 1;
      v6 = -1073741953;
      goto LABEL_25;
    }
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    v3 = 0;
    if ( _InterlockedExchange64((volatile __int64 *)(v26[0] + 8LL * (a1->Header.Reserved1 & 0x3F) + 16640), 0LL) )
      break;
    _InterlockedAnd(&a1->Header.Lock, 0xFFFFFF7F);
    Reserved1 = a1->Header.Reserved1;
    LODWORD(v26[0]) = 0;
    if ( Reserved1 < 0 )
    {
      do
        KeYieldProcessorEx(v26);
      while ( (a1->Header.Reserved1 & 0x80u) != 0 );
    }
  }
  v5 = 1;
  v6 = 16777087;
LABEL_25:
  _InterlockedAnd(&a1->Header.Lock, v6);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v5 )
  {
    v25 = a1;
    v26[0] = &v25;
    v26[1] = 8LL;
    EtwTraceKernelEvent((int)v26, 1, 0x40020000u, 3925, 1538);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v5;
}
