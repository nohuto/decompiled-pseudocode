/*
 * XREFs of ?reserve_region@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUPrimitiveSubRect@CDrawListEntryBuilder@@_K0@Z @ 0x18001191C
 * Callers:
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800112A0 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
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

__int64 __fastcall detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  void *v17; // rbx
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  __int128 v22; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+30h] [rbp-50h]
  __int128 v24; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+50h] [rbp-30h]
  char v26[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v27; // [rsp+C0h] [rbp+40h] BYREF

  v27 = a3;
  v3 = *((_QWORD *)a1 + 1);
  if ( !(0xAAAAAAAAAAAAAAABuLL * ((*((_QWORD *)a1 + 2) - v3) >> 3)) )
  {
    v15 = 0xAAAAAAAAAAAAAAABuLL * ((v3 - *(_QWORD *)a1) >> 3);
    if ( v15 + 1 < v15 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180011AE5LL);
    }
    v16 = detail::liberal_expansion_policy::expand(
            a1,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3),
            v15 + 1);
    v17 = operator new[](saturated_mul(v16, 0x18uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v24, (__int64)v17, v15);
    v18 = *((_QWORD *)a1 + 1);
    v19 = *(_QWORD **)a1;
    v22 = v24;
    v23 = v25;
    ((void (__fastcall *)(__int128 *, _QWORD *, __int64, __int128 *))std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>)(
      &v24,
      v19,
      v18,
      &v22);
    v20 = *(_QWORD **)a1;
    *(_QWORD *)a1 = v17;
    v27 = 0LL;
    if ( v20 == (_QWORD *)((char *)a1 + 24) )
      v20 = 0LL;
    operator delete(v20);
    v21 = *(_QWORD **)a1;
    *((_QWORD *)a1 + 1) = *(_QWORD *)a1 + 24 * v15;
    *((_QWORD *)a1 + 2) = &v21[3 * v16];
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v27);
  }
  v6 = *(_QWORD *)a1;
  v7 = *((_QWORD *)a1 + 1);
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((v7 - *(_QWORD *)a1) >> 3);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(
    &v24,
    *(_QWORD *)a1 + 8 * ((v7 - *(_QWORD *)a1) >> 3),
    1LL);
  v22 = v24;
  v23 = v25;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v22, 1LL);
  v9 = v8 - a2;
  if ( (unsigned __int64)(v8 - a2) > 1 )
    v9 = 1LL;
  v24 = v22;
  v25 = v23;
  v10 = v7 - 24 * v9;
  while ( v7 != v10 )
  {
    v7 -= 24LL;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v24);
    v14 = stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>::operator->(&v24);
    *(_OWORD *)v14 = *(_OWORD *)v7;
    *(_QWORD *)(v14 + 16) = *(_QWORD *)(v7 + 16);
  }
  v11 = 24 * a2;
  if ( (unsigned __int64)(v8 - a2) > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v24, v6, v8);
    v22 = v24;
    v23 = v25;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v22, v8);
    v12 = v6 + v11;
    v24 = v22;
    v25 = v23;
    std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
      v26,
      v12,
      v6 + 24 * (v8 - 1),
      &v24);
  }
  else
  {
    v12 = v6 + v11;
  }
  *((_QWORD *)a1 + 1) += 24LL;
  return v12;
}
