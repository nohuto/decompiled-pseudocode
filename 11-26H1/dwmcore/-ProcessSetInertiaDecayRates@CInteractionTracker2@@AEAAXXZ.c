/*
 * XREFs of ?ProcessSetInertiaDecayRates@CInteractionTracker2@@AEAAXXZ @ 0x180274E28
 * Callers:
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 * Callees:
 *     ?SetPositionInertiaDecayRateInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z @ 0x180276600 (-SetPositionInertiaDecayRateInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetScaleInertiaDecayRateInternal@CInteractionTracker2@@AEAAXM@Z @ 0x180276E2C (-SetScaleInertiaDecayRateInternal@CInteractionTracker2@@AEAAXM@Z.c)
 */

void __fastcall CInteractionTracker2::ProcessSetInertiaDecayRates(CInteractionTracker2 *this)
{
  float v1; // xmm2_4
  _DWORD v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((float *)this + 51);
  if ( v1 != 0.94999999 || *((float *)this + 52) != 0.94999999 || *((float *)this + 53) != 0.98500001 )
  {
    v3[1] = *((_DWORD *)this + 52);
    *(float *)v3 = v1;
    v3[2] = 0;
    CInteractionTracker2::SetPositionInertiaDecayRateInternal(this, (const struct D2DVector3 *)v3);
    CInteractionTracker2::SetScaleInertiaDecayRateInternal(this, *((float *)this + 53));
  }
}
