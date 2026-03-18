/*
 * XREFs of ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18013D1F4
 * Callers:
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker@@EEAAX_N@Z @ 0x18013D1D0 (-StopCustomAndDefaultAnimations@CInteractionTracker@@EEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18013E0F4 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x18013D238 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 */

void __fastcall CInteractionTracker::StopCustomAnimations(CInteractionTracker *this, bool a2)
{
  unsigned int i; // ebx

  for ( i = 0; i < 2; ++i )
    CInteractionTracker::StopCustomAnimation(this, i, a2);
}
