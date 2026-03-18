/*
 * XREFs of ??1?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1801AF40C
 * Callers:
 *     ??1CBackdropVisualImage@@UEAA@XZ @ 0x1801AF2EC (--1CBackdropVisualImage@@UEAA@XZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x1800181E8 (-clear_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBack.c)
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x180018330 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 */

void __fastcall detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::~vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>(
        __int64 *a1)
{
  __int64 v2; // rax

  v2 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size(a1);
  if ( v2 )
    detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::clear_region(
      a1,
      0LL,
      v2);
  detail::pointer_buffer_impl<CResource *,0>::~pointer_buffer_impl<CResource *,0>(a1);
}
