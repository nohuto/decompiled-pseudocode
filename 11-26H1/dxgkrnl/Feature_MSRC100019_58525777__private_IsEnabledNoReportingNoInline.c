/*
 * XREFs of Feature_MSRC100019_58525777__private_IsEnabledNoReportingNoInline @ 0x140081F04
 * Callers:
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x14034DCCC (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140441CF0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_MSRC100019_58525777__private_IsEnabledFallback @ 0x140081EE8 (Feature_MSRC100019_58525777__private_IsEnabledFallback.c)
 */

__int64 Feature_MSRC100019_58525777__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_MSRC100019_58525777__private_featureState & 2) != 0 )
    return Feature_MSRC100019_58525777__private_featureState & 1;
  else
    return Feature_MSRC100019_58525777__private_IsEnabledFallback(
             (unsigned int)Feature_MSRC100019_58525777__private_featureState,
             0);
}
