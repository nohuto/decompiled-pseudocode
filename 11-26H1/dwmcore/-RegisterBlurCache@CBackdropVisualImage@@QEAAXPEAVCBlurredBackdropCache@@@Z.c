/*
 * XREFs of ?RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x1800185FC
 * Callers:
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z @ 0x1800189E4 (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?end@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@XZ @ 0x18001879C (-end@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCache.c)
 *     ?last@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ @ 0x180018840 (-last@-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ.c)
 *     ?reserve_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@IEAAPEAPEAVCBlurredBackdropCache@@_K0@Z @ 0x1800188D8 (-reserve_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBa.c)
 */

void __fastcall CBackdropVisualImage::RegisterBlurCache(CBackdropVisualImage *this, struct CBlurredBackdropCache *a2)
{
  _QWORD *v2; // rsi
  struct CBlurredBackdropCache ***v4; // rdi
  struct CBlurredBackdropCache **i; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 1704);
  v4 = (struct CBlurredBackdropCache ***)detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::end(
                                           (char *)this + 1704,
                                           &v8);
  for ( i = (struct CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v2);
        i != *v4 && *i != a2;
        ++i )
  {
    ;
  }
  if ( i == (struct CBlurredBackdropCache **)detail::pointer_buffer_impl<CVisual *,0>::last(v2) )
  {
    v6 = detail::pointer_buffer_impl<CVisual *,0>::last(v2);
    v7 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v2);
    *(_QWORD *)detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::reserve_region(
                 v2,
                 (__int64)(v6 - v7) >> 3) = a2;
    detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v2);
  }
}
