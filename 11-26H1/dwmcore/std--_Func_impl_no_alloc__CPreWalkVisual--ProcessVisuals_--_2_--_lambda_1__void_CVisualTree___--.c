/*
 * XREFs of std::_Func_impl_no_alloc__CPreWalkVisual::ProcessVisuals_::_2_::_lambda_1__void_CVisualTree___::_Do_call @ 0x180144AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@@std@@@std@@QEAA@XZ @ 0x18002D63C (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U-$d.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEBAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18008FA54 (--C-$checked_array_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x180141C90 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V-$checked_array_iter.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__CPreWalkVisual::ProcessVisuals_::_2_::_lambda_1__void_CVisualTree___::_Do_call(
        detail::liberal_expansion_policy *a1,
        __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rdx
  _QWORD *v4; // r8
  unsigned __int64 v5; // r14
  _QWORD *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *i; // r12
  __int64 result; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  LPVOID v16; // rbx
  __int64 v17; // r8
  void *v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rcx
  __int128 v21; // [rsp+20h] [rbp-50h] BYREF
  __int64 v22; // [rsp+30h] [rbp-40h]
  __int128 v23; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+50h] [rbp-20h]
  void *v25; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+38h]

  v2 = (__int64 *)*((_QWORD *)a1 + 1);
  v26 = *a2;
  v3 = v2[2];
  v4 = (_QWORD *)*v2;
  v5 = (v2[1] - *v2) >> 3;
  if ( !((v3 - v2[1]) >> 3) )
  {
    v14 = v5 + 1;
    if ( v5 + 1 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v15 = detail::liberal_expansion_policy::expand(a1, (v3 - (__int64)v4) >> 3, v14);
    v16 = operator new[](saturated_mul(v15, 8uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v23, (__int64)v16, v5);
    v17 = v2[1];
    v18 = (void *)*v2;
    v21 = v23;
    v22 = v24;
    std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
      (__int64)&v23,
      v18,
      v17,
      &v21);
    v19 = (__int64 *)*v2;
    *v2 = (__int64)v16;
    v25 = 0LL;
    if ( v19 == v2 + 3 )
      v19 = 0LL;
    operator delete(v19);
    v20 = *v2;
    v2[1] = *v2 + 8 * v5;
    v2[2] = v20 + 8 * v15;
    std::unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>::~unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>(&v25);
  }
  v6 = (_QWORD *)v2[1];
  v7 = *v2;
  v8 = ((__int64)v6 - *v2) >> 3;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v23, *v2 + 8 * v8, 1LL);
  v21 = v23;
  v22 = v24;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v21, 1LL);
  v9 = (((__int64)v6 - v7) >> 3) - v5;
  if ( v8 - v5 > 1 )
    v9 = 1LL;
  v23 = v21;
  v24 = v22;
  v10 = 8 * v9;
  for ( i = &v6[v10 / 0xFFFFFFFFFFFFFFF8uLL];
        v6 != i;
        *(_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v23) = *v6 )
  {
    --v6;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v23);
  }
  if ( v8 - v5 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v23, v7, v8);
    v21 = v23;
    v22 = v24;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v21, v8);
    v23 = v21;
    v24 = v22;
    v13 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(
            &v23,
            -((__int64)(8 * v8 - 8 * v5 - 8) >> 3));
    memmove_0((void *)(v13 - (8 * v8 - 8 * v5 - 8)), (const void *)(v7 + 8 * v5), 8 * v8 - 8 * v5 - 8);
  }
  result = v26;
  v2[1] += 8LL;
  *(_QWORD *)(v7 + 8 * v5) = result;
  return result;
}
