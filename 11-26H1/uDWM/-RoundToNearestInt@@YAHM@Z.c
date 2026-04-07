/*
 * XREFs of ?RoundToNearestInt@@YAHM@Z @ 0x1800528DC
 * Callers:
 *     ?UpdateGeometry2DForClonedStagedVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180050EEC (-UpdateGeometry2DForClonedStagedVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180051450 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x180095EB0 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180096DCC (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009734C (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800C91D0 (-Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Translate2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800C9430 (-Translate2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 * Callees:
 *     _o_ceilf_0 @ 0x18008EEAC (_o_ceilf_0.c)
 *     floorf @ 0x18008EED0 (floorf.c)
 */

__int64 __fastcall RoundToNearestInt(float a1)
{
  float v1; // xmm0_4

  if ( a1 < 0.0 )
    v1 = o_ceilf_0(a1 - 0.5);
  else
    v1 = floorf(a1 + 0.5);
  return (unsigned int)(int)v1;
}
