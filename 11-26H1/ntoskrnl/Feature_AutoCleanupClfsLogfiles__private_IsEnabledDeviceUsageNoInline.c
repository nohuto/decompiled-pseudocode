/*
 * XREFs of Feature_AutoCleanupClfsLogfiles__private_IsEnabledDeviceUsageNoInline @ 0x14050BB08
 * Callers:
 *     CmpStartCLFSLog @ 0x140869768 (CmpStartCLFSLog.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 * Callees:
 *     Feature_AutoCleanupClfsLogfiles__private_IsEnabledFallback @ 0x140535294 (Feature_AutoCleanupClfsLogfiles__private_IsEnabledFallback.c)
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
