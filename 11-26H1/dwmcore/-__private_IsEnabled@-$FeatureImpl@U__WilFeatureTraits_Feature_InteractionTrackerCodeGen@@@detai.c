/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InteractionTrackerCodeGen@@@details@wil@@QEAA_NXZ @ 0x18014B458
 * Callers:
 *     ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x18014B7D0 (-ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUta.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InteractionTrackerCodeGen@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18014B2F4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InteractionTrackerCodeGe.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InteractionTrackerCodeGen@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014B3D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InteractionTrackerCodeGen@@@details@wil@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_InteractionTrackerCodeGen>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InteractionTrackerCodeGen>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InteractionTrackerCodeGen>::ReportUsage(
    (volatile signed __int32 *)a1,
    v5 & 1,
    v3);
  return v2;
}
