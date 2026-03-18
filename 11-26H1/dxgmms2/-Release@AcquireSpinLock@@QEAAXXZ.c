/*
 * XREFs of ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0
 * Callers:
 *     VidSchiClearFlipDevice @ 0x140003564 (VidSchiClearFlipDevice.c)
 *     VidSchExitIndependentFlip @ 0x1400038E0 (VidSchExitIndependentFlip.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x140003F60 (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchConfirmToken @ 0x140004960 (VidSchConfirmToken.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140005C68 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x140005D64 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiSuspendResumeHwContext @ 0x14000619C (VidSchiSuspendResumeHwContext.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1400064D8 (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x140006594 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchHasReadyPackets @ 0x1400068E0 (VidSchHasReadyPackets.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1400069F0 (VidSchSignalSyncObjectsFromCpu.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1400073C8 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x140007D9C (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x140008000 (VidSchSubmitSignalToHwQueue.c)
 *     ?VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z @ 0x14000EE00 (-VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x140011854 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x140026E70 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x14002F828 (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x140031F58 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140034EC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x14003AB8C (-UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x14003C2CC (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x14003CB00 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchTimeoutSyncObject @ 0x14003CDFC (VidSchTimeoutSyncObject.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x14003D1DC (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchCancelPresentAtFlips @ 0x140040840 (VidSchCancelPresentAtFlips.c)
 *     ?VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PRESENTS_FLAGS@@@Z @ 0x140040AC4 (-VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PR.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1400413A8 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     ?VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z @ 0x140041FB4 (-VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z.c)
 *     ??$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x140042058 (--$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchSetMonitorPowerState @ 0x140042540 (VidSchSetMonitorPowerState.c)
 *     ?VidSchiValidateAllocationNotDisplayed@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC_NONPAGED@@@Z @ 0x140042F98 (-VidSchiValidateAllocationNotDisplayed@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC_NONPAGED@@.c)
 *     VidSchiRunningDeviceAllowsLongRunningPackets @ 0x140043240 (VidSchiRunningDeviceAllowsLongRunningPackets.c)
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x140048E74 (VidSchiProcessNativeFenceSignaledDpc.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14004B298 (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14004C348 (-VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x14004C410 (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     VidSchiProcessAsyncLiveDump @ 0x140054CE0 (VidSchiProcessAsyncLiveDump.c)
 *     VidSchiQueueAsyncLiveDump @ 0x1400551C0 (VidSchiQueueAsyncLiveDump.c)
 *     VidSchiSubmitCommandPacketToQueueDirectSubmitAware @ 0x140055344 (VidSchiSubmitCommandPacketToQueueDirectSubmitAware.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x140055BD8 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x140055FF8 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1400560C0 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchEscape @ 0x1400564B0 (VidSchEscape.c)
 *     VidSchInsertNativeFenceUmdHandle @ 0x1400568C0 (VidSchInsertNativeFenceUmdHandle.c)
 *     VidSchPresentDurationPlane @ 0x140056A10 (VidSchPresentDurationPlane.c)
 *     VidSchRemoveNativeFenceUmdHandle @ 0x140056DB0 (VidSchRemoveNativeFenceUmdHandle.c)
 *     ?VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOUT@@@Z @ 0x140057308 (-VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOU.c)
 *     ?VidSchiUpdateHwQueueInteractiveState@@YAXPEAUVIDSCH_HW_CONTEXT@@W4_DXGK_SCHEDULING_PRIORITY_BAND@@1@Z @ 0x140057700 (-VidSchiUpdateHwQueueInteractiveState@@YAXPEAUVIDSCH_HW_CONTEXT@@W4_DXGK_SCHEDULING_PRIORITY_BAN.c)
 *     VidSchCreateDoorbell @ 0x1400579B0 (VidSchCreateDoorbell.c)
 *     VidSchTerminateDoorbell @ 0x140057C10 (VidSchTerminateDoorbell.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x140057C78 (VidSchiCreateNodeSchedulingLog.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x140057EA8 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     VidSchiResetHwEngine @ 0x140058740 (VidSchiResetHwEngine.c)
 *     VidSchiCleanupQueuedCommand @ 0x140058ED0 (VidSchiCleanupQueuedCommand.c)
 *     VidSchiCompleteAllPendingCommand @ 0x140058F78 (VidSchiCompleteAllPendingCommand.c)
 *     ?VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z @ 0x14005A010 (-VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z.c)
 *     ?VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z @ 0x14005A254 (-VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AcquireSpinLock::Release(AcquireSpinLock *this)
{
  struct _KLOCK_QUEUE_HANDLE *v2; // rcx

  if ( *((_BYTE *)this + 32) )
  {
    v2 = (struct _KLOCK_QUEUE_HANDLE *)((char *)this + 8);
    if ( *((_BYTE *)this + 33) )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v2);
      *((_BYTE *)this + 32) = 0;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(v2);
      *((_BYTE *)this + 32) = 0;
    }
  }
}
