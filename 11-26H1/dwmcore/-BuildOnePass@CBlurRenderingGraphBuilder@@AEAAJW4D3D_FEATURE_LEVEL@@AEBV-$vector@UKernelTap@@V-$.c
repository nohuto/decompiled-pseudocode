/*
 * XREFs of ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x18015BC9C
 * Callers:
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x18015B51C (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E2D40 (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x1800FC598 (-AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800FC6BC (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x18015B9C8 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x18015BA24 (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18015C5D8 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?Create@CCustomKernelEffect@@SAJW4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV?$span@$$CBUKernelTap@@$0?0@gsl@@PEAPEAV1@@Z @ 0x18015C7FC (-Create@CCustomKernelEffect@@SAJW4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV-$span@$$CBUKe.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x18015D068 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCach.c)
 *     ?GetShaderCache@CCustomKernelEffect@@QEBAPEAVCShaderCache@@XZ @ 0x18015D790 (-GetShaderCache@CCustomKernelEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBlurRenderingGraphBuilder::BuildOnePass(_QWORD *a1, int a2, _QWORD *a3, char a4)
{
  __int64 v4; // r14
  _QWORD *v5; // r15
  char v6; // r13
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // eax
  float v10; // xmm0_4
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 (__fastcall ***v16)(); // rdx
  unsigned int v17; // r12d
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // cf
  int v25; // eax
  unsigned int v26; // ebx
  CCustomKernelEffect *v27; // rax
  CCustomKernelEffect *v28; // rbx
  CCustomKernelEffect *v29; // r15
  struct CShaderCache *ShaderCache; // rax
  int v31; // eax
  unsigned int v32; // r15d
  __int64 v34; // rdx
  __int64 v35; // rax
  _QWORD *v36; // rdx
  __int64 v37; // [rsp+28h] [rbp-A9h]
  int v38; // [rsp+30h] [rbp-A1h]
  CCustomKernelEffect *v39; // [rsp+38h] [rbp-99h] BYREF
  int v40; // [rsp+40h] [rbp-91h] BYREF
  unsigned int v41; // [rsp+44h] [rbp-8Dh]
  __int64 v42; // [rsp+48h] [rbp-89h]
  _QWORD *v43; // [rsp+50h] [rbp-81h]
  _QWORD *v44; // [rsp+58h] [rbp-79h]
  _QWORD v45[3]; // [rsp+60h] [rbp-71h] BYREF
  __int64 (__fastcall **v46)(); // [rsp+78h] [rbp-59h] BYREF
  __int16 v47; // [rsp+80h] [rbp-51h]
  __int64 (__fastcall ***v48)(); // [rsp+B0h] [rbp-21h]
  _QWORD v49[7]; // [rsp+B8h] [rbp-19h] BYREF
  _QWORD *v50; // [rsp+F0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v4 = *a1;
  v5 = a3;
  v44 = a3;
  v43 = a1;
  if ( a2 < 40960 )
    v6 = a2 >= 37632;
  else
    v6 = 2;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a3[1] - *a3) >> 2);
  if ( (unsigned __int8)v6 < 2u )
    v8 = (0x400000009LL - (unsigned __int64)(1431655766 * (unsigned int)((__int64)(a3[1] - *a3) >> 2))) >> 32;
  else
    v8 = 128;
  v9 = v8 + v7 - 1;
  if ( v9 < (unsigned int)v7 )
  {
    v26 = -2147024362;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x131,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)0x80070216LL);
    return v26;
  }
  else
  {
    v41 = v9 / v8;
    if ( a4 )
      v10 = *(float *)(v4 + 1572);
    else
      v10 = *(float *)(v4 + 1568);
    v11 = *(int *)(v4 + 1576);
    v12 = *(_QWORD *)(v4 + 504);
    LOBYTE(v40) = a4;
    v13 = v12 - *(_QWORD *)(v4 + 496);
    BYTE1(v40) = v10 > *((float *)&unk_1802F2818 + 5 * v11);
    v46 = off_1802DC060;
    v47 = v40;
    v48 = &v46;
    v14 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
            (__int64 *)(v4 + 496),
            v13 >> 6,
            (__int64)a3);
    *(_QWORD *)(v14 + 56) = 0LL;
    std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v14, (__int64)&v46);
    if ( v48 )
    {
      v16 = &v46;
      LOBYTE(v16) = v48 != &v46;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v48)[4])(v48, v16);
    }
    v17 = 0;
    LODWORD(v42) = *(_DWORD *)(v4 + 168);
    while ( v17 < v41 )
    {
      v18 = v17 * v8;
      v19 = v7 - v18;
      v20 = *v5 + 12 * v18;
      v21 = v8;
      if ( v8 >= v19 )
        v21 = v19;
      gsl::details::extent_type<-1>::extent_type<-1>(v45, v21);
      v45[1] = v20;
      if ( v45[0] == -1LL || !v20 && v45[0] )
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      v24 = *(_DWORD *)(v4 + 1580) != 0;
      v39 = 0LL;
      LOBYTE(v23) = v6;
      LOBYTE(v22) = v24 ? 3 : 1;
      v25 = CCustomKernelEffect::Create(v23, v22, v45, &v39);
      v26 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x165,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
          (const char *)(unsigned int)v25);
        if ( v39 )
          CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>::InternalRelease((__int64)v39);
        return v26;
      }
      v27 = (CCustomKernelEffect *)operator new(0x78uLL);
      v28 = v39;
      v29 = v27;
      if ( v27 )
      {
        ShaderCache = CCustomKernelEffect::GetShaderCache(v39);
        LOBYTE(v38) = 0;
        LODWORD(v37) = 0;
        v27 = (CCustomKernelEffect *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                       v29,
                                       v28,
                                       ShaderCache,
                                       0LL,
                                       v37,
                                       v38);
      }
      v39 = v27;
      CRenderingTechniqueFragment::AddIntermediateInput(v27, -1);
      v40 = 0;
      v31 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(v43, &v39, &v40);
      v32 = v31;
      if ( v31 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x173,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
          (const char *)(unsigned int)v31);
        std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v39);
        if ( v28 )
          CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>::InternalRelease((__int64)v28);
        return v32;
      }
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v39);
      if ( v28 )
        CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>::InternalRelease((__int64)v28);
      v5 = v44;
      ++v17;
    }
    HIDWORD(v39) = *(_DWORD *)(v4 + 168) - v42;
    LODWORD(v39) = v42;
    v34 = *(_QWORD *)(v4 + 504) - *(_QWORD *)(v4 + 496);
    v49[0] = off_1802DC090;
    v49[1] = v39;
    v50 = v49;
    v35 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
            (__int64 *)(v4 + 496),
            v34 >> 6,
            v15);
    *(_QWORD *)(v35 + 56) = 0LL;
    std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v35, (__int64)v49);
    if ( v50 )
    {
      v36 = v49;
      LOBYTE(v36) = v50 != v49;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v50 + 32LL))(v50, v36);
    }
    return 0LL;
  }
}
