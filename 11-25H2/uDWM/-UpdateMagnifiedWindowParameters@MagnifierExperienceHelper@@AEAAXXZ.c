/*
 * XREFs of ?UpdateMagnifiedWindowParameters@MagnifierExperienceHelper@@AEAAXXZ @ 0x1800BBDF8
 * Callers:
 *     ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800BBCA4 (-SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z.c)
 *     ?SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z @ 0x1800BBCD0 (-SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MagnifierExperienceHelper::UpdateMagnifiedWindowParameters(MagnifierExperienceHelper *this)
{
  double v1; // xmm1_8
  char v2; // al
  double v3; // xmm1_8
  double v4; // xmm2_8
  double v5; // xmm2_8

  if ( *((float *)this + 31) == 0.0 && *((float *)this + 30) == 0.0 )
  {
    v1 = *((double *)this + 8);
    v2 = 1;
  }
  else
  {
    v1 = *((double *)this + 2);
    v2 = 0;
  }
  v3 = v1 / *((double *)this + 14);
  *((double *)this + 10) = v3;
  if ( v2 )
    v4 = *((double *)this + 9);
  else
    v4 = *((double *)this + 3);
  v5 = v4 / *((double *)this + 14);
  *((double *)this + 11) = v5;
  *((double *)this + 12) = v3 * 0.5;
  *((double *)this + 13) = v5 * 0.5;
}
