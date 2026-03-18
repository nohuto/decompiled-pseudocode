/*
 * XREFs of ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x180103854
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180103060 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x1801D1BE8 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDe.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEBAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18008FA54 (--C-$checked_array_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18010563C (--$uninitialized_move@V-$move_iterator@PEAV-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18020DF08 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil.c)
 */

__int64 *__fastcall detail::vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        void *a3)
{
  __int64 v3; // rsi
  __int64 **v5; // r14
  __int64 v6; // r8
  unsigned __int64 v7; // rsi
  __int64 *v8; // rdi
  __int64 *v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // r14
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rbx
  unsigned __int64 v20; // rdi
  __int64 *v21; // rbx
  __int64 *v22; // r8
  __int64 *v23; // rdx
  __int64 *v24; // rcx
  bool v25; // zf
  __int64 *v26; // rcx
  __int128 v27; // [rsp+20h] [rbp-60h] BYREF
  __int64 v28; // [rsp+30h] [rbp-50h]
  __int128 v29; // [rsp+40h] [rbp-40h] BYREF
  __int64 v30; // [rsp+50h] [rbp-30h]
  char v31[32]; // [rsp+60h] [rbp-20h] BYREF
  void *v33; // [rsp+D0h] [rbp+50h] BYREF

  v33 = a3;
  v3 = *((_QWORD *)a1 + 1);
  v5 = (__int64 **)a1;
  v6 = 1LL;
  if ( !((*((_QWORD *)a1 + 2) - v3) >> 3) )
  {
    v7 = (v3 - *(_QWORD *)a1) >> 3;
    if ( v7 + 1 >= v7 )
    {
      v20 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3, v7 + 1);
      v21 = (__int64 *)operator new[](saturated_mul(v20, 8uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v29, (__int64)v21, v7);
      v22 = v5[1];
      v23 = *v5;
      v27 = v29;
      v28 = v30;
      ((void (__fastcall *)(__int128 *, __int64 *, __int64 *, __int128 *))std::uninitialized_move<std::move_iterator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *>>)(
        &v29,
        v23,
        v22,
        &v27);
      std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(*v5, v5[1]);
      v24 = *v5;
      v25 = *v5 == (__int64 *)(v5 + 3);
      v33 = 0LL;
      *v5 = v21;
      if ( v25 )
        v24 = 0LL;
      operator delete(v24);
      v26 = *v5;
      v5[1] = &(*v5)[v7];
      v5[2] = &v26[v20];
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v33);
      v6 = 1LL;
    }
    else
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
  }
  v8 = *v5;
  v9 = v5[1];
  v10 = v9 - *v5;
  v11 = 8 * v10;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v29, (__int64)&(*v5)[v10], v6);
  v27 = v29;
  v28 = v30;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v27, v12);
  v13 = v10 - a2;
  v29 = v27;
  if ( (unsigned __int64)(v10 - a2) > 1 )
    v13 = 1LL;
  v30 = v28;
  v14 = 8 * v13;
  if ( v9 != &v9[v14 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v15 = &v9[v14 / 0xFFFFFFFFFFFFFFF8uLL];
    do
    {
      --v9;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v29);
      v16 = (_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v29);
      v17 = *v9;
      *v9 = 0LL;
      *v16 = v17;
    }
    while ( v9 != v15 );
    v5 = (__int64 **)a1;
  }
  if ( (unsigned __int64)(v10 - a2) <= 1 )
  {
    v18 = &v8[a2];
  }
  else
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v29, (__int64)v8, v10);
    v27 = v29;
    v28 = v30;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v27, v10);
    v18 = &v8[a2];
    v29 = v27;
    v30 = v28;
    std::move_backward<std::move_iterator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *>>(
      v31,
      v18,
      &v8[v10 - 1],
      &v29);
  }
  if ( (__int64 *)((char *)v8 + v11) >= &v8[a2 + 1] )
    v11 = 8 * a2 + 8;
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(
    v18,
    (__int64 *)((char *)v8 + v11));
  ++v5[1];
  return v18;
}
