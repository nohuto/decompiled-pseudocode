/*
 * XREFs of ?UpdateMagnifiedWindowParameters@MagnifierExperienceHelper@@AEAAXXZ @ 0x1800BB620
 * Callers:
 *     ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800BB4CC (-SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z.c)
 *     ?SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z @ 0x1800BB4F8 (-SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MagnifierExperienceHelper::UpdateMagnifiedWindowParameters(MagnifierExperienceHelper *this)
{
  bool v1; // r8
  double v2; // xmm2_8
  double v3; // xmm1_8

  v1 = *((float *)this + 31) == 0.0 && *((float *)this + 30) == 0.0;
  v2 = *(double *)((char *)this + (v1 ? 0x30 : 0) + 16) / *((double *)this + 14);
  *((double *)this + 10) = v2;
  v3 = *(double *)((char *)this + (v1 ? 0x30 : 0) + 24) / *((double *)this + 14);
  *((double *)this + 11) = v3;
  *((double *)this + 12) = v2 * 0.5;
  *((double *)this + 13) = v3 * 0.5;
}
