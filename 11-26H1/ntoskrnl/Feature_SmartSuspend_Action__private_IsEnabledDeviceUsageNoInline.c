/*
 * XREFs of Feature_SmartSuspend_Action__private_IsEnabledDeviceUsageNoInline @ 0x14060FBAC
 * Callers:
 *     PopSmartSuspendMakePredictions @ 0x140B6E7E8 (PopSmartSuspendMakePredictions.c)
 * Callees:
 *     Feature_SmartSuspend_Action__private_IsEnabledFallback @ 0x14060FBE8 (Feature_SmartSuspend_Action__private_IsEnabledFallback.c)
 */

__int64 Feature_SmartSuspend_Action__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SmartSuspend_Action__private_featureState & 0x10) != 0 )
    return Feature_SmartSuspend_Action__private_featureState & 1;
  else
    return Feature_SmartSuspend_Action__private_IsEnabledFallback(
             (unsigned int)Feature_SmartSuspend_Action__private_featureState,
             3LL);
}
