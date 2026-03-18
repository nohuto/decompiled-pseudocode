/*
 * XREFs of ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18015D804
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18028847C (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC518 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??R?$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC5D4 (--R-$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800FC6BC (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z @ 0x18015A544 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x18015C550 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18015C5D8 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x18015D14C (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18015D984 (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurGraphBuilder::Build(
        CProjectedShadowApproxBlurGraphBuilder *this,
        struct CBrush *a2,
        struct CBrush *a3,
        struct Windows::UI::Composition::IEffectInstance **a4)
{
  struct Windows::UI::Composition::IEffectInstance *v5; // rbx
  int v7; // edi
  struct CRenderingTechniqueFragment *v8; // rcx
  CRenderingTechniqueFragment *v9; // rdx
  int ShaderBodies; // eax
  struct Windows::UI::Composition::IEffectInstance *v11; // rdi
  struct Windows::UI::Composition::IEffectInstance *v13; // rax
  unsigned int v14; // [rsp+20h] [rbp-40h]
  int v15; // [rsp+30h] [rbp-30h] BYREF
  struct CRenderingTechniqueFragment *v16; // [rsp+38h] [rbp-28h] BYREF
  struct CRenderingTechniqueFragment **v17; // [rsp+40h] [rbp-20h]
  struct CRenderingTechniqueFragment *v18; // [rsp+48h] [rbp-18h] BYREF
  char v19; // [rsp+50h] [rbp-10h]

  v19 = 1;
  v5 = 0LL;
  v16 = 0LL;
  v17 = &v16;
  v18 = 0LL;
  v7 = CProjectedShadowApproxBlurGraphBuilder::AddApproxBlurBrush(this, a2, a3, &v18);
  if ( v19 )
  {
    v8 = v18;
    v9 = *v17;
    *v17 = v18;
    if ( v9 )
      std::default_delete<CRenderingTechniqueFragment>::operator()((__int64)v8, v9);
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x36u, 0LL);
  }
  else
  {
    ShaderBodies = CBrushRenderingGraphBuilder::CheckFragmentSize((struct CBrushRenderingGraph **)this, v16);
    v7 = ShaderBodies;
    if ( ShaderBodies < 0 )
    {
      v14 = 57;
      goto LABEL_10;
    }
    v11 = *(struct Windows::UI::Composition::IEffectInstance **)v16;
    if ( *(_QWORD *)v16 )
    {
      (**(void (__fastcall ***)(_QWORD))v11)(*(_QWORD *)v16);
      v5 = v11;
    }
    v15 = 0;
    ShaderBodies = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v16, &v15);
    v7 = ShaderBodies;
    if ( ShaderBodies < 0 )
    {
      v14 = 62;
LABEL_10:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShaderBodies, v14, 0LL);
      goto LABEL_11;
    }
    ShaderBodies = CBrushRenderingGraphBuilder::EnsureShaderCache(this, 0);
    v7 = ShaderBodies;
    if ( ShaderBodies < 0 )
    {
      v14 = 64;
      goto LABEL_10;
    }
    ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
    v7 = ShaderBodies;
    if ( ShaderBodies < 0 )
    {
      v14 = 65;
      goto LABEL_10;
    }
    CBrushRenderingGraphBuilder::CheckBackdropInputs(this);
    v13 = v5;
    v5 = 0LL;
    *a4 = v13;
  }
LABEL_11:
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v16);
  if ( v5 )
    (*(void (__fastcall **)(struct Windows::UI::Composition::IEffectInstance *))(*(_QWORD *)v5 + 8LL))(v5);
  return (unsigned int)v7;
}
