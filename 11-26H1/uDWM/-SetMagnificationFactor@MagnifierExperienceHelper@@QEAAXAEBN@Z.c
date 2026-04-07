/*
 * XREFs of ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800BB4CC
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007A548 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800BADE0 (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN00@Z.c)
 *     ?GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z @ 0x1800BAF70 (-GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEB.c)
 * Callees:
 *     ?UpdateMagnifiedWindowParameters@MagnifierExperienceHelper@@AEAAXXZ @ 0x1800BB620 (-UpdateMagnifiedWindowParameters@MagnifierExperienceHelper@@AEAAXXZ.c)
 */

void __fastcall MagnifierExperienceHelper::SetMagnificationFactor(MagnifierExperienceHelper *this, double *a2)
{
  if ( *((double *)this + 14) != *a2 )
  {
    *((double *)this + 14) = *a2;
    MagnifierExperienceHelper::UpdateMagnifiedWindowParameters(this);
  }
}
