/*
 * XREFs of ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18000B800
 * Callers:
 *     ?BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawListEntry@@PEAPEAVCDrawListPrimitive@@@Z @ 0x180007D60 (-BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawLis.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@std@@V?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@V?$move_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@0@0V12@@Z @ 0x18000A690 (--$move@V-$move_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@std@@V-$checked_array_iterator.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@Z @ 0x18000A724 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ?GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18000A800 (-GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     ?GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18000B040 (-GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z @ 0x18000CB60 (-CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z.c)
 *     ?ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@V?$StridedSpan@UVertexAAFixup_UVxN@@@@@Z @ 0x18000CEF0 (-ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V-$StridedSpan.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??1?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800BF640 (--1-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vl.c)
 *     ?CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z @ 0x1800D9CB0 (-CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z.c)
 *     ??C?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ @ 0x180142FD8 (--C-$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ.c)
 *     ?resize@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18016EEDC (-resize@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@.c)
 *     ??$move@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1801C096C (--$move@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$checked_a.c)
 *     ??C?$checked_array_iterator@PEAG@stdext@@QEBAPEAGXZ @ 0x1801DCFF8 (--C-$checked_array_iterator@PEAG@stdext@@QEBAPEAGXZ.c)
 *     ??$move_backward@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x180211174 (--$move_backward@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_array.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??$move_backward@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x180259E78 (--$move_backward@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawListEntryBuilder::AppendHWGeometry(
        CDrawListEntryBuilder *this,
        const struct Mesh::MeshDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3)
{
  signed __int64 v3; // r13
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  _OWORD *v7; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  __int64 v16; // r9
  _OWORD *v17; // r14
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r9
  _WORD *v23; // rsi
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  _WORD *j; // rdi
  unsigned __int64 v32; // rsi
  _WORD *v33; // rdi
  unsigned __int64 v34; // rcx
  unsigned int v35; // edi
  unsigned __int64 v36; // rsi
  __int64 v37; // r14
  __int64 v38; // rbx
  unsigned __int64 v39; // r14
  __int64 v40; // rax
  gsl::details *v41; // rcx
  bool v42; // zf
  __int64 v43; // r9
  __int64 v44; // rcx
  char *v45; // r14
  __int64 v46; // r13
  const struct PrimitiveVertexAttributesDesc *v47; // rcx
  unsigned __int64 v48; // r13
  unsigned __int64 v49; // rbx
  __int64 v50; // r14
  __int64 v51; // r9
  const struct PrimitiveVertexAttributesDesc *v52; // rcx
  char *v53; // r14
  unsigned __int64 v54; // r13
  unsigned __int64 v55; // rbx
  __int64 v56; // r14
  __int64 v57; // r9
  unsigned __int64 v58; // r14
  __int64 v59; // rbx
  __int64 v60; // r9
  unsigned __int64 v61; // rax
  __int64 v62; // rax
  __int64 m; // rdi
  unsigned __int64 v64; // rdi
  _WORD *v65; // rdi
  unsigned __int64 n; // rcx
  __int64 v67; // rdi
  __int64 v68; // r9
  unsigned __int64 v69; // rax
  __int64 v70; // rax
  _OWORD *v71; // rsi
  unsigned __int64 v72; // rbx
  _OWORD *v73; // rsi
  unsigned __int64 v74; // r12
  __int64 v75; // rdi
  unsigned __int64 v76; // rax
  __int64 v77; // rax
  _OWORD *v78; // rsi
  unsigned __int64 v79; // rsi
  _OWORD *v80; // rbx
  unsigned int v81; // edi
  unsigned __int64 v82; // rdx
  __int64 v83; // rdi
  unsigned __int64 v84; // rax
  __int64 v85; // rax
  char *v86; // rsi
  unsigned __int64 v87; // rsi
  _OWORD *v88; // rbx
  unsigned __int64 v89; // r12
  __int64 v90; // rdi
  unsigned __int64 v91; // rax
  __int64 v92; // rax
  char *v93; // rsi
  unsigned __int64 v94; // rsi
  _OWORD *v95; // rbx
  unsigned int k; // edx
  __int64 v97; // rcx
  __int64 v98; // rax
  float v99; // xmm1_4
  unsigned __int64 v100; // rax
  float v101; // xmm1_4
  __int64 v102; // r9
  __int64 v103; // rbx
  __int64 v104; // r9
  __int64 v105; // rbx
  __int64 v106; // r9
  __int64 v107; // r9
  unsigned __int64 v108; // rdx
  unsigned __int64 v109; // rdi
  unsigned __int64 v110; // rax
  void *v111; // rbx
  __int64 v112; // r9
  __int64 v113; // rdi
  void *v114; // rsi
  __int64 v115; // xmm6_8
  CDrawListEntryBuilder *v116; // rdx
  CDrawListEntryBuilder *v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rax
  unsigned __int64 v120; // rcx
  unsigned __int64 v121; // rcx
  void *v122; // rbx
  __int64 v123; // r9
  __int64 v124; // rdi
  void *v125; // rsi
  __int64 v126; // xmm6_8
  CDrawListEntryBuilder *v127; // rdx
  CDrawListEntryBuilder *v128; // rcx
  __int64 v129; // rax
  unsigned __int64 v130; // rdi
  unsigned __int64 v131; // rdx
  unsigned __int64 v132; // rax
  void *v133; // rbx
  __int64 v134; // r9
  __int64 v135; // rdi
  void *v136; // rsi
  void *v137; // rax
  CDrawListEntryBuilder *v138; // rdx
  CDrawListEntryBuilder *v139; // rcx
  __int64 v140; // rcx
  __int64 v141; // rax
  unsigned __int64 v142; // rdx
  unsigned __int64 v143; // rdi
  unsigned __int64 v144; // rax
  SIZE_T v145; // rax
  void *v146; // r14
  __int64 v147; // r9
  __int64 v148; // rdi
  void *v149; // rsi
  void *v150; // rax
  CDrawListEntryBuilder *v151; // rdx
  CDrawListEntryBuilder *v152; // rcx
  __int64 v153; // rcx
  __int64 v154; // rax
  unsigned __int64 v155; // rdx
  unsigned __int64 v156; // rcx
  unsigned __int64 v157; // rax
  void *v158; // r14
  __int64 v159; // r9
  __int64 v160; // rdi
  void *v161; // rsi
  void *v162; // rax
  CDrawListEntryBuilder *v163; // rdx
  CDrawListEntryBuilder *v164; // rcx
  __int64 v165; // rcx
  unsigned __int64 v166; // rdx
  unsigned __int64 v167; // rcx
  void *v168; // r14
  __int64 v169; // r9
  __int64 v170; // rdi
  void *v171; // rsi
  void *v172; // rax
  CDrawListEntryBuilder *v173; // rdx
  CDrawListEntryBuilder *v174; // rcx
  __int64 v175; // rcx
  unsigned __int64 v176; // rdi
  __int64 v177; // rdx
  __int128 v178; // xmm1
  __int128 v179; // xmm0
  __int128 v180; // [rsp+20h] [rbp-E0h] BYREF
  __int64 i; // [rsp+30h] [rbp-D0h]
  __int128 v182; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v183; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v184; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v185; // [rsp+68h] [rbp-98h] BYREF
  const struct PrimitiveVertexAttributesDesc *v186; // [rsp+70h] [rbp-90h]
  unsigned __int64 v187; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v188; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v189; // [rsp+88h] [rbp-78h]
  int v190; // [rsp+8Ch] [rbp-74h]
  unsigned int v191; // [rsp+98h] [rbp-68h]
  __int64 v192; // [rsp+A0h] [rbp-60h]
  __int64 v193; // [rsp+A8h] [rbp-58h]
  __int64 v194; // [rsp+B0h] [rbp-50h]
  __int64 v195; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v196; // [rsp+C8h] [rbp-38h]
  int v197; // [rsp+CCh] [rbp-34h]
  unsigned __int64 v198; // [rsp+D0h] [rbp-30h]
  unsigned int v199; // [rsp+D8h] [rbp-28h]
  int v200; // [rsp+DCh] [rbp-24h]
  __int64 v201; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v202; // [rsp+E8h] [rbp-18h]
  gsl::details *v203; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v204; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v205; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v206; // [rsp+108h] [rbp+8h]
  int v207; // [rsp+10Ch] [rbp+Ch]
  _OWORD v208[2]; // [rsp+118h] [rbp+18h] BYREF
  struct Mesh::VertexAAOffsetDesc *v209; // [rsp+138h] [rbp+38h]
  __int64 v210; // [rsp+140h] [rbp+40h]
  __int64 v211; // [rsp+148h] [rbp+48h]
  struct Mesh::VertexAAOffsetDesc *v212[3]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v213[1280]; // [rsp+168h] [rbp+68h] BYREF
  char v214; // [rsp+668h] [rbp+568h] BYREF

  v3 = (signed __int64)a2;
  v186 = a3;
  v185 = 0LL;
  v187 = 0LL;
  Mesh::CalcGeometryCounts(a2, &v185, &v187);
  if ( !v187 )
    return;
  v5 = -1LL;
  v6 = *((_QWORD *)this + 22);
  v7 = (_OWORD *)*((_QWORD *)this + 23);
  v191 = 8 * *(_DWORD *)this + 16;
  v8 = v185 * (v191 >> 4);
  v9 = (__int64)((__int64)v7 - v6) >> 4;
  v193 = (__int64)(*((_QWORD *)this + 267) - *((_QWORD *)this + 266)) >> 4;
  v10 = (__int64)(*((_QWORD *)this + 512) - *((_QWORD *)this + 511)) >> 1;
  v192 = v191 >> 4;
  v11 = v8 + v9;
  v188 = v6;
  v205 = v9;
  v194 = v10;
  v184 = v8 + v9;
  if ( v8 + v9 > v9 )
  {
    if ( (__int64)(*((_QWORD *)this + 24) - (_QWORD)v7) >> 4 < v8 )
    {
      v130 = (__int64)(*((_QWORD *)this + 24) - v6) >> 4;
      v131 = v130 >> 1;
      if ( v130 <= ~(v130 >> 1) )
      {
        v132 = v131 + v130;
        if ( v131 + v130 < v11 )
          v132 = v8 + v9;
        v11 = v132;
        v184 = v132;
      }
      v133 = operator new[](saturated_mul(v11, 0x10uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v133, v9, v134);
      v135 = *((_QWORD *)this + 23);
      v136 = (void *)*((_QWORD *)this + 22);
      v182 = v180;
      v183 = i;
      v137 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(&v182);
      std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v136, v135, v137);
      v138 = (CDrawListEntryBuilder *)*((_QWORD *)this + 22);
      v139 = 0LL;
      *((_QWORD *)this + 22) = v133;
      if ( v138 != (CDrawListEntryBuilder *)((char *)this + 208) )
        v139 = v138;
      operator delete(v139);
      v140 = *((_QWORD *)this + 22);
      v7 = (_OWORD *)(v140 + 16 * v9);
      v141 = v140 + 16 * v184;
      *((_QWORD *)this + 23) = v7;
      *((_QWORD *)this + 24) = v141;
    }
    v184 = *((_QWORD *)this + 22);
    v67 = (__int64)((__int64)v7 - v184) >> 4;
    v188 = v67 - v9;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v184 + 16 * v67, v8, v5);
    v182 = v180;
    v183 = i;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v8);
    v69 = v67 - v9;
    if ( v8 < v67 - v9 )
      v69 = v8;
    v180 = v182;
    v70 = 16 * v69;
    v71 = &v7[v70 / 0xFFFFFFFFFFFFFFF0uLL];
    for ( i = v183; v7 != v71; *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v180) = *v7 )
    {
      --v7;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v180);
    }
    v72 = v184;
    if ( v188 > v8 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v184, v67, v68);
      v182 = v180;
      v183 = i;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v67);
      v180 = v182;
      i = v183;
      std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
        &v188,
        v72 + 16 * v9,
        v72 + 16 * (v67 - v8),
        &v180);
    }
    v16 = -1LL;
    *((_QWORD *)this + 23) += 16 * v8;
    v73 = (_OWORD *)(v72 + 16 * v9);
    if ( v8 )
    {
      *v73 = 0LL;
      qmemcpy(v73 + 1, v73, 8 * ((16 * v8 - 9) >> 3));
    }
  }
  else
  {
    v12 = 16 * v11;
    v13 = v12 >> 4;
    v14 = (__int64)((__int64)v7 - v6 - v12) >> 4;
    v15 = v14 + (v12 >> 4);
    if ( v15 > v9 )
      goto LABEL_98;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v6, v9, -1LL);
    if ( v15 != v9 )
    {
      v182 = v180;
      v183 = i;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v13);
      v180 = v182;
      i = v183;
      std::move<std::move_iterator<CVisualTreePath::VisualTreePathUnit *>,stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *>>(
        (__int64)&v182,
        v188 + 16 * v15,
        v188 + 16 * v9,
        &v180);
      v16 = -1LL;
    }
    *((_QWORD *)this + 23) += -16 * v14;
  }
  v17 = (_OWORD *)*((_QWORD *)this + 267);
  v13 = *((_QWORD *)this + 266);
  v18 = v185 * (unsigned int)v192 + v193;
  v19 = ((__int64)v17 - v13) >> 4;
  v184 = v18;
  if ( v18 > v19 )
  {
    v74 = v18 - v19;
    if ( (__int64)(*((_QWORD *)this + 268) - (_QWORD)v17) >> 4 < v18 - v19 )
    {
      v142 = (*((_QWORD *)this + 268) - v13) >> 4;
      v143 = v142 >> 1;
      if ( v142 <= ~(v142 >> 1) )
      {
        v144 = v142 + v143;
        if ( v142 + v143 < v18 )
          v144 = v185 * (unsigned int)v192 + v193;
        v18 = v144;
        v184 = v144;
      }
      v145 = 16 * v18;
      if ( !is_mul_ok(v18, 0x10uLL) )
        v145 = v16;
      v146 = operator new[](v145);
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v146, v19, v147);
      v148 = *((_QWORD *)this + 267);
      v149 = (void *)*((_QWORD *)this + 266);
      v182 = v180;
      v183 = i;
      v150 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(&v182);
      std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v149, v148, v150);
      v151 = (CDrawListEntryBuilder *)*((_QWORD *)this + 266);
      v152 = 0LL;
      *((_QWORD *)this + 266) = v146;
      if ( v151 != (CDrawListEntryBuilder *)((char *)this + 2160) )
        v152 = v151;
      operator delete(v152);
      v153 = *((_QWORD *)this + 266);
      v17 = (_OWORD *)(v153 + 16 * v19);
      v154 = v153 + 16 * v184;
      *((_QWORD *)this + 267) = v17;
      *((_QWORD *)this + 268) = v154;
    }
    v184 = *((_QWORD *)this + 266);
    v75 = (__int64)((__int64)v17 - v184) >> 4;
    v188 = v75 - v19;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v184 + 16 * v75, v74, v16);
    v182 = v180;
    v183 = i;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v74);
    v76 = v75 - v19;
    if ( v74 < v75 - v19 )
      v76 = v74;
    v180 = v182;
    v77 = 16 * v76;
    v78 = &v17[v77 / 0xFFFFFFFFFFFFFFF0uLL];
    for ( i = v183; v17 != v78; *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v180) = *v17 )
    {
      --v17;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v180);
    }
    v79 = v184;
    if ( v188 > v74 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v184, v75, v22);
      v182 = v180;
      v183 = i;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v75);
      v180 = v182;
      i = v183;
      std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
        &v188,
        v79 + 16 * v19,
        v79 + 16 * (v75 - v74),
        &v180);
    }
    v80 = (_OWORD *)(v79 + 16 * v19);
    *((_QWORD *)this + 267) += 16 * v74;
    if ( v74 )
    {
      *v80 = 0LL;
      qmemcpy(v80 + 1, v80, 8 * ((16 * v74 - 9) >> 3));
    }
  }
  else
  {
    v20 = 16 * v18;
    v21 = ((__int64)&v17[v20 / 0xFFFFFFFFFFFFFFF0uLL] - v13) >> 4;
    v15 = v21 + (v20 >> 4);
    if ( v15 > v19 )
      goto LABEL_98;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v13, v19, v20 >> 4);
    if ( v15 != v19 )
    {
      v182 = v180;
      v183 = i;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v22);
      v180 = v182;
      i = v183;
      std::move<std::move_iterator<CVisualTreePath::VisualTreePathUnit *>,stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *>>(
        (__int64)&v182,
        v13 + 16 * v15,
        v13 + 16 * v19,
        &v180);
    }
    *((_QWORD *)this + 267) += -16 * v21;
  }
  v23 = (_WORD *)*((_QWORD *)this + 512);
  v15 = *((_QWORD *)this + 511);
  v24 = v187 + v194;
  v9 = (__int64)((__int64)v23 - v15) >> 1;
  v184 = v187 + v194;
  if ( v187 + v194 <= v9 )
  {
    v102 = (__int64)(2 * v24) >> 1;
    v13 = (__int64)((__int64)v23 - v15 + -2 * v24) >> 1;
    v103 = v13 + v102;
    if ( v13 + v102 > v9 )
      goto LABEL_98;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v15, v9, v102);
    if ( v103 != v9 )
    {
      v182 = v180;
      v183 = i;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v107);
      v180 = v182;
      i = v183;
      std::move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
        &v182,
        v15 + 2 * v103,
        v15 + 2 * v9,
        &v180);
    }
    *((_QWORD *)this + 512) += -2 * v13;
  }
  else
  {
    v25 = v24 - v9;
    if ( (__int64)(*((_QWORD *)this + 513) - (_QWORD)v23) >> 1 < v24 - v9 )
    {
      v108 = (__int64)(*((_QWORD *)this + 513) - v15) >> 1;
      v109 = v108 >> 1;
      if ( v108 <= ~(v108 >> 1) )
      {
        v110 = v109 + v108;
        if ( v109 + v108 < v24 )
          v110 = v187 + v194;
        v24 = v110;
        v184 = v110;
      }
      v111 = operator new[](saturated_mul(v24, 2uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v111, v9, v112);
      v113 = *((_QWORD *)this + 512);
      v114 = (void *)*((_QWORD *)this + 511);
      v115 = v180;
      v183 = i;
      v182 = v180;
      stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v182, (v113 - (__int64)v114) >> 1);
      std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
        v114,
        v113,
        (void *)(v115 + 2 * i));
      v116 = (CDrawListEntryBuilder *)*((_QWORD *)this + 511);
      v117 = 0LL;
      *((_QWORD *)this + 511) = v111;
      if ( v116 != (CDrawListEntryBuilder *)((char *)this + 4112) )
        v117 = v116;
      operator delete(v117);
      v118 = *((_QWORD *)this + 511);
      v23 = (_WORD *)(v118 + 2 * v9);
      v119 = v118 + 2 * v184;
      *((_QWORD *)this + 512) = v23;
      *((_QWORD *)this + 513) = v119;
    }
    v184 = *((_QWORD *)this + 511);
    v26 = (__int64)((__int64)v23 - v184) >> 1;
    v188 = v26;
    v27 = v26 - v9;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v184 + 2 * v26, v25, v22);
    v182 = v180;
    v183 = i;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v25);
    v29 = v27;
    if ( v25 < v27 )
      v29 = v25;
    v180 = v182;
    v30 = 2 * v29;
    i = v183;
    for ( j = &v23[v30 / 0xFFFFFFFFFFFFFFFEuLL];
          v23 != j;
          *(_WORD *)stdext::checked_array_iterator<unsigned short *>::operator->(&v180) = *v23 )
    {
      --v23;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v180);
    }
    v32 = v184;
    if ( v27 > v25 )
    {
      v176 = v188;
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v184, v188, v28);
      v182 = v180;
      v183 = i;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v176);
      v180 = v182;
      i = v183;
      std::move_backward<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
        &v188,
        v32 + 2 * v9,
        v32 + 2 * (v176 - v25),
        &v180);
    }
    *((_QWORD *)this + 512) += 2 * v25;
    v33 = (_WORD *)(v32 + 2 * v9);
    if ( v25 )
    {
      v34 = (2 * v25) >> 1;
      v9 = 0LL;
      while ( v34 )
      {
        *v33++ = 0;
        --v34;
      }
      goto LABEL_23;
    }
  }
  v9 = 0LL;
LABEL_23:
  v35 = v191;
  v36 = v205;
  v37 = *((_QWORD *)this + 266);
  v38 = 16 * v205 + *((_QWORD *)this + 22);
  v197 = v185;
  v39 = 16 * v193 + v37;
  v200 = v185;
  v40 = *((_QWORD *)this + 511);
  v201 = 0LL;
  v204 = 0LL;
  v195 = v38;
  v41 = (gsl::details *)(v40 + 2 * v194);
  v196 = v191;
  v198 = v39;
  v199 = v191;
  if ( v187 == -1LL || !v41 && v187 )
    goto LABEL_74;
  v42 = *(_BYTE *)(v3 + 52) == 0;
  v202 = v187;
  v203 = (gsl::details *)(v40 + 2 * v194);
  if ( v42 )
  {
    if ( *(_QWORD *)(v3 + 32) )
    {
      Mesh::GenerateGeometryWorker((const struct Mesh::MeshDesc *)v3, (struct Mesh::GeometryBuffers *)&v195);
    }
    else
    {
      v177 = *(_QWORD *)(v3 + 8);
      v212[0] = (struct Mesh::VertexAAOffsetDesc *)v213;
      v212[1] = (struct Mesh::VertexAAOffsetDesc *)v213;
      v212[2] = (struct Mesh::VertexAAOffsetDesc *)&v214;
      detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::resize(
        v212,
        v177);
      Mesh::CalcVertexAAOffsets((const struct Mesh::MeshDesc *)v3, v212[0], 1);
      v178 = *(_OWORD *)(v3 + 16);
      v208[0] = *(_OWORD *)v3;
      v179 = *(_OWORD *)(v3 + 32);
      v208[1] = v178;
      *(_QWORD *)&v178 = *(_QWORD *)(v3 + 48);
      v210 = *((_QWORD *)&v179 + 1);
      v209 = v212[0];
      v211 = v178;
      Mesh::GenerateGeometryWorker((const struct Mesh::MeshDesc *)v208, (struct Mesh::GeometryBuffers *)&v195);
      detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::~vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>(v212);
    }
  }
  else
  {
    Mesh::GenerateGeometryForRectangle((const struct Mesh::MeshDesc *)v3, (struct Mesh::GeometryBuffers *)&v195);
  }
  v207 = v201;
  v190 = v201;
  v205 = v39;
  v206 = v35;
  v188 = v38;
  v189 = v35;
  CDrawListEntryBuilder::ComputeColorAndUV(this, v186, &v188, &v205);
  if ( *((_BYTE *)this + 4489) && (*((float *)this + 12) != 0.0 || *((float *)this + 13) != 0.0) )
  {
    for ( k = 0; k < v185; *(float *)((char *)v41 + v100 + 4) = v101 - *((float *)this + 13) )
    {
      v97 = (int)(k * v196);
      v98 = v195;
      v99 = *(float *)(v97 + v195 + 4);
      *(float *)(v97 + v195) = *(float *)(v97 + v195) - *((float *)this + 12);
      *(float *)(v97 + v98 + 4) = v99 - *((float *)this + 13);
      LODWORD(v98) = k * v199;
      ++k;
      v41 = (gsl::details *)(int)v98;
      v100 = v198;
      v101 = *(float *)((char *)v41 + v198 + 4);
      *(float *)((char *)v41 + v198) = *(float *)((char *)v41 + v198) - *((float *)this + 12);
    }
  }
  if ( *((_QWORD *)this + 510) )
  {
    v81 = 0;
    if ( v204 )
    {
      v82 = 0LL;
      while ( v82 < v202 )
      {
        v41 = v203;
        ++v81;
        *((_WORD *)v203 + v82) += *((_WORD *)this + 2040);
        v82 = v81;
        if ( v81 >= v204 )
          goto LABEL_29;
      }
LABEL_74:
      `gsl::details::get_terminate_handler'::`2'::handler(v41);
      __debugbreak();
    }
  }
LABEL_29:
  v44 = v201;
  *((_QWORD *)this + 510) += v201;
  v45 = (char *)*((_QWORD *)this + 23);
  v46 = v44 * (unsigned int)v192;
  v47 = (const struct PrimitiveVertexAttributesDesc *)*((_QWORD *)this + 22);
  v186 = v47;
  v48 = v36 + v46;
  v49 = (v45 - (char *)v47) >> 4;
  if ( v48 > v49 )
  {
    v9 = v48 - v49;
    if ( (__int64)(*((_QWORD *)this + 24) - (_QWORD)v45) >> 4 < v48 - v49 )
    {
      v155 = (__int64)(*((_QWORD *)this + 24) - (_QWORD)v47) >> 4;
      v156 = v155 >> 1;
      if ( v155 <= ~(v155 >> 1) )
      {
        v157 = v155 + v156;
        if ( v155 + v156 < v48 )
          v157 = v48;
        v48 = v157;
      }
      v158 = operator new[](saturated_mul(v48, 0x10uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v158, v49, v159);
      v160 = *((_QWORD *)this + 23);
      v161 = (void *)*((_QWORD *)this + 22);
      v182 = v180;
      v183 = i;
      v162 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(&v182);
      std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v161, v160, v162);
      v163 = (CDrawListEntryBuilder *)*((_QWORD *)this + 22);
      v164 = 0LL;
      *((_QWORD *)this + 22) = v158;
      if ( v163 != (CDrawListEntryBuilder *)((char *)this + 208) )
        v164 = v163;
      operator delete(v164);
      v165 = *((_QWORD *)this + 22);
      v45 = (char *)(v165 + 16 * v49);
      *((_QWORD *)this + 23) = v45;
      *((_QWORD *)this + 24) = v165 + 16 * v48;
    }
    v184 = *((_QWORD *)this + 22);
    v83 = (__int64)&v45[-v184] >> 4;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v184 + 16 * v83, v9, v43);
    v182 = v180;
    v183 = i;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v9);
    v84 = v83 - v49;
    if ( v9 < v83 - v49 )
      v84 = v9;
    v180 = v182;
    v85 = 16 * v84;
    v86 = &v45[-v85];
    for ( i = v183; v45 != v86; *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v180) = *(_OWORD *)v45 )
    {
      v45 -= 16;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v180);
    }
    v87 = v184;
    if ( v83 - v49 > v9 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v184, v83, v51);
      v182 = v180;
      v183 = i;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v83);
      v180 = v182;
      i = v183;
      std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
        &v205,
        v87 + 16 * v49,
        v87 + 16 * (v83 - v9),
        &v180);
    }
    v88 = (_OWORD *)(v87 + 16 * v49);
    *((_QWORD *)this + 23) += 16 * v9;
    if ( v9 )
    {
      v9 *= 16LL;
      *v88 = 0LL;
      qmemcpy(v88 + 1, v88, 8 * ((v9 - 9) >> 3));
    }
  }
  else
  {
    v3 = 16 * v48;
    v13 = v3 >> 4;
    v50 = (v45 - (char *)v47 - v3) >> 4;
    v15 = v50 + (v3 >> 4);
    if ( v15 > v49 )
      goto LABEL_98;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v47, v49, v43);
    if ( v15 != v49 )
    {
      v182 = v180;
      v183 = i;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v3 >> 4);
      v180 = v182;
      i = v183;
      std::move<std::move_iterator<CVisualTreePath::VisualTreePathUnit *>,stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *>>(
        (__int64)&v182,
        (__int64)v186 + 16 * v15,
        (__int64)v186 + 16 * v49,
        &v180);
    }
    *((_QWORD *)this + 23) += -16 * v50;
  }
  v52 = (const struct PrimitiveVertexAttributesDesc *)*((_QWORD *)this + 266);
  v53 = (char *)*((_QWORD *)this + 267);
  v54 = v193 + v201 * (unsigned int)v192;
  v186 = v52;
  v55 = (v53 - (char *)v52) >> 4;
  if ( v54 > v55 )
  {
    v89 = v54 - v55;
    if ( (__int64)(*((_QWORD *)this + 268) - (_QWORD)v53) >> 4 < v54 - v55 )
    {
      v166 = (__int64)(*((_QWORD *)this + 268) - (_QWORD)v52) >> 4;
      if ( v166 <= ~(v166 >> 1) )
      {
        v167 = v166 + (v166 >> 1);
        if ( v167 < v54 )
          v167 = v193 + v201 * (unsigned int)v192;
        v54 = v167;
      }
      v168 = operator new[](saturated_mul(v54, 0x10uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v168, v55, v169);
      v170 = *((_QWORD *)this + 267);
      v171 = (void *)*((_QWORD *)this + 266);
      v182 = v180;
      v183 = i;
      v172 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(&v182);
      std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v171, v170, v172);
      v173 = (CDrawListEntryBuilder *)*((_QWORD *)this + 266);
      v174 = 0LL;
      *((_QWORD *)this + 266) = v168;
      if ( v173 != (CDrawListEntryBuilder *)((char *)this + 2160) )
        v174 = v173;
      operator delete(v174);
      v175 = *((_QWORD *)this + 266);
      v53 = (char *)(v175 + 16 * v55);
      *((_QWORD *)this + 267) = v53;
      *((_QWORD *)this + 268) = v175 + 16 * v54;
    }
    v184 = *((_QWORD *)this + 266);
    v90 = (__int64)&v53[-v184] >> 4;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v184 + 16 * v90, v89, v51);
    v182 = v180;
    v183 = i;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v89);
    v91 = v90 - v55;
    if ( v89 < v90 - v55 )
      v91 = v89;
    v180 = v182;
    v92 = 16 * v91;
    v93 = &v53[-v92];
    for ( i = v183; v53 != v93; *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v180) = *(_OWORD *)v53 )
    {
      v53 -= 16;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v180);
    }
    v94 = v184;
    if ( v90 - v55 > v89 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v184, v90, v57);
      v182 = v180;
      v183 = i;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v90);
      v180 = v182;
      i = v183;
      std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
        &v205,
        v94 + 16 * v55,
        v94 + 16 * (v90 - v89),
        &v180);
    }
    v95 = (_OWORD *)(v94 + 16 * v55);
    *((_QWORD *)this + 267) += 16 * v89;
    if ( v89 )
    {
      *v95 = 0LL;
      qmemcpy(v95 + 1, v95, 8 * ((16 * v89 - 9) >> 3));
    }
  }
  else
  {
    v3 = 16 * v54;
    v13 = v3 >> 4;
    v56 = (v53 - (char *)v52 - v3) >> 4;
    v15 = v56 + (v3 >> 4);
    if ( v15 > v55 )
      goto LABEL_98;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v52, v55, v51);
    if ( v15 != v55 )
    {
      v182 = v180;
      v183 = i;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v3 >> 4);
      v180 = v182;
      i = v183;
      std::move<std::move_iterator<CVisualTreePath::VisualTreePathUnit *>,stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *>>(
        (__int64)&v182,
        (__int64)v186 + 16 * v15,
        (__int64)v186 + 16 * v55,
        &v180);
    }
    *((_QWORD *)this + 267) += -16 * v56;
  }
  v13 = *((_QWORD *)this + 512);
  v15 = *((_QWORD *)this + 511);
  v3 = v194 + v204;
  v9 = (__int64)(v13 - v15) >> 1;
  if ( v194 + v204 <= v9 )
  {
    while ( 1 )
    {
      v104 = (2 * v3) >> 1;
      v13 = (__int64)(v13 - 2 * v3 - v15) >> 1;
      v105 = v13 + v104;
      if ( v13 + v104 <= v9 )
        break;
LABEL_98:
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v15, v9, v104);
    if ( v105 != v9 )
    {
      v182 = v180;
      v183 = i;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v106);
      v180 = v182;
      i = v183;
      std::move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
        &v182,
        v15 + 2 * v105,
        v15 + 2 * v9,
        &v180);
    }
    *((_QWORD *)this + 512) += -2 * v13;
  }
  else
  {
    v58 = v3 - v9;
    if ( (*((_QWORD *)this + 513) - v13) >> 1 < v3 - v9 )
    {
      v120 = (__int64)(*((_QWORD *)this + 513) - v15) >> 1;
      if ( v120 <= ~(v120 >> 1) )
      {
        v121 = (v120 >> 1) + v120;
        if ( v121 < v3 )
          v121 = v194 + v204;
        v3 = v121;
      }
      v122 = operator new[](saturated_mul(v3, 2uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v122, v9, v123);
      v124 = *((_QWORD *)this + 512);
      v125 = (void *)*((_QWORD *)this + 511);
      v126 = v180;
      v183 = i;
      v182 = v180;
      stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v182, (v124 - (__int64)v125) >> 1);
      std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
        v125,
        v124,
        (void *)(v126 + 2 * i));
      v127 = (CDrawListEntryBuilder *)*((_QWORD *)this + 511);
      v128 = 0LL;
      *((_QWORD *)this + 511) = v122;
      if ( v127 != (CDrawListEntryBuilder *)((char *)this + 4112) )
        v128 = v127;
      operator delete(v128);
      v129 = *((_QWORD *)this + 511);
      v13 = v129 + 2 * v9;
      *((_QWORD *)this + 512) = v13;
      *((_QWORD *)this + 513) = v129 + 2 * v3;
    }
    v184 = *((_QWORD *)this + 511);
    v59 = (__int64)(v13 - v184) >> 1;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v184 + 2 * v59, v58, v57);
    v182 = v180;
    v183 = i;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v58);
    v61 = v59 - v9;
    if ( v58 < v59 - v9 )
      v61 = v58;
    v180 = v182;
    v62 = 2 * v61;
    i = v183;
    for ( m = v13 - v62;
          v13 != m;
          *(_WORD *)stdext::checked_array_iterator<unsigned short *>::operator->(&v180) = *(_WORD *)v13 )
    {
      v13 -= 2LL;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v180);
    }
    v64 = v184;
    if ( v59 - v9 > v58 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v180, v184, v59, v60);
      v182 = v180;
      v183 = i;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v182, v59);
      v180 = v182;
      i = v183;
      std::move_backward<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
        &v205,
        v64 + 2 * v9,
        v64 + 2 * (v59 - v58),
        &v180);
    }
    *((_QWORD *)this + 512) += 2 * v58;
    v65 = (_WORD *)(v64 + 2 * v9);
    if ( v58 )
    {
      for ( n = (2 * v58) >> 1; n; --n )
        *v65++ = 0;
    }
  }
  ++*((_QWORD *)this + 558);
}
