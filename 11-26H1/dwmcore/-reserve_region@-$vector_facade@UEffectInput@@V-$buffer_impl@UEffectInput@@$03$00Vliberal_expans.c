/*
 * XREFs of ?reserve_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUEffectInput@@_K0@Z @ 0x18001A0DC
 * Callers:
 *     ?SetInputSurface@CGraphRenderingContext@CExternalEffectGraph@@QEAAXAEBUEffectInput@@@Z @ 0x180019CA4 (-SetInputSurface@CGraphRenderingContext@CExternalEffectGraph@@QEAAXAEBUEffectInput@@@Z.c)
 *     ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z @ 0x18001A314 (-MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180019FEC (--0EffectInput@@QEAA@AEBU0@@Z.c)
 *     ??$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z @ 0x18001A27C (--$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$move_backward@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x1802B73FC (--$move_backward@V-$move_iterator@PEAUEffectInput@@@std@@V-$checked_array_iterator@PEAUEffectInp.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x1802B74B4 (--$uninitialized_move@V-$move_iterator@PEAUEffectInput@@@std@@V-$checked_array_iterator@PEAUEffe.c)
 *     ??C?$checked_array_iterator@PEAUEffectInput@@@stdext@@QEBAPEAUEffectInput@@XZ @ 0x1802B7554 (--C-$checked_array_iterator@PEAUEffectInput@@@stdext@@QEBAPEAUEffectInput@@XZ.c)
 */

CDrawListBitmap *__fastcall detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        const struct EffectInput *a2,
        __int64 a3)
{
  const struct EffectInput *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rsi
  const struct EffectInput *v7; // r13
  unsigned __int64 v8; // r12
  unsigned __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rbx
  CDrawListBitmap *v14; // r15
  __int64 v15; // rcx
  CDrawListBitmap *v16; // rbx
  CDrawListBitmap *v17; // rdi
  EffectInput *v19; // rax
  unsigned __int64 v20; // rdi
  void *v21; // rbx
  __int64 v22; // r8
  CDrawListBitmap *v23; // rdx
  CDrawListBitmap *v24; // rcx
  __int64 v25; // r8
  __int128 v26; // [rsp+20h] [rbp-60h] BYREF
  __int64 v27; // [rsp+30h] [rbp-50h]
  __int128 v28; // [rsp+40h] [rbp-40h] BYREF
  __int64 v29; // [rsp+50h] [rbp-30h]
  char v30[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v32; // [rsp+D0h] [rbp+50h] BYREF

  v32 = a3;
  v6 = *((_QWORD *)a1 + 1);
  v7 = a2;
  v8 = 0x6DB6DB6DB6DB6DB7LL;
  if ( !(0x6DB6DB6DB6DB6DB7LL * ((*((_QWORD *)a1 + 2) - v6) >> 4)) )
  {
    v10 = 0x6DB6DB6DB6DB6DB7LL * ((v6 - *(_QWORD *)a1) >> 4);
    if ( v10 + 1 < v10 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      do
      {
LABEL_14:
        v3 = (const struct EffectInput *)((char *)v3 - 112);
        stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v28);
        v19 = (EffectInput *)stdext::checked_array_iterator<EffectInput *>::operator->(&v28);
        EffectInput::EffectInput(v19, v3);
      }
      while ( v3 != v7 );
      goto LABEL_5;
    }
    v20 = detail::liberal_expansion_policy::expand(
            a1,
            0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4),
            v10 + 1);
    v21 = operator new[](saturated_mul(v20, 0x70uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v28, (__int64)v21, v10);
    v22 = *((_QWORD *)a1 + 1);
    v23 = *(CDrawListBitmap **)a1;
    v26 = v28;
    v27 = v29;
    ((void (__fastcall *)(__int128 *, CDrawListBitmap *, __int64, __int128 *))std::uninitialized_move<std::move_iterator<EffectInput *>,stdext::checked_array_iterator<EffectInput *>>)(
      &v28,
      v23,
      v22,
      &v26);
    detail::destruct_range<EffectInput>(*(CDrawListBitmap **)a1);
    v24 = *(CDrawListBitmap **)a1;
    *(_QWORD *)a1 = v21;
    v32 = 0LL;
    if ( v24 == (detail::liberal_expansion_policy *)((char *)a1 + 24) )
      v24 = 0LL;
    operator delete(v24);
    *((_QWORD *)a1 + 1) = *(_QWORD *)a1 + 112 * v10;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 112 * v20;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v32);
  }
  v10 = *(_QWORD *)a1;
  v3 = (const struct EffectInput *)*((_QWORD *)a1 + 1);
  v5 = 0x6DB6DB6DB6DB6DB7LL * (((__int64)v3 - *(_QWORD *)a1) >> 4);
  v4 = 16 * (((__int64)v3 - *(_QWORD *)a1) >> 4);
  v8 = v5 - (_QWORD)v7;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v28, v4 + *(_QWORD *)a1, 1LL);
  v26 = v28;
  v27 = v29;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v26, v11);
  v12 = v5 - (_QWORD)v7;
  v28 = v26;
  if ( (unsigned __int64)(v5 - (_QWORD)v7) > 1 )
    v12 = 1LL;
  v29 = v27;
  v7 = (const struct EffectInput *)((char *)v3 - 112 * v12);
  if ( v3 != v7 )
    goto LABEL_14;
LABEL_5:
  v13 = 112LL * (_QWORD)a2;
  if ( v8 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v28, v10, v5);
    v26 = v28;
    v27 = v29;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v26, v5);
    v25 = 112 * v5;
    v28 = v26;
    v29 = v27;
    v14 = (CDrawListBitmap *)(v13 + v10);
    std::move_backward<std::move_iterator<EffectInput *>,stdext::checked_array_iterator<EffectInput *>>(
      v30,
      v13 + v10,
      v10 + v25 - 112,
      &v28);
  }
  else
  {
    v14 = (CDrawListBitmap *)(v10 + v13);
  }
  v15 = v13 + 112;
  v16 = v14;
  if ( v4 + v10 >= v15 + v10 )
    v4 = v15;
  v17 = (CDrawListBitmap *)(v10 + v4);
  if ( v14 != v17 )
  {
    do
    {
      CDrawListBitmap::~CDrawListBitmap(v16);
      v16 = (CDrawListBitmap *)((char *)v16 + 112);
    }
    while ( v16 != v17 );
  }
  *((_QWORD *)a1 + 1) += 112LL;
  return v14;
}
