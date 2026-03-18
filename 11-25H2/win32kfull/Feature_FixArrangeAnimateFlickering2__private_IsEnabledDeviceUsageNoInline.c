/*
 * XREFs of Feature_FixArrangeAnimateFlickering2__private_IsEnabledDeviceUsageNoInline @ 0x140272100
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x140232CAC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A9840 (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402DA4C0 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 * Callees:
 *     Feature_FixArrangeAnimateFlickering2__private_IsEnabledFallback @ 0x140272138 (Feature_FixArrangeAnimateFlickering2__private_IsEnabledFallback.c)
 */

__int64 Feature_FixArrangeAnimateFlickering2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixArrangeAnimateFlickering2__private_featureState & 0x10) != 0 )
    return Feature_FixArrangeAnimateFlickering2__private_featureState & 1;
  else
    return Feature_FixArrangeAnimateFlickering2__private_IsEnabledFallback(
             (unsigned int)Feature_FixArrangeAnimateFlickering2__private_featureState,
             3LL);
}
