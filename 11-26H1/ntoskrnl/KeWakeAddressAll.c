/*
 * XREFs of KeWakeAddressAll @ 0x1402BA1F0
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14021AB70 (KeQueryTotalCycleTimeThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14021E510 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14022B26C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSearchForNewThread @ 0x14023E3D0 (KiSearchForNewThread.c)
 *     KiJoinCooperativeIdleSearch @ 0x140240260 (KiJoinCooperativeIdleSearch.c)
 *     KiRemoveBoostThread @ 0x1402742E0 (KiRemoveBoostThread.c)
 *     KeSignalCallDpcSynchronize @ 0x1402BCAD0 (KeSignalCallDpcSynchronize.c)
 *     ExpGetPoolTagInfoTarget @ 0x1402BCDA0 (ExpGetPoolTagInfoTarget.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x1402BD0A0 (KiSwapDirectoryTableBaseTarget.c)
 *     MiDemoteSlabEntriesDpc @ 0x1402BDB50 (MiDemoteSlabEntriesDpc.c)
 *     KiAddThreadToPrcbQueue @ 0x1402BE9E0 (KiAddThreadToPrcbQueue.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403322B0 (KiAcquireThreadStateLockForWrite.c)
 *     KiParkCurrentProcessor @ 0x1403346DC (KiParkCurrentProcessor.c)
 *     KiSetPriorityThread @ 0x14037F250 (KiSetPriorityThread.c)
 *     KiScanSharedReadyThreads @ 0x1403BF4BC (KiScanSharedReadyThreads.c)
 *     MiUpdatePageThresholdsDpc @ 0x1403E4820 (MiUpdatePageThresholdsDpc.c)
 *     MiJumpStackTarget @ 0x1403E4C40 (MiJumpStackTarget.c)
 *     KiSetSystemTimeDpc @ 0x1403E4EA0 (KiSetSystemTimeDpc.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1403EB6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiLeaveCooperativeIdleSearch @ 0x140457AB0 (KiLeaveCooperativeIdleSearch.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1404D35B4 (KiAdjustUserIsolationDomainThread.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404ED5A4 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 *     KiArmForceParkDutyCyclingForLocalReadyQueue @ 0x140516424 (KiArmForceParkDutyCyclingForLocalReadyQueue.c)
 *     KeTryToFreezeThreadStack @ 0x1405EC060 (KeTryToFreezeThreadStack.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F2470 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1405FD95C (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 *     ExpLimitInsertDpc @ 0x1406CC4E0 (ExpLimitInsertDpc.c)
 *     ExpAeThresholdInitWorker @ 0x1406D40D0 (ExpAeThresholdInitWorker.c)
 *     MiAddMemoryDpcTarget @ 0x1406E7B40 (MiAddMemoryDpcTarget.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1406E8960 (MiFreeUnusedPfnPagesDpc.c)
 *     MiWritePteHighLevelIsr @ 0x1406F2D80 (MiWritePteHighLevelIsr.c)
 *     MiMakeIoRangePermanentDpc @ 0x1406F4A20 (MiMakeIoRangePermanentDpc.c)
 *     MiReapplyImportOptimizationIsr @ 0x1406FB670 (MiReapplyImportOptimizationIsr.c)
 *     MiDbgCopyMemoryTarget @ 0x1406FDA80 (MiDbgCopyMemoryTarget.c)
 *     MiChangeSlabIdentitiesDpc @ 0x140705CE0 (MiChangeSlabIdentitiesDpc.c)
 *     MiSpecialPurposeMemoryCacheUpdateDpc @ 0x14070CDD0 (MiSpecialPurposeMemoryCacheUpdateDpc.c)
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 * Callees:
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     HalRequestIpi @ 0x1403EC520 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x1403ECBF0 (HvlWakeVirtualProcessors.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
          result = HvlWakeVirtualProcessors(&v15);
        else
          result = HalRequestIpi(0LL, &v15);
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
