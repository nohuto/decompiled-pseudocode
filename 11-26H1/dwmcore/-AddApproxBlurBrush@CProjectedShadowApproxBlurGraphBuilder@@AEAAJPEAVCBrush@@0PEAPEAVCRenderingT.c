/*
 * XREFs of ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18015D984
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18015D804 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x1800FB900 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800FC6BC (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x18015D068 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCach.c)
 *     ??0CProjectedShadowApproxBlurEffect@@QEAA@XZ @ 0x1802101C4 (--0CProjectedShadowApproxBlurEffect@@QEAA@XZ.c)
 *     ?GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCShaderCache@@XZ @ 0x18021F140 (-GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurGraphBuilder::AddApproxBlurBrush(
        CProjectedShadowApproxBlurGraphBuilder *this,
        struct CBrush *a2,
        struct CBrush *a3,
        struct CRenderingTechniqueFragment **a4)
{
  unsigned int v4; // edi
  CProjectedShadowApproxBlurEffect *v8; // rax
  CProjectedShadowApproxBlurEffect *v9; // rax
  __int64 v10; // rbx
  CProjectedShadowApproxBlurEffect *v11; // rcx
  void *v12; // rsi
  struct CShaderCache *ShaderCache; // rax
  struct CRenderingTechniqueFragment *v14; // r14
  CRenderingTechniqueFragment **v15; // rsi
  __int64 v16; // r15
  CRenderingTechniqueFragment *v18[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v19[4]; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0;
  v8 = (CProjectedShadowApproxBlurEffect *)operator new(0x68uLL);
  if ( v8 )
  {
    v9 = CProjectedShadowApproxBlurEffect::CProjectedShadowApproxBlurEffect(v8);
    v10 = (__int64)v9;
    if ( v9 )
      (**(void (__fastcall ***)(CProjectedShadowApproxBlurEffect *))v9)(v9);
  }
  else
  {
    v10 = 0LL;
  }
  v12 = MIDL_user_allocate(0x78uLL);
  if ( !v12 )
  {
    v18[0] = 0LL;
    goto LABEL_11;
  }
  ShaderCache = CProjectedShadowApproxBlurEffect::GetShaderCache(v11);
  v18[0] = (CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                            (__int64)v12,
                                            v10,
                                            (__int64)ShaderCache,
                                            0,
                                            0,
                                            0);
  v14 = v18[0];
  if ( !v18[0] )
  {
LABEL_11:
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x5Du, 0LL);
    goto LABEL_12;
  }
  v18[0] = a2;
  v15 = v18;
  v18[1] = a3;
  v16 = 2LL;
  do
  {
    v19[0] = *v15;
    v19[2] = 0LL;
    v19[1] = 0LL;
    CBrushRenderingGraphBuilder::AddNamedInputToFragment(
      this,
      v14,
      (const struct CBrushRenderingGraph::GraphInputParameters *)v19);
    ++v15;
    --v16;
  }
  while ( v16 );
  v18[0] = 0LL;
  *a4 = v14;
LABEL_12:
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v18);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  return v4;
}
