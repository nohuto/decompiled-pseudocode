/*
 * XREFs of Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x14008592C
 * Callers:
 *     DpiSessionCreateCallback @ 0x1403FE19C (DpiSessionCreateCallback.c)
 *     DpiAcpiHandleAcpiEvent @ 0x140411414 (DpiAcpiHandleAcpiEvent.c)
 *     DpiPdoAddPdo @ 0x140442608 (DpiPdoAddPdo.c)
 *     DpiPdoRemovePdo @ 0x140444378 (DpiPdoRemovePdo.c)
 *     DpiInitializeGlobalState @ 0x14044C9F0 (DpiInitializeGlobalState.c)
 * Callees:
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback @ 0x140085968 (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback.c)
 */

__int64 Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ForceConnectionDetectionOnDcToAc__private_featureState & 0x10) != 0 )
    return Feature_ForceConnectionDetectionOnDcToAc__private_featureState & 1;
  else
    return Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback(
             (unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_featureState,
             3LL);
}
