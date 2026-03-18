/*
 * XREFs of ?Clear@CMatrixStack2D@@QEAAXXZ @ 0x1800409FC
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180040050 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x180205EF4 (--$uninitialized_move@V-$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V-$checked_array_iterator@PEAV.c)
 *     ??$move_backward@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x18020602C (--$move_backward@V-$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V-$checked_array_iterator@PEAVMatri.c)
 *     ??C?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@QEBAPEAVCDelayUnpin@CD3DDevice@@XZ @ 0x18021FD70 (--C-$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@QEBAPEAVCDelayUnpin@CD3DDevice@.c)
 */

void __fastcall CMatrixStack2D::Clear(CMatrixStack2D *this)
{
  detail::liberal_expansion_policy *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8
  __m128i si128; // xmm7
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  LPVOID v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rdx
  void *v18; // rcx
  bool v19; // zf
  __int64 v20; // rdx
  __int128 v21; // [rsp+28h] [rbp-49h] BYREF
  __int64 v22; // [rsp+38h] [rbp-39h]
  __int128 v23; // [rsp+48h] [rbp-29h] BYREF
  __int64 v24; // [rsp+58h] [rbp-19h]
  _BYTE v25[64]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+67h] BYREF

  v2 = (detail::liberal_expansion_policy *)*((_QWORD *)this + 1);
  v3 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)v2 - *(_QWORD *)this) >> 3);
  if ( v3 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v23, *(_QWORD *)this, v3);
    *((_QWORD *)this + 1) += -24 * v4;
    v2 = (detail::liberal_expansion_policy *)*((_QWORD *)this + 1);
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v6 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)v2 - *(_QWORD *)this) >> 3);
  if ( !(0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 2) - (_QWORD)v2) >> 3)) )
  {
    if ( v6 + 1 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180040BB6LL);
    }
    v14 = detail::liberal_expansion_policy::expand(
            v2,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 2) - *(_QWORD *)this) >> 3),
            v6 + 1);
    v15 = operator new[](saturated_mul(v14, 0x18uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v23, (__int64)v15, v6);
    v16 = *((_QWORD *)this + 1);
    v17 = *(_QWORD *)this;
    v21 = v23;
    v22 = v24;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>)(
      &v23,
      v17,
      v16,
      &v21);
    v18 = *(void **)this;
    v19 = *(_QWORD *)this == (_QWORD)this + 24;
    v26 = 0LL;
    *(_QWORD *)this = v15;
    if ( v19 )
      v18 = 0LL;
    operator delete(v18);
    v20 = *(_QWORD *)this;
    *((_QWORD *)this + 1) = *(_QWORD *)this + 24 * v6;
    *((_QWORD *)this + 2) = v20 + 24 * v14;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v26);
  }
  v7 = *(_QWORD *)this;
  v8 = *((_QWORD *)this + 1);
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((v8 - *(_QWORD *)this) >> 3);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(
    &v23,
    *(_QWORD *)this + 8 * ((v8 - *(_QWORD *)this) >> 3),
    1LL);
  v21 = v23;
  v22 = v24;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v21, 1LL);
  v10 = v9 - v6;
  if ( v9 - v6 > 1 )
    v10 = 1LL;
  v23 = v21;
  v24 = v22;
  v11 = v8 - 24 * v10;
  while ( v8 != v11 )
  {
    v8 -= 24LL;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v23);
    v13 = stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>::operator->(&v23);
    *(_OWORD *)v13 = *(_OWORD *)v8;
    *(_QWORD *)(v13 + 16) = *(_QWORD *)(v8 + 16);
  }
  if ( v9 - v6 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v23, v7, v9);
    v21 = v23;
    v22 = v24;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v21, v9);
    v23 = v21;
    v24 = v22;
    std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
      v25,
      v7 + 24 * v6,
      v7 + 24 * (v9 - 1),
      &v23);
  }
  *((_QWORD *)this + 1) += 24LL;
  v12 = 3 * v6;
  *(__m128i *)(v7 + 8 * v12) = si128;
  *(_QWORD *)(v7 + 8 * v12 + 16) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
}
