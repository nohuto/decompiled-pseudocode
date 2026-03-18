/*
 * XREFs of ?InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@PEBX@Z @ 0x180017AAC
 * Callers:
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x1801D14CC (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180017CEC (-clear_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CBlu.c)
 */

char __fastcall CBlurredBackdropCache::InvalidateCachedBlur(
        CBlurredBackdropCache *this,
        const struct CBackdropVisualImage *a2,
        const void *a3)
{
  __int64 v5; // rcx
  __int64 v7; // rbx
  char v8; // si
  char v9; // bp
  __int64 v10; // rax
  __int64 v12; // rbx

  v5 = *(_QWORD *)this;
  v7 = v5;
  v8 = 1;
  while ( v7 != *((_QWORD *)this + 1) )
  {
    v9 = 0;
    if ( *(const struct CBackdropVisualImage **)v7 == a2 )
    {
      if ( *(const void **)(v7 + 8) == a3 )
      {
        v12 = (v7 - v5) >> 7;
        v9 = 1;
        detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::clear_region(
          this,
          v12,
          1LL);
        v5 = *(_QWORD *)this;
        v7 = *(_QWORD *)this + (v12 << 7);
      }
      else
      {
        v8 = 0;
      }
    }
    v10 = v7 + 128;
    if ( v9 )
      v10 = v7;
    v7 = v10;
  }
  return v8;
}
