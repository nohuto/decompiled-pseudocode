/*
 * XREFs of ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180007FE4
 * Callers:
 *     ?PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z @ 0x1800E7154 (-PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z.c)
 * Callees:
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x180007B5C (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 *     ?TryAddEdge@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEAA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@AEBUSinkRoutingInfo@CCpuClipAntialiasSink@@M@Z @ 0x1800089AC (-TryAddEdge@-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEAA_NAEBUD2D_VECT.c)
 *     ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x180009380 (-Create@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV.c)
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x180009DA8 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?GetMeshCacheManager@@YAPEAVCMeshCacheManager@@XZ @ 0x180009F30 (-GetMeshCacheManager@@YAPEAVCMeshCacheManager@@XZ.c)
 *     ??4?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScribble@@@Z @ 0x180009F50 (--4-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScrib.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180009FA0 (-clear_region@-$vector_facade@GV-$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ??1?$expandable_buffer_base@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@@detail@@QEAA@XZ @ 0x18000A074 (--1-$expandable_buffer_base@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@@detail@@QEAA@XZ.c)
 *     ?clear_region@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18000A098 (-clear_region@-$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V-$buffer_impl@UVertexXYW_ColorDW_.c)
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x18000A17C (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ?resize@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18000A1CC (-resize@-$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V-$buffer_impl@UVertexXYW_ColorDW_UV2_AA.c)
 *     ?reserve_region@?$vector_facade@GV?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAG_K0@Z @ 0x18000A288 (-reserve_region@-$vector_facade@GV-$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@deta.c)
 *     ?GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18000A800 (-GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     ?GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18000B040 (-GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001F080 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CPolygonBuilder@@QEAA@XZ @ 0x180054AD8 (--0CPolygonBuilder@@QEAA@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCPolygonBuilder@@V1@@@SAPEAX_K@Z @ 0x180054B14 (-Alloc@-$CThreadLocalObjectCache@VCPolygonBuilder@@V1@@@SAPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800BE2B0 (--1-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansi.c)
 *     ??1?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800BF640 (--1-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vl.c)
 *     ?resize@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x1800BFCE0 (-resize@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_ex.c)
 *     ?Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z @ 0x1800D9B54 (-Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z.c)
 *     ?CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z @ 0x1800D9CB0 (-CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z.c)
 *     ?TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x1800DB414 (-TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEB.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800F2210 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?resize@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18016EEDC (-resize@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@.c)
 *     ??4?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801A3C68 (--4-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEdgeMap@USinkRoutingInf.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasSink::Initialize(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        const struct CShape *a4,
        CMILMatrix *a5)
{
  unsigned __int16 v6; // r13
  __int64 v7; // r15
  bool v8; // al
  __m128 v9; // xmm6
  __m128 v10; // xmm8
  CPolygonBuilder *v11; // rax
  CPolygonBuilder *v12; // rax
  CPolygonBuilder *v13; // rbx
  int v14; // eax
  unsigned int v15; // edi
  _QWORD *v16; // rdi
  CMeshCacheManager *MeshCacheManager; // rax
  struct Mesh::VertexAAOffsetsResource *MeshAAOffsets; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  _WORD *v21; // rdi
  unsigned __int64 i; // rcx
  _BYTE *v23; // rdi
  __int64 v24; // r12
  _BYTE *v25; // r14
  __int64 v26; // rsi
  int v27; // r14d
  unsigned int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int16 v32; // ax
  int v33; // r14d
  float v34; // xmm6_4
  unsigned int v35; // eax
  int v36; // r13d
  __int64 v37; // r14
  __int64 v38; // r15
  unsigned __int64 v39; // rcx
  float v40; // xmm0_4
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v45; // r8
  unsigned __int64 v46; // rax
  unsigned __int16 v47; // di
  __int64 v48; // rcx
  float *v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // r8
  unsigned int v52; // r15d
  int v53; // [rsp+20h] [rbp-E0h]
  int v54; // [rsp+20h] [rbp-E0h]
  int v55; // [rsp+20h] [rbp-E0h]
  bool v56; // [rsp+40h] [rbp-C0h]
  int v57; // [rsp+44h] [rbp-BCh] BYREF
  int v58[2]; // [rsp+48h] [rbp-B8h] BYREF
  CPolygonBuilder *v59; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v60[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v61; // [rsp+68h] [rbp-98h]
  int v62[2]; // [rsp+70h] [rbp-90h] BYREF
  int v63; // [rsp+78h] [rbp-88h]
  int v64; // [rsp+7Ch] [rbp-84h]
  _BYTE v65[40]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v66; // [rsp+A8h] [rbp-58h]
  int v67[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v68; // [rsp+C0h] [rbp-40h]
  int v69; // [rsp+C4h] [rbp-3Ch]
  int v70[2]; // [rsp+C8h] [rbp-38h] BYREF
  int v71; // [rsp+D0h] [rbp-30h]
  int v72; // [rsp+D4h] [rbp-2Ch]
  _BYTE *v73; // [rsp+E0h] [rbp-20h] BYREF
  int v74; // [rsp+E8h] [rbp-18h]
  int v75; // [rsp+ECh] [rbp-14h]
  __int64 v76; // [rsp+F0h] [rbp-10h]
  int v77; // [rsp+F8h] [rbp-8h]
  _BYTE v78[12]; // [rsp+FCh] [rbp-4h]
  __int128 v79; // [rsp+108h] [rbp+8h]
  __int64 v80; // [rsp+118h] [rbp+18h]
  __int128 v81; // [rsp+120h] [rbp+20h]
  _OWORD v82[2]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v83[3]; // [rsp+150h] [rbp+50h]
  float v84[20]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE *v85; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE *v86; // [rsp+1C8h] [rbp+C8h]
  _QWORD *v87; // [rsp+1D0h] [rbp+D0h]
  _BYTE v88[200]; // [rsp+1D8h] [rbp+D8h] BYREF
  _QWORD v89[3]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v90[160]; // [rsp+2B8h] [rbp+1B8h] BYREF
  char v91; // [rsp+358h] [rbp+258h] BYREF
  _BYTE *v92; // [rsp+360h] [rbp+260h] BYREF
  _BYTE *v93; // [rsp+368h] [rbp+268h]
  struct Mesh::VertexAAOffsetDesc **v94; // [rsp+370h] [rbp+270h]
  _BYTE v95[2560]; // [rsp+380h] [rbp+280h] BYREF
  struct Mesh::VertexAAOffsetDesc *v96[3]; // [rsp+D80h] [rbp+C80h] BYREF
  _BYTE v97[1280]; // [rsp+D98h] [rbp+C98h] BYREF
  char v98; // [rsp+1298h] [rbp+1198h] BYREF
  void *retaddr; // [rsp+1338h] [rbp+1238h]

  LOWORD(v57) = a2;
  *(_QWORD *)v67 = a1;
  v6 = a2;
  v7 = a1;
  if ( a3 )
    std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::operator=(
      a1 + 16,
      a3);
  LODWORD(v59) = 0;
  v58[0] = 0;
  CMILMatrix::Get2DScaleDimensionsWithPerspective(a5, &v59, v58, 0LL);
  v8 = CMILMatrix::Is2DAxisAlignedPreserving(a5);
  v9 = (__m128)(unsigned int)v59;
  v10 = (__m128)(unsigned int)v58[0];
  v56 = v8;
  memset(&v65[8], 0, 32);
  v84[16] = 0.0;
  v66 = 0LL;
  *(_QWORD *)v65 = COERCE_UNSIGNED_INT(0.015625 / fmaxf(*(float *)&v59, *(float *)v58));
  CMILMatrix::SetScale((CMILMatrix *)v84, *(float *)&v59, *(float *)v58, 1.0, 0.0, 0.0, 0.0);
  v11 = (CPolygonBuilder *)CThreadLocalObjectCache<CPolygonBuilder,CPolygonBuilder>::Alloc();
  if ( !v11 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v12 = CPolygonBuilder::CPolygonBuilder(v11);
  v59 = v12;
  v13 = v12;
  if ( v12 )
    (*(void (__fastcall **)(CPolygonBuilder *))(*(_QWORD *)v12 + 8LL))(v12);
  v14 = (*(__int64 (__fastcall **)(const struct CShape *, CPolygonBuilder *))(*(_QWORD *)a4 + 32LL))(a4, v13);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x65,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassink.cpp",
      (const char *)(unsigned int)v14,
      v53);
    if ( v13 )
      (*(void (__fastcall **)(CPolygonBuilder *))(*(_QWORD *)v13 + 16LL))(v13);
    return v15;
  }
  if ( !(unsigned int)((__int64)(*((_QWORD *)v13 + 3) - *((_QWORD *)v13 + 2)) >> 3) )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v59);
    return 0LL;
  }
  v58[0] = 3;
  v89[0] = v90;
  v89[1] = v90;
  v89[2] = &v91;
  detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::resize(
    v89,
    (unsigned int)((__int64)(*((_QWORD *)v13 + 3) - *((_QWORD *)v13 + 2)) >> 3),
    v58);
  v16 = (_QWORD *)(v7 + 32);
  WORD6(v66) = 0;
  *(_QWORD *)&v65[8] = (unsigned int)((__int64)(*((_QWORD *)v13 + 3) - *((_QWORD *)v13 + 2)) >> 3);
  *(_QWORD *)&v65[16] = *((_QWORD *)v13 + 2);
  *(_QWORD *)&v65[24] = v89[0];
  DWORD2(v66) = 1;
  *(__m128i *)v60 = _mm_load_si128((const __m128i *)&_xmm);
  v61 = 0LL;
  MeshCacheManager = GetMeshCacheManager();
  MeshAAOffsets = CMeshCacheManager::TryGetMeshAAOffsets(
                    MeshCacheManager,
                    (const struct Mesh::MeshDesc *)v65,
                    a4,
                    (const struct D2D1::Matrix3x2F *)v60,
                    0);
  wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>::operator=(v7 + 32, MeshAAOffsets);
  if ( !*(_QWORD *)(v7 + 32) )
  {
    *v16 = 0LL;
    Mesh::VertexAAOffsetsResource::Create(
      (const struct Mesh::MeshDesc *)v65,
      (struct Mesh::VertexAAOffsetsResource **)(v7 + 32));
  }
  *(_QWORD *)&v65[32] = *v16 + 24LL;
  v19 = 6LL * *(_QWORD *)&v65[8];
  v92 = v95;
  v93 = v95;
  v94 = v96;
  detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::resize(
    &v92,
    2LL * *(_QWORD *)&v65[8] + 2);
  v85 = v88;
  v86 = v88;
  v87 = v89;
  v20 = 2 * v19;
  if ( v19 )
  {
    v21 = (_WORD *)detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>>::reserve_region(
                     &v85,
                     0LL,
                     v19);
    for ( i = v20 >> 1; i; --i )
      *v21++ = 0;
  }
  else
  {
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>>::clear_region(
      &v85,
      0LL,
      0LL);
  }
  v23 = v92;
  v24 = (v93 - v92) >> 6;
  *(_DWORD *)&v78[8] = 0;
  v80 = 0LL;
  v25 = v85;
  v73 = v92;
  v26 = (unsigned __int64)(v92 + 32) & -(__int64)(v92 != 0LL);
  v74 = 64;
  v76 = v26;
  v75 = v24;
  v77 = 64;
  *(_QWORD *)v78 = (unsigned int)v24;
  gsl::details::extent_type<-1>::extent_type<-1>(v62, (v86 - v85) >> 1);
  if ( *(_QWORD *)v62 == -1LL || !v25 && *(_QWORD *)v62 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  *((_QWORD *)&v79 + 1) = v25;
  v27 = 0;
  *(_QWORD *)&v79 = *(_QWORD *)v62;
  if ( BYTE12(v66) )
  {
    Mesh::GenerateGeometryForRectangle((const struct Mesh::MeshDesc *)v65, (struct Mesh::GeometryBuffers *)&v73);
  }
  else if ( *(_QWORD *)&v65[32] )
  {
    Mesh::GenerateGeometryWorker((const struct Mesh::MeshDesc *)v65, (struct Mesh::GeometryBuffers *)&v73);
  }
  else
  {
    v96[0] = (struct Mesh::VertexAAOffsetDesc *)v97;
    v96[1] = (struct Mesh::VertexAAOffsetDesc *)v97;
    v96[2] = (struct Mesh::VertexAAOffsetDesc *)&v98;
    detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::resize(
      v96,
      *(_QWORD *)&v65[8]);
    Mesh::CalcVertexAAOffsets((const struct Mesh::MeshDesc *)v65, v96[0], 1);
    v82[0] = *(_OWORD *)v65;
    v82[1] = *(_OWORD *)&v65[16];
    *(_OWORD *)&v83[1] = v66;
    v83[0] = v96[0];
    Mesh::GenerateGeometryWorker((const struct Mesh::MeshDesc *)v82, (struct Mesh::GeometryBuffers *)&v73);
    detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::~vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>(v96);
  }
  if ( !(unsigned __int8)CMILMatrix::IsIdentity<0>(v84) )
  {
    v52 = 0;
    if ( *(_QWORD *)&v78[4] )
    {
      do
      {
        Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
          (float *)&v23[v27],
          (float *)(v27 + v26),
          0,
          v84,
          (float *)&v23[v27],
          (float *)(v27 + v26));
        ++v52;
        v27 += 64;
      }
      while ( (unsigned __int64)v52 < *(_QWORD *)&v78[4] );
      v13 = v59;
    }
    v7 = *(_QWORD *)v67;
  }
  v28 = 0;
  do
  {
    v29 = (int)v28;
    v28 += 64;
    *(_OWORD *)&v23[*(_DWORD *)&v78[4] << 6] = *(_OWORD *)&v23[v29];
    *(_OWORD *)((int)(*(_DWORD *)&v78[4] << 6) + v26) = *(_OWORD *)(v29 + v26);
    ++*(_QWORD *)&v78[4];
  }
  while ( v28 < 0x80 );
  v30 = *((_QWORD *)&v79 + 1);
  *(_QWORD *)v58 = _mm_unpacklo_ps(v9, v10).m128_u64[0];
  v31 = 3LL * *(_QWORD *)&v65[8];
  LOBYTE(v61) = 1;
  v32 = *(_WORD *)&v78[4] - 2;
  v60[1] = 0LL;
  *(_WORD *)(*((_QWORD *)&v79 + 1) + 4 * v31 - 8) = *(_WORD *)&v78[4] - 2;
  *(_WORD *)(v30 + 4 * v31 - 4) = v32;
  *(_QWORD *)v70 = v26;
  *(_WORD *)(v30 + 4 * v31 - 10) = *(_WORD *)&v78[4] - 1;
  v71 = 64;
  v60[0] = v7 + 40;
  v72 = v24;
  *(_QWORD *)v62 = v23;
  v63 = 64;
  v64 = v24;
  v81 = v79;
  v33 = CDrawListPrimitive::Create((int)v62, (int)v70, 0, v58, 0, (__int64)&v60[1]);
  if ( (_BYTE)v61 )
    std::unique_ptr<CShape>::reset(v60[0], v60[1]);
  if ( v33 >= 0 )
  {
    v34 = 0.0;
    if ( *(_QWORD *)&v78[4] )
    {
      v35 = 2;
      v58[0] = 2;
      v36 = 128;
      do
      {
        v37 = v36;
        v38 = v36;
        v39 = v35;
        *(_QWORD *)v70 = v35;
        *(float *)&v23[v36 - 124] = v34;
        *(_DWORD *)&v23[v36 - 128] = 0;
        *(_DWORD *)&v23[v36 - 120] = 1065353216;
        *(float *)&v23[v36 - 60] = v34;
        *(_DWORD *)&v23[v36 - 64] = 1065353216;
        *(_DWORD *)&v23[v36 - 56] = 1065353216;
        if ( (unsigned __int64)v35 < *(_QWORD *)&v78[4] )
        {
          v40 = sqrtf_0(
                  (float)((float)(*(float *)(v36 + v26 + 4) - *(float *)(v26 + v36 - 124))
                        * (float)(*(float *)(v36 + v26 + 4) - *(float *)(v26 + v36 - 124)))
                + (float)((float)(*(float *)(v36 + v26) - *(float *)(v26 + v36 - 128))
                        * (float)(*(float *)(v36 + v26) - *(float *)(v26 + v36 - 128))));
          v35 = v58[0];
          v34 = v34 + v40;
          v39 = *(_QWORD *)v70;
        }
        v35 += 2;
        *(_QWORD *)(v26 + v36 - 128) = *(_QWORD *)&v23[v36 - 128];
        v36 += 128;
        *(_DWORD *)(v26 + v37 - 120) = 0;
        *(_QWORD *)(v26 + v38 - 64) = *(_QWORD *)&v23[v38 - 64];
        *(_DWORD *)(v26 + v38 - 52) = 1065353216;
        *(_DWORD *)(v26 + v38 - 56) = 0;
        v58[0] = v35;
      }
      while ( v39 < *(_QWORD *)&v78[4] );
      v13 = v59;
      v7 = *(_QWORD *)v67;
      v6 = v57;
    }
    v60[1] = 0LL;
    v60[0] = v7 + 48;
    *(_QWORD *)v62 = v26;
    LOBYTE(v61) = 1;
    v64 = v24;
    v63 = 64;
    v68 = 64;
    *(_QWORD *)v70 = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
    *(_QWORD *)v67 = v23;
    v69 = v24;
    v81 = v79;
    v15 = CDrawListPrimitive::Create((int)v67, (int)v62, 0, v70, 0, (__int64)&v60[1]);
    if ( (_BYTE)v61 )
      std::unique_ptr<CShape>::reset(v60[0], v60[1]);
    if ( (v15 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0xFC,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassink.cpp",
        (const char *)v15,
        v55);
      v43 = (v86 - v85) >> 1;
      if ( v43 )
        detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>>::clear_region(
          &v85,
          0LL,
          v43);
      detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(&v85, v42, v43);
      if ( (v93 - v92) >> 6 )
        detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::clear_region(
          &v92,
          0LL);
      detail::expandable_buffer_base<VertexXYW_ColorDW_UV2_AAFixup,40>::~expandable_buffer_base<VertexXYW_ColorDW_UV2_AAFixup,40>(&v92);
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::~vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>(v89);
      (*(void (__fastcall **)(CPolygonBuilder *))(*(_QWORD *)v13 + 16LL))(v13);
      return v15;
    }
    v45 = (v86 - v85) >> 1;
    if ( v45 )
      detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>>::clear_region(
        &v85,
        0LL,
        v45);
    detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(&v85, v41, v45);
    if ( (v93 - v92) >> 6 )
      detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::clear_region(
        &v92,
        0LL);
    detail::expandable_buffer_base<VertexXYW_ColorDW_UV2_AAFixup,40>::~expandable_buffer_base<VertexXYW_ColorDW_UV2_AAFixup,40>(&v92);
    v46 = *(_QWORD *)&v65[8];
    v47 = 0;
    v57 = v6;
    if ( *(_QWORD *)&v65[8] )
    {
      v48 = 0LL;
      do
      {
        v49 = (float *)(*(_QWORD *)&v65[32] + 32 * v48);
        if ( v56 && (*v49 == 0.0 || v49[1] == 0.0) )
        {
          *(_BYTE *)(v7 + 56) = 1;
        }
        else
        {
          HIWORD(v57) = v47;
          CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::TryAddEdge(
            v7 + 16,
            (_DWORD)v49,
            *(_DWORD *)&v65[16] + 8 * v48,
            (unsigned int)&v57,
            FLOAT_0_000081380211);
          v46 = *(_QWORD *)&v65[8];
        }
        v48 = ++v47;
      }
      while ( v47 < v46 );
    }
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::~vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>(v89);
    (*(void (__fastcall **)(CPolygonBuilder *))(*(_QWORD *)v13 + 16LL))(v13);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    (wil::details::in1diag3 *)retaddr,
    (void *)0xCE,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassink.cpp",
    (const char *)(unsigned int)v33,
    v54);
  v51 = (v86 - v85) >> 1;
  if ( v51 )
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>>::clear_region(
      &v85,
      0LL,
      v51);
  detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(&v85, v50, v51);
  if ( (v93 - v92) >> 6 )
    detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::clear_region(
      &v92,
      0LL);
  detail::expandable_buffer_base<VertexXYW_ColorDW_UV2_AAFixup,40>::~expandable_buffer_base<VertexXYW_ColorDW_UV2_AAFixup,40>(&v92);
  detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::~vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>(v89);
  (*(void (__fastcall **)(CPolygonBuilder *))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v33;
}
