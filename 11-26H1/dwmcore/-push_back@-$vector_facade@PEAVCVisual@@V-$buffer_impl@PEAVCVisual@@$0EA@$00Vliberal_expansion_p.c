/*
 * XREFs of ?push_back@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCVisual@@@Z @ 0x18008DDC0
 * Callers:
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1800D4500 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 *     ?CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x1801E4FF0 (-CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x1801E5470 (-DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEBAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18008FA54 (--C-$checked_array_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::push_back(
        __int64 *a1,
        __int64 *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r15
  LPVOID v9; // r14
  __int64 v10; // rbx
  void *v11; // rdi
  __int64 v12; // rdx
  void *v13; // rax
  __int64 *v14; // rdx
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *i; // r13
  __int64 result; // rax
  __int128 v22; // [rsp+20h] [rbp-40h] BYREF
  __int64 v23; // [rsp+30h] [rbp-30h]
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h]
  __int64 v26; // [rsp+A0h] [rbp+40h]

  v2 = (_QWORD *)a1[1];
  v4 = a1[2];
  v5 = *a1;
  v6 = ((__int64)v2 - *a1) >> 3;
  if ( !((v4 - (__int64)v2) >> 3) )
  {
    v7 = v6 + 1;
    if ( v6 + 1 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v8 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)a1, (v4 - v5) >> 3, v7);
    v9 = operator new[](saturated_mul(v8, 8uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v24, (__int64)v9, v6);
    v10 = a1[1];
    v11 = (void *)*a1;
    v12 = (v10 - *a1) >> 3;
    v22 = v24;
    v23 = v25;
    v13 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&v22, v12);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v11, v10, v13);
    v14 = (__int64 *)*a1;
    v15 = 0LL;
    *a1 = (__int64)v9;
    if ( v14 != a1 + 3 )
      v15 = v14;
    operator delete(v15);
    v5 = *a1;
    v2 = (_QWORD *)(*a1 + 8 * v6);
    v16 = *a1 + 8 * v8;
    a1[1] = (__int64)v2;
    a1[2] = v16;
  }
  v17 = ((__int64)v2 - v5) >> 3;
  v26 = 8 * v17;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v24, 8 * v17 + v5, 1LL);
  v22 = v24;
  v23 = v25;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v22, 1LL);
  v18 = v17 - v6;
  if ( v17 - v6 > 1 )
    v18 = 1LL;
  v24 = v22;
  v25 = v23;
  v19 = 8 * v18;
  for ( i = &v2[v19 / 0xFFFFFFFFFFFFFFF8uLL];
        v2 != i;
        *(_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v24) = *v2 )
  {
    --v2;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v24);
  }
  if ( v17 - v6 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v24, v5, v17);
    v22 = v24;
    v23 = v25;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v22, v17);
    v24 = v22;
    v25 = v23;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v24, -((__int64)(v26 - 8 * v6 - 8) >> 3));
    memmove_0((void *)(v22 + 8 * v23 - (v26 - 8 * v6 - 8)), (const void *)(v5 + 8 * v6), v26 - 8 * v6 - 8);
  }
  a1[1] += 8LL;
  result = *a2;
  *(_QWORD *)(v5 + 8 * v6) = *a2;
  return result;
}
