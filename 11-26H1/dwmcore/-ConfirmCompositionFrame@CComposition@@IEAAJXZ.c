/*
 * XREFs of ?ConfirmCompositionFrame@CComposition@@IEAAJXZ @ 0x180032890
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030DC0 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@@std@@@std@@QEAA@XZ @ 0x18002D63C (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U-$d.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180031B70 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?push_back@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x180033608 (-push_back@-$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V-$buffer_impl@UtagCOMPOSITION_T.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     McTemplateU0qxqNR2_EventWriteTransfer @ 0x18022BB30 (McTemplateU0qxqNR2_EventWriteTransfer.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@0@0V12@@Z @ 0x18022DAB0 (--$uninitialized_move@V-$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V-$checked_.c)
 *     ??C?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@QEBAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@XZ @ 0x18022DB50 (--C-$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@QEBAPEAUtagCOMPOSIT.c)
 *     ?pop_back@?$vector@_KV?$allocator@_K@std@@@std@@QEAAXXZ @ 0x180295988 (-pop_back@-$vector@_KV-$allocator@_K@std@@@std@@QEAAXXZ.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::ConfirmCompositionFrame(CComposition *this)
{
  __int64 v1; // rax
  CComposition *v2; // r14
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rsi
  char v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // rax
  detail::liberal_expansion_policy *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // xmm1_8
  unsigned __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // r15
  unsigned int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rax
  char *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rbx
  _QWORD *v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v33; // r15
  __int64 v34; // r14
  __int64 v35; // rax
  char *v36; // rbx
  unsigned __int64 v37; // rdi
  LPVOID v38; // rbx
  __int64 v39; // r8
  __int64 v40; // rdx
  _QWORD *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // [rsp+20h] [rbp-E0h]
  __int128 v45; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B0h]
  char *v47; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v48; // [rsp+70h] [rbp-90h] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h]
  BOOL v50; // [rsp+90h] [rbp-70h]
  LARGE_INTEGER PerformanceCount; // [rsp+98h] [rbp-68h] BYREF
  CComposition *v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v54; // [rsp+B8h] [rbp-48h]
  __int128 v55; // [rsp+C8h] [rbp-38h]
  __int128 v56; // [rsp+D8h] [rbp-28h]
  __int128 v57; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v58; // [rsp+100h] [rbp+0h]
  _OWORD v59[5]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v60; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v1 = *((_QWORD *)this + 110);
  v2 = this;
  v52 = this;
  if ( !v1 )
    return 0LL;
  v53 = v1;
  v3 = *((_QWORD *)this + 37);
  v4 = *((_QWORD *)this + 39);
  v54 = v3;
  v55 = 0LL;
  v56 = 0LL;
  *((_QWORD *)&v54 + 1) = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) + 24);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v2 + 39) + 24LL))(*((_QWORD *)v2 + 39));
  v6 = (_QWORD *)*((_QWORD *)v2 + 77);
  v7 = 0;
  PerformanceCount.QuadPart = 0LL;
  *(_QWORD *)&v55 = *(_QWORD *)(v5 + 8);
  QueryPerformanceCounter(&PerformanceCount);
  v8 = v6[23];
  v9 = 0xEEEEEEEEEEEEEEEFuLL * ((v6[24] - v8) >> 3);
  if ( v9 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v45, v8, v9);
    v6[24] += -120 * v10;
  }
  memset_0(&v57, 0, 0x78uLL);
  v11 = 1;
  if ( *v6
    && (*(unsigned __int8 (__fastcall **)(_QWORD, LARGE_INTEGER, _OWORD *))(*(_QWORD *)*v6 + 136LL))(
         *v6,
         PerformanceCount,
         v59) )
  {
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*v6 + 8LL) + 32LL))(*v6 + 8LL);
    v13 = (detail::liberal_expansion_policy *)v6[24];
    v14 = v6[25];
    v15 = v6[23];
    v57 = *(_OWORD *)v12;
    v16 = *(_QWORD *)(v12 + 16);
    v50 = LODWORD(v59[0]) != 0;
    *(_QWORD *)&v58 = v16;
    DWORD2(v58) = *(_DWORD *)(v12 + 24);
    v17 = 0xEEEEEEEEEEEEEEEFuLL * (((__int64)v13 - v15) >> 3);
    if ( !(0xEEEEEEEEEEEEEEEFuLL * ((v14 - (__int64)v13) >> 3)) )
    {
      if ( v17 + 1 < v17 )
      {
        std::_Xoverflow_error("overflow");
        __debugbreak();
LABEL_36:
        McTemplateU0qxqNR2_EventWriteTransfer(
          DWORD2(v56),
          120 * v56,
          v11,
          *((_QWORD *)v2 + 110),
          v56,
          120 * v56,
          *((__int64 *)&v56 + 1));
        goto LABEL_21;
      }
      v37 = detail::liberal_expansion_policy::expand(v13, 0xEEEEEEEEEEEEEEEFuLL * ((v14 - v15) >> 3), v17 + 1);
      v38 = operator new[](saturated_mul(v37, 0x78uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v45, (__int64)v38, v17);
      v39 = v6[24];
      v40 = v6[23];
      v48 = v45;
      v49 = v46;
      std::uninitialized_move<std::move_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>,stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>>(
        &v45,
        v40,
        v39,
        &v48);
      v41 = (_QWORD *)v6[23];
      v47 = 0LL;
      v6[23] = v38;
      if ( v41 == v6 + 26 )
        v41 = 0LL;
      operator delete(v41);
      v42 = v6[23];
      v6[24] = v42 + 120 * v17;
      v6[25] = v42 + 120 * v37;
      std::unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>::~unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>((void **)&v47);
    }
    v18 = v6[24];
    v47 = (char *)v6[23];
    v19 = 0xEEEEEEEEEEEEEEEFuLL * ((v18 - (__int64)v47) >> 3);
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(
      &v45,
      (__int64)&v47[8 * ((v18 - (__int64)v47) >> 3)],
      1LL);
    v48 = v45;
    v49 = v46;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v48, v20);
    v21 = v19 - v17;
    if ( v19 - v17 > 1 )
      v21 = 1LL;
    v45 = v48;
    v22 = 120 * v21;
    v46 = v49;
    if ( v18 != v18 - v22 )
    {
      v34 = v18 - v22;
      do
      {
        v18 -= 120LL;
        stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v45);
        v43 = stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>::operator->(&v45);
        *(_OWORD *)v43 = *(_OWORD *)v18;
        *(_OWORD *)(v43 + 16) = *(_OWORD *)(v18 + 16);
        *(_OWORD *)(v43 + 32) = *(_OWORD *)(v18 + 32);
        *(_OWORD *)(v43 + 48) = *(_OWORD *)(v18 + 48);
        *(_OWORD *)(v43 + 64) = *(_OWORD *)(v18 + 64);
        *(_OWORD *)(v43 + 80) = *(_OWORD *)(v18 + 80);
        *(_OWORD *)(v43 + 96) = *(_OWORD *)(v18 + 96);
        *(_QWORD *)(v43 + 112) = *(_QWORD *)(v18 + 112);
      }
      while ( v18 != v34 );
    }
    if ( v19 - v17 > 1 )
    {
      v36 = v47;
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v45, (__int64)v47, v19);
      v48 = v45;
      v49 = v46;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v48, v19);
      v45 = v48;
      v46 = v49;
      stdext::checked_array_iterator<char *>::_Verify_offset(
        (__int64)&v45,
        0x1111111111111111LL * ((__int64)(120 * v19 - 120 * v17 - 120) >> 3));
      memmove_0((void *)(v48 + 120 * v49 - (120 * v19 - 120 * v17 - 120)), &v36[120 * v17], 120 * v19 - 120 * v17 - 120);
    }
    v6[24] += 120LL;
    v23 = v47;
    v24 = 120 * v17;
    v7 = v50;
    *(_OWORD *)&v47[v24] = v57;
    *(_OWORD *)&v23[v24 + 16] = v58;
    *(_OWORD *)&v23[v24 + 32] = v59[0];
    *(_OWORD *)&v23[v24 + 48] = v59[1];
    *(_OWORD *)&v23[v24 + 64] = v59[2];
    *(_OWORD *)&v23[v24 + 80] = v59[3];
    *(_OWORD *)&v23[v24 + 96] = v59[4];
    *(_QWORD *)&v23[v24 + 112] = v60;
  }
  *((_BYTE *)v6 + 744) = 1;
  v25 = (_QWORD *)v6[3];
  v26 = (_QWORD *)v6[4];
  while ( v25 != v26 )
  {
    v33 = (_QWORD *)*v25;
    if ( *v25 != *v6
      && (*(unsigned __int8 (__fastcall **)(_QWORD, LARGE_INTEGER, _OWORD *))(*v33 + 136LL))(
           *v25,
           PerformanceCount,
           v59) )
    {
      v35 = (*(__int64 (__fastcall **)(_QWORD *))(v33[1] + 32LL))(v33 + 1);
      if ( LODWORD(v59[0]) )
        v7 = 1;
      v57 = *(_OWORD *)v35;
      *(_QWORD *)&v58 = *(_QWORD *)(v35 + 16);
      DWORD2(v58) = *(_DWORD *)(v35 + 24);
      detail::vector_facade<tagCOMPOSITION_TARGET_ID_AND_STATS,detail::buffer_impl<tagCOMPOSITION_TARGET_ID_AND_STATS,4,1,detail::liberal_expansion_policy>>::push_back(
        v6 + 23,
        &v57);
    }
    ++v25;
  }
  CRenderTargetManager::EndTargetEnumeration((CRenderTargetManager *)v6);
  v2 = v52;
  v27 = 0LL;
  if ( v7 && !*((_BYTE *)v6 + 753) && g_pComposition && *((_BYTE *)g_pComposition + 6465) )
    CComposition::ScheduleCompositionPass(g_pComposition, 1000LL, 128LL);
  v28 = v6[23];
  v29 = 0xEEEEEEEEEEEEEEEFuLL * ((v6[24] - v28) >> 3);
  v30 = 0LL;
  LODWORD(v56) = -286331153 * ((v6[24] - v28) >> 3);
  if ( v29 )
    v30 = v28;
  *((_QWORD *)&v56 + 1) = v30;
  if ( CFlipAwayFence::s_fenceIdsToDestroy != qword_1803E2728 )
  {
    v27 = *(_QWORD *)(qword_1803E2728 - 8);
    std::vector<unsigned __int64>::pop_back();
  }
  v31 = *((_QWORD *)v2 + 708);
  *((_QWORD *)&v55 + 1) = v27;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 16LL))(v31, &v53);
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    goto LABEL_36;
LABEL_21:
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBBC,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\composition.cpp",
    (const char *)(unsigned int)v11,
    v44);
  return (unsigned int)v11;
}
