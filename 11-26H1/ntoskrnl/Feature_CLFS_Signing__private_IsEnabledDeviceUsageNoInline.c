/*
 * XREFs of Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline @ 0x1404F3CAC
 * Callers:
 *     CmpStartCLFSLog @ 0x140869768 (CmpStartCLFSLog.c)
 *     CmpStartRMLog @ 0x1408B2784 (CmpStartRMLog.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 * Callees:
 *     Feature_CLFS_Signing__private_IsEnabledFallback @ 0x140533AB0 (Feature_CLFS_Signing__private_IsEnabledFallback.c)
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
