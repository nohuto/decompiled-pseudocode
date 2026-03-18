/*
 * XREFs of ?push_back@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCOverlayContext@@@Z @ 0x1801410E8
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
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
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,2,1,detail::liberal_expansion_policy>>::push_back(
        __int64 *a1,
        __int64 *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rsi
  unsigned __int64 v5; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // r13
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r14
  LPVOID v14; // rsi
  __int64 v15; // rbx
  void *v16; // rdi
  __int64 v17; // rdx
  void *v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int128 v21; // [rsp+20h] [rbp-40h] BYREF
  __int64 v22; // [rsp+30h] [rbp-30h]
  __int128 v23; // [rsp+40h] [rbp-20h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h]
  __int64 v25; // [rsp+A0h] [rbp+40h]

  v2 = (_QWORD *)a1[1];
  v3 = a1[2];
  v4 = *a1;
  v5 = ((__int64)v2 - *a1) >> 3;
  if ( !((v3 - (__int64)v2) >> 3) )
  {
    v12 = v5 + 1;
    if ( v5 + 1 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v13 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)a1, (v3 - v4) >> 3, v12);
    v14 = operator new[](saturated_mul(v13, 8uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v23, (__int64)v14, v5);
    v15 = a1[1];
    v16 = (void *)*a1;
    v17 = (v15 - *a1) >> 3;
    v21 = v23;
    v22 = v24;
    v18 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&v21, v17);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v16, v15, v18);
    v19 = (__int64 *)*a1;
    *a1 = (__int64)v14;
    if ( v19 == a1 + 3 )
      v19 = 0LL;
    operator delete(v19);
    v4 = *a1;
    v2 = (_QWORD *)(*a1 + 8 * v5);
    v20 = *a1 + 8 * v13;
    a1[1] = (__int64)v2;
    a1[2] = v20;
  }
  v7 = ((__int64)v2 - v4) >> 3;
  v25 = 8 * v7;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v23, 8 * v7 + v4, 1LL);
  v21 = v23;
  v22 = v24;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v21, 1LL);
  v8 = v7 - v5;
  if ( v7 - v5 > 1 )
    v8 = 1LL;
  v23 = v21;
  v9 = &v2[-v8];
  v24 = v22;
  while ( v2 != v9 )
  {
    --v2;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v23);
    *(_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v23) = *v2;
  }
  if ( v7 - v5 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v23, v4, v7);
    v21 = v23;
    v22 = v24;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v21, v7);
    v23 = v21;
    v24 = v22;
    v10 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(
            &v23,
            -((__int64)(v25 - 8 * v5 - 8) >> 3));
    memmove_0((void *)(v10 - (v25 - 8 * v5 - 8)), (const void *)(v4 + 8 * v5), v25 - 8 * v5 - 8);
  }
  a1[1] += 8LL;
  result = *a2;
  *(_QWORD *)(v4 + 8 * v5) = *a2;
  return result;
}
