/*
 * XREFs of ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B858
 * Callers:
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18003D6D0 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801CB150 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Reallocate@$0A@@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXAEA_K@Z @ 0x180019BF0 (--$_Reallocate@$0A@@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXAEA_K@Z.c)
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18001AAD4 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ?_Tidy@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXXZ @ 0x18001B530 (-_Tidy@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXXZ.c)
 *     ?CleanupEffectStage@CBrushRenderingGraph@@KAXPEAUEffectStage@@@Z @ 0x18001B664 (-CleanupEffectStage@CBrushRenderingGraph@@KAXPEAUEffectStage@@@Z.c)
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x18001C13C (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ??0EffectInput@@QEAA@XZ @ 0x18001CEE4 (--0EffectInput@@QEAA@XZ.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x18001CF10 (--1EffectInput@@QEAA@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001EDE4 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180039DC0 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180039E6C (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?RequiresWrapping@EffectInput@@SA_NAEBU1@@Z @ 0x180039F70 (-RequiresWrapping@EffectInput@@SA_NAEBU1@@Z.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039FA0 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CCachedImageProducer@@IEAA@XZ @ 0x180039FBC (--0CCachedImageProducer@@IEAA@XZ.c)
 *     ?Initialize@CEffectIntermediateProducer@@QEAAXPEAVIBitmapRealization@@@Z @ 0x180039FF0 (-Initialize@CEffectIntermediateProducer@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18003DDB4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18003E488 (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x180064CE0 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800D369C (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1801826C0 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     gsl::final_action__CBrushRenderingGraph::RenderSubgraphs_::_2_::_lambda_1___::_final_action__CBrushRenderingGraph::RenderSubgraphs_::_2_::_lambda_1___ @ 0x1801B8C3C (gsl--final_action__CBrushRenderingGraph--RenderSubgraphs_--_2_--_lambda_1___--_final_action__CBr.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAAEAUEffectInput@@$$QEA$$T@Z @ 0x180288354 (--$emplace_back@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAAEAUEffect.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderSubgraphs(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        const struct CDrawListBrush *a4,
        unsigned int a5,
        struct CDrawListCache *a6)
{
  struct CDrawingContext *v7; // r12
  FLOAT width; // xmm2_4
  __int64 v10; // r14
  FLOAT height; // xmm3_4
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  float v19; // xmm6_4
  float v20; // xmm0_4
  int v21; // eax
  int InputBrushParameters; // ebx
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rax
  EffectInput *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  unsigned int v31; // r14d
  __int64 v32; // r10
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 *v36; // r8
  unsigned __int64 v37; // rdx
  const struct EffectInput *v38; // r12
  unsigned __int64 v39; // rax
  __int64 v40; // r14
  CCachedImageProducer *v41; // rax
  CCachedImageProducer *v42; // rbx
  struct CVisual *v43; // rax
  void (__fastcall *v44)(CCachedImageProducer *, _BYTE *); // rbx
  CCachedImageProducer *v45; // rbx
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 *v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // r12
  __int64 v51; // rcx
  __int64 v52; // r12
  char v53; // cl
  int updated; // eax
  EffectInput *v55; // rbx
  __int64 v57; // rdx
  EffectInput *v58; // rsi
  __int64 v59; // rdx
  int v60; // [rsp+28h] [rbp-E0h]
  int v61; // [rsp+28h] [rbp-E0h]
  int v62; // [rsp+28h] [rbp-E0h]
  int v63; // [rsp+28h] [rbp-E0h]
  int v64; // [rsp+28h] [rbp-E0h]
  unsigned int v65; // [rsp+38h] [rbp-D0h]
  CCachedImageProducer *v66; // [rsp+40h] [rbp-C8h] BYREF
  CDrawingContext *v67; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v68; // [rsp+50h] [rbp-B8h] BYREF
  CCachedImageProducer *v69; // [rsp+58h] [rbp-B0h]
  _BYTE v70[20]; // [rsp+60h] [rbp-A8h] BYREF
  __int32 v71; // [rsp+74h] [rbp-94h]
  __int64 v72; // [rsp+78h] [rbp-90h]
  __int32 v73; // [rsp+80h] [rbp-88h]
  unsigned int v74; // [rsp+88h] [rbp-80h]
  __int64 v75; // [rsp+90h] [rbp-78h]
  struct CVisual *CurrentVisual; // [rsp+98h] [rbp-70h]
  __int64 v77; // [rsp+A0h] [rbp-68h] BYREF
  FLOAT v78; // [rsp+A8h] [rbp-60h]
  FLOAT v79; // [rsp+ACh] [rbp-5Ch]
  __m128i si128; // [rsp+B8h] [rbp-50h] BYREF
  __m128i v81; // [rsp+C8h] [rbp-40h]
  __m128i v82; // [rsp+D8h] [rbp-30h]
  __m128i v83; // [rsp+E8h] [rbp-20h]
  int v84; // [rsp+F8h] [rbp-10h]
  __int128 v85; // [rsp+108h] [rbp+0h] BYREF
  __int64 v86; // [rsp+118h] [rbp+10h]
  struct D2D_SIZE_F v87[2]; // [rsp+120h] [rbp+18h] BYREF
  __int128 v88; // [rsp+130h] [rbp+28h]
  _BOOL8 v89; // [rsp+140h] [rbp+38h]
  int v90[2]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v91; // [rsp+150h] [rbp+48h]
  __int128 v92; // [rsp+158h] [rbp+50h] BYREF
  __int64 v93; // [rsp+168h] [rbp+60h]
  __int64 v94; // [rsp+170h] [rbp+68h]
  struct CDrawListCache *v95; // [rsp+178h] [rbp+70h]
  struct CDrawListBrush *v96; // [rsp+180h] [rbp+78h]
  __int64 *v97; // [rsp+188h] [rbp+80h] BYREF
  char v98; // [rsp+190h] [rbp+88h]
  __int64 v99; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v100[448]; // [rsp+1A0h] [rbp+98h] BYREF
  char v101; // [rsp+360h] [rbp+258h] BYREF
  void *retaddr; // [rsp+3D0h] [rbp+2C8h]

  v96 = a4;
  v7 = a2;
  v67 = a2;
  v95 = a6;
  if ( *((_BYTE *)this + 200) )
    ModuleFailFastForHRESULT(-2003304315, retaddr);
  width = a3->width;
  v10 = (unsigned int)(*((_DWORD *)this + 42) - 1);
  height = a3->height;
  v12 = *((_BYTE *)a6 + 86) == 0;
  v13 = *((_DWORD *)a2 + 72);
  v87[1] = 0LL;
  v89 = v12;
  v87[0].width = width;
  v87[0].height = height;
  v74 = v10;
  v84 = 0;
  v88 = 0LL;
  if ( v13 )
  {
    v14 = (unsigned int)(v13 - 1);
    v15 = *((_QWORD *)a2 + 35);
    LOBYTE(a2) = 68 * v14;
    v16 = *(__m128i *)(68 * v14 + v15 + 16);
    si128 = *(__m128i *)(68 * v14 + v15);
    v17 = *(__m128i *)(68 * v14 + v15 + 32);
    v81 = v16;
    v18 = *(__m128i *)(68 * v14 + v15 + 48);
    v84 = *(_DWORD *)(68 * v14 + v15 + 64);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v17 = _mm_load_si128((const __m128i *)&_xmm);
    v81 = _mm_load_si128((const __m128i *)&_xmm);
    v18 = _mm_load_si128((const __m128i *)&_xmm);
    BYTE1(v84) = BYTE1(v84) & 0xC0 | 0x29;
    LOBYTE(v84) = -86;
  }
  v78 = width;
  v79 = height;
  v83 = v18;
  v82 = v17;
  v77 = 0LL;
  if ( CMILMatrix::Is2DAffineOrNaN((CMILMatrix *)&si128, (bool)a2) )
  {
    v19 = sqrtf_0(
            (float)(*(float *)si128.m128i_i32 * *(float *)si128.m128i_i32)
          + (float)(*(float *)&si128.m128i_i32[1] * *(float *)&si128.m128i_i32[1]));
    v20 = sqrtf_0(
            (float)(*(float *)v81.m128i_i32 * *(float *)v81.m128i_i32)
          + (float)(*(float *)&v81.m128i_i32[1] * *(float *)&v81.m128i_i32[1]));
    v87[1].width = v19;
    v87[1].height = v20;
  }
  else
  {
    *(_QWORD *)v70 = si128.m128i_i64[0];
    *(_DWORD *)&v70[8] = si128.m128i_i32[3];
    *(_QWORD *)&v70[12] = v81.m128i_i64[0];
    v72 = v83.m128i_i64[0];
    v71 = v81.m128i_i32[3];
    v73 = v83.m128i_i32[3];
    Matrix3x3::Get2DScaleDimensionsWithPerspective(v70, &v87[1], &v87[1].height, &v77);
  }
  v93 = 0LL;
  v92 = 0LL;
  v21 = CBrushRenderingGraph::GatherEffectInputs(this, (__int64)v7, a3, &v92);
  InputBrushParameters = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x40C,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
      (const char *)(unsigned int)v21,
      v60);
LABEL_61:
    std::vector<EffectInput>::_Tidy((__int64)&v92);
    return (unsigned int)InputBrushParameters;
  }
  else
  {
    v23 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)&v92 + 1) - v92) >> 4);
    *(_QWORD *)v90 = v23;
    if ( v23 == -1 )
      goto LABEL_59;
    v91 = v92;
    if ( !(_QWORD)v92 )
    {
      if ( v23 )
        goto LABEL_59;
    }
    v24 = (unsigned int)v10;
    v66 = (CCachedImageProducer *)(unsigned int)v10;
    v86 = 0LL;
    v85 = 0LL;
    if ( (_DWORD)v10 )
    {
      std::vector<EffectInput>::_Reallocate<0>((__int64)&v85, &v66);
      v25 = (unsigned int)v10;
      do
      {
        std::vector<EffectInput>::emplace_back<std::nullptr_t>(&v85);
        --v25;
      }
      while ( v25 );
    }
    v26 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)&v85 + 1) - v85) >> 4);
    v68 = v26;
    if ( v26 == -1 || (v69 = (CCachedImageProducer *)v85) == 0LL && v26 )
    {
LABEL_59:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v27 = (EffectInput *)v100;
    v28 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * v10);
    v99 = 0LL;
    v29 = 4LL;
    v30 = 4LL;
    v94 = v28;
    do
    {
      EffectInput::EffectInput(v27);
      v27 = (EffectInput *)((char *)v27 + 112);
      --v30;
    }
    while ( v30 );
    v99 = (unsigned int)v10;
    v97 = &v99;
    v31 = 0;
    v98 = 1;
    while ( 1 )
    {
      v65 = v31;
      if ( v31 >= *(_DWORD *)(v94 + 260) )
        break;
      v32 = *((_QWORD *)this + 18);
      v33 = 112LL * v31;
      v34 = 44LL * v31;
      v35 = *(_QWORD *)(v32 + 8 * v24);
      v36 = (__int64 *)&v100[v33];
      v77 = v34;
      if ( *(_BYTE *)(v35 + v34 + 84) )
      {
        v37 = *(unsigned int *)(v35 + v34 + 80);
        if ( v37 >= v68 )
          goto LABEL_59;
        v66 = v69;
        v75 = 112 * v37;
        v38 = (CCachedImageProducer *)((char *)v69 + 112 * v37);
        if ( !*((_QWORD *)v38 + 1) )
        {
          InputBrushParameters = CBrushRenderingGraph::RenderSubgraphToIntermediateInternal(
                                   (_DWORD)this,
                                   *(_QWORD *)(v32 + 8 * v37),
                                   (_DWORD)v67,
                                   (unsigned int)v87,
                                   (__int64)v90,
                                   (__int64)&v68);
          if ( InputBrushParameters < 0 )
          {
            v59 = 798LL;
LABEL_63:
            wil::details::in1diag3::Return_Hr(
              (wil::details::in1diag3 *)retaddr,
              (void *)v59,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
              (const char *)(unsigned int)InputBrushParameters,
              v61);
            v57 = 1419LL;
            goto LABEL_53;
          }
          if ( v89 && EffectInput::RequiresWrapping(v38) )
          {
            v39 = *(unsigned int *)((char *)v66 + v75 + 100);
            if ( v39 >= v68 )
              goto LABEL_59;
            v40 = (__int64)v69 + 112 * v39;
            if ( v38 == (const struct EffectInput *)v40
              || EffectInput::RequiresWrapping((CCachedImageProducer *)((char *)v69 + 112 * v39)) )
            {
              v75 = *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * *(unsigned int *)(v40 + 100));
              CurrentVisual = CDrawingContext::GetCurrentVisual(v67);
              v41 = (CCachedImageProducer *)MIDL_user_allocate(0x68uLL);
              v66 = v41;
              v42 = v41;
              if ( !v41 )
              {
                InputBrushParameters = -2147024882;
                wil::details::in1diag3::Return_Hr(
                  (wil::details::in1diag3 *)retaddr,
                  (void *)0x27,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectintermediateproducer.cpp",
                  (const char *)0x8007000ELL,
                  v61);
                v59 = 842LL;
                goto LABEL_63;
              }
              CCachedImageProducer::CCachedImageProducer(v41);
              *((_QWORD *)v42 + 2) = &CWindowBackgroundBitmapProducer::`vftable'{for `IBitmapRealization'};
              v43 = CurrentVisual;
              *(_QWORD *)v42 = &CEffectIntermediateProducer::`vftable'{for `CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>'};
              *((_QWORD *)v42 + 9) = v75;
              *((_QWORD *)v42 + 10) = v43;
              *((struct D2D_SIZE_F *)v42 + 11) = v87[0];
              *((struct D2D_SIZE_F *)v42 + 12) = v87[1];
              CMILRefCountImpl::AddReference((CCachedImageProducer *)((char *)v42 + 8));
              CEffectIntermediateProducer::Initialize(v42, *(struct IBitmapRealization **)(v40 + 8));
              memset(v70, 0, 17);
              v44 = *(void (__fastcall **)(CCachedImageProducer *, _BYTE *))(*(_QWORD *)v42 + 64LL);
              wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v70[8]);
              v44(v66, &v70[8]);
              v45 = v66;
              CurrentVisual = *(struct CVisual **)v70;
              *(_QWORD *)v70 = v66;
              (*(void (__fastcall **)(CCachedImageProducer *))(*(_QWORD *)v66 + 8LL))(v66);
              if ( CurrentVisual )
                (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)CurrentVisual + 16LL))(CurrentVisual);
              CDrawListBitmap::operator=(v40, v70);
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v70[8]);
              wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(v70);
              if ( v38 != (const struct EffectInput *)v40 )
                CDrawListBitmap::operator=(v38, v40);
              CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v45);
            }
            else
            {
              CDrawListBitmap::operator=(v38, v40);
            }
            v31 = v65;
          }
          v36 = (__int64 *)&v100[v33];
        }
      }
      v46 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * v24);
      v47 = *(unsigned int *)(v46 + v77 + 80);
      if ( *(_BYTE *)(v46 + v77 + 84) )
      {
        if ( v47 >= v68 )
          goto LABEL_59;
        v48 = (__int64 *)((char *)v69 + 112 * v47);
      }
      else
      {
        if ( v47 >= *(_QWORD *)v90 )
          goto LABEL_59;
        v48 = (__int64 *)(v91 + 112 * v47);
      }
      v49 = *v48;
      v50 = *v36;
      *v36 = *v48;
      if ( v49 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 8LL))(v49);
      if ( v50 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
      v51 = v48[1];
      v52 = *(_QWORD *)&v100[v33 + 8];
      *(_QWORD *)&v100[v33 + 8] = v51;
      if ( v51 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51);
      if ( v52 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
      v7 = v67;
      v100[v33 + 16] = *((_BYTE *)v48 + 16);
      *(_OWORD *)&v100[v33 + 24] = *(_OWORD *)(v48 + 3);
      *(_DWORD *)&v100[v33 + 40] = *((_DWORD *)v48 + 10);
      v53 = *((_BYTE *)v48 + 44);
      v100[v33 + 44] = v53;
      v100[v33 + 45] = *((_BYTE *)v48 + 45);
      *(_OWORD *)&v100[v33 + 48] = *((_OWORD *)v48 + 3);
      *(_OWORD *)&v100[v33 + 64] = *((_OWORD *)v48 + 4);
      *(_OWORD *)&v100[v33 + 80] = *((_OWORD *)v48 + 5);
      *(_OWORD *)&v100[v33 + 96] = *((_OWORD *)v48 + 6);
      *(_OWORD *)&v100[v33 + 48] = *((_OWORD *)v48 + 3);
      if ( !v53 )
      {
        InputBrushParameters = CBrushRenderingGraph::GetInputBrushParameters(
                                 this,
                                 v7,
                                 v87,
                                 v74,
                                 v31,
                                 (struct EffectInput *)&v100[v33]);
        if ( InputBrushParameters < 0 )
        {
          v57 = 1430LL;
LABEL_53:
          wil::details::in1diag3::Return_Hr(
            (wil::details::in1diag3 *)retaddr,
            (void *)v57,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
            (const char *)(unsigned int)InputBrushParameters,
            v63);
          wil::details::in1diag3::Return_Hr(
            (wil::details::in1diag3 *)retaddr,
            (void *)0x438,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
            (const char *)(unsigned int)InputBrushParameters,
            v64);
          CBrushRenderingGraph::CleanupEffectStage((struct EffectStage *)&v99);
          v58 = (EffectInput *)&v101;
          do
          {
            v58 = (EffectInput *)((char *)v58 - 112);
            EffectInput::~EffectInput(v58);
            --v29;
          }
          while ( v29 );
LABEL_55:
          std::vector<EffectInput>::_Tidy((__int64)&v85);
          goto LABEL_61;
        }
      }
      ++HIDWORD(v99);
      ++v31;
    }
    updated = CBrushRenderingGraph::UpdateDrawListCache(this, v7, v96, (struct EffectStage *)&v99, a5, v95);
    InputBrushParameters = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x442,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
        (const char *)(unsigned int)updated,
        v62);
      gsl::final_action__CBrushRenderingGraph::RenderSubgraphs_::_2_::_lambda_1___::_final_action__CBrushRenderingGraph::RenderSubgraphs_::_2_::_lambda_1___(&v97);
      `vector destructor iterator'(v100, 0x70uLL, 4uLL, (void (*)(void *))EffectInput::~EffectInput);
      goto LABEL_55;
    }
    CBrushRenderingGraph::CleanupEffectStage((struct EffectStage *)&v99);
    v55 = (EffectInput *)&v101;
    do
    {
      v55 = (EffectInput *)((char *)v55 - 112);
      EffectInput::~EffectInput(v55);
      --v29;
    }
    while ( v29 );
    std::vector<EffectInput>::_Tidy((__int64)&v85);
    std::vector<EffectInput>::_Tidy((__int64)&v92);
    return 0LL;
  }
}
