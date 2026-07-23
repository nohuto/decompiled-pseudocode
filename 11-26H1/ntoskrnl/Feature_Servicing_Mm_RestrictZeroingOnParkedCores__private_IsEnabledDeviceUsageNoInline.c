/*
 * XREFs of Feature_Servicing_Mm_RestrictZeroingOnParkedCores__private_IsEnabledDeviceUsageNoInline @ 0x140712E5C
 * Callers:
 *     MiPeriodicZeroingNeeded @ 0x1402A58F4 (MiPeriodicZeroingNeeded.c)
 *     MiImmediateZeroingNeeded @ 0x1402C09EC (MiImmediateZeroingNeeded.c)
 * Callees:
 *     Feature_Servicing_Mm_RestrictZeroingOnParkedCores__private_IsEnabledFallback @ 0x140712E98 (Feature_Servicing_Mm_RestrictZeroingOnParkedCores__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Mm_RestrictZeroingOnParkedCores__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_Mm_RestrictZeroingOnParkedCores__private_featureState & 0x10) != 0 )
    return Feature_Servicing_Mm_RestrictZeroingOnParkedCores__private_featureState & 1;
  else
    return Feature_Servicing_Mm_RestrictZeroingOnParkedCores__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Mm_RestrictZeroingOnParkedCores__private_featureState,
             3LL);
}
