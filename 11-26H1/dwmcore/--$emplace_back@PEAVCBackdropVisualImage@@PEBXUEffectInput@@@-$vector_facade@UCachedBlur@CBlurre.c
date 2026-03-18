/*
 * XREFs of ??$emplace_back@PEAVCBackdropVisualImage@@PEBXUEffectInput@@@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCBackdropVisualImage@@PEBXUEffectInput@@@Z @ 0x180018AF4
 * Callers:
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z @ 0x1800189E4 (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCachedBlur@CBlurredBackdropCache@@_K0@Z @ 0x180017B84 (-reserve_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CB.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180019FEC (--0EffectInput@@QEAA@AEBU0@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 */

void __fastcall detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::emplace_back<CBackdropVisualImage *,void const *,EffectInput>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const struct EffectInput *a4)
{
  const struct EffectInput *v8; // rdi
  CBlurredBackdropCache::CachedBlur *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-78h] BYREF

  v8 = EffectInput::EffectInput((EffectInput *)&v10, a4);
  v9 = detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::reserve_region(
         a1,
         (a1[1] - *a1) >> 7);
  *(_QWORD *)v9 = a2;
  *((_QWORD *)v9 + 1) = a3;
  EffectInput::EffectInput((CBlurredBackdropCache::CachedBlur *)((char *)v9 + 16), v8);
  CDrawListBitmap::~CDrawListBitmap(v8);
  CDrawListBitmap::~CDrawListBitmap(a4);
}
