/*
 * XREFs of ?LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@PEAUEffectInput@@@Z @ 0x1801AC2D4
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x180038EE8 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180019538 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?IsUsableOnTargetWithHDRBoost@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetInfo@@_N@Z @ 0x1801AC36C (-IsUsableOnTargetWithHDRBoost@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetIn.c)
 */

char __fastcall CBlurredBackdropCache::LookupCachedBlur(
        const struct CBackdropVisualImage ***this,
        const struct CBackdropVisualImage *a2,
        const struct RenderTargetInfo *a3,
        struct EffectInput *a4)
{
  const struct CBackdropVisualImage **v5; // rbx
  char v9; // r12

  v5 = *this;
  v9 = *((_BYTE *)g_pComposition + 6458);
  while ( 1 )
  {
    if ( v5 == this[1] )
      return 0;
    if ( a2 == *v5
      && CBlurredBackdropCache::IsUsableOnTargetWithHDRBoost((const struct CDrawListBitmap *)(v5 + 2), a3, v9) )
    {
      break;
    }
    v5 += 16;
  }
  EffectInput::operator=((__int64 *)a4, (__int64 *)v5 + 2);
  return 1;
}
