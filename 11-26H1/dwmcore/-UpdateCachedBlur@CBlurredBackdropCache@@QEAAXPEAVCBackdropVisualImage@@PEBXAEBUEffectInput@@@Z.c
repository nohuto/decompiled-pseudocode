/*
 * XREFs of ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z @ 0x1800189E4
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x180038EE8 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     ?RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x1800185FC (-RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 *     ??$emplace_back@PEAVCBackdropVisualImage@@PEBXUEffectInput@@@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCBackdropVisualImage@@PEBXUEffectInput@@@Z @ 0x180018AF4 (--$emplace_back@PEAVCBackdropVisualImage@@PEBXUEffectInput@@@-$vector_facade@UCachedBlur@CBlurre.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180019538 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180019FEC (--0EffectInput@@QEAA@AEBU0@@Z.c)
 */

void __fastcall CBlurredBackdropCache::UpdateCachedBlur(
        CBlurredBackdropCache *this,
        struct CBackdropVisualImage *a2,
        const void *a3,
        const struct EffectInput *a4)
{
  __int64 v4; // rbx
  __int64 v9; // rsi
  EffectInput *v10; // rax
  _BYTE v11[112]; // [rsp+20h] [rbp-88h] BYREF

  v4 = *(_QWORD *)this;
  v9 = 0LL;
  while ( v4 != *((_QWORD *)this + 1) )
  {
    if ( a2 == *(struct CBackdropVisualImage **)v4 && a3 == *(const void **)(v4 + 8) )
    {
      v9 = v4;
      EffectInput::operator=(v4 + 16);
    }
    v4 += 128LL;
  }
  if ( !v9 )
  {
    v10 = EffectInput::EffectInput((EffectInput *)v11, a4);
    detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::emplace_back<CBackdropVisualImage *,void const *,EffectInput>(
      this,
      a2,
      a3,
      v10);
    CBackdropVisualImage::RegisterBlurCache(a2, this);
  }
}
