/*
 * XREFs of ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FB294
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC388 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x1800FB900 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC388 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??R?$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC5D4 (--R-$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800FC6BC (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801BEA24 (--1-$out_param_t@V-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechni.c)
 *     ??$?4U?$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801C7BE4 (--$-4U-$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@-$unique_ptr@VCRenderingTechniqu.c)
 *     ??$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAAEAUFragmentInput@CRenderingTechniqueFragment@@$$QEAU23@@Z @ 0x1802B3958 (--$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRenderingT.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddMaskBrush(
        CBrushRenderingGraphBuilder *this,
        struct CMaskBrush *a2,
        bool a3,
        struct CRenderingTechniqueFragment **a4)
{
  struct CBrush *v4; // r14
  int v5; // edi
  struct CBrush *v6; // rsi
  struct CRenderingTechniqueFragment *v10; // rax
  struct CRenderingTechniqueFragment *v11; // rbx
  struct CRenderingTechniqueFragment *v12; // rax
  char *v13; // r14
  struct CRenderingTechniqueFragment *v15; // rdx
  struct CRenderingTechniqueFragment *v16; // [rsp+30h] [rbp-30h] BYREF
  struct CRenderingTechniqueFragment *v17; // [rsp+38h] [rbp-28h] BYREF
  struct CRenderingTechniqueFragment **v18; // [rsp+40h] [rbp-20h] BYREF
  struct CRenderingTechniqueFragment *v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  struct CRenderingTechniqueFragment *v21; // [rsp+98h] [rbp+38h] BYREF

  v4 = (struct CBrush *)*((_QWORD *)a2 + 15);
  v5 = 0;
  v6 = (struct CBrush *)*((_QWORD *)a2 + 14);
  v16 = 0LL;
  v17 = 0LL;
  if ( *((_BYTE *)v4 + 96) )
  {
    v19 = 0LL;
    v18 = &v16;
    LOBYTE(v20) = 1;
    v5 = CBrushRenderingGraphBuilder::AddBrush(this, v4, a3, &v19);
    if ( (_BYTE)v20 )
    {
      v15 = *v18;
      *v18 = v19;
      if ( v15 )
        std::default_delete<CRenderingTechniqueFragment>::operator()();
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x167u, 0LL);
      goto LABEL_11;
    }
    v5 = 0;
  }
  if ( v6 )
  {
    v10 = (struct CRenderingTechniqueFragment *)MIDL_user_allocate(0x78uLL);
    v11 = v10;
    if ( v10 )
    {
      *(_QWORD *)v10 = 0LL;
      *((_QWORD *)v10 + 1) = 0LL;
      *((_QWORD *)v10 + 2) = 0LL;
      *((_QWORD *)v10 + 3) = 0LL;
      *((_QWORD *)v10 + 4) = 0LL;
      *((_QWORD *)v10 + 5) = 0LL;
      *((_QWORD *)v10 + 6) = 0LL;
      *((_QWORD *)v10 + 7) = 0LL;
      *((_QWORD *)v10 + 8) = 0LL;
      *((_QWORD *)v10 + 9) = 0LL;
      *((_QWORD *)v10 + 10) = 0LL;
      *((_QWORD *)v10 + 13) = 0LL;
      *((_BYTE *)v10 + 112) = a3;
    }
    else
    {
      v11 = 0LL;
    }
    v17 = v11;
    if ( !v11 )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x16Du, 0LL);
      goto LABEL_11;
    }
    v12 = v16;
    if ( v16 )
    {
      v13 = (char *)v11 + 32;
      v16 = 0LL;
      v19 = v12;
      std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
        (char *)v11 + 32,
        &v18);
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v19);
    }
    else
    {
      v20 = 0LL;
      v18 = (struct CRenderingTechniqueFragment **)v4;
      v19 = 0LL;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
        v11,
        (const struct CBrushRenderingGraph::GraphInputParameters *)&v18);
      v13 = (char *)v11 + 32;
    }
    v19 = 0LL;
    if ( *((_BYTE *)v6 + 96) )
    {
      v21 = 0LL;
      v18 = &v21;
      LOBYTE(v20) = 1;
      v5 = CBrushRenderingGraphBuilder::AddBrush(this, v6, a3, &v19);
      wil::details::out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>::~out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>(&v18);
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x181u, 0LL);
        std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v21);
        goto LABEL_11;
      }
      v5 = 0;
      v19 = v21;
      v21 = 0LL;
      std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
        v13,
        &v18);
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v19);
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v21);
    }
    else
    {
      v20 = 0LL;
      v18 = (struct CRenderingTechniqueFragment **)v6;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
        v11,
        (const struct CBrushRenderingGraph::GraphInputParameters *)&v18);
    }
  }
  else
  {
    std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
      &v17,
      &v16);
    v11 = v17;
  }
  v17 = 0LL;
  *a4 = v11;
LABEL_11:
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v16);
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v17);
  return (unsigned int)v5;
}
