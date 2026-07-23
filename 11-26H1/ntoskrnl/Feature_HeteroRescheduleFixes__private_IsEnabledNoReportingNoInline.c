/*
 * XREFs of Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline @ 0x14023F7D0
 * Callers:
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14021FEA0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140220510 (KiCheckPreferredHeteroProcessor.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 * Callees:
 *     Feature_HeteroRescheduleFixes__private_IsEnabledFallback @ 0x1405351D0 (Feature_HeteroRescheduleFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_HeteroRescheduleFixes__private_featureState & 2) != 0 )
    return Feature_HeteroRescheduleFixes__private_featureState & 1;
  else
    return Feature_HeteroRescheduleFixes__private_IsEnabledFallback(
             (unsigned int)Feature_HeteroRescheduleFixes__private_featureState,
             0LL);
}
