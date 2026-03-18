/*
 * XREFs of Feature_CheckPointConversionResult__private_IsEnabledDeviceUsageNoInline @ 0x1402126E8
 * Callers:
 *     ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x140212150 (-EndInertia@CInertiaManager@@QEAA_NXZ.c)
 * Callees:
 *     Feature_CheckPointConversionResult__private_IsEnabledFallback @ 0x140212720 (Feature_CheckPointConversionResult__private_IsEnabledFallback.c)
 */

__int64 Feature_CheckPointConversionResult__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CheckPointConversionResult__private_featureState & 0x10) != 0 )
    return Feature_CheckPointConversionResult__private_featureState & 1;
  else
    return Feature_CheckPointConversionResult__private_IsEnabledFallback(
             (unsigned int)Feature_CheckPointConversionResult__private_featureState,
             3LL);
}
