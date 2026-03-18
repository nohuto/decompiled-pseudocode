/*
 * XREFs of Feature_MSRC99180_58215914__private_IsEnabledNoReportingNoInline @ 0x14007F7CC
 * Callers:
 *     ?NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z @ 0x1401E9FAC (-NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z.c)
 * Callees:
 *     Feature_MSRC99180_58215914__private_IsEnabledFallback @ 0x14007F7B0 (Feature_MSRC99180_58215914__private_IsEnabledFallback.c)
 */

__int64 Feature_MSRC99180_58215914__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_MSRC99180_58215914__private_featureState & 2) != 0 )
    return Feature_MSRC99180_58215914__private_featureState & 1;
  else
    return Feature_MSRC99180_58215914__private_IsEnabledFallback(
             (unsigned int)Feature_MSRC99180_58215914__private_featureState,
             0);
}
