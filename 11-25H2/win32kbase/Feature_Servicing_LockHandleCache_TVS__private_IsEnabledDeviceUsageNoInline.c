/*
 * XREFs of Feature_Servicing_LockHandleCache_TVS__private_IsEnabledDeviceUsageNoInline @ 0x1401C8160
 * Callers:
 *     bPEBCacheHandle @ 0x140016060 (bPEBCacheHandle.c)
 * Callees:
 *     Feature_Servicing_LockHandleCache_TVS__private_IsEnabledFallback @ 0x1401C8198 (Feature_Servicing_LockHandleCache_TVS__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_LockHandleCache_TVS__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_LockHandleCache_TVS__private_featureState & 0x10) != 0 )
    return Feature_Servicing_LockHandleCache_TVS__private_featureState & 1;
  else
    return Feature_Servicing_LockHandleCache_TVS__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_LockHandleCache_TVS__private_featureState,
             3LL);
}
