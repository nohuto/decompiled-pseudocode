/*
 * XREFs of Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline @ 0x14004D29C
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14009A6DC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1402A1460 (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 *     ?EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ @ 0x140446010 (-EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     Feature_AccessEnableVSyncEventAtomically__private_IsEnabledFallback @ 0x14009B7B4 (Feature_AccessEnableVSyncEventAtomically__private_IsEnabledFallback.c)
 */

__int64 Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AccessEnableVSyncEventAtomically__private_featureState & 0x10) != 0 )
    return Feature_AccessEnableVSyncEventAtomically__private_featureState & 1;
  else
    return Feature_AccessEnableVSyncEventAtomically__private_IsEnabledFallback(
             (unsigned int)Feature_AccessEnableVSyncEventAtomically__private_featureState,
             3LL);
}
