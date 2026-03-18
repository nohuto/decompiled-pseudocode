/*
 * XREFs of ?UnregisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x18015992C
 * Callers:
 *     ??1CBlurredBackdropCache@@QEAA@XZ @ 0x18015AA84 (--1CBlurredBackdropCache@@QEAA@XZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x1800181E8 (-clear_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBack.c)
 *     ?end@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@XZ @ 0x18001879C (-end@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCache.c)
 *     ?begin@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCResource@@@2@XZ @ 0x1801599D0 (-begin@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail.c)
 */

void __fastcall CBackdropVisualImage::UnregisterBlurCache(CBackdropVisualImage *this, struct CBlurredBackdropCache *a2)
{
  _QWORD *v2; // rsi
  struct CBlurredBackdropCache ***v4; // rdi
  struct CBlurredBackdropCache ***v5; // rax
  struct CBlurredBackdropCache **i; // rbx
  _QWORD *v7; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  char v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = (_QWORD *)((char *)this + 1704);
  v4 = (struct CBlurredBackdropCache ***)detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::end(
                                           (_QWORD *)this + 213,
                                           &v8);
  v5 = (struct CBlurredBackdropCache ***)detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::begin(
                                           v2,
                                           &v9);
  for ( i = *v5; i != *v4 && *i != a2; ++i )
    ;
  *v5 = i;
  if ( i != (struct CBlurredBackdropCache **)*detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::end(
                                                v2,
                                                &v8) )
  {
    v7 = (_QWORD *)detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::begin(v2, &v8);
    detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::clear_region(
      v2,
      ((__int64)i - *v7) >> 3,
      1LL);
    detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::begin(v2, &v8);
  }
}
