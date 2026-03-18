/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCBrush@@V?$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCBrush@@_K0@Z @ 0x18026EB20
 * Callers:
 *     ?SetOrAppendBrushes@CEffectBrush@@AEAAJAEBV?$span@PEAVCBrush@@$0?0@gsl@@_N@Z @ 0x18026E718 (-SetOrAppendBrushes@CEffectBrush@@AEAAJAEBV-$span@PEAVCBrush@@$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEBAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18008FA54 (--C-$checked_array_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@.c)
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18026E9E4 (-ensure_extra_capacity@-$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@detail@@@detail.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<CBrush *,detail::buffer_impl<CBrush *,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 *v5; // r15
  __int64 v6; // r12
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rax
  _QWORD *v9; // r15
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // rax
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  __int64 v20; // [rsp+B0h] [rbp+50h]

  v5 = a1;
  detail::buffer_impl<CBrush *,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, a3);
  v6 = *v5;
  v7 = (_QWORD *)v5[1];
  v20 = ((__int64)v7 - *v5) >> 3;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v17, *v5 + 8 * v20, a3);
  v15 = v17;
  v16 = v18;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v15, a3);
  v8 = v20 - a2;
  if ( a3 < v20 - a2 )
    v8 = a3;
  v17 = v15;
  v18 = v16;
  if ( v7 != &v7[-v8] )
  {
    v9 = &v7[-v8];
    do
    {
      --v7;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v17);
      *(_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v17) = *v7;
    }
    while ( v7 != v9 );
    v5 = a1;
  }
  if ( v20 - a2 <= a3 )
  {
    v11 = 8 * a2;
  }
  else
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v17, v6, v20);
    v15 = v17;
    v16 = v18;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v15, v10);
    v11 = 8 * a2;
    v17 = v15;
    v18 = v16;
    v12 = 8 * v20 - 8 * a3 - (v11 + v6);
    v13 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(
            &v17,
            -((__int64)(8 * v20 - 8 * a3 - v11) >> 3));
    memmove_0((void *)(v13 - (v6 + v12)), (const void *)(v11 + v6), v6 + v12);
  }
  v5[1] += 8 * a3;
  return v11 + v6;
}
