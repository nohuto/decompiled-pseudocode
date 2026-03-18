/*
 * XREFs of Feature_2159223096__private_IsEnabledDeviceUsageNoInline @ 0x140084FEC
 * Callers:
 *     ?VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140229E30 (-VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_2159223096__private_IsEnabledFallback @ 0x140085028 (Feature_2159223096__private_IsEnabledFallback.c)
 */

__int64 Feature_2159223096__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_2159223096__private_featureState & 0x10) != 0 )
    return Feature_2159223096__private_featureState & 1;
  else
    return Feature_2159223096__private_IsEnabledFallback((unsigned int)Feature_2159223096__private_featureState, 3LL);
}
