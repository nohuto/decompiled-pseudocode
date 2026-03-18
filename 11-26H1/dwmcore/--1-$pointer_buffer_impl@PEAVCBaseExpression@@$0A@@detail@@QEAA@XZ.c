/*
 * XREFs of ??1?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEAA@XZ @ 0x18004F768
 * Callers:
 *     ??1?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAA@XZ @ 0x18004F744 (--1-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@.c)
 *     _dynamic_atexit_destructor_for__CAnimationDependency::EmptyList__ @ 0x1802B9E40 (_dynamic_atexit_destructor_for__CAnimationDependency--EmptyList__.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 */

void __fastcall detail::pointer_buffer_impl<CBaseExpression *,0>::~pointer_buffer_impl<CBaseExpression *,0>(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  if ( (*(_BYTE *)a1 & 3) == 1 )
  {
    v1 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1);
    operator delete((void *)(v1 - 16));
  }
}
