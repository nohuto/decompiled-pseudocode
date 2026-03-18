/*
 * XREFs of Feature_KernelPnP_DevFilterShortCircuitEval__private_IsEnabledDeviceUsageNoInline @ 0x140719C18
 * Callers:
 *     FilterEvalStrict @ 0x1409A7F40 (FilterEvalStrict.c)
 * Callees:
 *     Feature_KernelPnP_DevFilterShortCircuitEval__private_IsEnabledFallback @ 0x140719C54 (Feature_KernelPnP_DevFilterShortCircuitEval__private_IsEnabledFallback.c)
 */

__int64 Feature_KernelPnP_DevFilterShortCircuitEval__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KernelPnP_DevFilterShortCircuitEval__private_featureState & 0x10) != 0 )
    return Feature_KernelPnP_DevFilterShortCircuitEval__private_featureState & 1;
  else
    return Feature_KernelPnP_DevFilterShortCircuitEval__private_IsEnabledFallback(
             (unsigned int)Feature_KernelPnP_DevFilterShortCircuitEval__private_featureState,
             3LL);
}
