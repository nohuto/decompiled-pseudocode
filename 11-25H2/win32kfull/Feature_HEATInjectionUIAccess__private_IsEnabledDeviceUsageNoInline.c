/*
 * XREFs of Feature_HEATInjectionUIAccess__private_IsEnabledDeviceUsageNoInline @ 0x14027AF10
 * Callers:
 *     _InitializeTouchInjectionWorker @ 0x14027B154 (_InitializeTouchInjectionWorker.c)
 * Callees:
 *     Feature_HEATInjectionUIAccess__private_IsEnabledFallback @ 0x14027AF48 (Feature_HEATInjectionUIAccess__private_IsEnabledFallback.c)
 */

__int64 Feature_HEATInjectionUIAccess__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HEATInjectionUIAccess__private_featureState & 0x10) != 0 )
    return Feature_HEATInjectionUIAccess__private_featureState & 1;
  else
    return Feature_HEATInjectionUIAccess__private_IsEnabledFallback(
             (unsigned int)Feature_HEATInjectionUIAccess__private_featureState,
             3LL);
}
