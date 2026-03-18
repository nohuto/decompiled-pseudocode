/*
 * XREFs of ?erase@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@@Z @ 0x1800175EC
 * Callers:
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x1801D14CC (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z.c)
 * Callees:
 *     ?erase_unchecked@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@0@Z @ 0x180017624 (-erase_unchecked@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredB.c)
 */

__int64 __fastcall detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::erase(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = *a3;
  v5 = v6 + 8;
  detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::erase_unchecked(
    a1,
    a2,
    &v6,
    &v5);
  return a2;
}
