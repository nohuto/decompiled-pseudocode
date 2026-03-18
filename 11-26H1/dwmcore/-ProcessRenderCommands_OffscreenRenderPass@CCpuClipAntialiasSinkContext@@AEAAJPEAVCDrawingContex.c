/*
 * XREFs of ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C0E10
 * Callers:
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1800C1C44 (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800C2D20 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800C3820 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x180008CF0 (-Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV-$unique_ptr@V.c)
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x18000A17C (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180019610 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001F080 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??R?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@QEBAXPEAVUVData@CCpuClipAntialiasSink@@@Z @ 0x18002D0E8 (--R-$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@QEBAXPEAVUVData@CCpuClipAntialiasSink@@.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18003731C (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180037348 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180038C0C (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039FA0 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18003A7BC (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005D0FC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E5F0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18007C360 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@PEAPEAVUVData@1@@Z @ 0x1800BFFA0 (-CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV-$span@$$CBUPrimitiveU.c)
 *     ??R?$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z @ 0x1800C24BC (--R-$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1800C4514 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     ?allocate@?$allocator@U?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@2@_K@Z @ 0x1800C4594 (-allocate@-$allocator@U-$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU-$_Li.c)
 *     ?CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z @ 0x1800C47E0 (-CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z.c)
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C48D0 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 *     ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@_N@Z @ 0x1800C4BB0 (-InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatri.c)
 *     ?resize@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x180141D88 (-resize@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy.c)
 *     ??1?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180144964 (--1-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@deta.c)
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180144998 (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_.c)
 *     ?CalcBoundingRect@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUD2D_RECT_F@@@Z @ 0x180173AB0 (-CalcBoundingRect@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUD2D_RECT_F@@@Z.c)
 *     ??$emplace@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@$$T$$T_N_N@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@V?$basic_iterator@$$CBUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@$$T3_N4@Z @ 0x180188130 (--$emplace@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@$$T$$T_N_N@-$vector_facade@USi.c)
 *     gsl::final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_1___::_final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_1___ @ 0x1801CAC08 (gsl--final_action__ShadowHelpers--GenerateMaskIntermediate_--_8_--_lambda_1___--_final_action__S.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::ProcessRenderCommands_OffscreenRenderPass(
        __int64 a1,
        CDrawingContext *a2,
        unsigned int a3,
        __int64 **a4,
        __int64 *a5)
{
  __int64 *v6; // r15
  __int64 **v8; // r12
  __int64 v9; // rdx
  __int64 *v10; // r14
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  float v13; // xmm0_4
  float v14; // xmm6_4
  unsigned int v15; // edi
  float *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  float v19; // xmm15_4
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rax
  float v28; // xmm13_4
  float v29; // xmm14_4
  int v30; // edi
  __int64 v31; // rcx
  CSurfaceDrawListBrush *v32; // rdx
  int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // edi
  int v36; // eax
  __int64 *v37; // rsi
  __int64 v38; // r8
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // r12
  __int64 *v42; // r15
  float *v43; // r14
  struct D2D_MATRIX_3X2_F *v44; // r9
  int v45; // xmm7_4
  __int64 *v46; // r14
  __int64 *v47; // r15
  float v48; // xmm8_4
  FLOAT bottom; // xmm9_4
  FLOAT right; // xmm10_4
  FLOAT top; // xmm11_4
  FLOAT left; // xmm12_4
  __int64 v53; // rax
  int BatchCommand; // r15d
  unsigned int v55; // edx
  CBatchCommand *v56; // rcx
  __int64 v57; // r8
  CBatchCommand *v58; // rcx
  _OWORD *v59; // rax
  unsigned int v60; // edx
  float v61; // xmm3_4
  float v62; // xmm4_4
  void **v63; // r9
  __int64 v64; // rcx
  void **v65; // r14
  __int64 v66; // xmm0_8
  void *v67; // rcx
  int v68; // eax
  int v69; // eax
  int v70; // r14d
  volatile signed __int32 *v71; // r14
  __int64 **v72; // rdi
  __int64 *v73; // rbx
  __int64 **v74; // rax
  __int64 *v75; // r15
  __int64 **v76; // rcx
  __int64 *v77; // r15
  unsigned __int64 v78; // r15
  __int64 v79; // rax
  int v80; // ecx
  __int64 *v81; // rcx
  void **v82; // r14
  volatile signed __int32 *v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rax
  float v89[4]; // [rsp+58h] [rbp-B0h] BYREF
  CBatchCommand *v90; // [rsp+68h] [rbp-A0h] BYREF
  void **v91; // [rsp+70h] [rbp-98h] BYREF
  struct D2D_RECT_F v92; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v93; // [rsp+88h] [rbp-80h] BYREF
  CSurfaceDrawListBrush *v94; // [rsp+90h] [rbp-78h] BYREF
  __int64 v95; // [rsp+98h] [rbp-70h] BYREF
  __int64 **v96; // [rsp+A0h] [rbp-68h]
  struct D2D_RECT_F v97; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v98; // [rsp+B8h] [rbp-50h]
  __int128 v99; // [rsp+C0h] [rbp-48h] BYREF
  char v100; // [rsp+D0h] [rbp-38h]
  __int64 v101; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v102; // [rsp+E0h] [rbp-28h]
  _QWORD *v103; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v104; // [rsp+F0h] [rbp-18h] BYREF
  float v105; // [rsp+100h] [rbp-8h]
  float v106; // [rsp+104h] [rbp-4h]
  void ***v107; // [rsp+108h] [rbp+0h] BYREF
  void **v108; // [rsp+110h] [rbp+8h] BYREF
  __int64 v109; // [rsp+118h] [rbp+10h]
  __int64 *v110; // [rsp+120h] [rbp+18h]
  __int64 v111; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v112; // [rsp+130h] [rbp+28h]
  __int64 v113; // [rsp+138h] [rbp+30h]
  struct D2D_RECT_F v114; // [rsp+148h] [rbp+40h] BYREF
  CSurfaceDrawListBrush *v115; // [rsp+158h] [rbp+50h] BYREF
  __int64 v116; // [rsp+160h] [rbp+58h]
  _OWORD *v117; // [rsp+168h] [rbp+60h]
  CDrawingContext *v118; // [rsp+170h] [rbp+68h] BYREF
  char v119; // [rsp+178h] [rbp+70h]
  __int64 v120; // [rsp+188h] [rbp+80h] BYREF
  int v121; // [rsp+190h] [rbp+88h]
  __int64 v122; // [rsp+1B8h] [rbp+B0h]
  __int64 v123; // [rsp+1C0h] [rbp+B8h]
  int v124; // [rsp+1C8h] [rbp+C0h]
  void *v125; // [rsp+1D0h] [rbp+C8h]
  char v126; // [rsp+1D9h] [rbp+D1h]
  FLOAT v127; // [rsp+1E8h] [rbp+E0h] BYREF
  FLOAT v128; // [rsp+1ECh] [rbp+E4h]
  _BYTE v129[12]; // [rsp+1F0h] [rbp+E8h]
  FLOAT v130; // [rsp+1FCh] [rbp+F4h]
  __int128 v131; // [rsp+200h] [rbp+F8h]
  __int64 v132; // [rsp+210h] [rbp+108h]
  float v133; // [rsp+218h] [rbp+110h]
  int v134; // [rsp+21Ch] [rbp+114h]
  int v135; // [rsp+220h] [rbp+118h]
  __int64 v136; // [rsp+224h] [rbp+11Ch]
  float *v137; // [rsp+238h] [rbp+130h] BYREF
  _BYTE *v138; // [rsp+240h] [rbp+138h]
  char *v139; // [rsp+248h] [rbp+140h]
  _BYTE v140[64]; // [rsp+250h] [rbp+148h] BYREF
  char v141; // [rsp+290h] [rbp+188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+390h] [rbp+288h]

  v6 = a5;
  v113 = *((_QWORD *)a2 + 4);
  v8 = a4;
  v9 = a5[1] - *a5;
  v10 = (__int64 *)(*(_QWORD *)(a1 + 16) + 432LL * a3);
  v137 = (float *)v140;
  v138 = v140;
  v102 = v10;
  v96 = a4;
  v110 = a5;
  v139 = &v141;
  detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::resize(
    &v137,
    0xAAAAAAAAAAAAAAABuLL * (v9 >> 2));
  v11 = *a5;
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((v6[1] - *v6) >> 2);
  if ( (v12 & 0x8000000000000000uLL) != 0LL )
    v13 = (float)(int)(v12 & 1 | (v12 >> 1)) + (float)(int)(v12 & 1 | (v12 >> 1));
  else
    v13 = (float)(int)v12;
  v14 = 0.0;
  v15 = 0;
  *(float *)&v91 = v13 + v13;
  if ( v12 )
  {
    v16 = v137;
    v17 = 0LL;
    do
    {
      v18 = 2 * v17;
      CCpuClipAntialiasSink::CalcBoundingRect(*v10, 1LL, v11 + 12 * v17, &v16[4 * v17]);
      v16 = v137;
      ++v15;
      v11 = *a5;
      v17 = v15;
      v14 = fmaxf(v14, v137[2 * v18 + 3] - v137[2 * v18 + 1]);
    }
    while ( v15 < 0xAAAAAAAAAAAAAAABuLL * ((a5[1] - *a5) >> 2) );
    v8 = v96;
  }
  v89[0] = 0.0;
  v117 = (_OWORD *)(a1 + 904);
  LODWORD(v90) = 0;
  CMILMatrix::Get2DScaleDimensionsWithPerspective(a1 + 904, v89, (float *)&v90, 0LL);
  v19 = fmaxf(v89[0], *(float *)&v90);
  HIDWORD(v91) = ceilf_0(v19 * v14);
  v20 = *((_QWORD *)a2 + 2);
  v95 = 0LL;
  v21 = (*(__int64 (__fastcall **)(_QWORD *))(v20 + 16))((_QWORD *)a2 + 2);
  LODWORD(v92.right) = 40;
  *(_QWORD *)&v92.left = "DWM CPU-clip antialias sink intermediate";
  v22 = CDrawingContext::PushOffScreenRenderingLayer(
          (__int64)a2,
          (__int64)&v92,
          (unsigned int *)&v91,
          *(_DWORD *)(v21 + 8),
          1,
          &v95);
  v23 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)v22);
    if ( v95 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v95 + 16LL))(v95);
    if ( (v138 - (_BYTE *)v137) >> 4 )
      detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
        &v137,
        0LL);
    goto LABEL_73;
  }
  v24 = v95;
  v118 = a2;
  v119 = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v95 + 96LL))(v95, 1LL);
  v100 = 0;
  v99 = 0LL;
  wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=(
    (__int64 *)&v99 + 1,
    (v24 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v24 >> 64));
  v25 = *((_QWORD *)&v99 + 1);
  LODWORD(v26) = 0;
  if ( *((_QWORD *)&v99 + 1) )
    v26 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD **))(**((_QWORD **)&v99 + 1) + 32LL))(
                       *((_QWORD *)&v99 + 1),
                       &v103);
  HIDWORD(v26) = 0;
  v28 = 1.0 / (float)(int)v26;
  if ( v25 )
    v26 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v25 + 32LL))(v25, &v103);
  *(_QWORD *)&v92.left = 0LL;
  v94 = 0LL;
  *(_QWORD *)&v97.right = 0LL;
  *(_QWORD *)&v97.left = &v94;
  LOWORD(v89[0]) = SamplerMode::k_ClampClampLinear;
  LOBYTE(v98) = 1;
  v29 = 1.0 / (float)SHIDWORD(v26);
  BYTE2(v89[0]) = 1;
  *(_QWORD *)&v92.right = v91;
  v114 = v92;
  v30 = CSurfaceDrawListBrush::CreateWithContentRect((__int64 *)&v99, (__int16 *)v89, &v114.left, (__int64)&v97.right);
  if ( (_BYTE)v98 )
  {
    v31 = *(_QWORD *)&v97.right;
    v32 = **(CSurfaceDrawListBrush ***)&v97.left;
    **(_QWORD **)&v97.left = *(_QWORD *)&v97.right;
    if ( v32 )
      std::default_delete<CSurfaceDrawListBrush>::operator()(v31, v32);
  }
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)v30);
    if ( v94 )
      std::default_delete<CSurfaceDrawListBrush>::operator()(v87, v94);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v99 + 1);
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((__int64 *)&v99);
    CDrawingContext::PopLayer(a2);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    if ( (v138 - (_BYTE *)v137) >> 4 )
      detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
        &v137,
        0LL);
    v23 = v30;
LABEL_73:
    detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v137);
    return v23;
  }
  v115 = v94;
  v101 = 0LL;
  *(_QWORD *)&v92.right = &v115;
  *(_QWORD *)&v92.left = 1LL;
  v33 = CCommonRenderingEffectFactory::CreateRenderingEffect((__int64)&v103, (__int128 *)&v92, &v101);
  v35 = v33;
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)v33);
    std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v94);
LABEL_101:
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v101);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v99);
    gsl::final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_1___::_final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_1___(&v118);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v95);
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::~vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>(&v137);
    return v35;
  }
  if ( v94 )
    std::default_delete<CSurfaceDrawListBrush>::operator()(v34, v94);
  v36 = CDrawingContext::ApplyRenderStateInternal(a2, 1);
  v35 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x165,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)v36);
    goto LABEL_101;
  }
  v37 = *v8;
  v38 = 0LL;
  v39 = v101;
  v89[0] = 0.0;
LABEL_21:
  v37 = (__int64 *)*v37;
  while ( 1 )
  {
    v40 = *v6;
    if ( (unsigned int)v38 >= 0xAAAAAAAAAAAAAAABuLL * ((v6[1] - *v6) >> 2) || v37 == *v8 )
      break;
    v112 = v37;
    v41 = v40 + 12LL * (unsigned int)v38;
    v42 = v37;
    while ( v37 != *v96 && *(float *)(v41 + 8) > *((float *)v37 + 6) && *((float *)v37 + 7) > *(float *)(v41 + 4) )
      v37 = (__int64 *)*v37;
    if ( v37 == v42 )
    {
      v6 = v110;
      v8 = v96;
      goto LABEL_21;
    }
    v43 = &v137[4 * (unsigned int)v38];
    v92.top = 0.0;
    v92.left = (float)(int)v38 + (float)(int)v38;
    v92.right = v92.left + 1.0;
    v92.bottom = ceilf_0((float)(v43[3] - v43[1]) * v19);
    v97 = 0LL;
    v98 = 0LL;
    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)v43, &v92, &v97, v44);
    v45 = HIDWORD(v98);
    v46 = v42;
    v47 = v102;
    v48 = *(float *)&v98;
    bottom = v97.bottom;
    right = v97.right;
    top = v97.top;
    left = v97.left;
    v103 = v102 + 1;
    while ( v46 != v37 )
    {
      v53 = *((unsigned int *)v46 + 4);
      v93 = (volatile signed __int32 *)v47[1];
      v116 = 5 * v53;
      v111 = *(_QWORD *)&v93[10 * v53];
      if ( (*(int (__fastcall **)(_QWORD, CDrawingContext *))(**(_QWORD **)(v111 + 24) + 48LL))(
             *(_QWORD *)(v111 + 24),
             a2) >= 0 )
      {
        v90 = 0LL;
        *((_QWORD *)&v104 + 1) = 0LL;
        *(_QWORD *)&v104 = &v90;
        LOBYTE(v105) = 1;
        BatchCommand = CDrawListBatchManager::CreateBatchCommand(
                         (CDrawListBatchManager *)(v113 + 24),
                         (struct CBatchCommand **)&v104 + 1);
        if ( LOBYTE(v105) )
        {
          v55 = DWORD2(v104);
          v56 = *(CBatchCommand **)v104;
          *(_QWORD *)v104 = *((_QWORD *)&v104 + 1);
          if ( v56 )
            CBatchCommand::`scalar deleting destructor'(v56, v55);
        }
        if ( BatchCommand < 0 )
        {
          v85 = 405LL;
LABEL_76:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v85,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
            (const char *)(unsigned int)BatchCommand);
          if ( v90 )
            std::default_delete<CBatchCommand>::operator()(v86, v90);
          if ( v39 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v99 + 1);
          wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((__int64 *)&v99);
          CDrawingContext::PopLayer(a2);
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          if ( (v138 - (_BYTE *)v137) >> 4 )
            detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
              &v137,
              0LL);
          v23 = BatchCommand;
          goto LABEL_73;
        }
        v136 = 0x28003F800000LL;
        v127 = left;
        v128 = top;
        *(FLOAT *)&v129[8] = right;
        v130 = bottom;
        v57 = (unsigned int)v93[2 * v116 + 3];
        v133 = v48;
        v134 = v45;
        *(_QWORD *)v129 = 0LL;
        v131 = 0LL;
        v132 = 1065353216LL;
        v135 = 0;
        BYTE4(v136) = 8;
        CBatchCommand::InitializeForRendering(v90, v111, v57);
        v58 = v90;
        *((_DWORD *)v90 + 24) = 1;
        *(_QWORD *)((char *)v58 + 100) = *(__int64 *)((char *)v46 + 20);
        *((_DWORD *)v58 + 27) = *((_DWORD *)v46 + 7);
        v59 = v117;
        *((_OWORD *)v58 + 7) = *v117;
        *((_OWORD *)v58 + 8) = v59[1];
        *((_OWORD *)v58 + 9) = v59[2];
        *((_OWORD *)v58 + 10) = v59[3];
        *((_DWORD *)v58 + 44) = *((_DWORD *)v59 + 16);
        BatchCommand = CD2DContext::SubmitRenderCommand((CD2DContext *)(v113 + 16));
        if ( BatchCommand < 0 )
        {
          v85 = 421LL;
          goto LABEL_76;
        }
        if ( v90 )
          CBatchCommand::`scalar deleting destructor'(v90, v60);
        v47 = v102;
      }
      v46 = (__int64 *)*v46;
    }
    *(float *)&v104 = v28;
    *((float *)&v104 + 3) = v29;
    v91 = 0LL;
    *(_WORD *)((char *)&v134 + 1) = 0;
    HIBYTE(v134) = 0;
    *(_QWORD *)((char *)&v104 + 4) = 0LL;
    v105 = 0.0 - (float)(v28 * 0.0);
    v106 = 0.0 - (float)(v29 * 0.0);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v107,
      (const struct D2D1::Matrix3x2F *)&v97,
      (const struct D2D1::Matrix3x2F *)&v104);
    v61 = *(float *)&v107;
    v62 = *((float *)&v107 + 1);
    *(_QWORD *)&v129[4] = v108;
    *(_QWORD *)&v131 = v109;
    v107 = &v91;
    *(_DWORD *)v129 = (_DWORD)v63;
    *(_QWORD *)&v114.right = &v127;
    v130 = *(float *)&v63;
    *((float *)&v131 + 3) = (float)(v92.left + 0.5) * v28;
    *(float *)&v132 = (float)(v92.top + 0.5) * v29;
    v108 = v63;
    LOBYTE(v134) = (_BYTE)v63 + 1;
    LOBYTE(v109) = (_BYTE)v63 + 1;
    *(_QWORD *)&v114.left = (unsigned int)((_DWORD)v63 + 1);
    v64 = *v47;
    *((float *)&v132 + 1) = (float)(v92.right - 0.5) * v28;
    v133 = (float)(v92.bottom - 0.5) * v29;
    v127 = v61;
    v128 = v62;
    DWORD2(v131) = 1065353216;
    CCpuClipAntialiasSink::CreateUVData(
      v64,
      (_DWORD)v63 + 1,
      v41,
      (unsigned int)((_DWORD)v63 + 2),
      (_DWORD)v63 + 1,
      (unsigned __int64 *)&v114,
      &v108);
    if ( (_BYTE)v109 )
    {
      v65 = *v107;
      *v107 = v108;
      if ( v65 )
      {
        std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v65 + 2);
        operator delete(v65, 0x18uLL);
      }
    }
    memset_0(&v120, 0, 0x58uLL);
    v66 = *(_QWORD *)v41;
    v121 = 4;
    v120 = v39;
    v67 = *v91;
    v122 = *v47;
    v68 = *(_DWORD *)(v41 + 8);
    v125 = v67;
    v124 = v68;
    v123 = v66;
    v126 = 1;
    v93 = 0LL;
    v69 = CCpuClipAntialiasDrawListEntry::Create((__int64)&v120, (__int64 *)&v91, (__int64 *)&v93);
    v70 = v69;
    if ( v69 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C9,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
        (const char *)(unsigned int)v69);
      v84 = v93;
      if ( v93 )
        CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v93);
      if ( v91 )
        std::default_delete<CCpuClipAntialiasSink::UVData>::operator()((__int64)v84, v91);
      if ( v39 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v99 + 1);
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((__int64 *)&v99);
      CDrawingContext::PopLayer(a2);
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      if ( (v138 - (_BYTE *)v137) >> 4 )
        detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
          &v137,
          0LL);
      v23 = v70;
      goto LABEL_73;
    }
    v71 = v93;
    v111 = v47[2];
    detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::emplace<CCpuClipAntialiasDrawListEntry *,float,enum BlendMode::Enum,std::nullptr_t,std::nullptr_t,bool,bool>(
      (_DWORD)v47 + 8,
      (unsigned int)&v118,
      (unsigned int)&v111,
      (_DWORD)v93,
      LODWORD(FLOAT_1_0));
    v72 = (__int64 **)v112;
    v73 = 0LL;
    v74 = (__int64 **)v112[1];
    *v74 = v37;
    v37[1] = (__int64)v74;
    do
    {
      v75 = *v72;
      std::_Deallocate<16>(v72, 32LL);
      v73 = (__int64 *)((char *)v73 + 1);
      v72 = (__int64 **)v75;
    }
    while ( v75 != v37 );
    v76 = v96;
    v77 = v102;
    v39 = v101;
    v112 = v73;
    v96[1] = (__int64 *)((char *)v96[1] - (unsigned __int64)v73);
    v24 = v95;
    v78 = 0xCCCCCCCCCCCCCCCDuLL * ((v77[2] - *v103) >> 3) - 1;
    if ( v76[1] == (__int64 *)0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("list too long");
    v79 = std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
    v38 = (unsigned int)++LODWORD(v89[0]);
    *(_DWORD *)(v79 + 16) = v78;
    *(_QWORD *)(v79 + 20) = *(_QWORD *)v41;
    v80 = *(_DWORD *)(v41 + 8);
    v8 = v96;
    *(_DWORD *)(v79 + 28) = v80;
    v8[1] = (__int64 *)((char *)v8[1] + 1);
    v81 = (__int64 *)v37[1];
    *(_QWORD *)v79 = v37;
    *(_QWORD *)(v79 + 8) = v81;
    v37[1] = v79;
    *v81 = v79;
    if ( v71 )
    {
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v71);
      v38 = LODWORD(v89[0]);
    }
    v82 = v91;
    v6 = v110;
    if ( v91 )
    {
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v91 + 2);
      operator delete(v82, 0x18uLL);
      v38 = LODWORD(v89[0]);
    }
  }
  if ( v39 )
    (*(void (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(*(_QWORD *)v39 + 8LL))(
      v39,
      v40,
      v38,
      0xAAAAAAAAAAAAAAABuLL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v99 + 1);
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((__int64 *)&v99);
  CDrawingContext::PopLayer(a2);
  if ( g_LockAndReadCpuClipAntialiasSinkTexture )
  {
    v88 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 144LL))(v24);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v88 + 112LL))(v88, (_QWORD *)a2 + 2);
  }
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( (v138 - (_BYTE *)v137) >> 4 )
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
      &v137,
      0LL);
  detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v137);
  return 0LL;
}
