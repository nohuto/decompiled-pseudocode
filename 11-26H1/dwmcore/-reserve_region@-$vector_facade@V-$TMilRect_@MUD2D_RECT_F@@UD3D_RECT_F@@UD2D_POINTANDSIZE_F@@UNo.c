/*
 * XREFs of ?reserve_region@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x1800BF9A0
 * Callers:
 *     ??0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z @ 0x1800C0C88 (--0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?SetDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1801FE400 (-SetDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV-$span@$$CBV-$TMilRect_@HUtagRECT@@UMil3DRec.c)
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

__int64 __fastcall detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 *v6; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r8
  _OWORD *v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rsi
  detail::liberal_expansion_policy *v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 result; // rax
  _OWORD *v17; // r15
  unsigned __int64 v18; // rsi
  LPVOID v19; // rbx
  __int64 v20; // r8
  void *v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // rsi
  __int128 v24; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+30h] [rbp-30h]
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]
  detail::liberal_expansion_policy *v29; // [rsp+B0h] [rbp+50h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v6 = (__int64 *)a1;
  if ( (*((_QWORD *)a1 + 2) - v3) >> 4 < a3 )
  {
    v7 = (v3 - *(_QWORD *)a1) >> 4;
    v8 = v7 + a3;
    if ( v8 >= v7 )
    {
      v18 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4, v8);
      v19 = operator new[](saturated_mul(v18, 0x10uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v26, (__int64)v19, v7);
      v20 = v6[1];
      v21 = (void *)*v6;
      v24 = v26;
      v25 = v27;
      std::uninitialized_move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
        (__int64)&v26,
        v21,
        v20,
        &v24);
      v22 = (__int64 *)*v6;
      *v6 = (__int64)v19;
      v29 = 0LL;
      if ( v22 == v6 + 3 )
        v22 = 0LL;
      operator delete(v22);
      v23 = *v6 + 16 * v18;
      v6[1] = *v6 + 16 * v7;
      v6[2] = v23;
      std::unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>::~unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>((void **)&v29);
    }
    else
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
  }
  v9 = (_OWORD *)v6[1];
  v10 = *v6;
  v11 = ((__int64)v9 - *v6) >> 4;
  v29 = (detail::liberal_expansion_policy *)(v11 - a2);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v26, 16 * v11 + v10, a3);
  v24 = v26;
  v25 = v27;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v24, a3);
  v12 = v29;
  v13 = (unsigned __int64)v29;
  if ( a3 < (unsigned __int64)v29 )
    v13 = a3;
  v26 = v24;
  v27 = v25;
  if ( v9 != &v9[-v13] )
  {
    v17 = &v9[-v13];
    do
    {
      --v9;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v26);
      *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v26) = *v9;
    }
    while ( v9 != v17 );
    v6 = (__int64 *)a1;
    v12 = v29;
  }
  if ( (unsigned __int64)v12 <= a3 )
  {
    v14 = 16 * a2;
  }
  else
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v26, v10, v11);
    v24 = v26;
    v25 = v27;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v24, v11);
    v14 = 16 * a2;
    v26 = v24;
    v15 = 16 * v11 - 16 * a3 - (v14 + v10);
    v27 = v25;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v26, -((__int64)(16 * v11 - 16 * a3 - v14) >> 4));
    memmove_0((void *)(v24 + 16 * v25 - (v15 + v10)), (const void *)(v14 + v10), v15 + v10);
  }
  result = v14 + v10;
  v6[1] += 16 * a3;
  return result;
}
