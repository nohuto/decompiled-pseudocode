/*
 * XREFs of ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x1800D5F34
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x1800D5BEC (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 * Callees:
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ @ 0x1800D5FB4 (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CProjectedShadowCaster::IsEmptyMaskContent(CProjectedShadowCaster *this)
{
  __int64 v1; // rax
  unsigned __int32 v2; // xmm1_4
  struct CBrush *EffectiveMaskBrush; // rax
  bool result; // al
  __m128 v5; // xmm1
  char v6; // [rsp+30h] [rbp+8h] BYREF

  result = !*((_QWORD *)this + 9)
        || ((v1 = *((_QWORD *)this + 16)) != 0
          ? (v5 = (__m128)_mm_loadu_si128((const __m128i *)(v1 + 104)), v2 = _mm_shuffle_ps(v5, v5, 255).m128_u32[0])
          : (v2 = LODWORD(FLOAT_1_0)),
            COERCE_FLOAT(v2 & _xmm) < 0.0000011920929
         || (EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush(this),
             v6 = 1,
             !(*(unsigned __int8 (__fastcall **)(struct CBrush *, _QWORD, char *))(*(_QWORD *)EffectiveMaskBrush + 320LL))(
                EffectiveMaskBrush,
                0LL,
                &v6)))
        || v6 != 0;
  return result;
}
