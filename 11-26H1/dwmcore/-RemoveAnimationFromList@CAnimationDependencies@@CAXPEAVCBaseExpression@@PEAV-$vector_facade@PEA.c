/*
 * XREFs of ?RemoveAnimationFromList@CAnimationDependencies@@CAXPEAVCBaseExpression@@PEAV?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@Z @ 0x18004D0C4
 * Callers:
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18004C290 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?UnregisterSourceDependencies@CExpression@@AEAAXXZ @ 0x18010C9F4 (-UnregisterSourceDependencies@CExpression@@AEAAXXZ.c)
 *     ?RemoveAnimationProducer@CResource@@QEAAXPEAVCBaseExpression@@@Z @ 0x1801A9358 (-RemoveAnimationProducer@CResource@@QEAAXPEAVCBaseExpression@@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ?size@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18004E0E0 (-size@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@deta.c)
 *     ??$move@V?$move_iterator@PEAPEAVIRenderTarget@@@std@@V?$checked_array_iterator@PEAPEAVIRenderTarget@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVIRenderTarget@@@stdext@@V?$move_iterator@PEAPEAVIRenderTarget@@@0@0V12@@Z @ 0x18014A184 (--$move@V-$move_iterator@PEAPEAVIRenderTarget@@@std@@V-$checked_array_iterator@PEAPEAVIRenderTar.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CAnimationDependencies::RemoveAnimationFromList(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // r15
  __int64 v20; // r12
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int128 v26; // [rsp+20h] [rbp-40h] BYREF
  __int64 v27; // [rsp+30h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+28h]

  v2 = *a2;
  v5 = *a2 & 3LL;
  v6 = 1LL;
  v7 = *(_DWORD *)a2 & 3;
  if ( v5 )
  {
    v8 = v7 - 1;
    if ( !v8 )
    {
      v10 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_7:
      v11 = *(_QWORD *)(detail::pointer_buffer_impl<CBaseExpression *,0>::first(a2) - 16);
      goto LABEL_8;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      v10 = 0LL;
LABEL_5:
      v11 = 0LL;
      goto LABEL_8;
    }
    if ( v9 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v10 = (unsigned __int64)a2;
  if ( v5 )
  {
    v24 = v5 - 1;
    if ( v24 )
    {
      if ( (unsigned __int64)(v24 - 1) >= 2 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      goto LABEL_5;
    }
    goto LABEL_7;
  }
  v11 = 1LL;
LABEL_8:
  v12 = v10 + 8 * v11;
  v13 = *a2 & 3LL;
  if ( v13 )
  {
    if ( (*(_DWORD *)a2 & 3) == 1LL )
    {
      v14 = *a2 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_14:
      v6 = *(_QWORD *)(detail::pointer_buffer_impl<CBaseExpression *,0>::first(a2) - 16);
      goto LABEL_15;
    }
    if ( (*(_DWORD *)a2 & 3) == 2LL )
    {
      v14 = 0LL;
LABEL_12:
      v6 = 0LL;
      goto LABEL_15;
    }
    if ( (*(_DWORD *)a2 & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v14 = (unsigned __int64)a2;
  if ( v13 )
  {
    v25 = v13 - 1;
    if ( v25 )
    {
      if ( (unsigned __int64)(v25 - 1) >= 2 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      goto LABEL_12;
    }
    goto LABEL_14;
  }
LABEL_15:
  v15 = (_QWORD *)(v14 + 8 * v6);
  if ( (*a2 & 3) == 0 )
  {
LABEL_44:
    v16 = a2;
    goto LABEL_21;
  }
  if ( (*a2 & 3LL) != 1 )
  {
    if ( (*a2 & 3LL) == 2 )
    {
      v16 = 0LL;
      goto LABEL_21;
    }
    if ( (*a2 & 3LL) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    goto LABEL_44;
  }
  v16 = (_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_21:
  while ( v16 != v15 && *v16 != a1 )
    ++v16;
  v17 = v16;
  if ( v16 != v15 )
  {
    while ( ++v16 != v15 )
    {
      if ( *v16 != a1 )
        *v17++ = *v16;
    }
  }
  v18 = (__int64)(v12 - (_QWORD)v17) >> 3;
  v19 = ((__int64)v17 - detail::pointer_buffer_impl<CBaseExpression *,0>::first(a2)) >> 3;
  v20 = v18 + v19;
  v21 = detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::size(a2);
  if ( v18 + v19 > v21 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_55;
  }
  v6 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(a2);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v28, v6, v21);
  if ( v20 != v21 )
  {
LABEL_55:
    v26 = v28;
    v27 = v29;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v26, v19);
    v28 = v26;
    v29 = v27;
    std::move<std::move_iterator<IRenderTarget * *>,stdext::checked_array_iterator<IRenderTarget * *>>(
      &v26,
      v6 + 8 * v20,
      v6 + 8 * v21,
      &v28);
  }
  if ( v18 )
  {
    if ( (*(_DWORD *)a2 & 3) == 0 )
      goto LABEL_35;
    if ( (*(_DWORD *)a2 & 3) == 1LL )
    {
      v22 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(a2);
      *(_QWORD *)(v22 - 16) -= v18;
      return detail::pointer_buffer_impl<CBaseExpression *,0>::first(a2);
    }
    if ( (*(_DWORD *)a2 & 3) != 2LL )
    {
      if ( (*(_DWORD *)a2 & 3) != 3LL )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      if ( v18 != -1 )
LABEL_35:
        *a2 = 2LL;
    }
  }
  return detail::pointer_buffer_impl<CBaseExpression *,0>::first(a2);
}
