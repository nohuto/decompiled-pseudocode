/*
 * XREFs of Feature_Servicing_MSRC100723__private_IsEnabledDeviceUsageNoInline @ 0x140618728
 * Callers:
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 * Callees:
 *     Feature_Servicing_MSRC100723__private_IsEnabledFallback @ 0x140618764 (Feature_Servicing_MSRC100723__private_IsEnabledFallback.c)
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
