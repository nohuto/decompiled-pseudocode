/*
 * XREFs of ?erase_unchecked@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCBaseExpression@@@2@V?$basic_iterator@QEAVCBaseExpression@@@2@0@Z @ 0x18004DE78
 * Callers:
 *     ??$swap_generic@V?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x18022BE1C (--$swap_generic@V-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ?size@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18004E0E0 (-size@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@deta.c)
 *     ??$move@V?$move_iterator@PEAPEAVIRenderTarget@@@std@@V?$checked_array_iterator@PEAPEAVIRenderTarget@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVIRenderTarget@@@stdext@@V?$move_iterator@PEAPEAVIRenderTarget@@@0@0V12@@Z @ 0x18014A184 (--$move@V-$move_iterator@PEAPEAVIRenderTarget@@@std@@V-$checked_array_iterator@PEAPEAVIRenderTar.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::erase_unchecked(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v5; // rbx
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // r13
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+28h]

  v5 = a3;
  v8 = (__int64)(*a3 - detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1)) >> 3;
  v9 = (__int64)(*a4 - *v5) >> 3;
  v10 = v9 + v8;
  v11 = detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::size(a1);
  if ( v9 + v8 > v11 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_13;
  }
  v5 = (_QWORD *)detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v16, (__int64)v5, v11);
  if ( v10 != v11 )
  {
LABEL_13:
    v14 = v16;
    v15 = v17;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v14, v8);
    v16 = v14;
    v17 = v15;
    std::move<std::move_iterator<IRenderTarget * *>,stdext::checked_array_iterator<IRenderTarget * *>>(
      &v14,
      &v5[v10],
      &v5[v11],
      &v16);
  }
  if ( v9 )
  {
    if ( (*(_DWORD *)a1 & 3) == 0 )
      goto LABEL_11;
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      v12 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1);
      *(_QWORD *)(v12 - 16) -= v9;
      goto LABEL_7;
    }
    if ( (*(_DWORD *)a1 & 3) != 2LL )
    {
      if ( (*(_DWORD *)a1 & 3) != 3LL )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      if ( v9 != -1 )
LABEL_11:
        *a1 = 2LL;
    }
  }
LABEL_7:
  *a2 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1) + 8 * v8;
  return a2;
}
