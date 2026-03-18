/*
 * XREFs of ?EnterClippingScope@CScopedClipStack@@QEAAX_NPEBVIDeviceTarget@@AEBVCMILMatrix@@PEBV3@@Z @ 0x18006BF80
 * Callers:
 *     ?DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z @ 0x1800D1600 (-DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@_J@Z @ 0x18006ADD0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdex.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??$destruct_range@UClippingScopeState@CScopedClipStack@@@detail@@YAXPEAUClippingScopeState@CScopedClipStack@@0@Z @ 0x18016C360 (--$destruct_range@UClippingScopeState@CScopedClipStack@@@detail@@YAXPEAUClippingScopeState@CScop.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@PEAUClippingScopeState@CScopedClipStack@@@std@@YAPEAUClippingScopeState@CScopedClipStack@@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@0@V30@PEAU12@@Z @ 0x18016C3B8 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@.c)
 *     ??0ClippingScopeState@CScopedClipStack@@QEAA@$$QEAU01@@Z @ 0x1801B8E00 (--0ClippingScopeState@CScopedClipStack@@QEAA@$$QEAU01@@Z.c)
 *     ??4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z @ 0x180206A28 (--4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??C?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEBAPEAUClippingScopeState@CScopedClipStack@@XZ @ 0x18024F1DC (--C-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEBAPEAUClippingSc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScopedClipStack::EnterClippingScope(
        CScopedClipStack *this,
        char a2,
        const struct IDeviceTarget *a3,
        const struct CMILMatrix *a4,
        const struct CMILMatrix *a5)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rbx
  CScopedClipStack *v9; // r15
  detail::liberal_expansion_policy *v10; // rcx
  __int64 v11; // r12
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  CScopedClipStack *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rsi
  unsigned __int64 v21; // r14
  LPVOID v22; // rsi
  __int64 v23; // rbx
  char *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rax
  char *v27; // rdx
  void *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+20h] [rbp-58h]
  __int128 v32; // [rsp+30h] [rbp-48h] BYREF
  __int64 v33; // [rsp+40h] [rbp-38h]
  __int128 v34; // [rsp+50h] [rbp-28h] BYREF
  __int64 v35; // [rsp+60h] [rbp-18h]

  v8 = *((_QWORD *)this + 1);
  v9 = this;
  v10 = *(detail::liberal_expansion_policy **)this;
  v11 = 0xAAAAAAAAAAAAAAABuLL;
  v31 = (__int64)v10;
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((v8 - (__int64)v10) >> 6);
  if ( !(0xAAAAAAAAAAAAAAABuLL * ((*((_QWORD *)v9 + 2) - v8) >> 6)) )
  {
    if ( v12 + 1 < v12 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      do
      {
LABEL_23:
        v8 -= 192LL;
        stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v34);
        v30 = stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator->(&v34);
        CScopedClipStack::ClippingScopeState::ClippingScopeState(v30, v8);
      }
      while ( v8 != v7 );
      goto LABEL_5;
    }
    v21 = detail::liberal_expansion_policy::expand(
            v10,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)v9 + 2) - (_QWORD)v10) >> 6),
            v12 + 1);
    v22 = operator new[](saturated_mul(v21, 0xC0uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v34, (__int64)v22, v12);
    v23 = *((_QWORD *)v9 + 1);
    v24 = *(char **)v9;
    v25 = 0xAAAAAAAAAAAAAAABuLL * ((v23 - *(_QWORD *)v9) >> 6);
    v32 = v34;
    v33 = v35;
    v26 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *> &,__int64>(
            &v32,
            v25);
    std::_Uninitialized_move_unchecked<std::move_iterator<CScopedClipStack::ClippingScopeState *>,CScopedClipStack::ClippingScopeState *>(
      v24,
      v23,
      v26);
    detail::destruct_range<CScopedClipStack::ClippingScopeState>(*(_QWORD *)v9, *((_QWORD *)v9 + 1));
    v27 = *(char **)v9;
    v28 = 0LL;
    *(_QWORD *)v9 = v22;
    if ( v27 != (char *)v9 + 24 )
      v28 = v27;
    operator delete(v28);
    v10 = *(detail::liberal_expansion_policy **)v9;
    v31 = *(_QWORD *)v9;
    v8 = *(_QWORD *)v9 + 192 * v12;
    v29 = *(_QWORD *)v9 + 192 * v21;
    *((_QWORD *)v9 + 1) = v8;
    *((_QWORD *)v9 + 2) = v29;
  }
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((v8 - (__int64)v10) >> 6);
  v6 = v5 - v12;
  v11 = (v8 - (__int64)v10) >> 6 << 6;
  v9 = (detail::liberal_expansion_policy *)((char *)v10 + v11);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v34, (__int64)v10 + v11, 1LL);
  v32 = v34;
  v33 = v35;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v32, 1LL);
  v13 = v5 - v12;
  if ( v5 - v12 > 1 )
    v13 = 1LL;
  v34 = v32;
  v35 = v33;
  v14 = 192 * v13;
  v7 = v8 - v14;
  if ( v8 != v8 - v14 )
    goto LABEL_23;
LABEL_5:
  if ( v6 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v34, v31, v5);
    v32 = v34;
    v33 = v35;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v32, v5);
    v34 = v32;
    v19 = v11 + v31 - 192;
    v35 = v33;
    v20 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *> &,__int64>(
            &v34,
            0x5555555555555555LL * ((__int64)(v11 - 192 - 192 * v12) >> 6))
        - v19;
    while ( v31 + 192 * v12 != v19 )
    {
      v19 -= 192LL;
      CScopedClipStack::ClippingScopeState::operator=(v20 + v19, v19);
    }
  }
  v15 = v31 + 192 * v12;
  v16 = (CScopedClipStack *)(v15 + 192);
  if ( (unsigned __int64)v9 < v15 + 192 )
    v16 = v9;
  for ( ; (CScopedClipStack *)v15 != v16; v15 += 192LL )
  {
    v17 = *(_QWORD *)(v15 + 176);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  }
  *((_QWORD *)this + 1) += 192LL;
  memset_0((void *)(v31 + 192 * v12), 0, 0xC0uLL);
  v18 = *((_QWORD *)this + 1);
  *(_BYTE *)(v18 - 8) = a2;
  *(_QWORD *)(v18 - 192) = a3;
  if ( a5 )
  {
    *(_OWORD *)(v18 - 152) = *(_OWORD *)a4;
    *(_OWORD *)(v18 - 136) = *((_OWORD *)a4 + 1);
    *(_OWORD *)(v18 - 120) = *((_OWORD *)a4 + 2);
    *(_OWORD *)(v18 - 104) = *((_OWORD *)a4 + 3);
    *(_DWORD *)(v18 - 88) = *((_DWORD *)a4 + 16);
    *(_OWORD *)(v18 - 84) = *(_OWORD *)a5;
    *(_OWORD *)(v18 - 68) = *((_OWORD *)a5 + 1);
    *(_OWORD *)(v18 - 52) = *((_OWORD *)a5 + 2);
    *(_OWORD *)(v18 - 36) = *((_OWORD *)a5 + 3);
    *(_DWORD *)(v18 - 20) = *((_DWORD *)a5 + 16);
  }
  else
  {
    *(_QWORD *)(v18 - 152) = 1065353216LL;
    *(_QWORD *)(v18 - 144) = 0LL;
    *(_DWORD *)(v18 - 136) = 0;
    *(_QWORD *)(v18 - 132) = 1065353216LL;
    *(_QWORD *)(v18 - 124) = 0LL;
    *(_DWORD *)(v18 - 116) = 0;
    *(_QWORD *)(v18 - 112) = 1065353216LL;
    *(_QWORD *)(v18 - 104) = 0LL;
    *(_DWORD *)(v18 - 96) = 0;
    *(_DWORD *)(v18 - 92) = 1065353216;
    *(_BYTE *)(v18 - 87) &= 0xE9u;
    *(_BYTE *)(v18 - 87) |= 0x29u;
    *(_BYTE *)(v18 - 88) = -86;
    *(_QWORD *)(v18 - 84) = 1065353216LL;
    *(_QWORD *)(v18 - 76) = 0LL;
    *(_DWORD *)(v18 - 68) = 0;
    *(_QWORD *)(v18 - 64) = 1065353216LL;
    *(_QWORD *)(v18 - 56) = 0LL;
    *(_DWORD *)(v18 - 48) = 0;
    *(_QWORD *)(v18 - 44) = 1065353216LL;
    *(_QWORD *)(v18 - 36) = 0LL;
    *(_DWORD *)(v18 - 28) = 0;
    *(_DWORD *)(v18 - 24) = 1065353216;
    *(_BYTE *)(v18 - 19) &= 0xE9u;
    *(_BYTE *)(v18 - 19) |= 0x29u;
    *(_BYTE *)(v18 - 20) = -86;
  }
}
