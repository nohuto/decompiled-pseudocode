/*
 * XREFs of ?push_back@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@Z @ 0x18008C47C
 * Callers:
 *     ?GetWindowOcclusionInfo@CWindowNode@@IEBAPEAVCWindowOcclusionInfo@@PEBVCVisualTree@@I@Z @ 0x1800CB6D0 (-GetWindowOcclusionInfo@CWindowNode@@IEBAPEAVCWindowOcclusionInfo@@PEBVCVisualTree@@I@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ??$?4U?$default_delete@VCOcclusionInfo@@@std@@$0A@@?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008B750 (--$-4U-$default_delete@VCOcclusionInfo@@@std@@$0A@@-$unique_ptr@VCOcclusionInfo@@U-$default_dele.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEBAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18008FA54 (--C-$checked_array_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@YAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@V30@PEAV12@@Z @ 0x1801056B8 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_re.c)
 *     ??$destruct_range@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@detail@@YAXPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@0@Z @ 0x1801878B0 (--$destruct_range@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@std@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::push_back(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rsi
  unsigned __int64 v5; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 *v9; // r13
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  _QWORD *v13; // rbx
  __int64 v14; // r14
  _QWORD *v15; // rbx
  _QWORD *v16; // rdi
  __int64 result; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r14
  LPVOID v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rax
  void *v25; // rcx
  bool v26; // zf
  __int64 v27; // rax
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]
  unsigned __int64 v32; // [rsp+A0h] [rbp+40h]

  v2 = (__int64 *)a1[1];
  v3 = a1[2];
  v4 = *a1;
  v5 = ((__int64)v2 - *a1) >> 3;
  if ( !((v3 - (__int64)v2) >> 3) )
  {
    v18 = v5 + 1;
    if ( v5 + 1 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v19 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)a1, (v3 - v4) >> 3, v18);
    v20 = operator new[](saturated_mul(v19, 8uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v30, (__int64)v20, v5);
    v21 = a1[1];
    v22 = *a1;
    v23 = (v21 - *a1) >> 3;
    v28 = v30;
    v29 = v31;
    v24 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&v28, v23);
    std::_Uninitialized_move_unchecked<std::move_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>,wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>(
      v22,
      v21,
      v24);
    detail::destruct_range<std::unique_ptr<COcclusionInfo>>(*a1, a1[1]);
    v25 = (void *)*a1;
    v26 = *a1 == (_QWORD)(a1 + 3);
    *a1 = (__int64)v20;
    if ( v26 )
      v25 = 0LL;
    operator delete(v25);
    v4 = *a1;
    v2 = (__int64 *)(*a1 + 8 * v5);
    v27 = *a1 + 8 * v19;
    a1[1] = (__int64)v2;
    a1[2] = v27;
  }
  v7 = ((__int64)v2 - v4) >> 3;
  v32 = v4 + 8 * v7;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v30, v32, 1LL);
  v28 = v30;
  v29 = v31;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v28, 1LL);
  v8 = v7 - v5;
  if ( v7 - v5 > 1 )
    v8 = 1LL;
  v30 = v28;
  v9 = &v2[-v8];
  v31 = v29;
  while ( v2 != v9 )
  {
    --v2;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v30);
    v10 = (_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v30);
    v11 = *v2;
    *v2 = 0LL;
    *v10 = v11;
  }
  if ( v7 - v5 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v30, v4, v7);
    v28 = v30;
    v29 = v31;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v28, v7);
    v12 = v7 - 1;
    v30 = v28;
    v31 = v29;
    v13 = (_QWORD *)(v4 + 8 * v12);
    v14 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(
            &v30,
            -((__int64)(8 * v12 - 8 * v5) >> 3))
        - (_QWORD)v13;
    while ( (_QWORD *)(v4 + 8 * v5) != v13 )
    {
      --v13;
      std::unique_ptr<COcclusionInfo>::operator=<std::default_delete<COcclusionInfo>,0>(
        (void (__fastcall ****)(_QWORD, __int64))((char *)v13 + v14),
        v13);
    }
  }
  v15 = (_QWORD *)(v4 + 8 * v5);
  v16 = v15 + 1;
  if ( v32 < (unsigned __int64)(v15 + 1) )
    v16 = (_QWORD *)v32;
  for ( ; v15 != v16; ++v15 )
  {
    if ( *v15 )
      (**(void (__fastcall ***)(_QWORD, __int64))*v15)(*v15, 1LL);
  }
  a1[1] += 8LL;
  result = *a2;
  *a2 = 0LL;
  *(_QWORD *)(v4 + 8 * v5) = result;
  return result;
}
