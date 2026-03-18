/*
 * XREFs of ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z @ 0x1800D5980
 * Callers:
 *     ?ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1800D5360 (-ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CVisual::GetVisualAlpha(CVisual *this, CVisual **a2)
{
  float result; // xmm0_4
  __int64 v3; // rax
  float v4; // xmm2_4
  float v5; // edx
  float *v6; // rcx

  result = FLOAT_1_0;
  if ( this != a2[9] )
  {
    v3 = *((_QWORD *)this + 27);
    if ( (*(_DWORD *)(v3 + 4) & 0x8000000) != 0 )
    {
      v5 = *(float *)(v3 + 12);
      v6 = (float *)(v3 + 12);
      if ( (LODWORD(v5) & 0x7F000000) != 0x5000000 )
      {
        do
        {
          v6 = (float *)((char *)v6 + (LODWORD(v5) & 0xFFFFFF) + 4);
          v5 = *v6;
        }
        while ( (*(_DWORD *)v6 & 0x7F000000) != 0x5000000 );
      }
      v4 = v6[1];
    }
    else
    {
      v4 = FLOAT_1_0;
    }
    return fminf(1.0, fmaxf(v4, 0.0));
  }
  return result;
}
