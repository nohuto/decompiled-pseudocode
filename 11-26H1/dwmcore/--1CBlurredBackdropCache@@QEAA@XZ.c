/*
 * XREFs of ??1CBlurredBackdropCache@@QEAA@XZ @ 0x18015AA84
 * Callers:
 *     ??1CExternalEffectGraph@@MEAA@XZ @ 0x18015AA50 (--1CExternalEffectGraph@@MEAA@XZ.c)
 * Callees:
 *     ?UnregisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x18015992C (-UnregisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 */

void __fastcall CBlurredBackdropCache::~CBlurredBackdropCache(CBackdropVisualImage ***this)
{
  CBackdropVisualImage **v1; // rbx
  CBackdropVisualImage **v3; // rdi

  v1 = *this;
  v3 = this[1];
  while ( v1 != v3 )
  {
    CBackdropVisualImage::UnregisterBlurCache(*v1, (struct CBlurredBackdropCache *)this);
    v1 += 16;
  }
  detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::~vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>(this);
}
