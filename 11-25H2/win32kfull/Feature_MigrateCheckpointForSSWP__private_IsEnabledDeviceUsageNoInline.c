/*
 * XREFs of Feature_MigrateCheckpointForSSWP__private_IsEnabledDeviceUsageNoInline @ 0x1402AC36C
 * Callers:
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     Feature_MigrateCheckpointForSSWP__private_IsEnabledFallback @ 0x1402AC3A4 (Feature_MigrateCheckpointForSSWP__private_IsEnabledFallback.c)
 */

__int64 Feature_MigrateCheckpointForSSWP__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_MigrateCheckpointForSSWP__private_featureState & 0x10) != 0 )
    return Feature_MigrateCheckpointForSSWP__private_featureState & 1;
  else
    return Feature_MigrateCheckpointForSSWP__private_IsEnabledFallback(
             (unsigned int)Feature_MigrateCheckpointForSSWP__private_featureState,
             3LL);
}
