/*
 * XREFs of Feature_Servicing_UnexpectedWakeInterrupt__private_IsEnabledNoReportingNoInline @ 0x1405F3F04
 * Callers:
 *     KeInitializeInterruptEx @ 0x140516588 (KeInitializeInterruptEx.c)
 * Callees:
 *     Feature_Servicing_UnexpectedWakeInterrupt__private_IsEnabledFallback @ 0x1405F3EE4 (Feature_Servicing_UnexpectedWakeInterrupt__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_UnexpectedWakeInterrupt__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_UnexpectedWakeInterrupt__private_featureState & 2) != 0 )
    return Feature_Servicing_UnexpectedWakeInterrupt__private_featureState & 1;
  else
    return Feature_Servicing_UnexpectedWakeInterrupt__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_UnexpectedWakeInterrupt__private_featureState,
             0);
}
