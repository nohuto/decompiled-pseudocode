/*
 * XREFs of Feature_2609059128__private_IsEnabledDeviceUsageNoInline @ 0x18015999C
 * Callers:
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180159A3C (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180159FD8 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 Feature_2609059128__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_2609059128__private_featureState & 0x10) != 0 )
    return Feature_2609059128__private_featureState & 1;
  else
    return Feature_2609059128__private_IsEnabledFallback((unsigned int)Feature_2609059128__private_featureState, 3LL);
}
