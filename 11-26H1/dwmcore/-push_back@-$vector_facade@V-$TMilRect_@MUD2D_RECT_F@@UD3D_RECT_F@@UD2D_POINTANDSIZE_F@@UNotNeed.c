/*
 * XREFs of ?push_back@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BE350
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180040050 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@@std@@@std@@QEAA@XZ @ 0x18002D63C (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U-$d.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x18002D6AC (--$uninitialized_move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ @ 0x180142FD8 (--C-$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

_OWORD *__fastcall detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>>::push_back(
        __int64 a1,
        _OWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // r12
  detail::liberal_expansion_policy *v5; // rcx
  unsigned __int64 v6; // rdi
  _OWORD *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int64 v10; // r13
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // r15
  _OWORD *result; // rax
  _OWORD *v16; // rdi
  unsigned __int64 v17; // rsi
  LPVOID v18; // rbx
  __int64 v19; // r8
  detail::liberal_expansion_policy *v20; // rdx
  detail::liberal_expansion_policy *v21; // rcx
  __int64 v22; // rsi
  __int128 v23; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+30h] [rbp-48h]
  __int128 v25; // [rsp+40h] [rbp-38h] BYREF
  __int64 v26; // [rsp+50h] [rbp-28h]
  _QWORD *v27; // [rsp+B0h] [rbp+38h] BYREF
  _OWORD *v28; // [rsp+B8h] [rbp+40h]
  unsigned __int64 v29; // [rsp+C8h] [rbp+50h]

  v28 = a2;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = (_QWORD *)(a1 + 8);
  v5 = *(detail::liberal_expansion_policy **)a1;
  v6 = (v2 - (__int64)v5) >> 4;
  v29 = v6;
  if ( (__int64)(*(_QWORD *)(a1 + 16) - *v3) >> 4 )
    goto LABEL_4;
  if ( v6 + 1 < v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_4:
    v27 = v3;
    goto LABEL_5;
  }
  v17 = detail::liberal_expansion_policy::expand(v5, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v5) >> 4, v6 + 1);
  v18 = operator new[](saturated_mul(v17, 0x10uLL));
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, (__int64)v18, v6);
  v19 = *v3;
  v20 = *(detail::liberal_expansion_policy **)a1;
  v23 = v25;
  v24 = v26;
  std::uninitialized_move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
    (__int64)&v25,
    v20,
    v19,
    &v23);
  v21 = *(detail::liberal_expansion_policy **)a1;
  *(_QWORD *)a1 = v18;
  v27 = 0LL;
  if ( v21 == (detail::liberal_expansion_policy *)(a1 + 24) )
    v21 = 0LL;
  operator delete(v21);
  v22 = *(_QWORD *)a1 + 16 * v17;
  *v3 = *(_QWORD *)a1 + 16 * v6;
  *(_QWORD *)(a1 + 16) = v22;
  std::unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>::~unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>((void **)&v27);
  v27 = (_QWORD *)(a1 + 8);
LABEL_5:
  v7 = (_OWORD *)*v3;
  v8 = *(_QWORD *)a1;
  v9 = (__int64)(*v3 - *(_QWORD *)a1) >> 4;
  v10 = v9 - v6;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, 16 * v9 + *(_QWORD *)a1, 1LL);
  v23 = v25;
  v24 = v26;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v23, v11);
  v12 = v9 - v6;
  if ( v9 - v6 > 1 )
    v12 = 1LL;
  v25 = v23;
  v13 = 16 * v12;
  v26 = v24;
  if ( v7 == &v7[v13 / 0xFFFFFFFFFFFFFFF0uLL] )
  {
    v14 = v27;
  }
  else
  {
    v16 = &v7[v13 / 0xFFFFFFFFFFFFFFF0uLL];
    do
    {
      --v7;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v25);
      *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v25) = *v7;
    }
    while ( v7 != v16 );
    v6 = v29;
    v14 = (_QWORD *)(a1 + 8);
  }
  if ( v10 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, v8, v9);
    v23 = v25;
    v24 = v26;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v23, v9);
    v25 = v23;
    v26 = v24;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v25, -((__int64)(16 * v9 - 16 * v6 - 16) >> 4));
    memmove_0((void *)(v23 + 16 * v24 - (16 * v9 - 16 * v6 - 16)), (const void *)(v8 + 16 * v6), 16 * v9 - 16 * v6 - 16);
  }
  *v14 += 16LL;
  result = v28;
  *(_OWORD *)(v8 + 16 * v6) = *v28;
  return result;
}
