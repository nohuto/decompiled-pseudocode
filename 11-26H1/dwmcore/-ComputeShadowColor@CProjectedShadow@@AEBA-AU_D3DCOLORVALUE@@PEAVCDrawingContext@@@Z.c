/*
 * XREFs of ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1800D74BC
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D72A0 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ @ 0x1800D5FB4 (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ.c)
 *     ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1800D7088 (-GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetColor@CProjectedShadowCaster@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x1800D7DB0 (-GetColor@CProjectedShadowCaster@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x1801DC6E0 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _D3DCOLORVALUE *__fastcall CProjectedShadow::ComputeShadowColor(
        CProjectedShadowCaster **this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        struct CDrawingContext *a3)
{
  __int64 v5; // r8
  float v6; // xmm6_4
  float v7; // xmm1_4
  int v8; // eax
  float *EffectiveMaskBrush; // rdi
  float v10; // xmm0_4

  CProjectedShadowCaster::GetColor(this[10], retstr);
  v6 = *((float *)this + 25);
  v7 = (float)(CProjectedShadowCaster::GetEffectiveAlpha(
                 this[10],
                 *(const struct CVisualTree **)(v5 + 7944),
                 (bool *)v5)
             * v6)
     * retstr->a;
  retstr->a = v7;
  v8 = *((_DWORD *)this + 63);
  if ( v8 != 1 )
  {
    if ( v8 != 5 )
      return retstr;
    v10 = (float)(CProjectedShadow::GetBlurForBoundary(this, 3LL) / *((float *)this + 24)) * v7;
    goto LABEL_4;
  }
  EffectiveMaskBrush = (float *)CProjectedShadowCaster::GetEffectiveMaskBrush(this[10]);
  if ( (*(unsigned __int8 (__fastcall **)(float *, __int64))(*(_QWORD *)EffectiveMaskBrush + 64LL))(
         EffectiveMaskBrush,
         19LL) )
  {
    v10 = EffectiveMaskBrush[29] * retstr->a;
LABEL_4:
    retstr->a = v10;
  }
  return retstr;
}
