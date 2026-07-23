/*
 * XREFs of Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledNoReportingNoInline @ 0x18012035C
 * Callers:
 *     RtlpCopyLegacyContextArm64 @ 0x180120058 (RtlpCopyLegacyContextArm64.c)
 * Callees:
 *     <none>
 */

__int64 Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_KernelArm64FpLrContextControl__private_featureState & 2) != 0 )
    return Feature_Servicing_KernelArm64FpLrContextControl__private_featureState & 1;
  else
    return Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_KernelArm64FpLrContextControl__private_featureState,
             0LL);
}
