/*
 * XREFs of ?push_back@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBUD2D_POINT_2F@@@Z @ 0x180160D2C
 * Callers:
 *     ?AddLine@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z @ 0x180228E30 (-AddLine@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z.c)
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

_QWORD *__fastcall detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::push_back(
        __int64 *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // r15
  __int64 v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // r13
  _QWORD *result; // rax
  unsigned __int64 v10; // r14
  LPVOID v11; // rsi
  __int64 v12; // rbx
  void *v13; // rdi
  __int64 v14; // rdx
  void *v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int128 v18; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+30h] [rbp-50h]
  __int128 v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h]
  char v22[32]; // [rsp+60h] [rbp-20h] BYREF

  v2 = (_QWORD *)a1[1];
  v3 = *a1;
  v4 = ((__int64)v2 - *a1) >> 3;
  if ( !((a1[2] - (__int64)v2) >> 3) )
  {
    if ( v4 + 1 < v4 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180160F1BLL);
    }
    v10 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)a1, (a1[2] - v3) >> 3, v4 + 1);
    v11 = operator new[](saturated_mul(v10, 8uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v20, (__int64)v11, v4);
    v12 = a1[1];
    v13 = (void *)*a1;
    v14 = (v12 - *a1) >> 3;
    v18 = v20;
    v19 = v21;
    v15 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&v18, v14);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v13, v12, v15);
    v16 = (__int64 *)*a1;
    *a1 = (__int64)v11;
    if ( v16 == a1 + 3 )
      v16 = 0LL;
    operator delete(v16);
    v3 = *a1;
    v2 = (_QWORD *)(*a1 + 8 * v4);
    v17 = *a1 + 8 * v10;
    a1[1] = (__int64)v2;
    a1[2] = v17;
  }
  v6 = ((__int64)v2 - v3) >> 3;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v20, v3 + 8 * v6, 1LL);
  v18 = v20;
  v19 = v21;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v18, 1LL);
  v7 = v6 - v4;
  if ( v6 - v4 > 1 )
    v7 = 1LL;
  v20 = v18;
  v8 = &v2[-v7];
  v21 = v19;
  while ( v2 != v8 )
  {
    --v2;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v20);
    *(_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v20) = *v2;
  }
  if ( v6 - v4 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v20, v3, v6);
    v18 = v20;
    v19 = v21;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v18, v6);
    v20 = v18;
    v21 = v19;
    std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
      v22,
      v3 + 8 * v4,
      v3 + 8 * (v6 - 1),
      &v20);
  }
  a1[1] += 8LL;
  result = a2;
  *(_QWORD *)(v3 + 8 * v4) = *a2;
  return result;
}
