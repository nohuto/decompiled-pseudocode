/*
 * XREFs of Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledNoReportingNoInline @ 0x14061DAEC
 * Callers:
 *     RtlpCopyLegacyContextArm64 @ 0x14061DCC4 (RtlpCopyLegacyContextArm64.c)
 * Callees:
 *     Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledFallback @ 0x14061DAC8 (Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_KernelArm64FpLrContextControl__private_featureState & 2) != 0 )
    return Feature_Servicing_KernelArm64FpLrContextControl__private_featureState & 1;
  else
    return Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_KernelArm64FpLrContextControl__private_featureState,
             0);
}
