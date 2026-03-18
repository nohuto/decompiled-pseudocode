/*
 * XREFs of ?IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18026D570
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z @ 0x1801A7A28 (-GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z.c)
 *     ?IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z @ 0x18025A258 (-IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z.c)
 */

char __fastcall CDropShadow::IsDrawListCacheDirty(
        CDropShadow *this,
        __m128 *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4)
{
  struct CVisual *CurrentVisual; // rax
  CDropShadow *v7; // r9
  unsigned __int64 v8; // rcx

  CurrentVisual = CDrawingContext::GetCurrentVisual(a3);
  v8 = *(_QWORD *)CDropShadow::GetEffectiveShadowIntermediates(v7, CurrentVisual);
  if ( v8 && v8 <= a2[1].m128_u64[1] )
    return CDrawListCache::IsDirty(a2, a3);
  else
    return 1;
}
