/*
 * XREFs of ?BeginFigure@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x180160F30
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEBAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18008FA54 (--C-$checked_array_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x18016C5C0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

void __fastcall CPolygonBuilder::BeginFigure(CPolygonBuilder *this, struct D2D_POINT_2F a2, enum D2D1_FIGURE_BEGIN a3)
{
  __int64 v5; // rdx
  detail::liberal_expansion_policy *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  unsigned __int64 v9; // r13
  __int64 v10; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // r12
  unsigned __int64 v15; // r14
  LPVOID v16; // rsi
  __int64 v17; // rbx
  void *v18; // rdi
  void *v19; // rax
  CPolygonBuilder *v20; // rcx
  __int64 v21; // rcx
  __int128 v22; // [rsp+28h] [rbp-39h] BYREF
  __int64 v23; // [rsp+38h] [rbp-29h]
  __int128 v24; // [rsp+48h] [rbp-19h] BYREF
  __int64 v25; // [rsp+58h] [rbp-9h]
  _BYTE v26[48]; // [rsp+68h] [rbp+7h] BYREF

  v5 = *((_QWORD *)this + 2);
  v6 = (detail::liberal_expansion_policy *)*((_QWORD *)this + 3);
  v7 = ((__int64)v6 - v5) >> 3;
  if ( v7 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v24, v5, v7);
    *((_QWORD *)this + 3) += -8 * v8;
    v6 = (detail::liberal_expansion_policy *)*((_QWORD *)this + 3);
  }
  v9 = ((__int64)v6 - *((_QWORD *)this + 2)) >> 3;
  if ( !((__int64)(*((_QWORD *)this + 4) - (_QWORD)v6) >> 3) )
  {
    if ( v9 + 1 < v9 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180161152LL);
    }
    v15 = detail::liberal_expansion_policy::expand(
            v6,
            (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 2)) >> 3,
            v9 + 1);
    v16 = operator new[](saturated_mul(v15, 8uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v24, (__int64)v16, v9);
    v17 = *((_QWORD *)this + 3);
    v18 = (void *)*((_QWORD *)this + 2);
    v22 = v24;
    v23 = v25;
    v19 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(
                    &v22,
                    (v17 - (__int64)v18) >> 3);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v18, v17, v19);
    v20 = (CPolygonBuilder *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v16;
    if ( v20 == (CPolygonBuilder *)((char *)this + 40) )
      v20 = 0LL;
    operator delete(v20);
    v21 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 3) = v21 + 8 * v9;
    *((_QWORD *)this + 4) = v21 + 8 * v15;
  }
  v10 = *((_QWORD *)this + 2);
  v11 = (_QWORD *)*((_QWORD *)this + 3);
  v12 = ((__int64)v11 - v10) >> 3;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v24, v10 + 8 * v12, 1LL);
  v22 = v24;
  v23 = v25;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v22, 1LL);
  v13 = v12 - v9;
  if ( v12 - v9 > 1 )
    v13 = 1LL;
  v24 = v22;
  v14 = &v11[-v13];
  v25 = v23;
  while ( v11 != v14 )
  {
    --v11;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v24);
    *(_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v24) = *v11;
  }
  if ( v12 - v9 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v24, v10, v12);
    v22 = v24;
    v23 = v25;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v22, v12);
    v24 = v22;
    v25 = v23;
    std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
      v26,
      v10 + 8 * v9,
      v10 - 8 + 8 * v12,
      &v24);
  }
  *((_QWORD *)this + 3) += 8LL;
  *(struct D2D_POINT_2F *)(v10 + 8 * v9) = a2;
}
