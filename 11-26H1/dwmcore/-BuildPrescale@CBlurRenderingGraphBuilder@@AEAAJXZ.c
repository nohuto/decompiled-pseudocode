/*
 * XREFs of ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x18015B7D4
 * Callers:
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x18015B51C (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E2D40 (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x1800FC598 (-AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800FC6BC (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x18015B9C8 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x18015BA24 (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18015C5D8 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?Create@CPassthroughEffect@@SAJPEAPEAV1@@Z @ 0x18015C774 (-Create@CPassthroughEffect@@SAJPEAPEAV1@@Z.c)
 *     ?GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ @ 0x18015D000 (-GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x18015D068 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCach.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBlurRenderingGraphBuilder::BuildPrescale(CBlurRenderingGraphBuilder *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CRenderingTechniqueFragment *v4; // rax
  CPassthroughEffect *v5; // rcx
  struct CPassthroughEffect *v6; // rbx
  CRenderingTechniqueFragment *v7; // rdi
  struct CShaderCache *ShaderCache; // rax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v12; // rcx
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rdx
  int v18; // [rsp+28h] [rbp-29h]
  char v19; // [rsp+30h] [rbp-21h]
  struct CPassthroughEffect *v20; // [rsp+38h] [rbp-19h] BYREF
  CRenderingTechniqueFragment *v21; // [rsp+40h] [rbp-11h] BYREF
  __int16 v22; // [rsp+49h] [rbp-8h]
  char v23; // [rsp+4Bh] [rbp-6h]
  _QWORD v24[2]; // [rsp+58h] [rbp+7h] BYREF
  char v25; // [rsp+68h] [rbp+17h]
  __int16 v26; // [rsp+69h] [rbp+18h]
  char v27; // [rsp+6Bh] [rbp+1Ah]
  int v28; // [rsp+6Ch] [rbp+1Bh]
  _QWORD *v29; // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v20 = 0LL;
  v2 = CPassthroughEffect::Create(&v20);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)v2);
    if ( v20 )
      CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>::InternalRelease((__int64)v20);
    return v3;
  }
  else
  {
    v4 = (CRenderingTechniqueFragment *)operator new(0x78uLL);
    v6 = v20;
    v7 = v4;
    if ( v4 )
    {
      ShaderCache = CPassthroughEffect::GetShaderCache(v5);
      v19 = 0;
      v18 = 0;
      v4 = (CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                            v7,
                                            v6,
                                            ShaderCache,
                                            0LL,
                                            v18,
                                            v19);
    }
    v21 = v4;
    CRenderingTechniqueFragment::AddIntermediateInput(v4, -1);
    LODWORD(v20) = 0;
    v9 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, &v21, &v20);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v12 = *(_QWORD *)this;
      v24[0] = off_1802E3900;
      v24[1] = v12 + 1584;
      v13 = *(_QWORD *)(v12 + 504);
      v14 = dword_1802F2820[5 * *(int *)(v12 + 1576)] == 3;
      v12 += 496LL;
      v15 = (v13 - *(_QWORD *)v12) >> 6;
      v25 = v14 + 1;
      v26 = v22;
      v27 = v23;
      v28 = (int)v20;
      v29 = v24;
      v16 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
              v12,
              v15);
      *(_QWORD *)(v16 + 56) = 0LL;
      std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v16, v24);
      if ( v29 )
      {
        v17 = v24;
        LOBYTE(v17) = v29 != v24;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v29 + 32LL))(v29, v17);
      }
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v21);
      if ( v6 )
        CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>::InternalRelease((__int64)v6);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFE,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
        (const char *)(unsigned int)v9);
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v21);
      if ( v6 )
        CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>::InternalRelease((__int64)v6);
      return v10;
    }
  }
}
