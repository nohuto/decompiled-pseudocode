/*
 * XREFs of ?RoundToNearestInt@@YAHM@Z @ 0x180017004
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017040 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180022258 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180047834 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?UpdateGeometry2DForClonedStagedVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800869A0 (-UpdateGeometry2DForClonedStagedVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x1800A3788 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A45BC (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800CF270 (-Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Translate2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800CF4C0 (-Translate2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 * Callees:
 *     _o_ceilf_0 @ 0x18009B6A0 (_o_ceilf_0.c)
 *     floorf @ 0x18009B6C4 (floorf.c)
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
