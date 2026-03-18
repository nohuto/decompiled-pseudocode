/*
 * XREFs of ??$emplace_back@$$V@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C5380
 * Callers:
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800C61E0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z @ 0x1800D1600 (-DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??$destruct_range@UCpuClipStackState@CScopedClipStack@@@detail@@YAXPEAUCpuClipStackState@CScopedClipStack@@0@Z @ 0x180178770 (--$destruct_range@UCpuClipStackState@CScopedClipStack@@@detail@@YAXPEAUCpuClipStackState@CScoped.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1801787D8 (--$uninitialized_move@V-$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V-$checked_.c)
 *     ??C?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@QEBAPEAUCpuClipStackState@CScopedClipStack@@XZ @ 0x180246414 (--C-$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@QEBAPEAUCpuClipStac.c)
 *     ??$move_backward@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x18024F128 (--$move_backward@V-$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V-$checked_array.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::emplace_back<>(
        __int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r12
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  LPVOID v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 *v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int128 v23; // [rsp+20h] [rbp-39h] BYREF
  __int64 v24; // [rsp+30h] [rbp-29h]
  __int128 v25; // [rsp+40h] [rbp-19h] BYREF
  __int64 v26; // [rsp+50h] [rbp-9h]
  char v27[32]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v29; // [rsp+C8h] [rbp+6Fh]

  v1 = a1[1];
  v2 = *a1;
  v29 = *a1;
  v4 = 0xCCCCCCCCCCCCCCCDuLL * ((v1 - *a1) >> 3);
  if ( !(0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - v1) >> 3)) )
  {
    if ( v4 + 1 < v4 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1800C5604LL);
    }
    v14 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)a1,
            0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - v2) >> 3),
            v4 + 1);
    v15 = operator new[](saturated_mul(v14, 0x28uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, (__int64)v15, v4);
    v16 = a1[1];
    v17 = *a1;
    v23 = v25;
    v24 = v26;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::uninitialized_move<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>)(
      &v25,
      v17,
      v16,
      &v23);
    detail::destruct_range<CScopedClipStack::CpuClipStackState>(*a1, a1[1]);
    v18 = (__int64 *)*a1;
    v19 = 0LL;
    *a1 = (__int64)v15;
    if ( v18 != a1 + 3 )
      v19 = v18;
    operator delete(v19);
    v29 = *a1;
    v1 = *a1 + 40 * v4;
    v20 = 5 * v14;
    a1[1] = v1;
    v2 = v29;
    a1[2] = v29 + 8 * v20;
  }
  v5 = 0xCCCCCCCCCCCCCCCDuLL * ((v1 - v2) >> 3);
  v6 = v2 + 8 * ((v1 - v2) >> 3);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, v6, 1LL);
  v23 = v25;
  v24 = v26;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v23, 1LL);
  v7 = v5 - v4;
  if ( v5 - v4 > 1 )
    v7 = 1LL;
  v25 = v23;
  v26 = v24;
  v8 = 40 * v7;
  v9 = v1 - v8;
  if ( v1 != v1 - v8 )
  {
    v13 = v1 + 8;
    do
    {
      v21 = v13;
      v13 -= 40LL;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v25);
      v22 = stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>::operator->(&v25);
      *(_QWORD *)v22 = *(_QWORD *)(v13 - 8);
      *(_BYTE *)(v22 + 8) = *(_BYTE *)v13;
      *(_QWORD *)(v13 - 8) = 0LL;
      *(_BYTE *)v13 = 0;
      *(_QWORD *)(v22 + 16) = *(_QWORD *)(v13 + 8);
      *(_QWORD *)(v22 + 24) = *(_QWORD *)(v13 + 16);
      *(_DWORD *)(v22 + 32) = *(_DWORD *)(v13 + 24);
      *(_BYTE *)(v22 + 36) = *(_BYTE *)(v13 + 28);
    }
    while ( v21 - 48 != v9 );
    v2 = v29;
  }
  if ( v5 - v4 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, v2, v5);
    v23 = v25;
    v24 = v26;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v23, v5);
    v25 = v23;
    v26 = v24;
    std::move_backward<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>(
      v27,
      v2 + 40 * v4,
      v2 + 40 * (v5 - 1),
      &v25);
  }
  v10 = v2 + 40 * v4;
  v11 = v10 + 40;
  if ( v6 < v10 + 40 )
    v11 = v6;
  for ( ; v10 != v11; v10 += 40LL )
  {
    if ( *(_BYTE *)(v10 + 8) && *(_QWORD *)v10 )
      (***(void (__fastcall ****)(_QWORD, __int64))v10)(*(_QWORD *)v10, 1LL);
    *(_QWORD *)v10 = 0LL;
    *(_BYTE *)(v10 + 8) = 0;
  }
  result = 5 * v4;
  a1[1] += 40LL;
  *(_OWORD *)(v29 + 8 * result) = 0LL;
  *(_OWORD *)(v29 + 8 * result + 16) = 0LL;
  *(_QWORD *)(v29 + 8 * result + 32) = 0LL;
  return result;
}
