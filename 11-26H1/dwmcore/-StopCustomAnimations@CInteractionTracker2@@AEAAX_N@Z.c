/*
 * XREFs of ?StopCustomAnimations@CInteractionTracker2@@AEAAX_N@Z @ 0x1802773C8
 * Callers:
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker2@@EEAAX_N@Z @ 0x1802772F0 (-StopCustomAndDefaultAnimations@CInteractionTracker2@@EEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z @ 0x180277668 (-TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z @ 0x180277314 (-StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z.c)
 */

void __fastcall CInteractionTracker2::StopCustomAnimations(CInteractionTracker2 *this, char a2)
{
  unsigned int i; // ebx

  for ( i = 0; i < 2; ++i )
    CInteractionTracker2::StopCustomAnimation(this, i, a2);
}
