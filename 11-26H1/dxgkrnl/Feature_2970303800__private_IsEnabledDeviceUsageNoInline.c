/*
 * XREFs of Feature_2970303800__private_IsEnabledDeviceUsageNoInline @ 0x140085044
 * Callers:
 *     ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140227120 (-VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_2970303800__private_IsEnabledFallback @ 0x140085080 (Feature_2970303800__private_IsEnabledFallback.c)
 */

__int64 Feature_2970303800__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_2970303800__private_featureState & 0x10) != 0 )
    return Feature_2970303800__private_featureState & 1;
  else
    return Feature_2970303800__private_IsEnabledFallback((unsigned int)Feature_2970303800__private_featureState, 3LL);
}
