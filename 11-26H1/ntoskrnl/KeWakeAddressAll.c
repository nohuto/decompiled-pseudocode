/*
 * XREFs of KeWakeAddressAll @ 0x140304EB0
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14021C500 (KeQueryTotalCycleTimeThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14021FEA0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14022CBFC (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 *     KiJoinCooperativeIdleSearch @ 0x140241BC0 (KiJoinCooperativeIdleSearch.c)
 *     KiRemoveBoostThread @ 0x140273850 (KiRemoveBoostThread.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FA03C (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeSignalCallDpcSynchronize @ 0x140307790 (KeSignalCallDpcSynchronize.c)
 *     ExpGetPoolTagInfoTarget @ 0x140307A60 (ExpGetPoolTagInfoTarget.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x140307D60 (KiSwapDirectoryTableBaseTarget.c)
 *     MiDemoteSlabEntriesDpc @ 0x140308810 (MiDemoteSlabEntriesDpc.c)
 *     KiAddThreadToPrcbQueue @ 0x1403096A0 (KiAddThreadToPrcbQueue.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403342E0 (KiAcquireThreadStateLockForWrite.c)
 *     KiParkCurrentProcessor @ 0x14033670C (KiParkCurrentProcessor.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiScanSharedReadyThreads @ 0x1403C93BC (KiScanSharedReadyThreads.c)
 *     MiUpdatePageThresholdsDpc @ 0x1403E7A10 (MiUpdatePageThresholdsDpc.c)
 *     MiJumpStackTarget @ 0x1403E7E30 (MiJumpStackTarget.c)
 *     KiSetSystemTimeDpc @ 0x1403E8090 (KiSetSystemTimeDpc.c)
 *     KiLeaveCooperativeIdleSearch @ 0x14044F320 (KiLeaveCooperativeIdleSearch.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1404CCE24 (KiAdjustUserIsolationDomainThread.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404E6B84 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 *     KiArmForceParkDutyCyclingForLocalReadyQueue @ 0x14050FE94 (KiArmForceParkDutyCyclingForLocalReadyQueue.c)
 *     KeTryToFreezeThreadStack @ 0x1405EE9D0 (KeTryToFreezeThreadStack.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F4E30 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406003AC (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 *     ExpLimitInsertDpc @ 0x1406D0510 (ExpLimitInsertDpc.c)
 *     ExpAeThresholdInitWorker @ 0x1406D8150 (ExpAeThresholdInitWorker.c)
 *     MiAddMemoryDpcTarget @ 0x1406EC7F0 (MiAddMemoryDpcTarget.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1406ED600 (MiFreeUnusedPfnPagesDpc.c)
 *     MiWritePteHighLevelIsr @ 0x1406F79F0 (MiWritePteHighLevelIsr.c)
 *     MiMakeIoRangePermanentDpc @ 0x1406F9690 (MiMakeIoRangePermanentDpc.c)
 *     MiReapplyImportOptimizationIsr @ 0x140700340 (MiReapplyImportOptimizationIsr.c)
 *     MiDbgCopyMemoryTarget @ 0x140702750 (MiDbgCopyMemoryTarget.c)
 *     MiChangeSlabIdentitiesDpc @ 0x14070A9B0 (MiChangeSlabIdentitiesDpc.c)
 *     MiSpecialPurposeMemoryCacheUpdateDpc @ 0x140711A80 (MiSpecialPurposeMemoryCacheUpdateDpc.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     HalRequestIpi @ 0x1402F9560 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x1402F9C30 (HvlWakeVirtualProcessors.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 KeWakeAddressAll()
{
  unsigned __int64 v0; // r8
  bool v1; // bl
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // r9
  unsigned __int64 v5; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v8; // rdx
  int v9; // ett
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  signed __int32 v14[8]; // [rsp+0h] [rbp-148h] BYREF
  __int64 v15; // [rsp+20h] [rbp-128h] BYREF
  _QWORD v16[33]; // [rsp+28h] [rbp-120h] BYREF

  _InterlockedOr(v14, 0);
  v1 = KeDisableInterrupts();
  v2 = _InterlockedExchange64(&KiHaltOnAddressHashTable[(v0 >> 5) & 0x7F], 0LL);
  result = (__int64)memset_0(v16, 0, 0x100uLL);
  v5 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v5 )
  {
    v15 = 2097153LL;
    memset_0(v16, 0, 0x100uLL);
    while ( 1 )
    {
      v10 = *(_QWORD *)(v5 + 8);
      v11 = *(_QWORD *)(v5 + 16);
      if ( !_InterlockedExchange((volatile __int32 *)(v5 + 24), 1) )
      {
        v12 = *(_QWORD *)(v10 + 200);
        v13 = *(unsigned __int8 *)(v10 + 208);
        if ( (unsigned __int16)v15 > (unsigned __int16)v13 )
          goto LABEL_17;
        if ( WORD1(v15) > (unsigned __int16)v13 )
          break;
      }
LABEL_18:
      v5 = v11;
      if ( !v11 )
      {
        if ( (KiHaltOnAddressFlags & 4) != 0 )
          result = HvlWakeVirtualProcessors((__int64)&v15);
        else
          result = HalRequestIpi(0, (__int64)&v15);
        goto LABEL_2;
      }
    }
    LOWORD(v15) = v13 + 1;
LABEL_17:
    v16[v13] |= v12;
    goto LABEL_18;
  }
LABEL_2:
  if ( v1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v8 = (unsigned int)result;
        LODWORD(v8) = result & 0xFFDFFFFF;
        v9 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v9 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb, v8, SchedulerAssist, v4);
    }
    _enable();
  }
  return result;
}
