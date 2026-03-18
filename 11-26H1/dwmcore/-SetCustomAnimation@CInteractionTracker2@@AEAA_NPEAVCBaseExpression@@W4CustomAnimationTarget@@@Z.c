/*
 * XREFs of ?SetCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180276224
 * Callers:
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker2@@AEAAXXZ @ 0x180275298 (-ProcessSetRequestedPositionAnimation@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker2@@AEAAXXZ @ 0x1802753D0 (-ProcessSetRequestedScaleAnimation@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     ?CheckForIdle@CInteractionTracker2@@AEAAXXZ @ 0x180272600 (-CheckForIdle@CInteractionTracker2@@AEAAXXZ.c)
 *     ?StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z @ 0x180277314 (-StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18027740C (-TransitionToCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationT.c)
 */

char __fastcall CInteractionTracker2::SetCustomAnimation(CInteractionTracker2 *a1, __int64 a2, int a3)
{
  char v3; // di

  v3 = 0;
  if ( a2 )
    return CInteractionTracker2::TransitionToCustomAnimation();
  if ( *((_DWORD *)a1 + 22) == 3 )
  {
    CInteractionTracker2::StopCustomAnimation(a1, a3, 0);
    CInteractionTracker2::CheckForIdle(a1);
  }
  return v3;
}
