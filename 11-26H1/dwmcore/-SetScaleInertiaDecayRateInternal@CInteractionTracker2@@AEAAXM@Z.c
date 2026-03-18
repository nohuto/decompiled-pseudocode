/*
 * XREFs of ?SetScaleInertiaDecayRateInternal@CInteractionTracker2@@AEAAXM@Z @ 0x180276E2C
 * Callers:
 *     ?ProcessSetInertiaDecayRates@CInteractionTracker2@@AEAAXXZ @ 0x180274E28 (-ProcessSetInertiaDecayRates@CInteractionTracker2@@AEAAXXZ.c)
 *     ?SetProperty@CInteractionTracker2@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180276A20 (-SetProperty@CInteractionTracker2@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYP.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker2::SetScaleInertiaDecayRateInternal(CInteractionTracker2 *this, float a2)
{
  float v2; // xmm2_4

  v2 = fminf(1.0, fmaxf(1.0 - a2, 0.0));
  if ( *((float *)this + 129) != v2 )
    *((float *)this + 129) = v2;
  CInteractionTracker2::BigHammerInvalidateConsumingAnimations((__int64)this, 70LL);
}
