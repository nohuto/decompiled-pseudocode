/*
 * XREFs of ?clear_region@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x18004F234
 * Callers:
 *     ?clear@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAAXXZ @ 0x18004F388 (-clear@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@det.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ?size@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18004E0E0 (-size@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@deta.c)
 *     ??$move@V?$move_iterator@PEAPEAVIRenderTarget@@@std@@V?$checked_array_iterator@PEAPEAVIRenderTarget@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVIRenderTarget@@@stdext@@V?$move_iterator@PEAPEAVIRenderTarget@@@0@0V12@@Z @ 0x18014A184 (--$move@V-$move_iterator@PEAPEAVIRenderTarget@@@std@@V-$checked_array_iterator@PEAPEAVIRenderTar.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rax
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+78h] [rbp+18h]

  v7 = a2 + a3;
  v8 = detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::size(a1);
  if ( v7 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_13;
  }
  v3 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1);
  result = (__int64)stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v13, v3, v8);
  if ( v7 != v8 )
  {
LABEL_13:
    v11 = v13;
    v12 = v14;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v11, a2);
    v13 = v11;
    v14 = v12;
    result = std::move<std::move_iterator<IRenderTarget * *>,stdext::checked_array_iterator<IRenderTarget * *>>(
               &v11,
               v3 + 8 * v7,
               v3 + 8 * v8,
               &v13);
  }
  if ( !a3 )
    return result;
  result = *(_DWORD *)a1 & 3;
  if ( (*(_DWORD *)a1 & 3) == 0 )
    goto LABEL_11;
  v10 = result - 1;
  if ( !v10 )
  {
    result = detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1);
    *(_QWORD *)(result - 16) -= a3;
    return result;
  }
  result = v10 - 1;
  if ( result )
  {
    if ( result != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    if ( a3 != -1 )
LABEL_11:
      *a1 = 2LL;
  }
  return result;
}
