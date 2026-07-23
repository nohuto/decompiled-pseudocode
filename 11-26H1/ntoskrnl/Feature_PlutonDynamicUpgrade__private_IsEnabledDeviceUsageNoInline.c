/*
 * XREFs of Feature_PlutonDynamicUpgrade__private_IsEnabledDeviceUsageNoInline @ 0x140609B7C
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x140BFFC6C (PopBuildMemoryImageHeader.c)
 * Callees:
 *     Feature_PlutonDynamicUpgrade__private_IsEnabledFallback @ 0x140609BB8 (Feature_PlutonDynamicUpgrade__private_IsEnabledFallback.c)
 */

__int64 Feature_PlutonDynamicUpgrade__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PlutonDynamicUpgrade__private_featureState & 0x10) != 0 )
    return Feature_PlutonDynamicUpgrade__private_featureState & 1;
  else
    return Feature_PlutonDynamicUpgrade__private_IsEnabledFallback(
             (unsigned int)Feature_PlutonDynamicUpgrade__private_featureState,
             3LL);
}
