/*
 * XREFs of ?BuildFromRectFs@CRectanglesShape@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18016E8B0
 * Callers:
 *     ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x18016E794 (-ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETD.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18022864C (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNot.c)
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
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_OWORD *__fastcall CRectanglesShape::BuildFromRectFs(_QWORD *a1, _OWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v7; // r8
  __int64 v8; // r8
  detail::liberal_expansion_policy *v9; // rcx
  unsigned __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r9
  _OWORD *v13; // rdi
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rax
  _OWORD *v16; // rbx
  __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  __int64 v19; // r12
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rbx
  const void *v23; // rsi
  signed __int64 v24; // rbx
  unsigned __int64 v25; // r8
  __int128 v26; // xmm0
  _OWORD *v27; // xmm1_8
  _OWORD *result; // rax
  _OWORD *v29; // rdi
  unsigned __int64 v30; // rsi
  LPVOID v31; // rbx
  __int64 v32; // r8
  void *v33; // rdx
  _QWORD *v34; // rcx
  __int64 v35; // rsi
  __int128 v36; // [rsp+20h] [rbp-59h] BYREF
  _OWORD *v37; // [rsp+30h] [rbp-49h]
  __int128 v38; // [rsp+40h] [rbp-39h] BYREF
  _OWORD *v39; // [rsp+50h] [rbp-29h]
  __int64 v40; // [rsp+60h] [rbp-19h]
  _OWORD *v41; // [rsp+70h] [rbp-9h]
  __int128 v42; // [rsp+80h] [rbp+7h]
  _OWORD *v43; // [rsp+90h] [rbp+17h]
  unsigned __int64 v44; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int64 v45; // [rsp+F8h] [rbp+7Fh]

  v3 = a3;
  v5 = a1[2];
  v7 = (a1[3] - v5) >> 4;
  if ( v7 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v38, v5, v7);
    v7 = -16 * v8;
    a1[3] += v7;
  }
  v9 = (detail::liberal_expansion_policy *)a1[7];
  if ( v9 )
  {
    (*(void (__fastcall **)(detail::liberal_expansion_policy *))(*(_QWORD *)v9 + 16LL))(v9);
    a1[7] = 0LL;
  }
  v10 = v3;
  if ( !a2 && (_DWORD)v3 )
  {
LABEL_22:
    ((void (__fastcall *)(detail::liberal_expansion_policy *, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
      v9,
      v5,
      v7);
    __debugbreak();
  }
  v11 = a1[4];
  v12 = a1[2];
  v13 = &a2[v3];
  v14 = (a1[3] - v12) >> 4;
  v15 = (v11 - a1[3]) >> 4;
  v41 = v13;
  *(_QWORD *)&v42 = a2;
  *((_QWORD *)&v42 + 1) = v13;
  v43 = a2;
  v45 = v14;
  if ( v15 < v10 )
  {
    if ( v10 + v14 >= v14 )
    {
      v30 = detail::liberal_expansion_policy::expand(v9, (v11 - v12) >> 4, v10 + v14);
      v31 = operator new[](saturated_mul(v30, 0x10uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v38, (__int64)v31, v14);
      v32 = a1[3];
      v33 = (void *)a1[2];
      v36 = v38;
      v37 = v39;
      std::uninitialized_move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
        (__int64)&v38,
        v33,
        v32,
        &v36);
      v34 = (_QWORD *)a1[2];
      a1[2] = v31;
      v44 = 0LL;
      if ( v34 == a1 + 5 )
        v34 = 0LL;
      operator delete(v34);
      v35 = a1[2] + 16 * v30;
      a1[3] = a1[2] + 16 * v14;
      a1[4] = v35;
      std::unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>::~unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>((void **)&v44);
    }
    else
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
  }
  v16 = (_OWORD *)a1[3];
  v40 = a1[2];
  v17 = ((__int64)v16 - v40) >> 4;
  v18 = v17 - v14;
  v19 = 16 * v17;
  v44 = v18;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v38, 16 * v17 + v40, v10);
  v36 = v38;
  v37 = v39;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v36, v10);
  v20 = v44;
  v21 = v10;
  if ( v10 >= v44 )
    v21 = v44;
  v38 = v36;
  v39 = v37;
  if ( v16 != &v16[-v21] )
  {
    v29 = &v16[-v21];
    do
    {
      --v16;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v38);
      *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v38) = *v16;
    }
    while ( v16 != v29 );
    v13 = v41;
    v20 = v44;
  }
  if ( v20 > v10 )
  {
    v22 = v40;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v38, v40, v17);
    v36 = v38;
    v37 = v39;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v36, v17);
    v23 = (const void *)(v22 + 16 * v45);
    v38 = v36;
    v24 = v19 - 16 * v10 - 16 * v45;
    v39 = v37;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v38, -(v24 >> 4));
    memmove_0((void *)(v36 + 16LL * (_QWORD)v37 - v24), v23, v24);
  }
  v25 = v45;
  v26 = v42;
  v27 = v43;
  a1[3] += 16 * v10;
  v36 = v26;
  v9 = (detail::liberal_expansion_policy *)*((_QWORD *)&v26 + 1);
  v5 = v26;
  v7 = v40 + 16 * v25;
  v37 = v27;
  for ( result = v27; ; ++result )
  {
    if ( v26 != __PAIR128__((unsigned __int64)v13, (unsigned __int64)a2) )
      goto LABEL_22;
    if ( result == v13 )
      break;
    if ( !(_QWORD)v26 )
      goto LABEL_22;
    if ( !*((_QWORD *)&v26 + 1) )
      goto LABEL_22;
    if ( (unsigned __int64)v26 > (unsigned __int64)result )
      goto LABEL_22;
    if ( (unsigned __int64)result >= *((_QWORD *)&v26 + 1) )
      goto LABEL_22;
    *(_OWORD *)v7 = *result;
    if ( !result )
      goto LABEL_22;
    v7 += 16LL;
  }
  return result;
}
