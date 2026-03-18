/*
 * XREFs of Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledNoReportingNoInline @ 0x1405E957C
 * Callers:
 *     KeFlushQueuedDpcs @ 0x14051BE50 (KeFlushQueuedDpcs.c)
 * Callees:
 *     Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledFallback @ 0x1405E955C (Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_featureState & 2) != 0 )
    return Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_featureState & 1;
  else
    return Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_featureState,
             0);
}
