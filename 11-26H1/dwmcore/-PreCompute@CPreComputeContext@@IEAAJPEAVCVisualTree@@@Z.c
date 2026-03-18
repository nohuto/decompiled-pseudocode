/*
 * XREFs of ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18008D838
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18008E700 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18008F5F0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ @ 0x180057A70 (-IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x180064250 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAX$01$01$09@@QEAA_NPEAPEAX@Z @ 0x180082330 (-Pop@-$CWatermarkStack@PEAX$01$01$09@@QEAA_NPEAPEAX@Z.c)
 *     ??0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z @ 0x180090050 (--0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z.c)
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800900E0 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800A0850 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x1800F3330 (-Clear@CLightStack@@QEAAXXZ.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     ?EndWalk@CPreComputeSubTreeContext@@AEAAXJ@Z @ 0x18016F1F0 (-EndWalk@CPreComputeSubTreeContext@@AEAAXJ@Z.c)
 *     ?Optimize@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAXXZ @ 0x18016F550 (-Optimize@-$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?Push@?$CWatermarkStack@PEAX$01$01$09@@QEAAJAEBQEAX@Z @ 0x1801814B0 (-Push@-$CWatermarkStack@PEAX$01$01$09@@QEAAJAEBQEAX@Z.c)
 *     ?Push@?$CWatermarkStack@M$01$01$09@@QEAAJAEBM@Z @ 0x18018AAD0 (-Push@-$CWatermarkStack@M$01$01$09@@QEAAJAEBM@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilDepthMode@@@Z @ 0x18018CCD0 (-Push@-$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilDepthMode@@@Z.c)
 *     ?Optimize@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAXXZ @ 0x18018E0A0 (-Optimize@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAAXXZ @ 0x18018E470 (-Optimize@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     ?Push@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z @ 0x18018ED94 (-Push@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?Optimize@?$CWatermarkStack@M$01$01$09@@QEAAXXZ @ 0x180190420 (-Optimize@-$CWatermarkStack@M$01$01$09@@QEAAXXZ.c)
 *     ?UpdateInputSinkTransforms@CPreComputeContext@@AEAAXXZ @ 0x180193F38 (-UpdateInputSinkTransforms@CPreComputeContext@@AEAAXXZ.c)
 *     ?clear@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180196E6C (-clear@-$vector_facade@VCPreComputeSubTreeContext@@V-$buffer_impl@VCPreComputeSubTreeContext@@$0.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180199E68 (McTemplateU0xq_EventWriteTransfer.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x180215940 (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPreComputeContext::PreCompute(CPreComputeContext *this, struct CVisualTree *a2)
{
  unsigned __int8 v4; // al
  __int64 v5; // rcx
  int v6; // r15d
  char *v7; // rbx
  char *v8; // rdi
  _BYTE *v9; // r12
  int v10; // ecx
  __int64 v11; // r15
  DwmDbg::DbgString *v12; // rdi
  CVisualTreePath *v13; // rbx
  DwmDbg::DbgString *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned int v18; // eax
  CPreComputeSubTreeContext *v19; // rbx
  CPreComputeSubTreeContext *v20; // rdi
  char *v21; // [rsp+30h] [rbp-50h] BYREF
  char *v22; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v23[56]; // [rsp+40h] [rbp-40h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
  {
    v4 = (*(__int64 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2);
    McTemplateU0xq_EventWriteTransfer(v5, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Start, a2, v4);
  }
  if ( g_pComposition != (CComposition *)-1000LL && *((_BYTE *)g_pComposition + 1008) )
    *((_BYTE *)g_pComposition + 1010) = 1;
  detail::vector_facade<CPreComputeSubTreeContext,detail::buffer_impl<CPreComputeSubTreeContext,3,1,detail::liberal_expansion_policy>>::clear(this);
  LODWORD(v21) = 0;
  *((_DWORD *)this + 272) = 0;
  v6 = CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Push((int)this + 1080);
  if ( v6 < 0 )
  {
    v9 = (char *)this + 1536;
    v18 = 158;
  }
  else
  {
    v7 = (char *)this + 1104;
    *((_DWORD *)this + 354) = 0;
    *((_DWORD *)this + 278) = 0;
    CWatermarkStack<float,2,2,10>::Push((_DWORD)this + 1104);
    v8 = (char *)this + 1128;
    *((_DWORD *)this + 284) = 0;
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Push((_DWORD)this + 1128);
    v21 = 0LL;
    *((_DWORD *)this + 290) = 0;
    CWatermarkStack<void *,2,2,10>::Push((_DWORD)this + 1152);
    CLightStack::Clear((CPreComputeContext *)((char *)this + 1176));
    v9 = (char *)this + 1536;
    *((_BYTE *)this + 1536) = 0;
    if ( DwmDbg::Backdrops::IsEtwEnabled(0LL) )
    {
      v11 = *((_QWORD *)a2 + 9);
      if ( *(char *)(v11 + 102) < (char)v10
        || (*(_BYTE *)(v11 + 103) & 2) != 0
        || *(_DWORD *)(v11 + 256) > v10
        || *(_DWORD *)(v11 + 260) > v10 )
      {
        v12 = DwmDbg::DbgString::DbgString(&v21, word_1802F327A);
        v13 = CVisualTreePath::CVisualTreePath((CVisualTreePath *)v23, a2);
        v14 = DwmDbg::DbgString::DbgString(&v22, "PreCompute-StartWalk");
        DwmDbg::Backdrops::LogTreeWalkEtwEvent(v14, v11, a2, v13, v12);
        detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>(v23);
        v7 = (char *)this + 1104;
        v8 = (char *)this + 1128;
      }
    }
    v15 = *((_QWORD *)a2 + 9);
    *((_QWORD *)this + 190) = a2;
    v6 = CVisualTreeIterator::WalkSubtree<CPreComputeContext>((char *)this + 1464, *((_QWORD *)a2 + 9), v15, this);
    if ( v6 >= 0 )
    {
      CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((__int64)this + 1080);
      CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Optimize();
      CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Optimize((char *)this + 1408);
      CWatermarkStack<void *,2,2,10>::Pop((__int64)v7);
      CWatermarkStack<float,2,2,10>::Optimize();
      CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((__int64)v8);
      CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Optimize();
      CWatermarkStack<void *,2,2,10>::Pop((__int64)this + 1152);
      CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Optimize();
      goto LABEL_15;
    }
    v18 = 195;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v18, 0LL);
  v19 = *(CPreComputeSubTreeContext **)this;
  v20 = (CPreComputeSubTreeContext *)*((_QWORD *)this + 1);
  while ( v19 != v20 )
  {
    CPreComputeSubTreeContext::EndWalk(v19, v6);
    v19 = (CPreComputeSubTreeContext *)((char *)v19 + 352);
  }
LABEL_15:
  detail::vector_facade<CPreComputeSubTreeContext,detail::buffer_impl<CPreComputeSubTreeContext,3,1,detail::liberal_expansion_policy>>::clear(this);
  *v9 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2) )
    CPreComputeContext::UpdateInputSinkTransforms(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x_EventWriteTransfer(v16, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Stop, a2);
  return (unsigned int)v6;
}
