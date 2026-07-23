/*
 * XREFs of Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline @ 0x140711D14
 * Callers:
 *     MiDeletePartialVad @ 0x1403C6AC4 (MiDeletePartialVad.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x1408853D4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiInitializePartialVad @ 0x140AC26F4 (MiInitializePartialVad.c)
 * Callees:
 *     Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledFallback @ 0x140711D50 (Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_Mm_RotateSplitResAvailLeak__private_featureState & 0x10) != 0 )
    return Feature_Servicing_Mm_RotateSplitResAvailLeak__private_featureState & 1;
  else
    return Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Mm_RotateSplitResAvailLeak__private_featureState,
             3LL);
}
