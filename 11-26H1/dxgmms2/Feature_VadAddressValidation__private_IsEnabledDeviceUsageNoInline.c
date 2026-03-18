/*
 * XREFs of Feature_VadAddressValidation__private_IsEnabledDeviceUsageNoInline @ 0x14004F2BC
 * Callers:
 *     ReportVadValidationError @ 0x1400AAEE0 (ReportVadValidationError.c)
 * Callees:
 *     Feature_VadAddressValidation__private_IsEnabledFallback @ 0x14004F2F8 (Feature_VadAddressValidation__private_IsEnabledFallback.c)
 */

__int64 Feature_VadAddressValidation__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_VadAddressValidation__private_featureState & 0x10) != 0 )
    return Feature_VadAddressValidation__private_featureState & 1;
  else
    return Feature_VadAddressValidation__private_IsEnabledFallback(
             (unsigned int)Feature_VadAddressValidation__private_featureState,
             3LL);
}
