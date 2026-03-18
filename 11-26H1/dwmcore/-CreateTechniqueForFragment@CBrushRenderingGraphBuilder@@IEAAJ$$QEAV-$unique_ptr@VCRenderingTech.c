/*
 * XREFs of ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18015C5D8
 * Callers:
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FB9F0 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC518 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x18015B3D0 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x18015B7D4 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x18015BC9C (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18015D804 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x1800FC750 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x18015C700 (--0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV-$unique_ptr@VCRenderingTechniqueFr.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CreateTechniqueForFragment(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  CRenderingTechnique *v5; // rax
  __int64 v6; // rax
  CRenderingTechnique *v7; // rbx
  __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // edi
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v5 = (CRenderingTechnique *)MIDL_user_allocate(0x118uLL);
  if ( !v5 )
  {
    v7 = 0LL;
    goto LABEL_9;
  }
  v6 = CRenderingTechnique::CRenderingTechnique(v5);
  v7 = (CRenderingTechnique *)v6;
  if ( !v6 )
  {
LABEL_9:
    v11 = -2147024882;
    v13 = 593;
    goto LABEL_10;
  }
  v8 = *a1 + 144LL;
  v15 = v6;
  v9 = *(_DWORD *)(v8 + 24);
  v10 = v9 + 1;
  if ( v9 + 1 < v9 )
  {
    v11 = -2147024362;
    v14 = 183;
  }
  else
  {
    if ( v10 <= *(_DWORD *)(v8 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)v8 + 8LL * v9) = v7;
      *(_DWORD *)(v8 + 24) = v10;
LABEL_6:
      *a3 = *(_DWORD *)(v8 + 24) - 1;
      return 0;
    }
    v11 = DynArrayImpl<0>::AddMultipleAndSet(v8, 8, 1, &v15);
    if ( v11 >= 0 )
      goto LABEL_6;
    v14 = 194;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v14, 0LL);
  v13 = 596;
LABEL_10:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v13, 0LL);
  if ( v7 )
    CRenderingTechnique::`scalar deleting destructor'(v7);
  return (unsigned int)v11;
}
