/*
 * XREFs of ?ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1800D5360
 * Callers:
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x1800D5144 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x1800D5440 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z @ 0x1800D5980 (-GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CProjectedShadowCaster::ComputeEffectiveAlpha(CProjectedShadowCaster *this, CVisual **a2, bool *a3)
{
  CVisual *v3; // rdi
  bool v4; // bl
  float v5; // xmm6_4
  char v8; // r9
  char v9; // al
  bool v10; // r9
  float v11; // xmm6_4
  char v12; // r9
  float result; // xmm0_4

  v3 = (CVisual *)*((_QWORD *)this + 9);
  v4 = 0;
  v5 = FLOAT_1_0;
  *a3 = 0;
  while ( v3 != a2[9] )
  {
    v5 = v5 * fminf(1.0, fmaxf(CVisual::GetOpacityInternal(v3), 0.0));
    if ( v8 || (v9 = (*(__int64 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v3 + 64LL))(v3, 71LL), v10 = 0, v9) )
      v10 = 1;
    v3 = (CVisual *)*((_QWORD *)v3 + 11);
    *a3 = v10;
  }
  v11 = v5 * CVisual::GetVisualAlpha(v3, (const struct CVisualTree *)a2);
  if ( v12 || (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v3 + 64LL))(v3, 71LL) )
    v4 = 1;
  result = v11;
  *a3 = v4;
  return result;
}
