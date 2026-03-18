/*
 * XREFs of ??0?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAA@AEBV01@@Z @ 0x18004D59C
 * Callers:
 *     ??0CAnimationDependency@@QEAA@AEBV0@@Z @ 0x1801AD6B0 (--0CAnimationDependency@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ?reserve_region@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAPEAPEAVCBaseExpression@@_K0@Z @ 0x18004DA10 (-reserve_region@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@.c)
 *     ?end@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA?AV?$basic_iterator@QEAVCBaseExpression@@@2@XZ @ 0x18004DDD4 (-end@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detai.c)
 *     ?begin@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA?AV?$basic_iterator@QEAVCBaseExpression@@@2@XZ @ 0x18018785C (-begin@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@det.c)
 */

_QWORD *__fastcall detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 **v4; // rsi
  __int64 **v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 *v9; // rdx
  __int64 *i; // rcx
  __int64 v11; // r8
  char v13; // [rsp+40h] [rbp+8h] BYREF
  char v14; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 2LL;
  v4 = (__int64 **)detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::end(
                     a2,
                     &v13);
  v5 = (__int64 **)detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::begin(
                     a2,
                     &v14);
  v6 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1);
  v7 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1);
  v8 = (_QWORD *)detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::reserve_region(
                   a1,
                   (v6 - v7) >> 3,
                   *v4 - *v5);
  v9 = *v4;
  for ( i = *v5; i != v9; ++i )
  {
    v11 = *i;
    *v8++ = v11;
  }
  detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1);
  return a1;
}
