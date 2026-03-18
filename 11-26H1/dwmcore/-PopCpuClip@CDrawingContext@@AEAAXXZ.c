/*
 * XREFs of ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800C3820
 * Callers:
 *     ?Pop@CDrawingContext@@QEAAJXZ @ 0x18003EE08 (-Pop@CDrawingContext@@QEAAJXZ.c)
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180081C40 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
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
 *     ?pop_back@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C27F4 (-pop_back@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkEntry@CCp.c)
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
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::PopCpuClip(CDrawingContext *this)
{
  int v1; // eax
  CDrawingContext *v2; // r13
  __int64 v3; // rax
  unsigned int v4; // r14d
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // r14d
  _QWORD *v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rcx
  struct CBatchCommand *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  struct CBatchCommand *v15; // r15
  int v16; // r12d
  __int64 v17; // r13
  __int64 v18; // rsi
  struct CBatchCommand *v19; // rax
  __int64 v20; // rcx
  struct CBatchCommand *v21; // rbx
  float v22; // xmm6_4
  float v23; // xmm7_4
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // xmm0_4
  __int64 *v27; // rcx
  struct CBatchCommand *v28; // rsi
  struct CBatchCommand *v29; // rsi
  _QWORD *v30; // rcx
  _QWORD *v31; // rbx
  unsigned __int64 v32; // rcx
  _QWORD **v33; // rcx
  _QWORD *v34; // rcx
  _QWORD *v35; // rbx
  __int64 v36; // rbx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 v43; // rcx
  bool v44; // cl
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // eax
  __m128 v49; // xmm1
  float v50; // xmm3_4
  float v51; // xmm1_4
  __m128 v52; // xmm2
  __int64 v53; // rcx
  int v54; // eax
  __m128 v55; // xmm0
  __m128 si128; // xmm2
  float v57; // xmm4_4
  float v58; // xmm5_4
  float v59; // xmm6_4
  float v60; // xmm7_4
  float v61; // xmm5_4
  float v62; // xmm0_4
  float v63; // xmm5_4
  __int64 *v64; // rcx
  unsigned __int64 v65; // rax
  float v66; // xmm2_4
  __m128i v67; // xmm3
  __int64 *v68; // rbx
  unsigned __int64 v69; // xmm6_8
  unsigned int v70; // esi
  float v71; // xmm4_4
  float v72; // xmm0_4
  __int64 v73; // rax
  __m128 v74; // xmm0
  __int64 v75; // rax
  _BYTE *v76; // r8
  __int64 v77; // rdx
  __int64 v78; // rbx
  int v79; // eax
  __int64 v80; // r8
  __int64 v81; // r8
  __int64 v82; // r15
  int v83; // eax
  int BatchCommand; // esi
  unsigned __int64 v85; // rbx
  __int64 v86; // r13
  __int64 v87; // r12
  unsigned int v88; // edx
  CBatchCommand *v89; // rcx
  __int64 v90; // rsi
  CBatchCommand *v91; // rcx
  int v92; // eax
  unsigned int v93; // edx
  __int64 v94; // rcx
  _QWORD **v95; // rcx
  _QWORD *v96; // rcx
  _QWORD *v97; // rbx
  __int64 v98; // rdx
  unsigned __int64 v99; // r8
  _QWORD **v100; // rcx
  _QWORD *v101; // rcx
  _QWORD *v102; // rbx
  int v103[2]; // [rsp+20h] [rbp-E0h]
  int v104; // [rsp+28h] [rbp-D8h]
  __int16 v105; // [rsp+30h] [rbp-D0h] BYREF
  CBatchCommand *v106; // [rsp+38h] [rbp-C8h] BYREF
  __m128 v107; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v108; // [rsp+50h] [rbp-B0h]
  CDrawingContext *v109; // [rsp+60h] [rbp-A0h]
  __int64 v110; // [rsp+68h] [rbp-98h] BYREF
  __int16 v111; // [rsp+70h] [rbp-90h] BYREF
  __int16 v112; // [rsp+72h] [rbp-8Eh] BYREF
  __int64 v113; // [rsp+78h] [rbp-88h] BYREF
  struct CBatchCommand *v114[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v115; // [rsp+90h] [rbp-70h]
  unsigned __int64 v116; // [rsp+98h] [rbp-68h]
  unsigned int v117; // [rsp+A8h] [rbp-58h]
  __int16 v118[2]; // [rsp+B0h] [rbp-50h] BYREF
  float v119; // [rsp+B4h] [rbp-4Ch]
  float v120; // [rsp+B8h] [rbp-48h]
  __int64 v121; // [rsp+C0h] [rbp-40h]
  __int64 v122; // [rsp+C8h] [rbp-38h]
  int v123[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v124; // [rsp+D8h] [rbp-28h]
  char *v125; // [rsp+E0h] [rbp-20h]
  _BYTE v126[48]; // [rsp+E8h] [rbp-18h] BYREF
  char v127; // [rsp+118h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v1 = *((_DWORD *)this + 66);
  v2 = this;
  v109 = this;
  if ( v1 )
    *((_DWORD *)this + 66) = v1 - 1;
  v3 = *((_QWORD *)this + 336);
  v4 = *(_DWORD *)(v3 - 24);
  v117 = v4;
  if ( *(_BYTE *)(v3 - 4) )
  {
    v5 = *((_QWORD *)this + 93);
    v6 = *(_QWORD *)(v5 - 16);
    v110 = v6;
    v7 = 1749801491 * ((__int64)(*(_QWORD *)(v6 + 24) - *(_QWORD *)(v6 + 16)) >> 4) - 1;
    if ( !CCommonRegistryData::CpuClipAASinkEnableRender )
    {
LABEL_33:
      detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear(*(_QWORD *)(v6 + 16) + 432LL * v7 + 8);
LABEL_34:
      detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::pop_back((__int64 *)(*(_QWORD *)(v5 - 16) + 16LL));
      v4 = v117;
      goto LABEL_35;
    }
    v107.m128_u64[1] = 0LL;
    v8 = (_QWORD *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate(0xCCCCCCCCCCCCCCCDuLL);
    v114[1] = 0LL;
    *v8 = v8;
    v8[1] = v8;
    v9 = *(_QWORD *)(v6 + 16);
    v107.m128_u64[0] = (unsigned __int64)v8;
    v10 = 432LL * v7;
    v116 = v9;
    v122 = v10;
    v12 = (struct CBatchCommand *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate(v11);
    v114[0] = v12;
    LODWORD(v113) = 1065353216;
    *(_QWORD *)v12 = v12;
    *((_QWORD *)v12 + 1) = v12;
    v13 = *(_QWORD *)(*(_QWORD *)(v10 + v9) + 32LL);
    if ( v13 )
      v14 = *(_QWORD *)(v13 + 16);
    else
      LOWORD(v14) = 0;
    v105 = v14;
    LODWORD(v106) = 0;
    v111 = 0;
    v112 = v7;
    std::list<CCpuClipAntialiasSink::Bounds>::emplace_back<unsigned short,unsigned short,float,unsigned short,float>(
      (unsigned int)v114,
      (unsigned int)&v112,
      (unsigned int)&v111,
      (unsigned int)&v106,
      (__int64)&v105,
      (__int64)&v113);
    v15 = v114[1];
    v16 = -858993459 * ((__int64)(*(_QWORD *)(v10 + v9 + 16) - *(_QWORD *)(v10 + v9 + 8)) >> 3) - 1;
    v17 = 40LL * v16;
    while ( v15 && v16 >= 0 )
    {
      v18 = *(_QWORD *)(v10 + v9 + 8);
      v19 = v114[0];
      v121 = v18;
      v20 = *(_QWORD *)(v18 + v17);
      v21 = *(struct CBatchCommand **)v114[0];
      v113 = v20;
      while ( v21 != v19 )
      {
        v22 = fminf(*(float *)(v20 + 104), *((float *)v21 + 6));
        v23 = fmaxf(*(float *)(v20 + 100), *((float *)v21 + 5));
        v118[0] = v7;
        v120 = v22;
        v119 = v23;
        if ( v23 >= v22 )
          goto LABEL_13;
        if ( *(_BYTE *)(v18 + v17 + 32) )
        {
          LODWORD(v106) = v16;
          std::list<CCpuClipAntialiasSinkContext::SinkRenderCommand>::emplace_front<unsigned int,CCpuClipAntialiasSink::Bounds &>(
            &v107,
            &v106,
            v118);
          v20 = v113;
        }
        if ( *(_BYTE *)(v18 + v17 + 33) )
        {
          if ( v23 > *((float *)v21 + 5) )
          {
            if ( v15 == (struct CBatchCommand *)0x7FFFFFFFFFFFFFFLL )
              goto LABEL_135;
            v24 = std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate(v20);
            v15 = (struct CBatchCommand *)((char *)v15 + 1);
            *(_DWORD *)(v24 + 20) = *((_DWORD *)v21 + 5);
            *(float *)(v24 + 24) = v23;
            *(_WORD *)(v24 + 16) = v7;
            v20 = *((_QWORD *)v21 + 1);
            *(_QWORD *)v24 = v21;
            *(_QWORD *)(v24 + 8) = v20;
            *((_QWORD *)v21 + 1) = v24;
            *(_QWORD *)v20 = v24;
          }
          if ( *((float *)v21 + 6) > v22 )
          {
            if ( v15 == (struct CBatchCommand *)0x7FFFFFFFFFFFFFFLL )
LABEL_135:
              std::_Xlength_error("list too long");
            v25 = std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate(v20);
            v26 = *((_DWORD *)v21 + 6);
            v15 = (struct CBatchCommand *)((char *)v15 + 1);
            *(float *)(v25 + 20) = v22;
            *(_DWORD *)(v25 + 24) = v26;
            *(_WORD *)(v25 + 16) = v7;
            v27 = (__int64 *)*((_QWORD *)v21 + 1);
            *(_QWORD *)v25 = v21;
            *(_QWORD *)(v25 + 8) = v27;
            *((_QWORD *)v21 + 1) = v25;
            *v27 = v25;
          }
          v15 = (struct CBatchCommand *)((char *)v15 - 1);
          v28 = *(struct CBatchCommand **)v21;
          **((_QWORD **)v21 + 1) = *(_QWORD *)v21;
          *(_QWORD *)(*(_QWORD *)v21 + 8LL) = *((_QWORD *)v21 + 1);
          std::_Deallocate<16>(v21, 32LL);
          v20 = v113;
          v21 = v28;
          v18 = v121;
        }
        else
        {
LABEL_13:
          v21 = *(struct CBatchCommand **)v21;
        }
        v19 = v114[0];
        if ( *(float *)(v20 + 104) == v22 )
          break;
      }
      v10 = v122;
      --v16;
      v9 = v116;
      v17 -= 40LL;
    }
    v29 = v114[0];
    **((_QWORD **)v114[0] + 1) = 0LL;
    v30 = *(_QWORD **)v29;
    if ( *(_QWORD *)v29 )
    {
      do
      {
        v31 = (_QWORD *)*v30;
        std::_Deallocate<16>(v30, 32LL);
        v30 = v31;
      }
      while ( v31 );
    }
    std::_Deallocate<16>(v29, 32LL);
    v32 = v107.m128_u64[1];
    if ( !v107.m128_u64[1] )
    {
      v2 = v109;
LABEL_30:
      v33 = (_QWORD **)v107.m128_u64[0];
      **(_QWORD **)(v107.m128_u64[0] + 8) = 0LL;
      v34 = *v33;
      if ( v34 )
      {
        do
        {
          v35 = (_QWORD *)*v34;
          std::_Deallocate<16>(v34, 32LL);
          v34 = v35;
        }
        while ( v35 );
      }
      std::_Deallocate<16>(v107.m128_u64[0], 32LL);
      v6 = v110;
      goto LABEL_33;
    }
    if ( CCommonRegistryData::CpuClipAASinkEnableIntermediates )
    {
      *(_QWORD *)v123 = v126;
      v124 = v126;
      v125 = &v127;
      std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_2_::_lambda_1___(
        (__int64 *)v107.m128_u64[0],
        v107.m128_u64[1],
        (unsigned __int8)v105);
      v64 = (__int64 *)v107.m128_u64[0];
      v65 = 0LL;
      v66 = FLOAT_3_4028235e38;
      v67 = (__m128i)LODWORD(FLOAT_N3_4028235e38);
      *((float *)&v116 + 1) = FLOAT_3_4028235e38;
      v68 = *(__int64 **)v107.m128_u64[0];
      LOWORD(v116) = v7;
      v69 = v116;
      v70 = _mm_cvtsi128_si32((__m128i)LODWORD(FLOAT_N3_4028235e38));
      while ( v68 != v64 )
      {
        v71 = *((float *)v68 + 7);
        if ( v71 > v66 && (v72 = *((float *)v68 + 6), *(float *)v67.m128i_i32 > v72) )
        {
          v68 = (__int64 *)*v68;
          v66 = fminf(v66, v72);
          *(float *)v67.m128i_i32 = fmaxf(*(float *)v67.m128i_i32, v71);
          v74 = _mm_shuffle_ps((__m128)v116, (__m128)v116, 225);
          ++v65;
          v74.m128_f32[0] = v66;
          v116 = _mm_shuffle_ps(v74, v74, 225).m128_u64[0];
          v69 = v116;
          v70 = _mm_cvtsi128_si32(v67);
        }
        else
        {
          if ( v65 > 1 )
          {
            v73 = detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::reserve_region(
                    v123,
                    0xAAAAAAAAAAAAAAABuLL * ((__int64)&v124[-*(_QWORD *)v123] >> 2));
            *(_QWORD *)v73 = v69;
            *(_DWORD *)(v73 + 8) = v70;
            v64 = (__int64 *)v107.m128_u64[0];
          }
          v69 = *(__int64 *)((char *)v68 + 20);
          v65 = 1LL;
          v70 = *((_DWORD *)v68 + 7);
          v68 = (__int64 *)*v68;
          LODWORD(v66) = _mm_shuffle_ps((__m128)v69, (__m128)v69, 85).m128_u32[0];
          v116 = v69;
          v67 = _mm_cvtsi32_si128(v70);
        }
      }
      if ( v65 > 1 )
      {
        v75 = detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::reserve_region(
                v123,
                0xAAAAAAAAAAAAAAABuLL * ((__int64)&v124[-*(_QWORD *)v123] >> 2));
        *(_QWORD *)v75 = v69;
        *(_DWORD *)(v75 + 8) = v70;
        v64 = (__int64 *)v107.m128_u64[0];
      }
      v76 = v124;
      v77 = *(_QWORD *)v123;
      if ( v124 == *(_BYTE **)v123
        || (std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___(
              v64,
              v107.m128_u64[1],
              (unsigned __int8)v105),
            v76 = v124,
            v77 = *(_QWORD *)v123,
            v124 == *(_BYTE **)v123) )
      {
        v78 = v110;
        v2 = v109;
      }
      else
      {
        v2 = v109;
        v78 = v110;
        v79 = CCpuClipAntialiasSinkContext::ProcessRenderCommands_OffscreenRenderPass(
                v110,
                v109,
                v7,
                (__int64 **)&v107,
                (__int64 *)v123);
        if ( v79 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7F,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
            (const char *)(unsigned int)v79);
          v99 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v124[-*(_QWORD *)v123] >> 2);
          if ( v99 )
            detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::clear_region(
              (__int64 *)v123,
              v98,
              v99);
          detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v123);
          v100 = (_QWORD **)v107.m128_u64[0];
          **(_QWORD **)(v107.m128_u64[0] + 8) = 0LL;
          v101 = *v100;
          if ( v101 )
          {
            do
            {
              v102 = (_QWORD *)*v101;
              std::_Deallocate<16>(v101, 32LL);
              v101 = v102;
            }
            while ( v102 );
          }
          goto LABEL_124;
        }
        v76 = v124;
        v77 = *(_QWORD *)v123;
      }
      v80 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v76[-v77] >> 2);
      if ( v80 )
      {
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v114, v77, v80);
        v124 -= 12 * v81;
      }
      detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v123);
      v32 = v107.m128_u64[1];
    }
    else
    {
      v78 = v110;
      v2 = v109;
    }
    v113 = *((_QWORD *)v2 + 4);
    v82 = *(_QWORD *)(v78 + 16) + 432LL * v7;
    if ( !v32 )
      goto LABEL_30;
    v83 = CDrawingContext::ApplyRenderStateInternal(v2, 1);
    BatchCommand = v83;
    if ( v83 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F5,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
        (const char *)(unsigned int)v83);
    }
    else
    {
      v85 = v107.m128_u64[0];
      while ( 1 )
      {
        do
        {
          v85 = *(_QWORD *)v85;
          if ( v85 == v107.m128_u64[0] )
          {
            v2 = v109;
            goto LABEL_30;
          }
          v86 = *(_QWORD *)(v82 + 8);
          v87 = 5LL * *(unsigned int *)(v85 + 16);
          v116 = *(_QWORD *)(v86 + 40LL * *(unsigned int *)(v85 + 16));
        }
        while ( (*(int (__fastcall **)(_QWORD, CDrawingContext *))(**(_QWORD **)(v116 + 24) + 48LL))(
                  *(_QWORD *)(v116 + 24),
                  v109) < 0 );
        LOBYTE(v115) = 1;
        v106 = 0LL;
        v114[1] = 0LL;
        v114[0] = (struct CBatchCommand *)&v106;
        BatchCommand = CDrawListBatchManager::CreateBatchCommand((CDrawListBatchManager *)(v113 + 24), &v114[1]);
        if ( (_BYTE)v115 )
        {
          v88 = (unsigned int)v114[0];
          v89 = *(CBatchCommand **)v114[0];
          *(_QWORD *)v114[0] = v114[1];
          if ( v89 )
            CBatchCommand::`scalar deleting destructor'(v89, v88);
        }
        if ( BatchCommand < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x208,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
            (const char *)(unsigned int)BatchCommand);
          std::unique_ptr<CBatchCommand>::~unique_ptr<CBatchCommand>(&v106);
          goto LABEL_121;
        }
        v90 = v110 + 904;
        LOBYTE(v104) = 0;
        *(_QWORD *)v103 = v110 + 904;
        CBatchCommand::InitializeForRendering(v106, v116, *(unsigned int *)(v86 + 8 * v87 + 12));
        v91 = v106;
        *((_DWORD *)v106 + 24) = 0;
        *(_QWORD *)((char *)v91 + 100) = *(_QWORD *)(v85 + 20);
        *((_DWORD *)v91 + 27) = *(_DWORD *)(v85 + 28);
        *((_OWORD *)v91 + 7) = *(_OWORD *)v90;
        *((_OWORD *)v91 + 8) = *(_OWORD *)(v90 + 16);
        *((_OWORD *)v91 + 9) = *(_OWORD *)(v90 + 32);
        *((_OWORD *)v91 + 10) = *(_OWORD *)(v90 + 48);
        *((_DWORD *)v91 + 44) = *(_DWORD *)(v90 + 64);
        v92 = CD2DContext::SubmitRenderCommand((CD2DContext *)(v113 + 16));
        BatchCommand = v92;
        if ( v92 < 0 )
          break;
        if ( v106 )
          CBatchCommand::`scalar deleting destructor'(v106, v93);
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x218,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
        (const char *)(unsigned int)v92);
      if ( v106 )
        std::default_delete<CBatchCommand>::operator()(v94, v106);
LABEL_121:
      v2 = v109;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)BatchCommand);
    v95 = (_QWORD **)v107.m128_u64[0];
    **(_QWORD **)(v107.m128_u64[0] + 8) = 0LL;
    v96 = *v95;
    if ( v96 )
    {
      do
      {
        v97 = (_QWORD *)*v96;
        std::_Deallocate<16>(v96, 32LL);
        v96 = v97;
      }
      while ( v97 );
    }
LABEL_124:
    std::_Deallocate<16>(v107.m128_u64[0], 32LL);
    goto LABEL_34;
  }
LABEL_35:
  v36 = *((_QWORD *)v2 + 335);
  v37 = 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)v2 + 336) - v36) >> 3);
  v38 = 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)v2 + 336) - v36 - 40) >> 3) + 1;
  if ( v38 > v37 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x1800C44C7LL);
  }
  v39 = v36 + 8 * ((*((_QWORD *)v2 + 336) - v36) >> 3);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v107, *((_QWORD *)v2 + 335), v37);
  if ( v38 != v41 )
  {
    *(__m128 *)v114 = v107;
    v115 = v108;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(v114, v40);
    v107 = *(__m128 *)v114;
    v108 = v115;
    std::move<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>(
      v114,
      v36 + 40 * v38,
      v39,
      &v107,
      *(_QWORD *)v103,
      v104);
  }
  v42 = v39 - 40;
  do
  {
    if ( *(_BYTE *)(v42 + 8) && *(_QWORD *)v42 )
      (***(void (__fastcall ****)(_QWORD, __int64))v42)(*(_QWORD *)v42, 1LL);
    *(_QWORD *)v42 = 0LL;
    *(_BYTE *)(v42 + 8) = 0;
    v42 += 40LL;
  }
  while ( v42 != v39 );
  *((_QWORD *)v2 + 336) -= 40LL;
  --*(_QWORD *)(*((_QWORD *)v2 + 93) - 176LL);
  v43 = *((_QWORD *)v2 + 93);
  if ( v43 != *((_QWORD *)v2 + 92) && *(_QWORD *)(v43 - 176) )
    v44 = (unsigned __int64)v4 > *(_QWORD *)(*((_QWORD *)v2 + 336) - 24LL);
  else
    v44 = v4 != 0;
  v45 = *((_DWORD *)v2 + 784);
  if ( v45 )
    *((_DWORD *)v2 + 784) = v45 - 1;
  --*(_QWORD *)(*((_QWORD *)v2 + 93) - 168LL);
  if ( v44 )
  {
    if ( *((_BYTE *)v2 + 8066) )
    {
      v46 = *((_QWORD *)v2 + 93);
      if ( v46 == *((_QWORD *)v2 + 92) || !*(_QWORD *)(v46 - 176) || !*(_QWORD *)(*((_QWORD *)v2 + 336) - 24LL) )
        *((_BYTE *)v2 + 8066) = 0;
    }
    v47 = *((_QWORD *)v2 + 93);
    v107 = 0LL;
    if ( v47 == *((_QWORD *)v2 + 92) )
    {
      si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
      LODWORD(v50) = _mm_shuffle_ps(si128, si128, 255).m128_u32[0];
      LODWORD(v51) = _mm_shuffle_ps(si128, si128, 170).m128_u32[0];
      LODWORD(v57) = _mm_shuffle_ps(si128, si128, 85).m128_u32[0];
LABEL_70:
      if ( v51 > si128.m128_f32[0]
        && v50 > v57
        && (si128.m128_f32[0] < *((float *)v2 + 54)
         || v57 < *((float *)v2 + 55)
         || *((float *)v2 + 56) < v51
         || *((float *)v2 + 57) < v50) )
      {
        *((_BYTE *)v2 + 8065) = 1;
      }
      return;
    }
    if ( *(_QWORD *)(v47 - 184) )
    {
      v48 = *((_DWORD *)v2 + 778);
      if ( !v48 )
      {
        v52 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
        LODWORD(v50) = _mm_shuffle_ps(v52, v52, 255).m128_u32[0];
        LODWORD(v51) = _mm_shuffle_ps(v52, v52, 170).m128_u32[0];
        v107 = v52;
        goto LABEL_56;
      }
      v49 = *(__m128 *)(*((_QWORD *)v2 + 388) + 16LL * (unsigned int)(v48 - 1));
      LODWORD(v50) = _mm_shuffle_ps(v49, v49, 255).m128_u32[0];
      v107 = v49;
      LODWORD(v51) = _mm_shuffle_ps(v49, v49, 170).m128_u32[0];
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v47 - 192) + 88LL))(*(_QWORD *)(v47 - 192), &v110);
      v51 = (float)(int)v110;
      v50 = (float)SHIDWORD(v110);
    }
    v52 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
LABEL_56:
    v53 = *((_QWORD *)v2 + 93);
    if ( v53 == *((_QWORD *)v2 + 92) || !*(_QWORD *)(v53 - 168) )
    {
      v57 = v107.m128_f32[1];
      si128.m128_i32[0] = v107.m128_i32[0];
    }
    else
    {
      v54 = *((_DWORD *)v2 + 784);
      if ( v54 )
        v55 = *(__m128 *)(*((_QWORD *)v2 + 391) + 16LL * (unsigned int)(v54 - 1));
      else
        v55 = v52;
      si128.m128_i32[0] = v107.m128_i32[0];
      if ( v55.m128_f32[0] > v107.m128_f32[0] )
        si128.m128_i32[0] = v55.m128_i32[0];
      v57 = v107.m128_f32[1];
      v58 = _mm_shuffle_ps(v55, v55, 85).m128_f32[0];
      v59 = v107.m128_f32[1];
      if ( v58 > v107.m128_f32[1] )
      {
        v57 = v58;
        v59 = v58;
      }
      v60 = v51;
      v61 = _mm_shuffle_ps(v55, v55, 170).m128_f32[0];
      if ( v51 > v61 )
      {
        v51 = v61;
        v60 = v61;
      }
      v62 = _mm_shuffle_ps(v55, v55, 255).m128_f32[0];
      v63 = v50;
      if ( v50 > v62 )
      {
        v50 = v62;
        v63 = v62;
      }
      if ( v60 <= si128.m128_f32[0] || v63 <= v59 )
      {
        v50 = 0.0;
        v51 = 0.0;
        v57 = 0.0;
        si128.m128_i32[0] = 0;
      }
    }
    goto LABEL_70;
  }
}
