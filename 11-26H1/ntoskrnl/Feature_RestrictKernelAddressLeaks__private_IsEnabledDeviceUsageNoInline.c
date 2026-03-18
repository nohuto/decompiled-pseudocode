/*
 * XREFs of Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline @ 0x1404B8468
 * Callers:
 *     ExIsRestrictedCaller @ 0x140A8C678 (ExIsRestrictedCaller.c)
 * Callees:
 *     Feature_RestrictKernelAddressLeaks__private_IsEnabledFallback @ 0x1405313E4 (Feature_RestrictKernelAddressLeaks__private_IsEnabledFallback.c)
 */

__int64 Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RestrictKernelAddressLeaks__private_featureState & 0x10) != 0 )
    return Feature_RestrictKernelAddressLeaks__private_featureState & 1;
  else
    return Feature_RestrictKernelAddressLeaks__private_IsEnabledFallback(
             (unsigned int)Feature_RestrictKernelAddressLeaks__private_featureState,
             3LL);
}
