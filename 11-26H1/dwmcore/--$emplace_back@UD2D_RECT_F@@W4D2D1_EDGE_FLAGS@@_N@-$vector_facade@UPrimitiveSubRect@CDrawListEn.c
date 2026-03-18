/*
 * XREFs of ??$emplace_back@UD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@Z @ 0x180012750
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

__int64 __fastcall detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::emplace_back<D2D_RECT_F,enum D2D1_EDGE_FLAGS,bool>(
        __int64 *a1,
        const __m128i *a2,
        int a3,
        char a4)
{
  __int64 *v4; // r14
  __m128i v5; // xmm6
  unsigned __int64 v7; // rsi
  _QWORD *v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  __int64 result; // rax
  __int64 v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  void *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 *v23; // rcx
  __int64 v24; // rdx
  __int128 v25; // [rsp+28h] [rbp-49h] BYREF
  __int64 v26; // [rsp+38h] [rbp-39h]
  __int128 v27; // [rsp+48h] [rbp-29h] BYREF
  __int64 v28; // [rsp+58h] [rbp-19h]
  _BYTE v29[48]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v30; // [rsp+D8h] [rbp+67h] BYREF
  int v31; // [rsp+E8h] [rbp+77h]
  char v32; // [rsp+F0h] [rbp+7Fh]

  v32 = a4;
  v31 = a3;
  v4 = a1 + 1;
  v5 = _mm_loadu_si128(a2);
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  if ( 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - a1[1]) >> 3) )
  {
    v8 = a1 + 1;
  }
  else
  {
    if ( v7 + 1 < v7 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180012941LL);
    }
    v19 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)a1,
            0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 3),
            v7 + 1);
    v20 = operator new[](saturated_mul(v19, 0x18uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v27, (__int64)v20, v7);
    v21 = *v4;
    v22 = *a1;
    v25 = v27;
    v26 = v28;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>)(
      &v27,
      v22,
      v21,
      &v25);
    v23 = (__int64 *)*a1;
    *a1 = (__int64)v20;
    v30 = 0LL;
    if ( v23 == a1 + 3 )
      v23 = 0LL;
    operator delete(v23);
    v24 = *a1;
    *v4 = *a1 + 24 * v7;
    a1[2] = v24 + 24 * v19;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v30);
    v8 = a1 + 1;
  }
  v9 = *v4;
  v10 = *a1;
  v11 = 0xAAAAAAAAAAAAAAABuLL * ((*v4 - *a1) >> 3);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v27, *a1 + 24 * v11, 1LL);
  v25 = v27;
  v26 = v28;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v25, v12);
  v13 = v11 - v7;
  v27 = v25;
  if ( v11 - v7 > 1 )
    v13 = 1LL;
  v28 = v26;
  v14 = 24 * v13;
  if ( v9 != v9 - v14 )
  {
    v17 = v9 - v14;
    do
    {
      v9 -= 24LL;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v27);
      v18 = stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>::operator->(&v27);
      *(_OWORD *)v18 = *(_OWORD *)v9;
      *(_QWORD *)(v18 + 16) = *(_QWORD *)(v9 + 16);
    }
    while ( v9 != v17 );
    v8 = a1 + 1;
  }
  if ( v11 - v7 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v27, v10, v11);
    v25 = v27;
    v26 = v28;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v25, v11);
    v27 = v25;
    v28 = v26;
    std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
      v29,
      v10 + 24 * v7,
      v10 + 24 * (v11 - 1),
      &v27);
  }
  v15 = v31;
  *v8 = a1[1] + 24;
  result = 3 * v7;
  *(_DWORD *)(v10 + 8 * result + 16) = v15;
  LOBYTE(v15) = v32;
  *(__m128i *)(v10 + 8 * result) = v5;
  *(_BYTE *)(v10 + 8 * result + 20) = v15;
  return result;
}
