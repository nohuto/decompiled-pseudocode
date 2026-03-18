/*
 * XREFs of Feature_RIMPointerReliability__private_IsEnabledDeviceUsageNoInline @ 0x1401D7B64
 * Callers:
 *     rimProcessCompleteFrame @ 0x140183590 (rimProcessCompleteFrame.c)
 *     RIMRemoveInjectionDevice @ 0x1401DBD60 (RIMRemoveInjectionDevice.c)
 * Callees:
 *     Feature_RIMPointerReliability__private_IsEnabledFallback @ 0x1401D7B9C (Feature_RIMPointerReliability__private_IsEnabledFallback.c)
 */

__int64 Feature_RIMPointerReliability__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RIMPointerReliability__private_featureState & 0x10) != 0 )
    return Feature_RIMPointerReliability__private_featureState & 1;
  else
    return Feature_RIMPointerReliability__private_IsEnabledFallback(
             (unsigned int)Feature_RIMPointerReliability__private_featureState,
             3LL);
}
