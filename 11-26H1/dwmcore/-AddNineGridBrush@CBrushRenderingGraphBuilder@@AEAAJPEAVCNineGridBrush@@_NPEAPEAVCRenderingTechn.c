/*
 * XREFs of ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18028BB2C
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC388 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC388 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800FC6BC (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801BEA24 (--1-$out_param_t@V-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechni.c)
 *     ?FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRenderingGraph@@PEAI@Z @ 0x1801C08D8 (-FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRender.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddNineGridBrush(
        CBrushRenderingGraphBuilder *this,
        struct CNineGridBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment ***a4)
{
  struct CBrush *v4; // rdi
  int v8; // ebx
  struct CRenderingTechniqueFragment **v10; // [rsp+30h] [rbp-20h] BYREF
  struct CRenderingTechniqueFragment ***v11; // [rsp+38h] [rbp-18h] BYREF
  struct CRenderingTechniqueFragment *v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h]
  unsigned int v14; // [rsp+78h] [rbp+28h] BYREF

  v4 = (struct CBrush *)*((_QWORD *)a2 + 18);
  v10 = 0LL;
  v11 = &v10;
  v12 = 0LL;
  LOBYTE(v13) = 1;
  v8 = CBrushRenderingGraphBuilder::AddBrush(this, v4, a3, &v12);
  wil::details::out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>::~out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>((__int64)&v11);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x1D2u, 0LL);
    goto LABEL_8;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)v4 + 64LL))(v4, 102LL) )
    goto LABEL_6;
  v13 = 0LL;
  v11 = (struct CRenderingTechniqueFragment ***)v4;
  v14 = 0;
  v12 = *v10;
  if ( CBrushRenderingGraphBuilder::FindExistingNamedInput(
         this,
         (const struct CBrushRenderingGraph::GraphInputParameters *)&v11,
         &v14) )
  {
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 24LL * v14) = a2;
LABEL_6:
    *a4 = v10;
    v10 = 0LL;
    goto LABEL_8;
  }
  v8 = -2147418113;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147418113, 0x1E1u, 0LL);
LABEL_8:
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>((CRenderingTechniqueFragment **)&v10);
  return (unsigned int)v8;
}
