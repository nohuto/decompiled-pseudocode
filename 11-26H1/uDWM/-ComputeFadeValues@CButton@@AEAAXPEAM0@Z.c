/*
 * XREFs of ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x180068390
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180008A14 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x1800682F0 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CButton::ComputeFadeValues(CButton *this, float *a2, float *a3)
{
  float v3; // xmm4_4
  float v4; // xmm2_4
  float v5; // xmm3_4

  v3 = *((float *)this + 74);
  v4 = *(double *)(*((_QWORD *)this + 36) + 48LL);
  v5 = (float)((float)(v3 - *((float *)this + 69)) * (float)(v4 + v4)) + *((float *)this + 69);
  *a3 = (float)(v3 - v4) * *((float *)this + 70);
  *a2 = v5;
  if ( v5 > v3 )
    *a2 = v3;
}
