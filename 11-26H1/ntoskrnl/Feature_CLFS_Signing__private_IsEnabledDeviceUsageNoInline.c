/*
 * XREFs of Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline @ 0x1404FA69C
 * Callers:
 *     CmpStartCLFSLog @ 0x140863388 (CmpStartCLFSLog.c)
 *     CmpStartRMLog @ 0x1408AC340 (CmpStartRMLog.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 * Callees:
 *     Feature_CLFS_Signing__private_IsEnabledFallback @ 0x1405315B0 (Feature_CLFS_Signing__private_IsEnabledFallback.c)
 */

__int64 Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CLFS_Signing__private_featureState & 0x10) != 0 )
    return Feature_CLFS_Signing__private_featureState & 1;
  else
    return Feature_CLFS_Signing__private_IsEnabledFallback(
             (unsigned int)Feature_CLFS_Signing__private_featureState,
             3LL);
}
