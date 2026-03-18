/*
 * XREFs of ?SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z @ 0x1801390FC
 * Callers:
 *     ?SetProperty@CInteractionTracker@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801351E0 (-SetProperty@CInteractionTracker@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE.c)
 *     ?ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES@@@Z @ 0x1801390A0 (-ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker::SetScaleInertiaDecayRate(CInteractionTracker *this, float a2)
{
  float v2; // xmm2_4

  v2 = fminf(1.0, fmaxf(1.0 - a2, 0.0));
  if ( *((float *)this + 69) != v2 )
    *((float *)this + 69) = v2;
  CInteractionTracker::BigHammerInvalidateConsumingAnimations(this, 64LL);
}
