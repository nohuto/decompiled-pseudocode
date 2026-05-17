/*
 * XREFs of Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledFallback @ 0x1801226C0
 * Callers:
 *     Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledNoReportingNoInline @ 0x1801205AC (Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_KernelArm64FpLrContextControl__private_descriptor);
}
