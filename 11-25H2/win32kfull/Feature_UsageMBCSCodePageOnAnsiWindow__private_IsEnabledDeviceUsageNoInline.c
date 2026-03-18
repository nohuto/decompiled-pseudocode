/*
 * XREFs of Feature_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledDeviceUsageNoInline @ 0x1402B61AC
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 * Callees:
 *     Feature_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledFallback @ 0x1402B61E4 (Feature_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledFallback.c)
 */

__int64 Feature_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UsageMBCSCodePageOnAnsiWindow__private_featureState & 0x10) != 0 )
    return Feature_UsageMBCSCodePageOnAnsiWindow__private_featureState & 1;
  else
    return Feature_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledFallback(
             (unsigned int)Feature_UsageMBCSCodePageOnAnsiWindow__private_featureState,
             3LL);
}
