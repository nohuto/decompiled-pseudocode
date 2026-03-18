/*
 * XREFs of ??$emplace_back@PEAVCVisualTree@@@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCVisualTree@@@Z @ 0x180175418
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??0CBspPreComputeHelper@@QEAA@XZ @ 0x18017561C (--0CBspPreComputeHelper@@QEAA@XZ.c)
 *     ??$destruct_range@VCPreComputeSubTreeContext@@@detail@@YAXPEAVCPreComputeSubTreeContext@@0@Z @ 0x1801756E8 (--$destruct_range@VCPreComputeSubTreeContext@@@detail@@YAXPEAVCPreComputeSubTreeContext@@0@Z.c)
 *     ??1CPreComputeSubTreeContext@@QEAA@XZ @ 0x180175834 (--1CPreComputeSubTreeContext@@QEAA@XZ.c)
 *     ??$move_backward@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@0@0V12@@Z @ 0x18022C904 (--$move_backward@V-$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V-$checked_array_iterator.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@0@0V12@@Z @ 0x18022C9B0 (--$uninitialized_move@V-$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V-$checked_array_ite.c)
 *     ??0CPreComputeSubTreeContext@@QEAA@$$QEAV0@@Z @ 0x18022CA4C (--0CPreComputeSubTreeContext@@QEAA@$$QEAV0@@Z.c)
 *     ??C?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@QEBAPEAVCPreComputeSubTreeContext@@XZ @ 0x18022CE7C (--C-$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@QEBAPEAVCPreComputeSubTreeCo.c)
 */

__int64 __fastcall detail::vector_facade<CPreComputeSubTreeContext,detail::buffer_impl<CPreComputeSubTreeContext,3,1,detail::liberal_expansion_policy>>::emplace_back<CVisualTree *>(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  CPreComputeSubTreeContext **v2; // r14
  unsigned __int64 v3; // rsi
  CPreComputeSubTreeContext *v4; // r15
  CPreComputeSubTreeContext *v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // r13
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  CPreComputeSubTreeContext *v11; // rbx
  CPreComputeSubTreeContext *v12; // rdi
  __int64 v13; // rcx
  __int64 result; // rax
  CPreComputeSubTreeContext *v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  CPreComputeSubTreeContext *v18; // rbx
  CPreComputeSubTreeContext *v19; // r8
  CPreComputeSubTreeContext *v20; // rdx
  CPreComputeSubTreeContext *v21; // rcx
  bool v22; // zf
  __int128 v23; // [rsp+20h] [rbp-60h] BYREF
  __int64 v24; // [rsp+30h] [rbp-50h]
  __int128 v25; // [rsp+40h] [rbp-40h] BYREF
  __int64 v26; // [rsp+50h] [rbp-30h]
  char v27[32]; // [rsp+60h] [rbp-20h] BYREF
  void *v30; // [rsp+D0h] [rbp+50h] BYREF

  v2 = (CPreComputeSubTreeContext **)a1;
  v3 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 5);
  if ( !(0x2E8BA2E8BA2E8BA3LL * ((__int64)(*((_QWORD *)a1 + 2) - *((_QWORD *)a1 + 1)) >> 5)) )
  {
    if ( v3 + 1 < v3 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180175614LL);
    }
    v17 = detail::liberal_expansion_policy::expand(
            a1,
            0x2E8BA2E8BA2E8BA3LL * ((__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 5),
            v3 + 1);
    v18 = (CPreComputeSubTreeContext *)operator new[](saturated_mul(v17, 0x160uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, (__int64)v18, v3);
    v19 = v2[1];
    v20 = *v2;
    v23 = v25;
    v24 = v26;
    ((void (__fastcall *)(__int128 *, CPreComputeSubTreeContext *, CPreComputeSubTreeContext *, __int128 *))std::uninitialized_move<std::move_iterator<CPreComputeSubTreeContext *>,stdext::checked_array_iterator<CPreComputeSubTreeContext *>>)(
      &v25,
      v20,
      v19,
      &v23);
    detail::destruct_range<CPreComputeSubTreeContext>(*v2);
    v21 = *v2;
    v22 = *v2 == (CPreComputeSubTreeContext *)(v2 + 3);
    v30 = 0LL;
    *v2 = v18;
    if ( v22 )
      v21 = 0LL;
    operator delete(v21);
    v2[1] = (CPreComputeSubTreeContext *)((char *)*v2 + 352 * v3);
    v2[2] = (CPreComputeSubTreeContext *)((char *)*v2 + 352 * v17);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v30);
  }
  v4 = *v2;
  v5 = v2[1];
  v6 = 0x2E8BA2E8BA2E8BA3LL * ((v5 - *v2) >> 5);
  v7 = (unsigned __int64)*v2 + 32 * ((v5 - *v2) >> 5);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, v7, 1LL);
  v23 = v25;
  v24 = v26;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v23, v8);
  v9 = v6 - v3;
  v25 = v23;
  if ( v6 - v3 > 1 )
    v9 = 1LL;
  v26 = v24;
  v10 = 352 * v9;
  if ( v5 != (CPreComputeSubTreeContext *)((char *)v5 - v10) )
  {
    v15 = (CPreComputeSubTreeContext *)((char *)v5 - v10);
    do
    {
      v5 = (CPreComputeSubTreeContext *)((char *)v5 - 352);
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v25);
      v16 = stdext::checked_array_iterator<CPreComputeSubTreeContext *>::operator->(&v25);
      CPreComputeSubTreeContext::CPreComputeSubTreeContext(v16, v5);
    }
    while ( v5 != v15 );
    v2 = (CPreComputeSubTreeContext **)a1;
  }
  if ( v6 - v3 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, (__int64)v4, v6);
    v23 = v25;
    v24 = v26;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v23, v6);
    v25 = v23;
    v26 = v24;
    std::move_backward<std::move_iterator<CPreComputeSubTreeContext *>,stdext::checked_array_iterator<CPreComputeSubTreeContext *>>(
      v27,
      (char *)v4 + 352 * v3,
      (char *)v4 + 352 * v6 - 352,
      &v25);
  }
  v11 = (CPreComputeSubTreeContext *)((char *)v4 + 352 * v3);
  v12 = (CPreComputeSubTreeContext *)((char *)v11 + 352);
  if ( v7 < (unsigned __int64)v11 + 352 )
    v12 = (CPreComputeSubTreeContext *)v7;
  while ( v11 != v12 )
  {
    CPreComputeSubTreeContext::~CPreComputeSubTreeContext(v11);
    v11 = (CPreComputeSubTreeContext *)((char *)v11 + 352);
  }
  v2[1] = (CPreComputeSubTreeContext *)((char *)v2[1] + 352);
  CBspPreComputeHelper::CBspPreComputeHelper((CPreComputeSubTreeContext *)((char *)v4 + 352 * v3));
  *(_QWORD *)(v13 + 280) = 0LL;
  *(_QWORD *)(v13 + 272) = 0LL;
  *(_QWORD *)(v13 + 288) = 0LL;
  result = a2 + 112;
  *(_QWORD *)(v13 + 304) = 0LL;
  *(_QWORD *)(v13 + 296) = 0LL;
  *(_QWORD *)(v13 + 312) = 0LL;
  *(_QWORD *)(v13 + 320) = a2 + 112;
  *(_QWORD *)(v13 + 328) = a2;
  *(_QWORD *)(v13 + 336) = 0LL;
  *(_WORD *)(v13 + 344) = 0;
  return result;
}
