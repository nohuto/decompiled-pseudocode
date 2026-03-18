/*
 * XREFs of ?reserve_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampEntry@CoordMap@@_K0@Z @ 0x180142E04
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x1801422E8 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@@std@@@std@@QEAA@XZ @ 0x18002D63C (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U-$d.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x180141D0C (--$uninitialized_move@V-$move_iterator@PEAURampEntry@CoordMap@@@std@@V-$checked_array_iterator@P.c)
 *     ??C?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ @ 0x180142FD8 (--C-$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        void *a3)
{
  __int64 v3; // r14
  __int64 v5; // r8
  __int64 *v6; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // r14
  _OWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  _OWORD *v14; // r15
  __int64 v15; // xmm6_8
  __int64 v16; // rsi
  unsigned __int64 v18; // rdi
  LPVOID v19; // rbx
  __int64 v20; // r8
  void *v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // rdi
  __int128 v24; // [rsp+20h] [rbp-50h] BYREF
  __int64 v25; // [rsp+30h] [rbp-40h]
  __int128 v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+50h] [rbp-20h]
  void *v29; // [rsp+C0h] [rbp+50h] BYREF

  v29 = a3;
  v3 = *((_QWORD *)a1 + 1);
  v5 = 1LL;
  v6 = (__int64 *)a1;
  if ( !((*((_QWORD *)a1 + 2) - v3) >> 4) )
  {
    v7 = (v3 - *(_QWORD *)a1) >> 4;
    if ( v7 + 1 >= v7 )
    {
      v18 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4, v7 + 1);
      v19 = operator new[](saturated_mul(v18, 0x10uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v26, (__int64)v19, v7);
      v20 = v6[1];
      v21 = (void *)*v6;
      v24 = v26;
      v25 = v27;
      std::uninitialized_move<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>(
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
      std::unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>::~unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>(&v29);
      v5 = 1LL;
    }
    else
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
  }
  v8 = *v6;
  v9 = (_OWORD *)v6[1];
  v10 = ((__int64)v9 - *v6) >> 4;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v26, *v6 + 16 * v10, v5);
  v24 = v26;
  v25 = v27;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v24, v11);
  v12 = v10 - a2;
  v26 = v24;
  if ( (unsigned __int64)(v10 - a2) > 1 )
    v12 = 1LL;
  v27 = v25;
  v13 = 16 * v12;
  if ( v9 != &v9[v13 / 0xFFFFFFFFFFFFFFF0uLL] )
  {
    v14 = &v9[v13 / 0xFFFFFFFFFFFFFFF0uLL];
    do
    {
      --v9;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v26);
      *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v26) = *v9;
    }
    while ( v9 != v14 );
    v6 = (__int64 *)a1;
  }
  if ( (unsigned __int64)(v10 - a2) <= 1 )
  {
    v16 = 16 * a2;
  }
  else
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v26, v8, v10);
    v24 = v26;
    v25 = v27;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v24, v10);
    v15 = v24;
    v16 = 16 * a2;
    v27 = v25;
    v26 = v24;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v26, -((16 * v10 - v16 - 16) >> 4));
    memmove_0((void *)(v15 + 16 * v25 - (16 * v10 - v16 - 16)), (const void *)(v16 + v8), 16 * v10 - v16 - 16);
  }
  v6[1] += 16LL;
  return v16 + v8;
}
