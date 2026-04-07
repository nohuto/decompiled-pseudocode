/*
 * XREFs of ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F27C
 * Callers:
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x18000C298 (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180022258 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x180040C44 (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x180074A3C (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A45BC (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B750C (-UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D5A44 (-DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F2BC (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 */

__int64 __fastcall ResourceHelper::CreateRectangleGeometry(
        const struct tagRECT *a1,
        struct CRectangleGeometryProxy **a2)
{
  int v2; // r8d
  int v3; // eax
  int v4; // r9d
  int v5; // r10d
  LONG top; // edx
  LONG left; // ecx

  v2 = 0;
  v3 = a1->bottom - a1->top;
  v4 = 0;
  v5 = a1->right - a1->left;
  top = a1->top;
  left = a1->left;
  if ( v3 >= 0 )
    v4 = v3;
  if ( v5 >= 0 )
    v2 = v5;
  return ResourceHelper::CreateRectangleGeometry(left, top, v2, v4, a2);
}
