/*
 * XREFs of ?GetInflationScale@CMonitorTransform@@QEBAM_N@Z @ 0x180194C18
 * Callers:
 *     ?GetInflationScale@CDDisplayRenderTarget@@UEBAMXZ @ 0x180194AE0 (-GetInflationScale@CDDisplayRenderTarget@@UEBAMXZ.c)
 *     ?GetInflationScale@CLegacyRenderTarget@@UEBAMXZ @ 0x180194B10 (-GetInflationScale@CLegacyRenderTarget@@UEBAMXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CMonitorTransform::GetInflationScale(CMonitorTransform *this, char a2)
{
  float v2; // xmm1_4
  float v3; // xmm0_4

  if ( a2 )
  {
    v2 = *((float *)this + 56) * *((float *)this + 51);
    v3 = *((float *)this + 55) * *((float *)this + 52);
  }
  else
  {
    v2 = *((float *)this + 22) * *((float *)this + 17);
    v3 = *((float *)this + 21) * *((float *)this + 18);
  }
  return sqrtf_0(1.0 / (float)(v2 - v3));
}
