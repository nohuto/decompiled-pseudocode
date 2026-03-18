/*
 * XREFs of ??$swap_generic@V?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x18022BE1C
 * Callers:
 *     ??0?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAA@$$QEAV01@@Z @ 0x18022BF54 (--0-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@_ea_18022BF54.c)
 * Callees:
 *     ?last@?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@QEBAPEAPEAVCCompositionSurfaceBitmap@@XZ @ 0x18004D970 (-last@-$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@QEBAPEAPEAVCCompositionS.c)
 *     ?erase_unchecked@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCBaseExpression@@@2@V?$basic_iterator@QEAVCBaseExpression@@@2@0@Z @ 0x18004DE78 (-erase_unchecked@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression.c)
 *     ?size@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18004E0E0 (-size@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@deta.c)
 *     ?begin@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA?AV?$basic_iterator@QEAVCBaseExpression@@@2@XZ @ 0x18018785C (-begin@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@det.c)
 *     ??$_Swap_ranges_unchecked@V?$basic_iterator@PEAVCBaseExpression@@@detail@@V12@@std@@YA?AV?$basic_iterator@PEAVCBaseExpression@@@detail@@V12@V12@0@Z @ 0x18022BC7C (--$_Swap_ranges_unchecked@V-$basic_iterator@PEAVCBaseExpression@@@detail@@V12@@std@@YA-AV-$basic.c)
 *     ??$move@V?$move_iterator@V?$basic_iterator@PEAVCBaseExpression@@@detail@@@std@@V?$back_insert_iterator_unchecked@V?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@detail@@@std@@YA?AV?$back_insert_iterator_unchecked@V?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@detail@@V?$move_iterator@V?$basic_iterator@PEAVCBaseExpression@@@detail@@@0@0V12@@Z @ 0x18022BD90 (--$move@V-$move_iterator@V-$basic_iterator@PEAVCBaseExpression@@@detail@@@std@@V-$back_insert_it.c)
 */

_QWORD *__fastcall detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::swap_generic<detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>>(
        __int64 *a1,
        __int64 *a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 *v5; // rbx
  unsigned __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rax
  __int64 *v10; // rcx
  unsigned __int64 *v11; // rbx
  unsigned __int64 *v12; // rax
  __int64 *v13; // rax
  unsigned __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v16; // [rsp+28h] [rbp-8h] BYREF
  __int64 *v17; // [rsp+60h] [rbp+30h] BYREF
  __int64 *v18; // [rsp+68h] [rbp+38h] BYREF

  v4 = detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::size(a2);
  if ( detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::size(a1) <= v4 )
  {
    v11 = detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::begin(
            a2,
            (unsigned __int64 *)&v16);
    v17 = (__int64 *)detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>::last(a1);
    v12 = detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::begin(a1, &v15);
    std::_Swap_ranges_unchecked<detail::basic_iterator<CBaseExpression *>,detail::basic_iterator<CBaseExpression *>>(
      &v18,
      (__int64 **)v12,
      &v17,
      (__int64 **)v11);
    v13 = (__int64 *)detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>::last(a2);
    v8 = v18;
    v17 = v13;
    std::move<std::move_iterator<detail::basic_iterator<CBaseExpression *>>,detail::back_insert_iterator_unchecked<detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>>>(
      &v16,
      &v18,
      &v17,
      a1);
    v9 = (__int64 *)detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>::last(a2);
    v10 = a2;
  }
  else
  {
    v5 = detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::begin(a1, &v15);
    v17 = (__int64 *)detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>::last(a2);
    v6 = detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::begin(
           a2,
           (unsigned __int64 *)&v16);
    std::_Swap_ranges_unchecked<detail::basic_iterator<CBaseExpression *>,detail::basic_iterator<CBaseExpression *>>(
      &v18,
      (__int64 **)v6,
      &v17,
      (__int64 **)v5);
    v7 = (__int64 *)detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>::last(a1);
    v8 = v18;
    v17 = v7;
    std::move<std::move_iterator<detail::basic_iterator<CBaseExpression *>>,detail::back_insert_iterator_unchecked<detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>>>(
      &v16,
      &v18,
      &v17,
      a2);
    v9 = (__int64 *)detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>::last(a1);
    v10 = a1;
  }
  v17 = v9;
  v18 = v8;
  return detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::erase_unchecked(
           v10,
           &v16,
           &v18,
           &v17);
}
