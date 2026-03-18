/*
 * XREFs of Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline @ 0x14070D064
 * Callers:
 *     MiDeletePartialVad @ 0x1403BCC54 (MiDeletePartialVad.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x14087EFD4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiInitializePartialVad @ 0x140AC0654 (MiInitializePartialVad.c)
 * Callees:
 *     Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledFallback @ 0x14070D0A0 (Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledFallback.c)
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
