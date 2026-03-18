/*
 * XREFs of Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline @ 0x14023DE70
 * Callers:
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14021E510 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiCheckPreferredHeteroProcessor @ 0x14021EB80 (KiCheckPreferredHeteroProcessor.c)
 *     KiSwapThread @ 0x14023C0A0 (KiSwapThread.c)
 * Callees:
 *     Feature_HeteroRescheduleFixes__private_IsEnabledFallback @ 0x140532D30 (Feature_HeteroRescheduleFixes__private_IsEnabledFallback.c)
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
