/*
 * XREFs of ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1800C1C44
 * Callers:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006B600 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x18006FB70 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 *     ?ApplyDeferredD2DLayersInScope@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z @ 0x180071420 (-ApplyDeferredD2DLayersInScope@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x18000A17C (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E5F0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear_region@?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C0D10 (-clear_region@-$vector_facade@UBounds@CCpuClipAntialiasSink@@V-$buffer_impl@UBounds@CCpuClipAnti.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C0E10 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ??R?$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z @ 0x1800C24BC (--R-$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z.c)
 *     ??1?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@QEAA@XZ @ 0x1800C2540 (--1-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBatchCommand@@@std@@@std@@QEAA@XZ.c)
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_2_::_lambda_1___ @ 0x1800C2650 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderCommand___--_Sort.c)
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___ @ 0x1800C275C (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderComm_ea_1800C275C.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1800C4514 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     ?allocate@?$allocator@U?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@2@_K@Z @ 0x1800C4594 (-allocate@-$allocator@U-$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU-$_Li.c)
 *     ?reserve_region@?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUBounds@CCpuClipAntialiasSink@@_K0@Z @ 0x1800C45DC (-reserve_region@-$vector_facade@UBounds@CCpuClipAntialiasSink@@V-$buffer_impl@UBounds@CCpuClipAn.c)
 *     ?CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z @ 0x1800C47E0 (-CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z.c)
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C48D0 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 *     ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@_N@Z @ 0x1800C4BB0 (-InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatri.c)
 *     ?clear@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C560C (-clear@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkR.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??$emplace_back@GGMGM@?$list@UBounds@CCpuClipAntialiasSink@@V?$allocator@UBounds@CCpuClipAntialiasSink@@@std@@@std@@QEAAAEAUBounds@CCpuClipAntialiasSink@@$$QEAG0$$QEAM01@Z @ 0x18025AEAC (--$emplace_back@GGMGM@-$list@UBounds@CCpuClipAntialiasSink@@V-$allocator@UBounds@CCpuClipAntiali.c)
 *     ??$emplace_front@IAEAUBounds@CCpuClipAntialiasSink@@@?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@QEAAAEAUSinkRenderCommand@CCpuClipAntialiasSinkContext@@$$QEAIAEAUBounds@CCpuClipAntialiasSink@@@Z @ 0x18025AEE8 (--$emplace_front@IAEAUBounds@CCpuClipAntialiasSink@@@-$list@USinkRenderCommand@CCpuClipAntialias.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::FlushDrawList(
        CCpuClipAntialiasSinkContext *this,
        struct CDrawingContext *a2,
        unsigned int a3)
{
  __int64 v3; // r13
  CCpuClipAntialiasSinkContext *v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  CBatchCommand **v12; // r15
  struct CBatchCommand *v13; // rsi
  int v14; // r14d
  __int64 v15; // r12
  __int64 v16; // rdi
  CBatchCommand **v17; // rbx
  __int64 v18; // rax
  float v19; // xmm6_4
  float v20; // xmm7_4
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // xmm0_4
  __int64 *v24; // rcx
  CBatchCommand **v25; // rdi
  CBatchCommand *v26; // rcx
  CBatchCommand *v27; // rbx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 *v30; // rcx
  unsigned __int64 v31; // rax
  float v32; // xmm1_4
  __m128i v33; // xmm0
  __int64 v34; // rbx
  __int64 v35; // xmm6_8
  unsigned int v36; // edi
  float v37; // xmm2_4
  __int64 v38; // rax
  __int64 *v39; // rcx
  _QWORD *v40; // rcx
  _QWORD *v41; // rbx
  __int64 v43; // rax
  _BYTE *v44; // r8
  __int64 v45; // rdx
  CCpuClipAntialiasSinkContext *v46; // rbx
  int v47; // eax
  unsigned int v48; // edi
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // r14
  __int64 v52; // rsi
  int v53; // eax
  __int64 *v54; // rbx
  __int64 v55; // r12
  __int64 v56; // r15
  unsigned int v57; // edx
  CBatchCommand *v58; // rcx
  char *v59; // rdi
  CBatchCommand *v60; // rcx
  int v61; // eax
  unsigned int v62; // edx
  __int64 v63; // rcx
  __int64 *v64; // rcx
  _QWORD *v65; // rcx
  _QWORD *v66; // rbx
  __int64 v67; // rdx
  unsigned __int64 v68; // r8
  __int64 *v69; // rcx
  _QWORD *v70; // rcx
  _QWORD *v71; // rbx
  __int64 v72; // [rsp+38h] [rbp-D0h] BYREF
  CBatchCommand *v73; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v74; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v75; // [rsp+50h] [rbp-B8h]
  __int16 v76; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v77; // [rsp+5Ah] [rbp-AEh] BYREF
  __int64 v78; // [rsp+60h] [rbp-A8h]
  CCpuClipAntialiasSinkContext *v79; // [rsp+70h] [rbp-98h]
  unsigned int v80[2]; // [rsp+78h] [rbp-90h] BYREF
  struct CBatchCommand *v81; // [rsp+80h] [rbp-88h] BYREF
  char v82; // [rsp+88h] [rbp-80h]
  __int64 v83; // [rsp+90h] [rbp-78h] BYREF
  CDrawingContext *v84; // [rsp+98h] [rbp-70h]
  __int64 v85; // [rsp+A0h] [rbp-68h]
  __int64 v86; // [rsp+A8h] [rbp-60h]
  int v87[2]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE *v88; // [rsp+C0h] [rbp-48h]
  char *v89; // [rsp+C8h] [rbp-40h]
  _BYTE v90[48]; // [rsp+D0h] [rbp-38h] BYREF
  char v91; // [rsp+100h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v3 = a3;
  v4 = this;
  v84 = a2;
  v79 = this;
  if ( !CCommonRegistryData::CpuClipAASinkEnableRender )
  {
LABEL_39:
    detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear(*((_QWORD *)v4 + 2) + 432 * v3 + 8);
    return 0LL;
  }
  v75 = 0LL;
  v5 = (__int64 *)((__int64 (*)(void))std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate)();
  v6 = 432 * v3;
  *v5 = (__int64)v5;
  v5[1] = (__int64)v5;
  v7 = *((_QWORD *)v4 + 2);
  v86 = 432 * v3;
  v74 = v5;
  v78 = v7;
  v81 = 0LL;
  v8 = (_QWORD *)((__int64 (*)(void))std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate)();
  *(_QWORD *)v80 = v8;
  LODWORD(v83) = 1065353216;
  *v8 = v8;
  v8[1] = v8;
  v9 = *(_QWORD *)(*(_QWORD *)(432 * v3 + v7) + 32LL);
  if ( v9 )
    v10 = *(_QWORD *)(v9 + 16);
  else
    LOWORD(v10) = 0;
  LOWORD(v72) = v10;
  LODWORD(v73) = 0;
  v76 = 0;
  v77 = v3;
  std::list<CCpuClipAntialiasSink::Bounds>::emplace_back<unsigned short,unsigned short,float,unsigned short,float>(
    (unsigned int)v80,
    (unsigned int)&v77,
    (unsigned int)&v76,
    (unsigned int)&v73,
    (__int64)&v72,
    (__int64)&v83);
  v11 = 0x7FFFFFFFFFFFFFFLL;
  v12 = *(CBatchCommand ***)v80;
  v13 = v81;
  v14 = -858993459 * ((__int64)(*(_QWORD *)(v6 + v7 + 16) - *(_QWORD *)(v6 + v7 + 8)) >> 3) - 1;
  v15 = 40LL * v14;
  while ( v13 && v14 >= 0 )
  {
    v16 = *(_QWORD *)(v6 + v7 + 8);
    v17 = (CBatchCommand **)*v12;
    v85 = v16;
    v18 = *(_QWORD *)(v15 + v16);
    v83 = v18;
    while ( v17 != v12 )
    {
      v19 = fminf(*(float *)(v18 + 104), *((float *)v17 + 6));
      v20 = fmaxf(*(float *)(v18 + 100), *((float *)v17 + 5));
      LOWORD(v80[0]) = v3;
      *(float *)&v81 = v19;
      *(float *)&v80[1] = v20;
      if ( v20 >= v19 )
        goto LABEL_10;
      if ( *(_BYTE *)(v15 + v16 + 32) )
      {
        LODWORD(v73) = v14;
        std::list<CCpuClipAntialiasSinkContext::SinkRenderCommand>::emplace_front<unsigned int,CCpuClipAntialiasSink::Bounds &>(
          &v74,
          &v73,
          v80);
        v18 = v83;
        v11 = 0x7FFFFFFFFFFFFFFLL;
      }
      if ( *(_BYTE *)(v15 + v16 + 33) )
      {
        if ( v20 > *((float *)v17 + 5) )
        {
          if ( v13 == (struct CBatchCommand *)0x7FFFFFFFFFFFFFFLL )
            goto LABEL_74;
          v21 = std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate(0x7FFFFFFFFFFFFFFLL);
          v13 = (struct CBatchCommand *)((char *)v13 + 1);
          *(_DWORD *)(v21 + 20) = *((_DWORD *)v17 + 5);
          *(float *)(v21 + 24) = v20;
          *(_WORD *)(v21 + 16) = v3;
          v11 = (__int64)v17[1];
          *(_QWORD *)v21 = v17;
          *(_QWORD *)(v21 + 8) = v11;
          v17[1] = (CBatchCommand *)v21;
          *(_QWORD *)v11 = v21;
        }
        if ( *((float *)v17 + 6) > v19 )
        {
          if ( v13 == (struct CBatchCommand *)0x7FFFFFFFFFFFFFFLL )
LABEL_74:
            std::_Xlength_error("list too long");
          v22 = std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate(v11);
          v23 = *((_DWORD *)v17 + 6);
          v13 = (struct CBatchCommand *)((char *)v13 + 1);
          *(float *)(v22 + 20) = v19;
          *(_DWORD *)(v22 + 24) = v23;
          *(_WORD *)(v22 + 16) = v3;
          v24 = (__int64 *)v17[1];
          *(_QWORD *)v22 = v17;
          *(_QWORD *)(v22 + 8) = v24;
          v17[1] = (CBatchCommand *)v22;
          *v24 = v22;
        }
        v13 = (struct CBatchCommand *)((char *)v13 - 1);
        v25 = (CBatchCommand **)*v17;
        *(_QWORD *)v17[1] = *v17;
        *((_QWORD *)*v17 + 1) = v17[1];
        std::_Deallocate<16>(v17, 32LL);
        v18 = v83;
        v17 = v25;
        v16 = v85;
      }
      else
      {
LABEL_10:
        v17 = (CBatchCommand **)*v17;
      }
      v11 = 0x7FFFFFFFFFFFFFFLL;
      if ( *(float *)(v18 + 104) == v19 )
        break;
    }
    v6 = v86;
    --v14;
    v7 = v78;
    v15 -= 40LL;
  }
  *(_QWORD *)v12[1] = 0LL;
  v26 = *v12;
  if ( *v12 )
  {
    do
    {
      v27 = *(CBatchCommand **)v26;
      std::_Deallocate<16>(v26, 32LL);
      v26 = v27;
    }
    while ( v27 );
  }
  std::_Deallocate<16>(v12, 32LL);
  v29 = v75;
  if ( !v75 )
    goto LABEL_36;
  if ( CCommonRegistryData::CpuClipAASinkEnableIntermediates )
  {
    LOBYTE(v28) = v72;
    *(_QWORD *)v87 = v90;
    v88 = v90;
    v89 = &v91;
    std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_2_::_lambda_1___(
      v74,
      v75,
      v28);
    v30 = v74;
    v31 = 0LL;
    v32 = FLOAT_3_4028235e38;
    v33 = (__m128i)LODWORD(FLOAT_N3_4028235e38);
    *((float *)&v78 + 1) = FLOAT_3_4028235e38;
    v34 = *v74;
    LOWORD(v78) = v3;
    v35 = v78;
    v36 = _mm_cvtsi128_si32((__m128i)LODWORD(FLOAT_N3_4028235e38));
    while ( (__int64 *)v34 != v30 )
    {
      v37 = *(float *)(v34 + 28);
      if ( v37 > v32 && *(float *)v33.m128i_i32 > *(float *)(v34 + 24) )
      {
        v32 = fminf(v32, *(float *)(v34 + 24));
        *(float *)v33.m128i_i32 = fmaxf(*(float *)v33.m128i_i32, v37);
        ++v31;
        *((float *)&v78 + 1) = v32;
        v35 = v78;
        v36 = _mm_cvtsi128_si32(v33);
      }
      else
      {
        if ( v31 > 1 )
        {
          v38 = detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::reserve_region(
                  v87,
                  0xAAAAAAAAAAAAAAABuLL * ((__int64)&v88[-*(_QWORD *)v87] >> 2));
          *(_QWORD *)v38 = v35;
          *(_DWORD *)(v38 + 8) = v36;
          v30 = v74;
        }
        v36 = *(_DWORD *)(v34 + 28);
        v31 = 1LL;
        v35 = *(_QWORD *)(v34 + 20);
        v78 = v35;
        v32 = *((float *)&v35 + 1);
        v33 = _mm_cvtsi32_si128(v36);
      }
      v34 = *(_QWORD *)v34;
    }
    if ( v31 > 1 )
    {
      v43 = detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::reserve_region(
              v87,
              0xAAAAAAAAAAAAAAABuLL * ((__int64)&v88[-*(_QWORD *)v87] >> 2));
      *(_QWORD *)v43 = v35;
      *(_DWORD *)(v43 + 8) = v36;
      v30 = v74;
    }
    v44 = v88;
    v45 = *(_QWORD *)v87;
    if ( v88 == *(_BYTE **)v87
      || (LOBYTE(v44) = v72,
          std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___(
            v30,
            v75,
            v44),
          v44 = v88,
          v45 = *(_QWORD *)v87,
          v88 == *(_BYTE **)v87) )
    {
      v46 = v79;
    }
    else
    {
      v46 = v79;
      v47 = CCpuClipAntialiasSinkContext::ProcessRenderCommands_OffscreenRenderPass(
              (__int64)v79,
              v84,
              v3,
              &v74,
              (__int64 *)v87);
      v48 = v47;
      if ( v47 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7F,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
          (const char *)(unsigned int)v47);
        v68 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v88[-*(_QWORD *)v87] >> 2);
        if ( v68 )
          detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::clear_region(
            (__int64 *)v87,
            v67,
            v68);
        detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v87);
        v69 = v74;
        *(_QWORD *)v74[1] = 0LL;
        v70 = (_QWORD *)*v69;
        if ( v70 )
        {
          do
          {
            v71 = (_QWORD *)*v70;
            std::_Deallocate<16>(v70, 32LL);
            v70 = v71;
          }
          while ( v71 );
        }
        goto LABEL_66;
      }
      v44 = v88;
      v45 = *(_QWORD *)v87;
    }
    v49 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v44[-v45] >> 2);
    if ( v49 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v80, v45, v49);
      v88 -= 12 * v50;
    }
    detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v87);
    v29 = v75;
  }
  else
  {
    v46 = v79;
  }
  v51 = *((_QWORD *)v84 + 4);
  v52 = *((_QWORD *)v46 + 2) + 432 * v3;
  if ( !v29 )
  {
LABEL_36:
    v39 = v74;
    *(_QWORD *)v74[1] = 0LL;
    v40 = (_QWORD *)*v39;
    if ( v40 )
    {
      do
      {
        v41 = (_QWORD *)*v40;
        std::_Deallocate<16>(v40, 32LL);
        v40 = v41;
      }
      while ( v41 );
    }
    std::_Deallocate<16>(v74, 32LL);
    v4 = v79;
    goto LABEL_39;
  }
  v53 = CDrawingContext::ApplyRenderStateInternal(v84, 1);
  v48 = v53;
  if ( v53 >= 0 )
  {
    v54 = v74;
    while ( 1 )
    {
      v54 = (__int64 *)*v54;
      if ( v54 == v74 )
        goto LABEL_36;
      v55 = *(_QWORD *)(v52 + 8);
      v56 = 5LL * *((unsigned int *)v54 + 4);
      v78 = *(_QWORD *)(v55 + 40LL * *((unsigned int *)v54 + 4));
      if ( (*(int (__fastcall **)(_QWORD, CDrawingContext *))(**(_QWORD **)(v78 + 24) + 48LL))(
             *(_QWORD *)(v78 + 24),
             v84) >= 0 )
      {
        v73 = 0LL;
        *(_QWORD *)v80 = &v73;
        v81 = 0LL;
        v82 = 1;
        v48 = CDrawListBatchManager::CreateBatchCommand((CDrawListBatchManager *)(v51 + 24), &v81);
        if ( v82 )
        {
          v57 = v80[0];
          v58 = **(CBatchCommand ***)v80;
          **(_QWORD **)v80 = v81;
          if ( v58 )
            CBatchCommand::`scalar deleting destructor'(v58, v57);
        }
        if ( (v48 & 0x80000000) != 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x208,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
            (const char *)v48);
          std::unique_ptr<CBatchCommand>::~unique_ptr<CBatchCommand>(&v73);
          goto LABEL_64;
        }
        v59 = (char *)v79 + 904;
        CBatchCommand::InitializeForRendering(v73, v78, *(unsigned int *)(v55 + 8 * v56 + 12));
        v60 = v73;
        *((_DWORD *)v73 + 24) = 0;
        *(_QWORD *)((char *)v60 + 100) = *(__int64 *)((char *)v54 + 20);
        *((_DWORD *)v60 + 27) = *((_DWORD *)v54 + 7);
        *((_OWORD *)v60 + 7) = *(_OWORD *)v59;
        *((_OWORD *)v60 + 8) = *((_OWORD *)v59 + 1);
        *((_OWORD *)v60 + 9) = *((_OWORD *)v59 + 2);
        *((_OWORD *)v60 + 10) = *((_OWORD *)v59 + 3);
        *((_DWORD *)v60 + 44) = *((_DWORD *)v59 + 16);
        v61 = CD2DContext::SubmitRenderCommand((CD2DContext *)(v51 + 16));
        v48 = v61;
        if ( v61 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x218,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
            (const char *)(unsigned int)v61);
          if ( v73 )
            std::default_delete<CBatchCommand>::operator()(v63, v73);
          goto LABEL_64;
        }
        if ( v73 )
          CBatchCommand::`scalar deleting destructor'(v73, v62);
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F5,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
    (const char *)(unsigned int)v53);
LABEL_64:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
    (const char *)v48);
  v64 = v74;
  *(_QWORD *)v74[1] = 0LL;
  v65 = (_QWORD *)*v64;
  if ( v65 )
  {
    do
    {
      v66 = (_QWORD *)*v65;
      std::_Deallocate<16>(v65, 32LL);
      v65 = v66;
    }
    while ( v66 );
  }
LABEL_66:
  std::_Deallocate<16>(v74, 32LL);
  return v48;
}
