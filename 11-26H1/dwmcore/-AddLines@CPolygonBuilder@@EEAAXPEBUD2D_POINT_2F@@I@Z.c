/*
 * XREFs of ?AddLines@CPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x180161160
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

void __fastcall CPolygonBuilder::AddLines(CPolygonBuilder *this, const struct D2D_POINT_2F *a2, unsigned int a3)
{
  __int64 v3; // r9
  char *v5; // rdx
  unsigned __int64 v6; // r14
  CPolygonBuilder *v7; // rbx
  unsigned __int64 v8; // r13
  __int64 v9; // rcx
  const struct D2D_POINT_2F *v10; // r12
  __int64 v11; // r15
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  _QWORD *v16; // rbx
  unsigned __int64 v17; // rax
  _QWORD *v18; // r14
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r15
  LPVOID v21; // r14
  void *v22; // rdi
  __int64 v23; // rbx
  void *v24; // rax
  CPolygonBuilder *v25; // rcx
  CPolygonBuilder *v26; // rdx
  __int64 v27; // rcx
  char *v28; // [rsp+20h] [rbp-49h]
  __int128 v29; // [rsp+30h] [rbp-39h] BYREF
  __int64 v30; // [rsp+40h] [rbp-29h]
  __int128 v31; // [rsp+50h] [rbp-19h] BYREF
  __int64 v32; // [rsp+60h] [rbp-9h]
  _BYTE v33[80]; // [rsp+70h] [rbp+7h] BYREF
  unsigned __int64 v35; // [rsp+D8h] [rbp+6Fh]

  v3 = *((_QWORD *)this + 2);
  v5 = (char *)this + 24;
  v6 = a3;
  v7 = this;
  v8 = (*((_QWORD *)this + 3) - v3) >> 3;
  v9 = *((_QWORD *)this + 4);
  v28 = v5;
  v10 = &a2[a3];
  v35 = a3;
  if ( (v9 - *(_QWORD *)v5) >> 3 < (unsigned __int64)a3 )
  {
    v19 = a3 + v8;
    if ( v6 + v8 < v8 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1801613B7LL);
    }
    v20 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)((v9 - v3) >> 3),
            (v9 - v3) >> 3,
            v19);
    v21 = operator new[](saturated_mul(v20, 8uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v31, (__int64)v21, v8);
    v22 = (void *)*((_QWORD *)v7 + 2);
    v23 = *((_QWORD *)v7 + 3);
    v29 = v31;
    v30 = v32;
    v24 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(
                    &v29,
                    (v23 - (__int64)v22) >> 3);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v22, v23, v24);
    v7 = this;
    v25 = 0LL;
    v26 = (CPolygonBuilder *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v21;
    if ( v26 != (CPolygonBuilder *)((char *)this + 40) )
      v25 = v26;
    operator delete(v25);
    v27 = *((_QWORD *)this + 2);
    v6 = v35;
    v28 = (char *)this + 24;
    *((_QWORD *)this + 3) = v27 + 8 * v8;
    *((_QWORD *)this + 4) = v27 + 8 * v20;
  }
  v11 = *((_QWORD *)v7 + 2);
  v12 = (_QWORD *)*((_QWORD *)v7 + 3);
  v13 = ((__int64)v12 - v11) >> 3;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v31, v11 + 8 * v13, v6);
  v29 = v31;
  v30 = v32;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v29, v6);
  v14 = v13 - v8;
  v15 = v13 - v8;
  if ( v6 < v13 - v8 )
    v15 = v6;
  v31 = v29;
  v32 = v30;
  if ( v12 == &v12[-v15] )
  {
    v16 = v28;
  }
  else
  {
    v18 = &v12[-v15];
    do
    {
      --v12;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v31);
      *(_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v31) = *v12;
    }
    while ( v12 != v18 );
    v6 = v35;
    v16 = (_QWORD *)((char *)this + 24);
    v14 = v13 - v8;
  }
  if ( v14 > v6 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v31, v11, v13);
    v29 = v31;
    v30 = v32;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v29, v13);
    v31 = v29;
    v32 = v30;
    std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
      v33,
      v11 + 8 * v8,
      v11 + 8 * (v13 - v6),
      &v31);
  }
  *v16 += 8 * v6;
  if ( a2 != v10 )
  {
    v17 = v11 + 8 * v8 - (_QWORD)a2;
    do
    {
      *(const struct D2D_POINT_2F *)((char *)a2 + v17) = *a2;
      ++a2;
    }
    while ( a2 != v10 );
  }
}
