/*
 * XREFs of ?GetBlurCacheRealizationKey@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@PEAPEBX@Z @ 0x18016EB7C
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x180038EE8 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18002C2A0 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x18016EBD0 (-IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     ?FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x18016EC60 (-FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z.c)
 */

char __fastcall CBackdropVisualImage::GetBlurCacheRealizationKey(
        CBackdropVisualImage *this,
        const struct RenderTargetInfo *a2,
        CCachedVisualImage::CCachedTarget **a3)
{
  const struct RenderTargetInfo *v4; // rdx
  CCachedVisualImage *v5; // rcx
  CCachedVisualImage::CCachedTarget *ExistingCachedTarget; // rax
  CCachedVisualImage::CCachedTarget *v7; // rbx

  if ( !CBackdropVisualImage::IsValid(this) )
    return 0;
  ExistingCachedTarget = CCachedVisualImage::FindExistingCachedTarget(v5, v4);
  v7 = ExistingCachedTarget;
  if ( !ExistingCachedTarget || !CCachedVisualImage::CCachedTarget::IsValid(ExistingCachedTarget) || *((_BYTE *)v7 + 56) )
    return 0;
  *a3 = v7;
  return 1;
}
