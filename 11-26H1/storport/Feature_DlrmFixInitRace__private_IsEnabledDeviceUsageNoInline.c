/*
 * XREFs of Feature_DlrmFixInitRace__private_IsEnabledDeviceUsageNoInline @ 0x14012D52C
 * Callers:
 *     StorAdapterInitializeDlrmIfSupported @ 0x1401B0860 (StorAdapterInitializeDlrmIfSupported.c)
 * Callees:
 *     Feature_DlrmFixInitRace__private_IsEnabledFallback @ 0x14012D568 (Feature_DlrmFixInitRace__private_IsEnabledFallback.c)
 */

__int64 Feature_DlrmFixInitRace__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DlrmFixInitRace__private_featureState & 0x10) != 0 )
    return Feature_DlrmFixInitRace__private_featureState & 1;
  else
    return Feature_DlrmFixInitRace__private_IsEnabledFallback(
             (unsigned int)Feature_DlrmFixInitRace__private_featureState,
             3LL);
}
