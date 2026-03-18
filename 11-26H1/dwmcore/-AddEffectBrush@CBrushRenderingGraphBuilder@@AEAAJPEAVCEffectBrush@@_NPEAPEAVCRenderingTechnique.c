/*
 * XREFs of ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FB9F0
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC388 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x1800FB900 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC388 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC518 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x1800FC598 (-AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z.c)
 *     ??R?$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC5D4 (--R-$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@QEAU12@AEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x1800FC604 (--$_Destroy_range@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUS.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800FC6BC (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18015C5D8 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x18015D068 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCach.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x1801B3EF8 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801BE4BC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@USubgraphOutput@CBrushRenderingGraphBuilde.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801BEA24 (--1-$out_param_t@V-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechni.c)
 *     ??$?4U?$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801C7BE4 (--$-4U-$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@-$unique_ptr@VCRenderingTechniqu.c)
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x1801CE5C0 (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 *     ?GetInput@CEffectBrush@@QEBAPEAVCBrush@@I@Z @ 0x1801FE584 (-GetInput@CEffectBrush@@QEBAPEAVCBrush@@I@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_3922508091@@@details@wil@@QEAA_NXZ @ 0x18026E8BC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_3922508091@@@details@wil@@QEAA_NX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddEffectBrush(
        CBrushRenderingGraphBuilder *this,
        struct CEffectBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  CCompiledEffectTemplate *v4; // rdi
  CRenderingTechniqueFragment *v6; // rbx
  _QWORD *v7; // r14
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  __int64 v9; // rdi
  const struct Windows::UI::Composition::ICompiledEffect *v10; // r15
  struct _TP_WORK *v11; // rcx
  struct CRenderingTechniqueFragment *v12; // r13
  __int64 v13; // rax
  unsigned int v14; // edi
  unsigned int v15; // r12d
  unsigned int v16; // esi
  unsigned int v17; // edi
  int v18; // r14d
  bool v19; // r12
  void *v20; // rax
  __int64 v21; // rdi
  CRenderingTechniqueFragment *v22; // rdx
  unsigned int v23; // eax
  unsigned int v24; // r15d
  unsigned int v25; // r13d
  unsigned int v26; // eax
  unsigned __int64 v27; // rdi
  unsigned int v28; // eax
  __int64 v29; // r8
  _QWORD *v30; // rdx
  __int64 *v31; // rcx
  struct CBrush *Input; // rax
  struct CBrush *v33; // r14
  bool v34; // r8
  int v35; // edi
  __int64 v36; // r8
  _QWORD *v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // r9d
  unsigned int v45[2]; // [rsp+28h] [rbp-B9h]
  unsigned int v46; // [rsp+28h] [rbp-B9h]
  int v47; // [rsp+30h] [rbp-B1h]
  int v48; // [rsp+38h] [rbp-A9h] BYREF
  int v49; // [rsp+3Ch] [rbp-A5h] BYREF
  __int64 v50; // [rsp+40h] [rbp-A1h]
  __int64 v51; // [rsp+48h] [rbp-99h] BYREF
  _QWORD v52[3]; // [rsp+50h] [rbp-91h] BYREF
  __int64 v53; // [rsp+68h] [rbp-79h]
  unsigned int v54; // [rsp+70h] [rbp-71h]
  const struct Windows::UI::Composition::ICompiledEffect *v55; // [rsp+78h] [rbp-69h]
  struct CBrush *v56; // [rsp+80h] [rbp-61h] BYREF
  struct CRenderingTechniqueFragment *v57[2]; // [rsp+88h] [rbp-59h] BYREF
  struct CRenderingTechniqueFragment *v58; // [rsp+98h] [rbp-49h]
  __int64 v59; // [rsp+A0h] [rbp-41h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-39h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-29h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-21h]
  _QWORD *v64; // [rsp+C8h] [rbp-19h]
  int v65; // [rsp+D0h] [rbp-11h]
  __int64 v66; // [rsp+D8h] [rbp-9h] BYREF
  int v67; // [rsp+E0h] [rbp-1h]
  _QWORD v68[10]; // [rsp+E8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+5Fh]

  v4 = (CCompiledEffectTemplate *)*((_QWORD *)a2 + 14);
  v6 = 0LL;
  v7 = *(_QWORD **)(*((_QWORD *)v4 + 10) + 56LL);
  v64 = v7;
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(v4);
  v9 = *((_QWORD *)v4 + 10);
  v10 = CompiledEffectNoRef;
  v55 = CompiledEffectNoRef;
  v11 = *(struct _TP_WORK **)(v9 + 64);
  if ( v11 )
  {
    WaitForThreadpoolWorkCallbacks(v11, 0);
    CloseThreadpoolWork(*(PTP_WORK *)(v9 + 64));
    *(_QWORD *)(v9 + 64) = 0LL;
  }
  v12 = (struct CRenderingTechniqueFragment *)*((_QWORD *)a2 + 20);
  v63 = *(_QWORD *)(v9 + 80);
  v13 = *v7;
  v58 = v12;
  v54 = (*(__int64 (__fastcall **)(_QWORD *))(v13 + 32))(v7);
  v14 = v54;
  v53 = 0LL;
  *(_OWORD *)&v52[1] = 0LL;
  v15 = v54 - 1;
  LODWORD(v50) = v54 - 1;
  if ( v54 != 1 )
    std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Resize_reallocate<std::_Value_init_tag>(&v52[1], v54 - 1);
  v16 = 0;
  if ( v14 )
  {
    while ( 1 )
    {
      v17 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v10 + 40LL))(
              v10,
              v16);
      v18 = v17 & 8;
      v49 = v18;
      v19 = a3 && (v16 == v15 || (v17 & 8) != 0);
      v20 = MIDL_user_allocate(0x78uLL);
      if ( v20 )
      {
        LOBYTE(v47) = v19;
        v45[0] = v17;
        v21 = CRenderingTechniqueFragment::CRenderingTechniqueFragment(v20, v12, v63, v16, *(_QWORD *)v45, v47);
      }
      else
      {
        v21 = 0LL;
      }
      v22 = v6;
      v6 = (CRenderingTechniqueFragment *)v21;
      v52[0] = v21;
      if ( v22 )
        std::default_delete<CRenderingTechniqueFragment>::operator()();
      if ( !v21 )
        break;
      v23 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v10 + 32LL))(
              v10,
              v16);
      v24 = 0;
      v25 = v23;
      if ( v23 )
      {
        while ( 1 )
        {
          LOBYTE(v48) = 0;
          v26 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, int *))(*(_QWORD *)v55 + 48LL))(
                  v55,
                  v16,
                  v24,
                  &v48);
          v27 = v26;
          if ( !(_BYTE)v48 )
            break;
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_3922508091>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_3922508091>::GetImpl'::`2'::impl)
            && v27 >= (__int64)(v52[2] - v52[1]) >> 4 )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0xFA,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraphbuilder.cpp",
              (const char *)retaddr);
          }
          v28 = *(_DWORD *)(v52[1] + 16LL * (unsigned int)v27);
          if ( v28 == -1 )
          {
            v29 = *(_QWORD *)(v52[1] + 16LL * (unsigned int)v27 + 8);
            *(_QWORD *)(v52[1] + 16LL * (unsigned int)v27 + 8) = 0LL;
            v30 = (_QWORD *)*((_QWORD *)v6 + 5);
            v60 = v29;
            if ( v30 == *((_QWORD **)v6 + 6) )
            {
              std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
                (char *)v6 + 32,
                v30,
                &v59);
            }
            else
            {
              v60 = 0LL;
              *v30 = v59;
              v30[1] = v29;
              *((_QWORD *)v6 + 5) += 16LL;
            }
            v31 = &v60;
LABEL_38:
            std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v31);
            goto LABEL_43;
          }
          CRenderingTechniqueFragment::AddIntermediateInput(v6, v28);
LABEL_43:
          if ( ++v24 >= v25 )
          {
            v18 = v49;
            goto LABEL_45;
          }
        }
        Input = CEffectBrush::GetInput(a2, v26);
        v33 = Input;
        if ( !Input || !*((_BYTE *)Input + 96) )
        {
          v56 = Input;
          *(_OWORD *)v57 = 0LL;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v64 + 48LL))(v64, (unsigned int)v27) )
          {
            v57[0] = v58;
            LODWORD(v57[1]) = v27;
          }
          else
          {
            v57[0] = 0LL;
            LODWORD(v57[1]) = 0;
          }
          CBrushRenderingGraphBuilder::AddNamedInputToFragment(
            this,
            v6,
            (const struct CBrushRenderingGraph::GraphInputParameters *)&v56);
          goto LABEL_43;
        }
        v34 = v19
           || (*(unsigned __int8 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v55 + 56LL))(
                v55,
                v16,
                v24,
                0LL,
                0LL);
        v56 = (struct CBrush *)&v51;
        v51 = 0LL;
        v57[0] = 0LL;
        LOBYTE(v57[1]) = 1;
        v35 = CBrushRenderingGraphBuilder::AddBrush(this, v33, v34, v57);
        wil::details::out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>::~out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>(&v56);
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0x11Du, 0LL);
          std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v51);
          goto LABEL_61;
        }
        v36 = v51;
        v51 = 0LL;
        v37 = (_QWORD *)*((_QWORD *)v6 + 5);
        v62 = v36;
        if ( v37 == *((_QWORD **)v6 + 6) )
        {
          std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
            (char *)v6 + 32,
            v37,
            &v61);
        }
        else
        {
          v62 = 0LL;
          *v37 = v61;
          v37[1] = v36;
          *((_QWORD *)v6 + 5) += 16LL;
        }
        std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v62);
        v31 = &v51;
        goto LABEL_38;
      }
LABEL_45:
      v15 = v50;
      if ( v16 != (_DWORD)v50 )
      {
        v38 = CBrushRenderingGraphBuilder::CheckFragmentSize(this, v6);
        v35 = v38;
        if ( v38 < 0 )
        {
          v46 = 315;
          goto LABEL_57;
        }
        if ( v18 )
        {
          v41 = 16LL * v16;
          v68[0] = v6;
          v6 = 0LL;
          v42 = v52[1];
          v67 = -1;
          *(_DWORD *)(v41 + v52[1]) = -1;
          std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
            v42 + 8 + v41,
            v68);
          std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v68);
        }
        else
        {
          v49 = 0;
          v38 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, v52, &v49);
          v35 = v38;
          if ( v38 < 0 )
          {
            v46 = 320;
LABEL_57:
            v43 = v38;
            goto LABEL_59;
          }
          v39 = v52[1];
          v65 = v49;
          v40 = 16LL * v16;
          v66 = 0LL;
          *(_DWORD *)(v40 + v52[1]) = v49;
          std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
            v39 + 8 + v40,
            &v66);
          std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v66);
          v6 = (CRenderingTechniqueFragment *)v52[0];
        }
        v15 = v50;
      }
      if ( ++v16 >= v54 )
        goto LABEL_60;
      v10 = v55;
      v12 = v58;
    }
    v35 = -2147024882;
    v43 = -2147024882;
    v46 = 234;
LABEL_59:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v43, v46, 0LL);
  }
  else
  {
LABEL_60:
    v35 = 0;
    v52[0] = 0LL;
    *a4 = v6;
  }
LABEL_61:
  if ( v52[1] )
  {
    std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(v52[1], v52[2]);
    std::_Deallocate<16>((void *)v52[1], (v53 - v52[1]) & 0xFFFFFFFFFFFFFFF0uLL);
    v53 = 0LL;
    *(_OWORD *)&v52[1] = 0LL;
  }
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v52);
  return (unsigned int)v35;
}
