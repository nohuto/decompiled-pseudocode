/*
 * XREFs of ?push_back@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCOverlayContext@@@Z @ 0x180141340
 * Callers:
 *     ?UpdateClientInfo@CDesktopTree@@MEAAXXZ @ 0x180140BE0 (-UpdateClientInfo@CDesktopTree@@MEAAXXZ.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180141868 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEBAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18008FA54 (--C-$checked_array_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x180141C90 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V-$checked_array_iter.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::push_back(
        __int64 a1,
        __int64 *a2)
{
  detail::liberal_expansion_policy *v3; // rcx
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // r15
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // r15
  signed __int64 v14; // rbx
  __int64 v15; // rax
  __int64 result; // rax
  unsigned __int64 v17; // rsi
  LPVOID v18; // rbx
  __int64 v19; // r8
  detail::liberal_expansion_policy *v20; // rdx
  detail::liberal_expansion_policy *v21; // rcx
  detail::liberal_expansion_policy *v22; // rcx
  __int128 v23; // [rsp+20h] [rbp-40h] BYREF
  __int64 v24; // [rsp+30h] [rbp-30h]
  __int128 v25; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h]
  void *v27; // [rsp+A0h] [rbp+40h] BYREF
  __int64 *v28; // [rsp+A8h] [rbp+48h]
  __int64 v29; // [rsp+B0h] [rbp+50h]

  v28 = a2;
  v3 = *(detail::liberal_expansion_policy **)a1;
  v4 = (__int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v3) >> 3;
  if ( !((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) >> 3) )
  {
    if ( v4 + 1 < v4 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180141500LL);
    }
    v17 = detail::liberal_expansion_policy::expand(v3, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v3) >> 3, v4 + 1);
    v18 = operator new[](saturated_mul(v17, 8uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, (__int64)v18, v4);
    v19 = *(_QWORD *)(a1 + 8);
    v20 = *(detail::liberal_expansion_policy **)a1;
    v23 = v25;
    v24 = v26;
    std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
      &v25,
      v20,
      v19,
      &v23);
    v21 = *(detail::liberal_expansion_policy **)a1;
    *(_QWORD *)a1 = v18;
    v27 = 0LL;
    if ( v21 == (detail::liberal_expansion_policy *)(a1 + 24) )
      v21 = 0LL;
    operator delete(v21);
    v22 = *(detail::liberal_expansion_policy **)a1;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a1 + 8 * v4;
    *(_QWORD *)(a1 + 16) = (char *)v22 + 8 * v17;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v27);
  }
  v5 = *(_QWORD **)(a1 + 8);
  v6 = (_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)a1;
  v8 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
  v9 = 8 * v8 + *(_QWORD *)a1;
  v29 = 8 * v8;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, v9, 1LL);
  v23 = v25;
  v24 = v26;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v23, v10);
  v11 = v8 - v4;
  if ( v8 - v4 > 1 )
    v11 = 1LL;
  v25 = v23;
  v26 = v24;
  v12 = 8 * v11;
  if ( v5 != &v5[v12 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v13 = &v5[v12 / 0xFFFFFFFFFFFFFFF8uLL];
    do
    {
      --v5;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v25);
      *(_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v25) = *v5;
    }
    while ( v5 != v13 );
    v6 = (_QWORD *)(a1 + 8);
  }
  if ( v8 - v4 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, v7, v8);
    v23 = v25;
    v24 = v26;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v23, v8);
    v25 = v23;
    v26 = v24;
    v14 = v29 - 8 * v4 - 8;
    v15 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&v25, -(v14 >> 3));
    memmove_0((void *)(v15 - v14), (const void *)(v7 + 8 * v4), v14);
  }
  *v6 += 8LL;
  result = *v28;
  *(_QWORD *)(v7 + 8 * v4) = *v28;
  return result;
}
