/*
 * XREFs of ??1?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAA@XZ @ 0x18004F744
 * Callers:
 *     ??1CAnimationDependency@@QEAA@XZ @ 0x18004F71C (--1CAnimationDependency@@QEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAAXXZ @ 0x18004F388 (-clear@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@det.c)
 */

__int64 __fastcall detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::~vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>(
        __int64 *a1)
{
  detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::clear(a1);
  return detail::pointer_buffer_impl<CBaseExpression *,0>::~pointer_buffer_impl<CBaseExpression *,0>(a1);
}
