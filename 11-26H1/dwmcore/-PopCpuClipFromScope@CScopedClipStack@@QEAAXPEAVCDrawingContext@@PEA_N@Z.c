/*
 * XREFs of ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800C2D20
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800C70F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x18000A17C (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E5F0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear_region@?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C0D10 (-clear_region@-$vector_facade@UBounds@CCpuClipAntialiasSink@@V-$buffer_impl@UBounds@CCpuClipAnti.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C0E10 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ??R?$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z @ 0x1800C24BC (--R-$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z.c)
 *     ??1?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@QEAA@XZ @ 0x1800C2540 (--1-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBatchCommand@@@std@@@std@@QEAA@XZ.c)
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_2_::_lambda_1___ @ 0x1800C2650 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderCommand___--_Sort.c)
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___ @ 0x1800C275C (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderComm_ea_1800C275C.c)
 *     ??1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x1800C37D0 (--1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1800C4514 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     ?allocate@?$allocator@U?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@2@_K@Z @ 0x1800C4594 (-allocate@-$allocator@U-$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU-$_Li.c)
 *     ?reserve_region@?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUBounds@CCpuClipAntialiasSink@@_K0@Z @ 0x1800C45DC (-reserve_region@-$vector_facade@UBounds@CCpuClipAntialiasSink@@V-$buffer_impl@UBounds@CCpuClipAn.c)
 *     ?CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z @ 0x1800C47E0 (-CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z.c)
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C48D0 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 *     ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@_N@Z @ 0x1800C4BB0 (-InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatri.c)
 *     ?clear@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C560C (-clear@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkR.c)
 *     ??$move@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1802091E4 (--$move@V-$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V-$checked_array_iterator.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??$emplace_back@GGMGM@?$list@UBounds@CCpuClipAntialiasSink@@V?$allocator@UBounds@CCpuClipAntialiasSink@@@std@@@std@@QEAAAEAUBounds@CCpuClipAntialiasSink@@$$QEAG0$$QEAM01@Z @ 0x18025AEAC (--$emplace_back@GGMGM@-$list@UBounds@CCpuClipAntialiasSink@@V-$allocator@UBounds@CCpuClipAntiali.c)
 *     ??$emplace_front@IAEAUBounds@CCpuClipAntialiasSink@@@?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@QEAAAEAUSinkRenderCommand@CCpuClipAntialiasSinkContext@@$$QEAIAEAUBounds@CCpuClipAntialiasSink@@@Z @ 0x18025AEE8 (--$emplace_front@IAEAUBounds@CCpuClipAntialiasSink@@@-$list@USinkRenderCommand@CCpuClipAntialias.c)
 *     ??$move@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x18025B13C (--$move@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$checked_array_iter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScopedClipStack::PopCpuClipFromScope(CScopedClipStack *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v3; // rax
  CScopedClipStack *v4; // r15
  bool *v5; // r13
  unsigned int v6; // r12d
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // r15d
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rcx
  struct CBatchCommand *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  struct CBatchCommand *v17; // r12
  int v18; // r13d
  __int64 i; // rsi
  __int64 *v20; // rcx
  struct CBatchCommand *v21; // rax
  __int64 v22; // rdx
  struct CBatchCommand *v23; // rbx
  float v24; // xmm7_4
  float v25; // xmm6_4
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // xmm0_4
  __int64 *v29; // rcx
  struct CBatchCommand *v30; // rsi
  struct CBatchCommand *v31; // rsi
  _QWORD *v32; // rcx
  _QWORD *v33; // rbx
  __int64 v34; // rcx
  _QWORD **v35; // rcx
  _QWORD *v36; // rcx
  _QWORD *v37; // rbx
  __int64 v38; // r15
  __int64 v39; // rbx
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rsi
  CCpuClipAntialiasSinkContext::SinkEntry *v42; // rdi
  __int64 v43; // r9
  __int64 v44; // r8
  CCpuClipAntialiasSinkContext::SinkEntry *v45; // rbx
  __int64 v46; // rbx
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // r9
  __int64 v51; // r8
  __int64 v52; // rbx
  __int64 v53; // rcx
  bool v54; // r14
  int v55; // eax
  __int64 *v56; // rcx
  unsigned __int64 v57; // rax
  float v58; // xmm2_4
  __m128i v59; // xmm3
  __int64 *v60; // rbx
  unsigned __int64 v61; // xmm6_8
  unsigned int v62; // esi
  float v63; // xmm4_4
  float v64; // xmm0_4
  __int64 v65; // rax
  __m128 v66; // xmm0
  __int64 v67; // rax
  _BYTE *v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rbx
  int v71; // eax
  __int64 v72; // r8
  __int64 v73; // r8
  __int64 v74; // r13
  int v75; // eax
  int BatchCommand; // esi
  __int64 *v77; // rbx
  __int64 v78; // r12
  unsigned int v79; // edx
  CBatchCommand *v80; // rcx
  __int64 v81; // rsi
  CBatchCommand *v82; // rcx
  int v83; // eax
  unsigned int v84; // edx
  __int64 v85; // rcx
  _QWORD **v86; // rcx
  _QWORD *v87; // rcx
  _QWORD *v88; // rbx
  __int64 v89; // rdx
  unsigned __int64 v90; // r8
  _QWORD **v91; // rcx
  _QWORD *v92; // rcx
  _QWORD *v93; // rbx
  int v94[2]; // [rsp+20h] [rbp-E0h]
  int v95; // [rsp+28h] [rbp-D8h]
  __int16 v96; // [rsp+30h] [rbp-D0h] BYREF
  CBatchCommand *v97; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v98; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v99; // [rsp+50h] [rbp-B0h]
  struct CBatchCommand *v100[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v101; // [rsp+70h] [rbp-90h]
  __int16 v102; // [rsp+78h] [rbp-88h] BYREF
  __int16 v103; // [rsp+7Ah] [rbp-86h] BYREF
  unsigned __int64 v104; // [rsp+80h] [rbp-80h]
  __int64 v105; // [rsp+90h] [rbp-70h]
  __int64 v106; // [rsp+98h] [rbp-68h]
  __int64 v107; // [rsp+A0h] [rbp-60h]
  __int64 *v108; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v109; // [rsp+B0h] [rbp-50h]
  CDrawingContext *v110; // [rsp+B8h] [rbp-48h]
  __int16 v111[2]; // [rsp+C0h] [rbp-40h] BYREF
  float v112; // [rsp+C4h] [rbp-3Ch]
  float v113; // [rsp+C8h] [rbp-38h]
  __int64 v114; // [rsp+D0h] [rbp-30h]
  CScopedClipStack *v115; // [rsp+D8h] [rbp-28h]
  bool *v116; // [rsp+E0h] [rbp-20h]
  int v117[2]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE *v118; // [rsp+F8h] [rbp-8h]
  char *v119; // [rsp+100h] [rbp+0h]
  _BYTE v120[48]; // [rsp+108h] [rbp+8h] BYREF
  char v121; // [rsp+138h] [rbp+38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v3 = *((_QWORD *)this + 244);
  v4 = this;
  v115 = this;
  v5 = a3;
  v116 = a3;
  v110 = a2;
  v6 = *(_DWORD *)(v3 - 24);
  v109 = v6;
  if ( !*(_BYTE *)(v3 - 4) )
    goto LABEL_37;
  v7 = *((_QWORD *)this + 1);
  v8 = *(_QWORD *)(v7 - 16);
  v105 = v8;
  v9 = 1749801491 * ((__int64)(*(_QWORD *)(v8 + 24) - *(_QWORD *)(v8 + 16)) >> 4) - 1;
  if ( !CCommonRegistryData::CpuClipAASinkEnableRender )
    goto LABEL_30;
  *((_QWORD *)&v98 + 1) = 0LL;
  v10 = (_QWORD *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate(0xCCCCCCCCCCCCCCCDuLL);
  v100[1] = 0LL;
  *v10 = v10;
  v10[1] = v10;
  v11 = *(_QWORD *)(v8 + 16);
  *(_QWORD *)&v98 = v10;
  v12 = 432LL * v9;
  v114 = v11;
  v104 = v12;
  v14 = (struct CBatchCommand *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate(v13);
  v100[0] = v14;
  LODWORD(v108) = 1065353216;
  *(_QWORD *)v14 = v14;
  *((_QWORD *)v14 + 1) = v14;
  v15 = *(_QWORD *)(*(_QWORD *)(v12 + v11) + 32LL);
  if ( v15 )
    v16 = *(_QWORD *)(v15 + 16);
  else
    LOWORD(v16) = 0;
  v96 = v16;
  LODWORD(v97) = 0;
  v102 = 0;
  v103 = v9;
  std::list<CCpuClipAntialiasSink::Bounds>::emplace_back<unsigned short,unsigned short,float,unsigned short,float>(
    (unsigned int)v100,
    (unsigned int)&v103,
    (unsigned int)&v102,
    (unsigned int)&v97,
    (__int64)&v96,
    (__int64)&v108);
  v17 = v100[1];
  v18 = -858993459 * ((__int64)(*(_QWORD *)(v12 + v11 + 16) - *(_QWORD *)(v12 + v11 + 8)) >> 3) - 1;
  for ( i = 40LL * v18; ; i -= 40LL )
  {
    v107 = i;
    if ( !v17 || v18 < 0 )
      break;
    v20 = *(__int64 **)(v12 + v114 + 8);
    v21 = v100[0];
    v108 = v20;
    v22 = *(__int64 *)((char *)v20 + i);
    v23 = *(struct CBatchCommand **)v100[0];
    v106 = v22;
    while ( v23 != v21 )
    {
      v24 = fminf(*(float *)(v22 + 104), *((float *)v23 + 6));
      v25 = fmaxf(*(float *)(v22 + 100), *((float *)v23 + 5));
      v111[0] = v9;
      v113 = v24;
      v112 = v25;
      if ( v25 >= v24 )
        goto LABEL_11;
      if ( *((_BYTE *)v20 + i + 32) )
      {
        LODWORD(v97) = v18;
        std::list<CCpuClipAntialiasSinkContext::SinkRenderCommand>::emplace_front<unsigned int,CCpuClipAntialiasSink::Bounds &>(
          &v98,
          &v97,
          v111);
        v20 = v108;
        v22 = v106;
      }
      if ( *((_BYTE *)v20 + i + 33) )
      {
        if ( v25 > *((float *)v23 + 5) )
        {
          if ( v17 == (struct CBatchCommand *)0x7FFFFFFFFFFFFFFLL )
            goto LABEL_95;
          v26 = std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate(v20);
          v17 = (struct CBatchCommand *)((char *)v17 + 1);
          *(_DWORD *)(v26 + 20) = *((_DWORD *)v23 + 5);
          *(float *)(v26 + 24) = v25;
          *(_WORD *)(v26 + 16) = v9;
          v20 = (__int64 *)*((_QWORD *)v23 + 1);
          *(_QWORD *)v26 = v23;
          *(_QWORD *)(v26 + 8) = v20;
          *((_QWORD *)v23 + 1) = v26;
          *v20 = v26;
        }
        if ( *((float *)v23 + 6) > v24 )
        {
          if ( v17 == (struct CBatchCommand *)0x7FFFFFFFFFFFFFFLL )
LABEL_95:
            std::_Xlength_error("list too long");
          v27 = std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate(v20);
          v28 = *((_DWORD *)v23 + 6);
          v17 = (struct CBatchCommand *)((char *)v17 + 1);
          *(float *)(v27 + 20) = v24;
          *(_DWORD *)(v27 + 24) = v28;
          *(_WORD *)(v27 + 16) = v9;
          v29 = (__int64 *)*((_QWORD *)v23 + 1);
          *(_QWORD *)v27 = v23;
          *(_QWORD *)(v27 + 8) = v29;
          *((_QWORD *)v23 + 1) = v27;
          *v29 = v27;
        }
        v17 = (struct CBatchCommand *)((char *)v17 - 1);
        v30 = *(struct CBatchCommand **)v23;
        **((_QWORD **)v23 + 1) = *(_QWORD *)v23;
        *(_QWORD *)(*(_QWORD *)v23 + 8LL) = *((_QWORD *)v23 + 1);
        std::_Deallocate<16>(v23, 32LL);
        v20 = v108;
        v23 = v30;
        i = v107;
        v22 = v106;
      }
      else
      {
LABEL_11:
        v23 = *(struct CBatchCommand **)v23;
      }
      v21 = v100[0];
      if ( *(float *)(v22 + 104) == v24 )
        break;
    }
    v12 = v104;
    --v18;
  }
  v31 = v100[0];
  **((_QWORD **)v100[0] + 1) = 0LL;
  v32 = *(_QWORD **)v31;
  if ( *(_QWORD *)v31 )
  {
    do
    {
      v33 = (_QWORD *)*v32;
      std::_Deallocate<16>(v32, 32LL);
      v32 = v33;
    }
    while ( v33 );
  }
  std::_Deallocate<16>(v31, 32LL);
  v34 = *((_QWORD *)&v98 + 1);
  if ( *((_QWORD *)&v98 + 1) )
  {
    if ( CCommonRegistryData::CpuClipAASinkEnableIntermediates )
    {
      *(_QWORD *)v117 = v120;
      v118 = v120;
      v119 = &v121;
      std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_2_::_lambda_1___(
        (__int64 *)v98,
        *((unsigned __int64 *)&v98 + 1),
        (unsigned __int8)v96);
      v56 = (__int64 *)v98;
      v57 = 0LL;
      v58 = FLOAT_3_4028235e38;
      v59 = (__m128i)LODWORD(FLOAT_N3_4028235e38);
      *((float *)&v104 + 1) = FLOAT_3_4028235e38;
      v60 = *(__int64 **)v98;
      LOWORD(v104) = v9;
      v61 = v104;
      v62 = _mm_cvtsi128_si32((__m128i)LODWORD(FLOAT_N3_4028235e38));
      while ( v60 != v56 )
      {
        v63 = *((float *)v60 + 7);
        if ( v63 > v58 && (v64 = *((float *)v60 + 6), *(float *)v59.m128i_i32 > v64) )
        {
          v60 = (__int64 *)*v60;
          v58 = fminf(v58, v64);
          *(float *)v59.m128i_i32 = fmaxf(*(float *)v59.m128i_i32, v63);
          v66 = _mm_shuffle_ps((__m128)v104, (__m128)v104, 225);
          ++v57;
          v66.m128_f32[0] = v58;
          v104 = _mm_shuffle_ps(v66, v66, 225).m128_u64[0];
          v61 = v104;
          v62 = _mm_cvtsi128_si32(v59);
        }
        else
        {
          if ( v57 > 1 )
          {
            v65 = detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::reserve_region(
                    v117,
                    0xAAAAAAAAAAAAAAABuLL * ((__int64)&v118[-*(_QWORD *)v117] >> 2));
            *(_QWORD *)v65 = v61;
            *(_DWORD *)(v65 + 8) = v62;
            v56 = (__int64 *)v98;
          }
          v61 = *(__int64 *)((char *)v60 + 20);
          v57 = 1LL;
          v62 = *((_DWORD *)v60 + 7);
          v60 = (__int64 *)*v60;
          LODWORD(v58) = _mm_shuffle_ps((__m128)v61, (__m128)v61, 85).m128_u32[0];
          v104 = v61;
          v59 = _mm_cvtsi32_si128(v62);
        }
      }
      if ( v57 > 1 )
      {
        v67 = detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::reserve_region(
                v117,
                0xAAAAAAAAAAAAAAABuLL * ((__int64)&v118[-*(_QWORD *)v117] >> 2));
        *(_QWORD *)v67 = v61;
        *(_DWORD *)(v67 + 8) = v62;
        v56 = (__int64 *)v98;
      }
      v68 = v118;
      v69 = *(_QWORD *)v117;
      if ( v118 == *(_BYTE **)v117
        || (std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___(
              v56,
              *((unsigned __int64 *)&v98 + 1),
              (unsigned __int8)v96),
            v68 = v118,
            v69 = *(_QWORD *)v117,
            v118 == *(_BYTE **)v117) )
      {
        v70 = v105;
      }
      else
      {
        v70 = v105;
        v71 = CCpuClipAntialiasSinkContext::ProcessRenderCommands_OffscreenRenderPass(
                v105,
                v110,
                v9,
                (__int64 **)&v98,
                (__int64 *)v117);
        if ( v71 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7F,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
            (const char *)(unsigned int)v71);
          v90 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v118[-*(_QWORD *)v117] >> 2);
          if ( v90 )
            detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::clear_region(
              (__int64 *)v117,
              v89,
              v90);
          detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v117);
          v91 = (_QWORD **)v98;
          **(_QWORD **)(v98 + 8) = 0LL;
          v92 = *v91;
          if ( v92 )
          {
            do
            {
              v93 = (_QWORD *)*v92;
              std::_Deallocate<16>(v92, 32LL);
              v92 = v93;
            }
            while ( v93 );
          }
          goto LABEL_87;
        }
        v68 = v118;
        v69 = *(_QWORD *)v117;
      }
      v72 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v68[-v69] >> 2);
      if ( v72 )
      {
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v100, v69, v72);
        v118 -= 12 * v73;
      }
      detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v117);
      v34 = *((_QWORD *)&v98 + 1);
    }
    else
    {
      v70 = v105;
    }
    v107 = *((_QWORD *)v110 + 4);
    v74 = *(_QWORD *)(v70 + 16) + 432LL * v9;
    if ( !v34 )
      goto LABEL_27;
    v75 = CDrawingContext::ApplyRenderStateInternal(v110, 1);
    BatchCommand = v75;
    if ( v75 >= 0 )
    {
      v77 = (__int64 *)v98;
      while ( 1 )
      {
        v77 = (__int64 *)*v77;
        if ( v77 == (__int64 *)v98 )
          goto LABEL_27;
        v78 = 5LL * *((unsigned int *)v77 + 4);
        v106 = *(_QWORD *)(v74 + 8);
        v104 = *(_QWORD *)(v106 + 8 * v78);
        if ( (*(int (__fastcall **)(_QWORD, CDrawingContext *))(**(_QWORD **)(v104 + 24) + 48LL))(
               *(_QWORD *)(v104 + 24),
               v110) >= 0 )
        {
          v97 = 0LL;
          v100[0] = (struct CBatchCommand *)&v97;
          v100[1] = 0LL;
          LOBYTE(v101) = 1;
          BatchCommand = CDrawListBatchManager::CreateBatchCommand((CDrawListBatchManager *)(v107 + 24), &v100[1]);
          if ( (_BYTE)v101 )
          {
            v79 = (unsigned int)v100[0];
            v80 = *(CBatchCommand **)v100[0];
            *(_QWORD *)v100[0] = v100[1];
            if ( v80 )
              CBatchCommand::`scalar deleting destructor'(v80, v79);
          }
          if ( BatchCommand < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x208,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
              (const char *)(unsigned int)BatchCommand);
            std::unique_ptr<CBatchCommand>::~unique_ptr<CBatchCommand>(&v97);
            goto LABEL_85;
          }
          v81 = v105 + 904;
          LOBYTE(v95) = 0;
          *(_QWORD *)v94 = v105 + 904;
          CBatchCommand::InitializeForRendering(v97, v104, *(unsigned int *)(v106 + 8 * v78 + 12));
          v82 = v97;
          *((_DWORD *)v97 + 24) = 0;
          *(_QWORD *)((char *)v82 + 100) = *(__int64 *)((char *)v77 + 20);
          *((_DWORD *)v82 + 27) = *((_DWORD *)v77 + 7);
          *((_OWORD *)v82 + 7) = *(_OWORD *)v81;
          *((_OWORD *)v82 + 8) = *(_OWORD *)(v81 + 16);
          *((_OWORD *)v82 + 9) = *(_OWORD *)(v81 + 32);
          *((_OWORD *)v82 + 10) = *(_OWORD *)(v81 + 48);
          *((_DWORD *)v82 + 44) = *(_DWORD *)(v81 + 64);
          v83 = CD2DContext::SubmitRenderCommand((CD2DContext *)(v107 + 16));
          BatchCommand = v83;
          if ( v83 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x218,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
              (const char *)(unsigned int)v83);
            if ( v97 )
              std::default_delete<CBatchCommand>::operator()(v85, v97);
            goto LABEL_85;
          }
          if ( v97 )
            CBatchCommand::`scalar deleting destructor'(v97, v84);
        }
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)v75);
LABEL_85:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)BatchCommand);
    v86 = (_QWORD **)v98;
    **(_QWORD **)(v98 + 8) = 0LL;
    v87 = *v86;
    if ( v87 )
    {
      do
      {
        v88 = (_QWORD *)*v87;
        std::_Deallocate<16>(v87, 32LL);
        v87 = v88;
      }
      while ( v88 );
    }
LABEL_87:
    std::_Deallocate<16>(v98, 32LL);
    goto LABEL_31;
  }
LABEL_27:
  v35 = (_QWORD **)v98;
  **(_QWORD **)(v98 + 8) = 0LL;
  v36 = *v35;
  if ( v36 )
  {
    do
    {
      v37 = (_QWORD *)*v36;
      std::_Deallocate<16>(v36, 32LL);
      v36 = v37;
    }
    while ( v37 );
  }
  std::_Deallocate<16>(v98, 32LL);
  v8 = v105;
LABEL_30:
  detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear(*(_QWORD *)(v8 + 16) + 432LL * v9 + 8);
LABEL_31:
  v38 = *(_QWORD *)(v7 - 16);
  v39 = *(_QWORD *)(v38 + 16);
  v40 = 0x84BDA12F684BDA13uLL * ((*(_QWORD *)(v38 + 24) - v39) >> 4);
  v41 = 0x84BDA12F684BDA13uLL * ((*(_QWORD *)(v38 + 24) - v39 - 432) >> 4) + 1;
  if ( v41 > v40 )
  {
LABEL_98:
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x1800C37CALL);
  }
  v42 = (CCpuClipAntialiasSinkContext::SinkEntry *)(v39 + 16 * ((*(_QWORD *)(v38 + 24) - v39) >> 4));
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v98, *(_QWORD *)(v38 + 16), v40);
  if ( v41 != v44 )
  {
    *(_OWORD *)v100 = v98;
    v101 = v99;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(v100, v43);
    v98 = *(_OWORD *)v100;
    v99 = v101;
    std::move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>>(
      v100,
      v39 + 432 * v41,
      v42,
      &v98);
  }
  v45 = (CCpuClipAntialiasSinkContext::SinkEntry *)((char *)v42 - 432);
  do
  {
    CCpuClipAntialiasSinkContext::SinkEntry::~SinkEntry(v45);
    v45 = (CCpuClipAntialiasSinkContext::SinkEntry *)((char *)v45 + 432);
  }
  while ( v45 != v42 );
  *(_QWORD *)(v38 + 24) -= 432LL;
  v4 = v115;
  v6 = v109;
  v5 = v116;
LABEL_37:
  v46 = *((_QWORD *)v4 + 243);
  v47 = 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)v4 + 244) - v46) >> 3);
  v48 = 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)v4 + 244) - v46 - 40) >> 3) + 1;
  if ( v48 > v47 )
    goto LABEL_98;
  v49 = v46 + 8 * ((*((_QWORD *)v4 + 244) - v46) >> 3);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v98, *((_QWORD *)v4 + 243), v47);
  if ( v48 != v51 )
  {
    *(_OWORD *)v100 = v98;
    v101 = v99;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(v100, v50);
    v98 = *(_OWORD *)v100;
    v99 = v101;
    std::move<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>(
      v100,
      v46 + 40 * v48,
      v49,
      &v98,
      *(_QWORD *)v94,
      v95);
  }
  v52 = v49 - 40;
  do
  {
    if ( *(_BYTE *)(v52 + 8) && *(_QWORD *)v52 )
      (***(void (__fastcall ****)(_QWORD, __int64))v52)(*(_QWORD *)v52, 1LL);
    *(_QWORD *)v52 = 0LL;
    *(_BYTE *)(v52 + 8) = 0;
    v52 += 40LL;
  }
  while ( v52 != v49 );
  *((_QWORD *)v4 + 244) -= 40LL;
  --*(_QWORD *)(*((_QWORD *)v4 + 1) - 176LL);
  v53 = *((_QWORD *)v4 + 1);
  if ( v53 != *(_QWORD *)v4 && *(_QWORD *)(v53 - 176) )
    v54 = (unsigned __int64)v6 > *(_QWORD *)(*((_QWORD *)v4 + 244) - 24LL);
  else
    v54 = v6 != 0;
  *v5 = v54;
  v55 = *((_DWORD *)v4 + 600);
  if ( v55 )
    *((_DWORD *)v4 + 600) = v55 - 1;
  --*(_QWORD *)(*((_QWORD *)v4 + 1) - 168LL);
}
