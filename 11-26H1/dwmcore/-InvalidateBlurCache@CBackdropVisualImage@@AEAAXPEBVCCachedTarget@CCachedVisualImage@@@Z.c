/*
 * XREFs of ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x1801D14CC
 * Callers:
 *     ?InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ @ 0x18002CFC8 (-InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ.c)
 *     ?OnCachedTargetInvalidated@CBackdropVisualImage@@EEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x1801D14C0 (-OnCachedTargetInvalidated@CBackdropVisualImage@@EEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z.c)
 * Callees:
 *     ?erase@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@@Z @ 0x1800175EC (-erase@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCac.c)
 *     ?InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@PEBX@Z @ 0x180017AAC (-InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@PEBX@Z.c)
 *     ?end@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@XZ @ 0x18001879C (-end@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCache.c)
 *     ?begin@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCResource@@@2@XZ @ 0x1801599D0 (-begin@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail.c)
 */

void __fastcall CBackdropVisualImage::InvalidateBlurCache(
        CBackdropVisualImage *this,
        const struct CCachedVisualImage::CCachedTarget *a2)
{
  _QWORD *v2; // rdi
  CBlurredBackdropCache **v5; // rbx
  CBlurredBackdropCache **v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  char v8; // [rsp+58h] [rbp+20h] BYREF

  v2 = (_QWORD *)((char *)this + 1704);
  detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::begin(
    (_QWORD *)this + 213,
    (unsigned __int64 *)&v6);
  v5 = v6;
  while ( v5 != (CBlurredBackdropCache **)*detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::end(
                                             v2,
                                             &v7) )
  {
    if ( CBlurredBackdropCache::InvalidateCachedBlur(*v5, this, a2) )
    {
      v6 = v5;
      v5 = *(CBlurredBackdropCache ***)detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::erase(
                                         (__int64)v2,
                                         (__int64)&v8,
                                         (__int64 *)&v6);
    }
    else
    {
      ++v5;
    }
  }
}
