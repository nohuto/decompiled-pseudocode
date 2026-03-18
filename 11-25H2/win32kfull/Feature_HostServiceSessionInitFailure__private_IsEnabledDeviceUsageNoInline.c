/*
 * XREFs of Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline @ 0x14028557C
 * Callers:
 *     EditionDriverInitialize @ 0x140240B60 (EditionDriverInitialize.c)
 *     ?EditionDriverInitializeOrFault@@YAJH@Z @ 0x140284D88 (-EditionDriverInitializeOrFault@@YAJH@Z.c)
 * Callees:
 *     Feature_HostServiceSessionInitFailure__private_IsEnabledFallback @ 0x1402855B4 (Feature_HostServiceSessionInitFailure__private_IsEnabledFallback.c)
 */

__int64 Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HostServiceSessionInitFailure__private_featureState & 0x10) != 0 )
    return Feature_HostServiceSessionInitFailure__private_featureState & 1;
  else
    return Feature_HostServiceSessionInitFailure__private_IsEnabledFallback(
             (unsigned int)Feature_HostServiceSessionInitFailure__private_featureState,
             3LL);
}
