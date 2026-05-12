/*
 * XREFs of Feature_SteelixSglModeFix__private_IsEnabledDeviceUsageNoInline @ 0x140078B80
 * Callers:
 *     RaidNvmeIceIoStart @ 0x14007A278 (RaidNvmeIceIoStart.c)
 * Callees:
 *     Feature_SteelixSglModeFix__private_IsEnabledFallback @ 0x140078BBC (Feature_SteelixSglModeFix__private_IsEnabledFallback.c)
 */

__int64 Feature_SteelixSglModeFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SteelixSglModeFix__private_featureState & 0x10) != 0 )
    return Feature_SteelixSglModeFix__private_featureState & 1;
  else
    return Feature_SteelixSglModeFix__private_IsEnabledFallback(
             (unsigned int)Feature_SteelixSglModeFix__private_featureState,
             3LL);
}
