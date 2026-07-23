/*
 * XREFs of Feature_579542328__private_IsEnabledDeviceUsageNoInline @ 0x140618448
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     Feature_579542328__private_IsEnabledFallback @ 0x140618484 (Feature_579542328__private_IsEnabledFallback.c)
 */

__int64 Feature_579542328__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_579542328__private_featureState & 0x10) != 0 )
    return Feature_579542328__private_featureState & 1;
  else
    return Feature_579542328__private_IsEnabledFallback((unsigned int)Feature_579542328__private_featureState, 3LL);
}
