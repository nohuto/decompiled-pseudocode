/*
 * XREFs of ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x18001EB90
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001CF40 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x18001D484 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CButton::ComputeFadeValues(CButton *this, float *a2, float *a3)
{
  float v3; // xmm4_4
  float v4; // xmm2_4
  float v5; // xmm3_4

  v3 = *((float *)this + 88);
  v4 = *(double *)(*((_QWORD *)this + 43) + 48LL);
  v5 = (float)((float)(v3 - *((float *)this + 83)) * (float)(v4 + v4)) + *((float *)this + 83);
  *a3 = (float)(v3 - v4) * *((float *)this + 84);
  *a2 = v5;
  if ( v5 > v3 )
    *a2 = v3;
}
