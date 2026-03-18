/*
 * XREFs of Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E9520
 * Callers:
 *     KiRegisterTraceLoggingProvider @ 0x140CCA354 (KiRegisterTraceLoggingProvider.c)
 * Callees:
 *     Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledFallback @ 0x1405E955C (Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_featureState & 0x10) != 0 )
    return Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_featureState & 1;
  else
    return Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_featureState,
             3LL);
}
