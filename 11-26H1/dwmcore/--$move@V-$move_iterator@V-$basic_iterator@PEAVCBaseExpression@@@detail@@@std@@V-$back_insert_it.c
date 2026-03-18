/*
 * XREFs of ??$move@V?$move_iterator@V?$basic_iterator@PEAVCBaseExpression@@@detail@@@std@@V?$back_insert_iterator_unchecked@V?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@detail@@@std@@YA?AV?$back_insert_iterator_unchecked@V?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@detail@@V?$move_iterator@V?$basic_iterator@PEAVCBaseExpression@@@detail@@@0@0V12@@Z @ 0x18022BD90
 * Callers:
 *     ??$swap_generic@V?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x18022BE1C (--$swap_generic@V-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression.c)
 * Callees:
 *     ?last@?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@QEBAPEAPEAVCCompositionSurfaceBitmap@@XZ @ 0x18004D970 (-last@-$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@QEBAPEAPEAVCCompositionS.c)
 *     ?reserve_region@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAPEAPEAVCBaseExpression@@_K0@Z @ 0x18004DA10 (-reserve_region@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@.c)
 *     ?begin@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA?AV?$basic_iterator@QEAVCBaseExpression@@@2@XZ @ 0x18018785C (-begin@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@det.c)
 */

__int64 **__fastcall std::move<std::move_iterator<detail::basic_iterator<CBaseExpression *>>,detail::back_insert_iterator_unchecked<detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>>>(
        __int64 **a1,
        _QWORD **a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *v4; // rbp
  _QWORD *i; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 *v9; // rax
  __int64 **result; // rax
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = (_QWORD *)*a3;
  for ( i = *a2; i != v4; ++i )
  {
    v8 = detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>::last(a4);
    v9 = detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::begin(a4, &v11);
    *(_QWORD *)detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::reserve_region(
                 a4,
                 (__int64)(v8 - *v9) >> 3,
                 1uLL) = *i;
    detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::begin(a4, &v12);
  }
  result = a1;
  *a1 = a4;
  return result;
}
