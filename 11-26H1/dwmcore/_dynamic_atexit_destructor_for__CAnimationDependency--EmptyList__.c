/*
 * XREFs of _dynamic_atexit_destructor_for__CAnimationDependency::EmptyList__ @ 0x1802B9E40
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAAXXZ @ 0x18004F388 (-clear@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@det.c)
 */

void dynamic_atexit_destructor_for__CAnimationDependency::EmptyList__()
{
  detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::clear(&CAnimationDependency::EmptyList);
  detail::pointer_buffer_impl<CBaseExpression *,0>::~pointer_buffer_impl<CBaseExpression *,0>(&CAnimationDependency::EmptyList);
}
