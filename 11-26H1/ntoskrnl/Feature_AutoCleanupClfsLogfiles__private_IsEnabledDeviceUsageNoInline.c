/*
 * XREFs of Feature_AutoCleanupClfsLogfiles__private_IsEnabledDeviceUsageNoInline @ 0x140512098
 * Callers:
 *     CmpStartCLFSLog @ 0x140863388 (CmpStartCLFSLog.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 * Callees:
 *     Feature_AutoCleanupClfsLogfiles__private_IsEnabledFallback @ 0x140532DF4 (Feature_AutoCleanupClfsLogfiles__private_IsEnabledFallback.c)
 */

__int64 Feature_AutoCleanupClfsLogfiles__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AutoCleanupClfsLogfiles__private_featureState & 0x10) != 0 )
    return Feature_AutoCleanupClfsLogfiles__private_featureState & 1;
  else
    return Feature_AutoCleanupClfsLogfiles__private_IsEnabledFallback(
             (unsigned int)Feature_AutoCleanupClfsLogfiles__private_featureState,
             3LL);
}
