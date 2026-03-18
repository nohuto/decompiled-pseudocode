/*
 * XREFs of Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledNoReportingNoInline @ 0x14061AA9C
 * Callers:
 *     RtlpCopyLegacyContextArm64 @ 0x14061AC74 (RtlpCopyLegacyContextArm64.c)
 * Callees:
 *     Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledFallback @ 0x14061AA78 (Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledFallback.c)
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
