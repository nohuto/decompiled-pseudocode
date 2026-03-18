/*
 * XREFs of ?RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBUD2D_VECTOR_2F@@2PEAUEffectInput@@@Z @ 0x1801D2E14
 * Callers:
 *     ?ProduceRealization@CEffectIntermediateProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1801D2C80 (-ProduceRealization@CEffectIntermediateProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealiza.c)
 * Callees:
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180019538 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x180019B90 (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18001AAD4 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ?_Tidy@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXXZ @ 0x18001B530 (-_Tidy@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXXZ.c)
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x18001C13C (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAAEAUEffectInput@@$$QEA$$T@Z @ 0x180288354 (--$emplace_back@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAAEAUEffect.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderSubgraphToIntermediate(
        const struct CRenderingTechnique ***this,
        const struct CRenderingTechnique *a2,
        struct CDrawingContext *a3,
        struct D2D_SIZE_F *a4,
        const struct D2D_VECTOR_2F *a5,
        const struct D2D_SIZE_F *a6,
        struct EffectInput *a7)
{
  __int64 v9; // xmm1_8
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  const struct CRenderingTechnique **v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 v20; // rbx
  int v21; // eax
  __int128 i; // [rsp+38h] [rbp-51h] BYREF
  __int64 v23; // [rsp+48h] [rbp-41h]
  __int128 v24; // [rsp+50h] [rbp-39h] BYREF
  __int64 v25; // [rsp+60h] [rbp-29h]
  unsigned __int64 v26[2]; // [rsp+68h] [rbp-21h] BYREF
  int v27[2]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v28; // [rsp+80h] [rbp-9h]
  struct D2D_SIZE_F v29; // [rsp+88h] [rbp-1h] BYREF
  __int128 v30; // [rsp+90h] [rbp+7h]
  const struct D2D_SIZE_F *v31; // [rsp+A0h] [rbp+17h]
  __int64 v32; // [rsp+A8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+47h]

  v30 = 0LL;
  v9 = (__int64)*a5;
  v29 = *a4;
  v31 = a6;
  v24 = 0LL;
  v32 = 0LL;
  *(_QWORD *)&v30 = v9;
  v25 = 0LL;
  v11 = CBrushRenderingGraph::GatherEffectInputs((CBrushRenderingGraph *)this, (__int64)a3, a4, &v24);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x458,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
      (const char *)(unsigned int)v11);
LABEL_3:
    std::vector<EffectInput>::_Tidy((__int64)&v24);
    return v12;
  }
  v14 = *((_DWORD *)this + 42);
  v15 = 0;
  v16 = this[18];
  v23 = 0LL;
  for ( i = 0LL; v15 < v14; ++v16 )
  {
    if ( a2 == *v16 )
      break;
    ++v15;
  }
  v17 = v15;
  std::vector<EffectInput>::reserve(&i, v15);
  v18 = v15 + 1;
  do
  {
    std::vector<EffectInput>::emplace_back<std::nullptr_t>(&i);
    --v18;
  }
  while ( v18 );
  v19 = i;
  gsl::details::extent_type<-1>::extent_type<-1>(v26, 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)&i + 1) - i) >> 4));
  v26[1] = v19;
  if ( v26[0] == -1LL
    || !v19 && v26[0]
    || (v20 = v24,
        gsl::details::extent_type<-1>::extent_type<-1>(
          v27,
          0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)&v24 + 1) - v24) >> 4)),
        v28 = v20,
        *(_QWORD *)v27 == -1LL)
    || !v20 && *(_QWORD *)v27 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v21 = CBrushRenderingGraph::RenderSubgraphToIntermediateInternal(
          (__int64)this,
          (__int64)a2,
          a3,
          (struct CBrushRenderingGraph::IntermediateConfigurationInputs *)&v29,
          (__int64)v27,
          v26);
  v12 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
      (const char *)(unsigned int)v21);
    std::vector<EffectInput>::_Tidy((__int64)&i);
    goto LABEL_3;
  }
  EffectInput::operator=((__int64 *)a7, (__int64 *)(i + 112 * v17));
  std::vector<EffectInput>::_Tidy((__int64)&i);
  std::vector<EffectInput>::_Tidy((__int64)&v24);
  return 0LL;
}
