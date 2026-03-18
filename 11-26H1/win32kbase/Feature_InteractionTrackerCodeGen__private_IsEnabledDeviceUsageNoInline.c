/*
 * XREFs of Feature_InteractionTrackerCodeGen__private_IsEnabledDeviceUsageNoInline @ 0x14024460C
 * Callers:
 *     ?EmitBoundTrackerMarshalerUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1402440B8 (-EmitBoundTrackerMarshalerUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectCompos.c)
 * Callees:
 *     Feature_InteractionTrackerCodeGen__private_IsEnabledFallback @ 0x140244648 (Feature_InteractionTrackerCodeGen__private_IsEnabledFallback.c)
 */

__int64 Feature_InteractionTrackerCodeGen__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_InteractionTrackerCodeGen__private_featureState & 0x10) != 0 )
    return Feature_InteractionTrackerCodeGen__private_featureState & 1;
  else
    return Feature_InteractionTrackerCodeGen__private_IsEnabledFallback(
             (unsigned int)Feature_InteractionTrackerCodeGen__private_featureState,
             3LL);
}
