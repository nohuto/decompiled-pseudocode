/*
 * XREFs of Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline @ 0x1406FC634
 * Callers:
 *     MiComputeHardTrimSize @ 0x1402CF228 (MiComputeHardTrimSize.c)
 *     MiUpdateTrimPrediction @ 0x14052046C (MiUpdateTrimPrediction.c)
 *     MiStrongCodeImage @ 0x140521118 (MiStrongCodeImage.c)
 * Callees:
 *     Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledFallback @ 0x1406FC670 (Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_Mm_WsTrimFixes__private_featureState & 0x10) != 0 )
    return Feature_Servicing_Mm_WsTrimFixes__private_featureState & 1;
  else
    return Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Mm_WsTrimFixes__private_featureState,
             3LL);
}
