/*
 * XREFs of Feature_PTPZoomImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1402255B4
 * Callers:
 *     ?ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z @ 0x140192FF0 (-ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z.c)
 *     ?ProcessInitialization@CPTPEngine@@MEAAJXZ @ 0x140225220 (-ProcessInitialization@CPTPEngine@@MEAAJXZ.c)
 * Callees:
 *     Feature_PTPZoomImprovements__private_IsEnabledFallback @ 0x1402255EC (Feature_PTPZoomImprovements__private_IsEnabledFallback.c)
 */

__int64 Feature_PTPZoomImprovements__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PTPZoomImprovements__private_featureState & 0x10) != 0 )
    return Feature_PTPZoomImprovements__private_featureState & 1;
  else
    return Feature_PTPZoomImprovements__private_IsEnabledFallback(
             (unsigned int)Feature_PTPZoomImprovements__private_featureState,
             3LL);
}
