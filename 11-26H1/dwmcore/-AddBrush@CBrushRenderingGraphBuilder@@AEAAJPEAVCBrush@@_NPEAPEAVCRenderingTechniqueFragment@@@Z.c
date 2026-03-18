/*
 * XREFs of ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC388
 * Callers:
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FB294 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FB9F0 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x18015B3D0 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18028BB2C (-AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechn.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FB294 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FB9F0 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC518 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??R?$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC5D4 (--R-$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800FC6BC (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801BEA24 (--1-$out_param_t@V-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechni.c)
 *     ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18028BB2C (-AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechn.c)
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18028BC64 (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddBrush(
        CBrushRenderingGraphBuilder *this,
        struct CBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  __int64 v4; // rax
  int v9; // ebx
  struct CRenderingTechniqueFragment *v10; // rdx
  int v11; // eax
  struct CRenderingTechniqueFragment *v13; // rdx
  unsigned int v14; // [rsp+20h] [rbp-30h]
  struct CRenderingTechniqueFragment **v15; // [rsp+30h] [rbp-20h] BYREF
  struct CRenderingTechniqueFragment *v16; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+40h] [rbp-10h]
  struct CRenderingTechniqueFragment *v18; // [rsp+78h] [rbp+28h] BYREF

  v4 = *(_QWORD *)a2;
  v18 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(v4 + 64))(a2, 47LL) )
  {
    v16 = 0LL;
    v15 = &v18;
    v17 = 1;
    v9 = CBrushRenderingGraphBuilder::AddEffectBrush(this, a2, a3, &v16);
    if ( v17 )
    {
      v10 = *v15;
      *v15 = v16;
      if ( v10 )
        std::default_delete<CRenderingTechniqueFragment>::operator()();
    }
    if ( v9 >= 0 )
      goto LABEL_6;
    v14 = 162;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v14, 0LL);
    goto LABEL_8;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 84LL) )
  {
    v16 = 0LL;
    v15 = &v18;
    v17 = 1;
    v9 = CBrushRenderingGraphBuilder::AddMaskBrush(this, a2, a3, &v16);
    if ( v17 )
    {
      v13 = *v15;
      *v15 = v16;
      if ( v13 )
        std::default_delete<CRenderingTechniqueFragment>::operator()();
    }
    if ( v9 >= 0 )
      goto LABEL_6;
    v14 = 167;
    goto LABEL_24;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 102LL) )
  {
    v16 = 0LL;
    v15 = &v18;
    v17 = 1;
    v9 = CBrushRenderingGraphBuilder::AddRadialGradientBrush(this, a2, a3, &v16);
    wil::details::out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>::~out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>(&v15);
    if ( v9 < 0 )
    {
      v14 = 172;
      goto LABEL_24;
    }
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 88LL) )
    {
      v9 = -2147467263;
      v14 = 181;
      goto LABEL_24;
    }
    v16 = 0LL;
    v15 = &v18;
    v17 = 1;
    v9 = CBrushRenderingGraphBuilder::AddNineGridBrush(this, a2, a3, &v16);
    wil::details::out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>::~out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>(&v15);
    if ( v9 < 0 )
    {
      v14 = 177;
      goto LABEL_24;
    }
  }
LABEL_6:
  v11 = CBrushRenderingGraphBuilder::CheckFragmentSize(this, v18);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xB9u, 0LL);
  }
  else
  {
    v9 = 0;
    *a4 = v18;
    ++*((_DWORD *)this + 2);
    v18 = 0LL;
  }
LABEL_8:
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v18);
  return (unsigned int)v9;
}
