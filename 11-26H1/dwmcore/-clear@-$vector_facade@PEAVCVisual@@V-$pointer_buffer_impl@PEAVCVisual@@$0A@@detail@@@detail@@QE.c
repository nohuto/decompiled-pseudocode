/*
 * XREFs of ?clear@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEAAXXZ @ 0x1801A9D24
 * Callers:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180024E5C (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ??1?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1801A9D00 (--1-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEAA@X.c)
 * Callees:
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x180018330 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?clear_region@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x180026858 (-clear_region@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@det.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::clear(
        __int64 *a1)
{
  unsigned __int64 result; // rax

  result = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size(a1);
  if ( result )
    return detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::clear_region(a1, 0LL, result);
  return result;
}
