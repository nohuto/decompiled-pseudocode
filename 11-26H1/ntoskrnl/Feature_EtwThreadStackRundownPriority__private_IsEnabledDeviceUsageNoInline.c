/*
 * XREFs of Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline @ 0x1406CB8A0
 * Callers:
 *     EtwpThreadRundownApc @ 0x1406CB5E0 (EtwpThreadRundownApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1406CB674 (EtwpTraceThreadRundownWithStack.c)
 * Callees:
 *     Feature_EtwThreadStackRundownPriority__private_IsEnabledFallback @ 0x1406CB8DC (Feature_EtwThreadStackRundownPriority__private_IsEnabledFallback.c)
 */

__int64 Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EtwThreadStackRundownPriority__private_featureState & 0x10) != 0 )
    return Feature_EtwThreadStackRundownPriority__private_featureState & 1;
  else
    return Feature_EtwThreadStackRundownPriority__private_IsEnabledFallback(
             (unsigned int)Feature_EtwThreadStackRundownPriority__private_featureState,
             3LL);
}
