/*
 * XREFs of ?clear@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAAXXZ @ 0x18004F388
 * Callers:
 *     ??1?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAA@XZ @ 0x18004F744 (--1-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@.c)
 *     ??0?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAA@$$QEAV01@@Z @ 0x18022BF54 (--0-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@_ea_18022BF54.c)
 *     _dynamic_atexit_destructor_for__CAnimationDependency::EmptyList__ @ 0x1802B9E40 (_dynamic_atexit_destructor_for__CAnimationDependency--EmptyList__.c)
 * Callees:
 *     ?size@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18004E0E0 (-size@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@deta.c)
 *     ?clear_region@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x18004F234 (-clear_region@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$.c)
 */

__int64 __fastcall detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::clear(
        __int64 *a1)
{
  __int64 result; // rax

  result = detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::size(a1);
  if ( result )
    return detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::clear_region(
             a1,
             0LL,
             result);
  return result;
}
