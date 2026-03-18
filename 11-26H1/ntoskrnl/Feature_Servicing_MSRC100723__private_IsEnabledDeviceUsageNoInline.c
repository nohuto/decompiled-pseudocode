/*
 * XREFs of Feature_Servicing_MSRC100723__private_IsEnabledDeviceUsageNoInline @ 0x140615708
 * Callers:
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 * Callees:
 *     Feature_Servicing_MSRC100723__private_IsEnabledFallback @ 0x140615744 (Feature_Servicing_MSRC100723__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_MSRC100723__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_MSRC100723__private_featureState & 0x10) != 0 )
    return Feature_Servicing_MSRC100723__private_featureState & 1;
  else
    return Feature_Servicing_MSRC100723__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_MSRC100723__private_featureState,
             3LL);
}
