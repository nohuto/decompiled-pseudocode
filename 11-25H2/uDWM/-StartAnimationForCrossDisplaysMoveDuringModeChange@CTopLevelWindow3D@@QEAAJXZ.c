/*
 * XREFs of ?StartAnimationForCrossDisplaysMoveDuringModeChange@CTopLevelWindow3D@@QEAAJXZ @ 0x1800D0A34
 * Callers:
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x180099384 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow3D::StartAnimationForCrossDisplaysMoveDuringModeChange(CTopLevelWindow3D *this)
{
  return CTopLevelWindow3D::StartAnimation((__int64)this, 5u);
}
