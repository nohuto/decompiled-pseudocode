/*
 * XREFs of Feature_IommuStage1FaultSuppresion__private_IsEnabledDeviceUsageNoInline @ 0x140589DB4
 * Callers:
 *     HalpIommuReportIommuFault @ 0x1405A2AB0 (HalpIommuReportIommuFault.c)
 *     IommupDeviceEnableSvm @ 0x14078537C (IommupDeviceEnableSvm.c)
 * Callees:
 *     Feature_IommuStage1FaultSuppresion__private_IsEnabledFallback @ 0x140589DF0 (Feature_IommuStage1FaultSuppresion__private_IsEnabledFallback.c)
 */

__int64 Feature_IommuStage1FaultSuppresion__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_IommuStage1FaultSuppresion__private_featureState & 0x10) != 0 )
    return Feature_IommuStage1FaultSuppresion__private_featureState & 1;
  else
    return Feature_IommuStage1FaultSuppresion__private_IsEnabledFallback(
             (unsigned int)Feature_IommuStage1FaultSuppresion__private_featureState,
             3LL);
}
