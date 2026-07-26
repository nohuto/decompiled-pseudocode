/*
 * XREFs of Feature_UDFDOD__private_IsEnabledDeviceUsageNoInline @ 0x1400E9E24
 * Callers:
 *     ?Destroy@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAX_N@Z @ 0x1400E9480 (-Destroy@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAX_N@Z.c)
 * Callees:
 *     Feature_UDFDOD__private_IsEnabledFallback @ 0x1400E9E60 (Feature_UDFDOD__private_IsEnabledFallback.c)
 */

__int64 Feature_UDFDOD__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UDFDOD__private_featureState & 0x10) != 0 )
    return Feature_UDFDOD__private_featureState & 1;
  else
    return Feature_UDFDOD__private_IsEnabledFallback((unsigned int)Feature_UDFDOD__private_featureState, 3LL);
}
