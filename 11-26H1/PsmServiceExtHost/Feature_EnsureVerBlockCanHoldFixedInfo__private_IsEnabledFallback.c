/*
 * XREFs of Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledFallback @ 0x18009E9B4
 * Callers:
 *     Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline @ 0x18009E980 (Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_EnsureVerBlockCanHoldFixedInfo__private_descriptor);
}
