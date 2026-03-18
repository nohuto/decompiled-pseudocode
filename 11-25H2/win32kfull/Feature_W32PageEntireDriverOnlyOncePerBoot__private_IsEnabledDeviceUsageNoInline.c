/*
 * XREFs of Feature_W32PageEntireDriverOnlyOncePerBoot__private_IsEnabledDeviceUsageNoInline @ 0x1402855D0
 * Callers:
 *     EditionDriverInitialize @ 0x140240B60 (EditionDriverInitialize.c)
 *     ?EditionDriverInitializeOrFault@@YAJH@Z @ 0x140284D88 (-EditionDriverInitializeOrFault@@YAJH@Z.c)
 * Callees:
 *     Feature_W32PageEntireDriverOnlyOncePerBoot__private_IsEnabledFallback @ 0x140285608 (Feature_W32PageEntireDriverOnlyOncePerBoot__private_IsEnabledFallback.c)
 */

__int64 Feature_W32PageEntireDriverOnlyOncePerBoot__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_W32PageEntireDriverOnlyOncePerBoot__private_featureState & 0x10) != 0 )
    return Feature_W32PageEntireDriverOnlyOncePerBoot__private_featureState & 1;
  else
    return Feature_W32PageEntireDriverOnlyOncePerBoot__private_IsEnabledFallback(
             (unsigned int)Feature_W32PageEntireDriverOnlyOncePerBoot__private_featureState,
             3LL);
}
