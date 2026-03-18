/*
 * XREFs of ??1?$vector_facade@PEBXV?$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@QEAA@XZ @ 0x18009E8EC
 * Callers:
 *     ??1CThreadContext@@AEAA@XZ @ 0x18028C1D8 (--1CThreadContext@@AEAA@XZ.c)
 * Callees:
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x180018330 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?clear_region@?$vector_facade@PEBXV?$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x18009F7D4 (-clear_region@-$vector_facade@PEBXV-$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@IEAAX_K0@Z.c)
 */

void __fastcall detail::vector_facade<void const *,detail::pointer_buffer_impl<void const *,0>>::~vector_facade<void const *,detail::pointer_buffer_impl<void const *,0>>(
        __int64 *a1)
{
  __int64 v2; // rax

  v2 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size(a1);
  if ( v2 )
    detail::vector_facade<void const *,detail::pointer_buffer_impl<void const *,0>>::clear_region(a1, 0LL, v2);
  detail::pointer_buffer_impl<CResource *,0>::~pointer_buffer_impl<CResource *,0>(a1);
}
