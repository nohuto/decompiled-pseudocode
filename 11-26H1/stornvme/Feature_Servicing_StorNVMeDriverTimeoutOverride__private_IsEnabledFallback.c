/*
 * XREFs of Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledFallback @ 0x1400230C8
 * Callers:
 *     Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline @ 0x14002308C (Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400144B8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&wil_details_featureDescriptors_a);
}
