/*
 * XREFs of Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405EBE90
 * Callers:
 *     KiRegisterTraceLoggingProvider @ 0x140CD0434 (KiRegisterTraceLoggingProvider.c)
 * Callees:
 *     Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledFallback @ 0x1405EBECC (Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledFallback.c)
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
