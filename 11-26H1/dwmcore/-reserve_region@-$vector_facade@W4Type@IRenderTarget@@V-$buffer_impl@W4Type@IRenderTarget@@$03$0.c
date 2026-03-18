/*
 * XREFs of ?reserve_region@?$vector_facade@W4Type@IRenderTarget@@V?$buffer_impl@W4Type@IRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4Type@IRenderTarget@@_K0@Z @ 0x180236E58
 * Callers:
 *     ?NotifyBeginFrame@CRenderPerf@@QEAAXW4Type@IRenderTarget@@@Z @ 0x180236934 (-NotifyBeginFrame@CRenderPerf@@QEAAXW4Type@IRenderTarget@@@Z.c)
 * Callees:
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@Z @ 0x18020700C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA-A_.c)
 *     ??C?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@QEBAPEAW4Type@IRenderTarget@@XZ @ 0x18021FDBC (--C-$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@QEBAPEAW4Type@IRenderTarget@@XZ.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<enum IRenderTarget::Type,detail::buffer_impl<enum IRenderTarget::Type,4,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        char *a3)
{
  __int64 v3; // r15
  __int64 v5; // rdx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r14
  LPVOID v10; // rsi
  __int64 v11; // rbx
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  void *v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rsi
  _DWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  _DWORD *i; // r15
  __int64 v24; // r14
  signed __int64 v25; // rbx
  __int64 v26; // rax
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]
  char *v32; // [rsp+A0h] [rbp+40h] BYREF

  v32 = a3;
  v3 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( !((v5 - v3) >> 2) )
  {
    v7 = (v3 - *(_QWORD *)a1) >> 2;
    v8 = v7 + 1;
    if ( v7 + 1 < v7 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v9 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 2, v8);
    v10 = operator new[](saturated_mul(v9, 4uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v30, (__int64)v10, v7);
    v11 = *((_QWORD *)a1 + 1);
    v12 = *(_QWORD **)a1;
    v13 = (v11 - *(_QWORD *)a1) >> 2;
    v28 = v30;
    v29 = v31;
    v14 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(&v28, v13);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v12, v11, v14);
    v15 = *(_QWORD **)a1;
    *(_QWORD *)a1 = v10;
    v32 = 0LL;
    if ( v15 == (_QWORD *)((char *)a1 + 24) )
      v15 = 0LL;
    operator delete(v15);
    v16 = *(_QWORD **)a1;
    *((_QWORD *)a1 + 1) = *(_QWORD *)a1 + 4 * v7;
    *((_QWORD *)a1 + 2) = (char *)v16 + 4 * v9;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v32);
  }
  v17 = *(_QWORD *)a1;
  v18 = (_DWORD *)*((_QWORD *)a1 + 1);
  v19 = ((__int64)v18 - *(_QWORD *)a1) >> 2;
  v20 = 4 * v19 + *(_QWORD *)a1;
  v32 = (char *)(4 * v19);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v30, v20, 1LL);
  v28 = v30;
  v29 = v31;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v28, v21);
  v22 = v19 - a2;
  v30 = v28;
  if ( (unsigned __int64)(v19 - a2) > 1 )
    v22 = 1LL;
  v31 = v29;
  for ( i = &v18[-v22];
        v18 != i;
        *(_DWORD *)stdext::checked_array_iterator<enum IRenderTarget::Type *>::operator->(&v30) = *v18 )
  {
    --v18;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v30);
  }
  if ( (unsigned __int64)(v19 - a2) <= 1 )
  {
    v24 = 4 * a2;
  }
  else
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v30, v17, v19);
    v28 = v30;
    v29 = v31;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v28, v19);
    v24 = 4 * a2;
    v30 = v28;
    v31 = v29;
    v25 = (signed __int64)&v32[-4 * a2 - 4];
    v26 = std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(&v30, -(v25 >> 2));
    memmove_0((void *)(v26 - v25), (const void *)(4 * a2 + v17), v25);
  }
  *((_QWORD *)a1 + 1) += 4LL;
  return v24 + v17;
}
