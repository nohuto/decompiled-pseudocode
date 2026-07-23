/*
 * XREFs of Feature_993200443__private_IsEnabledDeviceUsageNoInline @ 0x1406D7ACC
 * Callers:
 *     NtPssCaptureVaSpaceBulk @ 0x14084BEC0 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     Feature_993200443__private_IsEnabledFallback @ 0x1406D7B08 (Feature_993200443__private_IsEnabledFallback.c)
 */

__int64 Feature_993200443__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_993200443__private_featureState & 0x10) != 0 )
    return Feature_993200443__private_featureState & 1;
  else
    return Feature_993200443__private_IsEnabledFallback((unsigned int)Feature_993200443__private_featureState, 3LL);
}
