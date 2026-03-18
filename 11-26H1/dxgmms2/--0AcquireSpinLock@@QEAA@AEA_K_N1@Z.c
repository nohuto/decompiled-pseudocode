/*
 * XREFs of ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80
 * Callers:
 *     VidSchiClearFlipDevice @ 0x140003564 (VidSchiClearFlipDevice.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140034EC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x14003C2CC (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x14003D1DC (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchCancelPresentAtFlips @ 0x140040840 (VidSchCancelPresentAtFlips.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1400413A8 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     ??$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x140042058 (--$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchiRunningDeviceAllowsLongRunningPackets @ 0x140043240 (VidSchiRunningDeviceAllowsLongRunningPackets.c)
 *     ?VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14004C348 (-VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z.c)
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

AcquireSpinLock *__fastcall AcquireSpinLock::AcquireSpinLock(
        AcquireSpinLock *this,
        unsigned __int64 *a2,
        char a3,
        char a4)
{
  struct _KLOCK_QUEUE_HANDLE *v6; // rdx
  AcquireSpinLock *result; // rax

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 32) = 0;
  *((_BYTE *)this + 33) = a4;
  if ( !a3 )
    return this;
  v6 = (struct _KLOCK_QUEUE_HANDLE *)((char *)this + 8);
  if ( !a4 )
  {
    KeAcquireInStackQueuedSpinLock(a2, v6);
    *((_BYTE *)this + 32) = 1;
    return this;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(a2, v6);
  result = this;
  *((_BYTE *)this + 32) = 1;
  return result;
}
