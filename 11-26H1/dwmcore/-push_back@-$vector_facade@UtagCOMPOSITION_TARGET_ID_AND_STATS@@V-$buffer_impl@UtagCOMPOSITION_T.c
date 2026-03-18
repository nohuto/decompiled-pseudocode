/*
 * XREFs of ?push_back@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x180033608
 * Callers:
 *     ?ConfirmCompositionFrame@CComposition@@IEAAJXZ @ 0x180032890 (-ConfirmCompositionFrame@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@@std@@@std@@QEAA@XZ @ 0x18002D63C (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U-$d.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@0@0V12@@Z @ 0x18022DAB0 (--$uninitialized_move@V-$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V-$checked_.c)
 *     ??C?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@QEBAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@XZ @ 0x18022DB50 (--C-$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@QEBAPEAUtagCOMPOSIT.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<tagCOMPOSITION_TARGET_ID_AND_STATS,detail::buffer_impl<tagCOMPOSITION_TARGET_ID_AND_STATS,4,1,detail::liberal_expansion_policy>>::push_back(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v2; // r13
  unsigned __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r13
  _QWORD *v12; // r13
  __int64 result; // rax
  signed __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  LPVOID v16; // rbx
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int128 v21; // [rsp+20h] [rbp-40h] BYREF
  __int64 v22; // [rsp+30h] [rbp-30h]
  __int128 v23; // [rsp+40h] [rbp-20h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h]
  _QWORD *v25; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v26; // [rsp+B0h] [rbp+50h]
  __int64 v27; // [rsp+B8h] [rbp+58h]

  v2 = a1 + 1;
  v5 = 0xEEEEEEEEEEEEEEEFuLL * ((a1[1] - *a1) >> 3);
  if ( 0xEEEEEEEEEEEEEEEFuLL * ((a1[2] - a1[1]) >> 3) )
  {
    v25 = a1 + 1;
  }
  else
  {
    if ( v5 + 1 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180033823LL);
    }
    v15 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)0xEEEEEEEEEEEEEEEFLL,
            0xEEEEEEEEEEEEEEEFuLL * ((a1[2] - *a1) >> 3),
            v5 + 1);
    v16 = operator new[](saturated_mul(v15, 0x78uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v23, (__int64)v16, v5);
    v17 = *v2;
    v18 = (_QWORD *)*a1;
    v21 = v23;
    v22 = v24;
    std::uninitialized_move<std::move_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>,stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>>(
      &v23,
      v18,
      v17,
      &v21);
    v19 = (__int64 *)*a1;
    *a1 = (__int64)v16;
    v25 = 0LL;
    if ( v19 == a1 + 3 )
      v19 = 0LL;
    operator delete(v19);
    *v2 = *a1 + 120 * v5;
    a1[2] = *a1 + 120 * v15;
    std::unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>::~unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>((void **)&v25);
    v25 = a1 + 1;
  }
  v6 = *v2;
  v7 = *a1;
  v8 = 0xEEEEEEEEEEEEEEEFuLL * ((*v2 - *a1) >> 3);
  v27 = 8 * ((*v2 - *a1) >> 3);
  v26 = v8 - v5;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v23, 120 * v8 + v7, 1LL);
  v21 = v23;
  v22 = v24;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v21, v9);
  v10 = v8 - v5;
  v23 = v21;
  if ( v8 - v5 > 1 )
    v10 = 1LL;
  v24 = v22;
  v11 = v6 - 120 * v10;
  if ( v6 == v11 )
  {
    v12 = v25;
  }
  else
  {
    do
    {
      v6 -= 120LL;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v23);
      v20 = stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>::operator->(&v23);
      *(_OWORD *)v20 = *(_OWORD *)v6;
      *(_OWORD *)(v20 + 16) = *(_OWORD *)(v6 + 16);
      *(_OWORD *)(v20 + 32) = *(_OWORD *)(v6 + 32);
      *(_OWORD *)(v20 + 48) = *(_OWORD *)(v6 + 48);
      *(_OWORD *)(v20 + 64) = *(_OWORD *)(v6 + 64);
      *(_OWORD *)(v20 + 80) = *(_OWORD *)(v6 + 80);
      *(_OWORD *)(v20 + 96) = *(_OWORD *)(v6 + 96);
      *(_QWORD *)(v20 + 112) = *(_QWORD *)(v6 + 112);
    }
    while ( v6 != v11 );
    v12 = a1 + 1;
  }
  if ( v26 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v23, v7, v8);
    v21 = v23;
    v22 = v24;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v21, v8);
    v23 = v21;
    v24 = v22;
    v14 = v27 - 120 * v5 - 120;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v23, 0x1111111111111111LL * (v14 >> 3));
    memmove_0((void *)(v21 + 120 * v22 - v14), (const void *)(v7 + 120 * v5), v14);
  }
  *v12 = a1[1] + 120;
  result = 120 * v5;
  *(_OWORD *)(result + v7) = *(_OWORD *)a2;
  *(_OWORD *)(result + v7 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(result + v7 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(result + v7 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(result + v7 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(result + v7 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(result + v7 + 96) = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(result + v7 + 112) = *(_QWORD *)(a2 + 112);
  return result;
}
