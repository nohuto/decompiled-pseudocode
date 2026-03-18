/*
 * XREFs of Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline @ 0x14003B500
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400C7AF4 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1400E2790 (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 *     ?VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1400FEC44 (-VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PA.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x14010C244 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 * Callees:
 *     Feature_PeriodicTrimImprovements__private_IsEnabledFallback @ 0x14004DCA0 (Feature_PeriodicTrimImprovements__private_IsEnabledFallback.c)
 */

__int64 Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PeriodicTrimImprovements__private_featureState & 0x10) != 0 )
    return Feature_PeriodicTrimImprovements__private_featureState & 1;
  else
    return Feature_PeriodicTrimImprovements__private_IsEnabledFallback(
             (unsigned int)Feature_PeriodicTrimImprovements__private_featureState,
             3LL);
}
