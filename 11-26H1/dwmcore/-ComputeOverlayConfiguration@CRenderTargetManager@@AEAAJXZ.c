/*
 * XREFs of ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180141510
 * Callers:
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x180030310 (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEBAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18008FA54 (--C-$checked_array_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180141868 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x180141C90 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V-$checked_array_iter.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetManager::ComputeOverlayConfiguration(CRenderTargetManager *this)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  unsigned int v4; // r12d
  detail::liberal_expansion_policy *v5; // rcx
  __int64 v6; // r14
  unsigned __int64 v7; // r13
  __int64 v8; // r15
  unsigned int v9; // r8d
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // r15
  __int64 v14; // rsi
  signed __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r8
  _QWORD *v22; // r14
  HANDLE ProcessHeap; // rax
  unsigned __int64 v24; // r14
  _BYTE *v25; // rsi
  void *v26; // rcx
  bool v27; // zf
  unsigned __int64 v28; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v29[3]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-B0h]
  _BYTE *v31; // [rsp+68h] [rbp-A0h]
  _QWORD v32[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33; // [rsp+88h] [rbp-80h]
  __int128 v34; // [rsp+98h] [rbp-70h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-60h]
  _QWORD v36[3]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-38h]
  _BYTE *v38; // [rsp+D8h] [rbp-30h]
  _BYTE *v39; // [rsp+E0h] [rbp-28h]
  char *v40; // [rsp+E8h] [rbp-20h]
  _BYTE Mem[32]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v42; // [rsp+110h] [rbp+8h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 3);
  v2 = (_QWORD *)*((_QWORD *)this + 4);
  v3 = Mem;
  v39 = Mem;
  v38 = Mem;
  v40 = (char *)&v42;
  v4 = 0;
  while ( v1 != v2 )
  {
    v36[0] = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 80LL))(*v1);
    if ( v36[0] )
    {
      v3 = v39;
      v6 = (__int64)v38;
      v7 = (v39 - v38) >> 3;
      v31 = v38;
      if ( !((v40 - v39) >> 3) )
      {
        if ( v7 + 1 < v7 )
        {
          std::_Xoverflow_error("overflow");
          __debugbreak();
LABEL_28:
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v3);
          return v4;
        }
        v24 = detail::liberal_expansion_policy::expand(v5, (v40 - v38) >> 3, v7 + 1);
        v25 = operator new[](saturated_mul(v24, 8uLL));
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v34, (__int64)v25, v7);
        *(_OWORD *)&v29[1] = v34;
        v30 = v35;
        std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
          &v34,
          v38,
          v39,
          &v29[1]);
        v26 = v38;
        v27 = v38 == Mem;
        v28 = 0LL;
        v38 = v25;
        if ( v27 )
          v26 = 0LL;
        operator delete(v26);
        v39 = &v38[8 * v7];
        v40 = &v38[8 * v24];
        std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v28);
        v6 = (__int64)v38;
        v3 = v39;
        v31 = v38;
      }
      v8 = ((__int64)v3 - v6) >> 3;
      v28 = v8 - v7;
      v37 = 8 * v8;
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v32[1], v6 + 8 * v8, 1LL);
      *(_OWORD *)&v29[1] = *(_OWORD *)&v32[1];
      v30 = v33;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v29[1], v9);
      v10 = v28;
      v11 = v28;
      if ( v28 > 1 )
        v11 = 1LL;
      v34 = *(_OWORD *)&v29[1];
      v35 = v30;
      v12 = 8 * v11;
      if ( v3 != &v3[v12 / 0xFFFFFFFFFFFFFFF8uLL] )
      {
        v22 = &v3[v12 / 0xFFFFFFFFFFFFFFF8uLL];
        do
        {
          --v3;
          stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v34);
          *(_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v34) = *v3;
        }
        while ( v3 != v22 );
        v6 = (__int64)v31;
        v10 = v28;
      }
      if ( v10 > 1 )
      {
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v32[1], v6, v8);
        *(_OWORD *)&v29[1] = *(_OWORD *)&v32[1];
        v30 = v33;
        stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v29[1], v8);
        v13 = (char *)(v6 + 8 * v7);
        *(_OWORD *)&v32[1] = *(_OWORD *)&v29[1];
        v14 = v6 + v37 - 8;
        v33 = v30;
        v15 = v37 - 8 - 8 * v7;
        v16 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&v32[1], -(v15 >> 3));
        memmove_0(&v13[v16 - v14], v13, v15);
        v6 = (__int64)v31;
      }
      v39 += 8;
      *(_QWORD *)(v6 + 8 * v7) = v36[0];
    }
    v3 = v38;
    ++v1;
  }
  v17 = (v39 - (_BYTE *)v3) >> 3;
  if ( v17 )
  {
    v36[0] = (v39 - (_BYTE *)v3) >> 3;
    if ( v17 == -1 || (v36[1] = v3) == 0LL )
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    v18 = COverlayContext::ComputeOverlayConfiguration(v36);
    v4 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x33Au, 0LL);
    v3 = v38;
  }
  v19 = (v39 - (_BYTE *)v3) >> 3;
  if ( v19 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v32[1], (__int64)v3, v19);
    v3 = v38;
    v39 -= 8 * v20;
  }
  v38 = 0LL;
  if ( v3 != (_QWORD *)Mem && v3 )
    goto LABEL_28;
  return v4;
}
