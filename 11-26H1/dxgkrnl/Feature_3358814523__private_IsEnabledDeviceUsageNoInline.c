/*
 * XREFs of Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x140075AB0
 * Callers:
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x140364F70 (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 * Callees:
 *     Feature_3358814523__private_IsEnabledFallback @ 0x140075AEC (Feature_3358814523__private_IsEnabledFallback.c)
 */

__int64 Feature_3358814523__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3358814523__private_featureState & 0x10) != 0 )
    return Feature_3358814523__private_featureState & 1;
  else
    return Feature_3358814523__private_IsEnabledFallback((unsigned int)Feature_3358814523__private_featureState, 3LL);
}
