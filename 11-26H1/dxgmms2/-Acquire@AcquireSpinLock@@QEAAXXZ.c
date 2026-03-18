/*
 * XREFs of ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40
 * Callers:
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
 *     VidSchSubmitSignalToHwQueue @ 0x140008000 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x140011854 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x140026E70 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x14002F828 (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x140031F58 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140034EC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x14003AB8C (-UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x14003CB00 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchTimeoutSyncObject @ 0x14003CDFC (VidSchTimeoutSyncObject.c)
 *     ?VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PRESENTS_FLAGS@@@Z @ 0x140040AC4 (-VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PR.c)
 *     ?VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z @ 0x140041FB4 (-VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z.c)
 *     VidSchSetMonitorPowerState @ 0x140042540 (VidSchSetMonitorPowerState.c)
 *     ?VidSchiValidateAllocationNotDisplayed@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC_NONPAGED@@@Z @ 0x140042F98 (-VidSchiValidateAllocationNotDisplayed@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC_NONPAGED@@.c)
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x140048E74 (VidSchiProcessNativeFenceSignaledDpc.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14004B298 (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x14004C410 (VidSchiProcessGpuEngineTimeoutDpc.c)
 * Callees:
 *     <none>
 */

void __fastcall AcquireSpinLock::Acquire(Acquire *this)
{
  struct _KLOCK_QUEUE_HANDLE *v2; // rdx
  KSPIN_LOCK *v3; // rcx

  v2 = (struct _KLOCK_QUEUE_HANDLE *)((char *)this + 8);
  v3 = *(KSPIN_LOCK **)this;
  if ( *((_BYTE *)this + 33) )
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v3, v2);
  else
    KeAcquireInStackQueuedSpinLock(v3, v2);
  *((_BYTE *)this + 32) = 1;
}
