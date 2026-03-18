/*
 * XREFs of ??0?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAA@$$QEAV01@@Z @ 0x18022BF54
 * Callers:
 *     ??$_Uninitialized_move@PEAVCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@YAPEAVCSparseDependency@CSparseAnimationDependencySet@@QEAV12@0PEAV12@AEAV?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@0@@Z @ 0x18022BCBC (--$_Uninitialized_move@PEAVCSparseDependency@CSparseAnimationDependencySet@@V-$allocator@VCSpars.c)
 * Callees:
 *     ?clear@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAAXXZ @ 0x18004F388 (-clear@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@det.c)
 *     ??$swap_generic@V?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x18022BE1C (--$swap_generic@V-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression.c)
 */

__int64 *__fastcall detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = 2LL;
  if ( a2 != a1 )
    detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::swap_generic<detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>>(
      a1,
      a2);
  detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::clear(a2);
  return a1;
}
