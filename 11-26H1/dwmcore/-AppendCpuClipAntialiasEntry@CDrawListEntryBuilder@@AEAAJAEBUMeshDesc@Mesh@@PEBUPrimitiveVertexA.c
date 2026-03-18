/*
 * XREFs of ?AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_NPEA_N@Z @ 0x1800BE540
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x180008CF0 (-Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV-$unique_ptr@V.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x18000D9A0 (-reserve_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vli.c)
 *     ??R?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@QEBAXPEAVUVData@CCpuClipAntialiasSink@@@Z @ 0x18002D0E8 (--R-$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@QEBAXPEAVUVData@CCpuClipAntialiasSink@@.c)
 *     ??1?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@QEAA@XZ @ 0x18002D5C4 (--1-$unique_ptr@VUVData@CCpuClipAntialiasSink@@U-$default_delete@VUVData@CCpuClipAntialiasSink@@.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180036DA0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18007C360 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@PEAPEAVUVData@1@@Z @ 0x1800BFFA0 (-CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV-$span@$$CBUPrimitiveU.c)
 *     ?resize@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18016CBCC (-resize@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expans.c)
 *     ?CopyTo@PrimitiveUVDesc@@QEBAXPEAU1@PEBVMatrix3x3@@@Z @ 0x18016E3B0 (-CopyTo@PrimitiveUVDesc@@QEBAXPEAU1@PEBVMatrix3x3@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A5C3C (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::AppendCpuClipAntialiasEntry(
        CDrawListEntryBuilder *this,
        const struct Mesh::MeshDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        char a4,
        bool *a5)
{
  __int64 v7; // rcx
  const struct Mesh::MeshDesc *v8; // r15
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 **v12; // r13
  float v13; // xmm4_4
  float v14; // xmm9_4
  float v15; // xmm6_4
  float v16; // xmm13_4
  float v17; // xmm7_4
  float v18; // xmm10_4
  float v19; // xmm3_4
  float v20; // xmm15_4
  float v21; // xmm5_4
  float v22; // xmm8_4
  float v23; // xmm13_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  float v26; // xmm13_4
  float v27; // xmm10_4
  float v28; // xmm0_4
  float v29; // xmm4_4
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm0_4
  float v33; // xmm4_4
  float v34; // xmm14_4
  float v35; // xmm14_4
  int v36; // ebx
  float v37; // xmm3_4
  __int64 v38; // rdi
  float v39; // xmm4_4
  __int64 v40; // r14
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rax
  float v47; // xmm0_4
  float v48; // xmm12_4
  float v49; // xmm13_4
  __int64 v50; // rax
  __int64 v51; // rcx
  float v52; // xmm12_4
  float v53; // xmm6_4
  float v54; // xmm13_4
  float v55; // xmm7_4
  float v56; // xmm0_4
  float v57; // xmm6_4
  float v58; // xmm0_4
  float v59; // xmm2_4
  float v60; // xmm3_4
  __int64 *v61; // r10
  __int64 *v62; // rbx
  float *v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned int v66; // r9d
  float v67; // xmm1_4
  __int64 v68; // rcx
  float v69; // xmm0_4
  __int64 v70; // rax
  _DWORD *v71; // rax
  float v72; // xmm0_4
  __int64 v73; // rcx
  float v74; // xmm1_4
  __int64 v75; // rax
  unsigned int v76; // edx
  int *v77; // rcx
  __int64 v78; // rax
  bool *v79; // rdi
  int v80; // ebx
  float v81; // xmm13_4
  __int64 **v82; // rdi
  unsigned __int16 v83; // si
  const struct Mesh::MeshDesc *v84; // r13
  __int64 v85; // rax
  __int64 v86; // rcx
  float v87; // xmm2_4
  __int64 v88; // r8
  __int64 v89; // rax
  float v90; // xmm10_4
  float v91; // xmm9_4
  float v92; // xmm10_4
  float v93; // xmm6_4
  float v94; // xmm7_4
  float v95; // xmm3_4
  float v96; // xmm4_4
  float v97; // xmm3_4
  __int64 *v98; // r10
  float *v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  unsigned int v102; // r9d
  float v103; // xmm2_4
  __int64 v104; // rcx
  float v105; // xmm0_4
  __int64 v106; // rax
  _DWORD *v107; // rax
  float v108; // xmm1_4
  __int64 v109; // rcx
  float v110; // xmm0_4
  __int64 v111; // rax
  unsigned int v112; // edx
  int *v113; // rcx
  __int64 v114; // rax
  float v115; // xmm13_4
  unsigned __int64 v116; // rdx
  __int64 v117; // rax
  __int64 v118; // r13
  float v119; // xmm12_4
  float v120; // xmm6_4
  float v121; // xmm7_4
  __int64 v122; // r8
  __int64 v123; // rcx
  __int64 v124; // rax
  float v125; // xmm4_4
  float v126; // xmm5_4
  float v127; // xmm2_4
  float v128; // xmm3_4
  float v129; // xmm6_4
  float v130; // xmm7_4
  __int64 v131; // rax
  float v132; // xmm4_4
  __int64 v133; // rax
  float v134; // xmm2_4
  float v135; // xmm5_4
  float v136; // xmm3_4
  float v137; // xmm12_4
  float v138; // xmm0_4
  const struct PrimitiveVertexAttributesDesc *v139; // rax
  int v140; // r15d
  const struct PrimitiveVertexAttributesDesc *v141; // rsi
  CDrawListEntryBuilder *v142; // r12
  __int128 v143; // xmm0
  int v144; // r9d
  char *v145; // rsi
  unsigned int v146; // ecx
  int v147; // eax
  _QWORD *v148; // rax
  void *v149; // rbx
  unsigned int v150; // eax
  unsigned int v151; // eax
  __int64 v152; // r8
  __int64 v153; // r8
  _BYTE *v154; // rbx
  HANDLE ProcessHeap; // rax
  int v157; // eax
  __int64 v158; // rcx
  unsigned __int64 v159; // rcx
  unsigned int i; // r9d
  __int128 v161; // xmm0
  __int64 v162; // rax
  LPVOID v163; // rsi
  float v164; // [rsp+48h] [rbp-C0h]
  float v165; // [rsp+4Ch] [rbp-BCh]
  float v167; // [rsp+54h] [rbp-B4h]
  __int64 v168; // [rsp+58h] [rbp-B0h] BYREF
  float v169; // [rsp+60h] [rbp-A8h]
  float v170; // [rsp+64h] [rbp-A4h]
  int v171; // [rsp+68h] [rbp-A0h]
  int v172; // [rsp+6Ch] [rbp-9Ch]
  const struct PrimitiveVertexAttributesDesc *v173; // [rsp+70h] [rbp-98h]
  void *v174; // [rsp+78h] [rbp-90h] BYREF
  __int64 **v175; // [rsp+80h] [rbp-88h]
  int v176; // [rsp+88h] [rbp-80h]
  float v177; // [rsp+8Ch] [rbp-7Ch]
  const struct Mesh::MeshDesc *v178; // [rsp+90h] [rbp-78h]
  __int64 v179; // [rsp+98h] [rbp-70h]
  D2D1_MATRIX_3X2_F v180; // [rsp+A0h] [rbp-68h] BYREF
  int v181; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v182[3]; // [rsp+BCh] [rbp-4Ch] BYREF
  int v183; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v184[3]; // [rsp+CCh] [rbp-3Ch] BYREF
  __int64 v185; // [rsp+D8h] [rbp-30h] BYREF
  float v186; // [rsp+E0h] [rbp-28h]
  CDrawListEntryBuilder *v187; // [rsp+E8h] [rbp-20h]
  _DWORD v188[4]; // [rsp+F0h] [rbp-18h] BYREF
  _DWORD v189[4]; // [rsp+100h] [rbp-8h] BYREF
  bool *v190; // [rsp+110h] [rbp+8h]
  __int64 v191; // [rsp+118h] [rbp+10h]
  const struct PrimitiveVertexAttributesDesc *v192; // [rsp+120h] [rbp+18h]
  __int64 v193; // [rsp+128h] [rbp+20h] BYREF
  unsigned int v194; // [rsp+130h] [rbp+28h]
  __int64 v195; // [rsp+140h] [rbp+38h]
  __int8 *v196; // [rsp+148h] [rbp+40h]
  __int64 v197; // [rsp+158h] [rbp+50h]
  __int64 v198; // [rsp+160h] [rbp+58h]
  float v199; // [rsp+168h] [rbp+60h]
  __int64 v200; // [rsp+170h] [rbp+68h]
  char v201; // [rsp+178h] [rbp+70h]
  bool v202; // [rsp+179h] [rbp+71h]
  char v203; // [rsp+17Ah] [rbp+72h]
  __int128 v204; // [rsp+188h] [rbp+80h] BYREF
  __int64 v205; // [rsp+198h] [rbp+90h] BYREF
  __int128 v206; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v207; // [rsp+1B8h] [rbp+B0h]
  __int64 v208; // [rsp+1C0h] [rbp+B8h]
  __int128 v209; // [rsp+1C8h] [rbp+C0h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+1D8h] [rbp+D0h] BYREF
  LPVOID lpMem; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE *v212; // [rsp+200h] [rbp+F8h]
  char *v213; // [rsp+208h] [rbp+100h]
  _BYTE v214[224]; // [rsp+210h] [rbp+108h] BYREF
  char v215; // [rsp+2F0h] [rbp+1E8h] BYREF
  __m256i v216; // [rsp+2F8h] [rbp+1F0h] BYREF
  __m128i si128; // [rsp+318h] [rbp+210h]
  __m128i v218; // [rsp+328h] [rbp+220h]

  v187 = this;
  v7 = *((_QWORD *)this + 2);
  v8 = a2;
  v178 = a2;
  v9 = 0;
  v192 = a3;
  v10 = *(_QWORD *)(v7 + 8);
  v190 = a5;
  v191 = v10;
  v11 = *(_QWORD *)(v10 + 24);
  if ( v11 == *(_QWORD *)(v10 + 16) )
    v12 = 0LL;
  else
    v12 = (__int64 **)(*(_QWORD *)(v11 - 432) + 16LL);
  v13 = *(float *)(v7 + 36);
  v14 = v13;
  v15 = *(float *)(v7 + 48);
  v16 = v15;
  v17 = *(float *)(v7 + 52);
  v18 = v17;
  v19 = *(float *)(v7 + 32);
  v20 = v19;
  v21 = *(float *)(v7 + 80);
  v22 = *(float *)(v7 + 84);
  *(_QWORD *)&v180.m11 = __PAIR64__(LODWORD(v13), LODWORD(v19));
  v170 = v13;
  v167 = v15;
  *(_QWORD *)&v180.m[1][0] = __PAIR64__(LODWORD(v17), LODWORD(v15));
  v169 = v17;
  v164 = v21;
  v165 = v22;
  v175 = v12;
  if ( *((_BYTE *)this + 4489) )
  {
    v23 = v19;
    v24 = v19 * *((float *)this + 14);
    v25 = v19 * *((float *)this + 18);
    v26 = v23 * *((float *)this + 16);
    v20 = (float)(v15 * *((float *)this + 15)) + v24;
    v27 = v13 * *((float *)this + 16);
    v28 = v13 * *((float *)this + 14);
    v29 = v13 * *((float *)this + 18);
    v14 = (float)(v17 * *((float *)this + 15)) + v28;
    *(_QWORD *)&v180.m11 = __PAIR64__(LODWORD(v14), LODWORD(v20));
    v30 = v15 * *((float *)this + 17);
    v31 = v25 + (float)(v15 * *((float *)this + 19));
    v170 = v14;
    v16 = v26 + v30;
    v32 = v17 * *((float *)this + 17);
    v33 = v29 + (float)(v17 * *((float *)this + 19));
    v167 = v16;
    v180.m21 = v16;
    v15 = v16;
    v18 = v27 + v32;
    v164 = v31 + v21;
    v19 = v20;
    v169 = v18;
    v17 = v18;
    v180.m22 = v18;
    v165 = v33 + v22;
    v13 = v14;
  }
  v34 = sqrtf_0((float)(v19 * v19) + (float)(v13 * v13));
  lpMem = v214;
  v173 = 0LL;
  v212 = v214;
  v213 = &v215;
  v171 = 0;
  v35 = fmaxf(v34, sqrtf_0((float)(v15 * v15) + (float)(v17 * v17))) * *(float *)v8;
  v209 = 0LL;
  if ( a3 )
  {
    v36 = (1 << *((_QWORD *)a3 + 4)) - 1;
    v171 = v36 & (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10));
  }
  v37 = v164;
  v38 = 0LL;
  v39 = v165;
  LODWORD(v40) = 0;
  *(_QWORD *)&v180.m[2][0] = _mm_unpacklo_ps((__m128)LODWORD(v164), (__m128)LODWORD(v165)).m128_u64[0];
  v179 = 0LL;
  while ( 1 )
  {
    v41 = *((_QWORD *)v8 + 1);
    v42 = (unsigned int)v40;
    if ( (unsigned int)v40 >= v41 )
      break;
    v43 = *((_QWORD *)v8 + 4);
    v44 = (unsigned int)v40;
    do
    {
      v45 = 32 * v42;
      if ( *(float *)(v45 + v43) != 0.0 )
        break;
      if ( *(float *)(v45 + v43 + 4) != 0.0 )
        break;
      LODWORD(v40) = v40 + 1;
      v42 = (unsigned int)v40;
    }
    while ( (unsigned int)v40 < v41 );
    v172 = 0;
    if ( (unsigned int)v40 >= v41 || *(_BYTE *)((unsigned int)v40 + *((_QWORD *)v8 + 5)) )
    {
LABEL_44:
      if ( (unsigned int)v44 <= (unsigned int)v40 )
      {
        v79 = v190;
        do
        {
          if ( (unsigned __int64)(unsigned int)v44 >= *((_QWORD *)v8 + 1) )
            break;
          v79[v44] = 0;
          v44 = (unsigned int)(v44 + 1);
        }
        while ( (unsigned int)v44 <= (unsigned int)v40 );
        v38 = v179;
      }
      v16 = v167;
      LODWORD(v40) = v40 + 1;
    }
    else
    {
      v46 = *((_QWORD *)v8 + 2);
      v47 = v14 * *(float *)(v46 + 8LL * (unsigned int)v40);
      v48 = (float)(v20 * *(float *)(v46 + 8LL * (unsigned int)v40))
          + (float)(v16 * *(float *)(v46 + 8LL * (unsigned int)v40 + 4));
      v49 = v18 * *(float *)(v46 + 8LL * (unsigned int)v40 + 4);
      v50 = *((_QWORD *)v8 + 4);
      v51 = 32LL * (unsigned int)v40;
      v52 = v48 + v37;
      v53 = v18 * *(float *)(v51 + v50 + 4);
      v54 = (float)(v49 + v47) + v39;
      v55 = (float)(v20 * *(float *)(v51 + v50)) + (float)(v167 * *(float *)(v51 + v50 + 4));
      v177 = v52;
      v56 = v14 * *(float *)(v51 + v50);
      *(float *)&v168 = v54;
      v57 = v53 + v56;
      v58 = sqrtf_0((float)(v57 * v57) + (float)(v55 * v55));
      v59 = (float)(1.0 / v58) * v57;
      v60 = (float)(1.0 / v58) * v55;
      if ( v60 == 0.0 && v59 == 0.0 )
        goto LABEL_43;
      v61 = *v12;
      v216.m256i_i32[3] = 0;
      v62 = v61;
      v63 = (float *)v61[1];
      if ( !*((_BYTE *)v63 + 25) )
      {
        v64 = 1LL;
        v188[0] = 0;
        v65 = 2LL;
        v188[1] = 1;
        v188[2] = 3;
        v188[3] = 2;
        if ( v59 <= 0.0 )
          v64 = 0LL;
        if ( v60 >= 0.0 )
          v65 = 0LL;
        v66 = v188[v65 + v64];
        do
        {
          v67 = v63[8];
          v68 = 1LL;
          v69 = v63[7];
          v70 = 2LL;
          if ( v67 <= 0.0 )
            v68 = 0LL;
          if ( v69 >= 0.0 )
            v70 = 0LL;
          v71 = &v188[v70];
          if ( v71[v68] < v66 || v71[v68] == v66 && (float)((float)(v69 * v59) - (float)(v67 * v60)) > 0.000081380211 )
            v63 += 4;
          else
            v62 = (__int64 *)v63;
          v63 = *(float **)v63;
        }
        while ( !*((_BYTE *)v63 + 25) );
      }
      if ( *((_BYTE *)v62 + 25) )
        goto LABEL_43;
      v72 = *((float *)v62 + 8);
      v73 = 1LL;
      v74 = *((float *)v62 + 7);
      v75 = 2LL;
      v181 = 0;
      v182[0] = 1;
      v182[1] = 3;
      v182[2] = 2;
      if ( v59 <= 0.0 )
        v73 = 0LL;
      if ( v60 >= 0.0 )
        v75 = 0LL;
      v76 = v182[v75 - 1 + v73];
      v77 = &v181;
      if ( v72 > 0.0 )
        v77 = v182;
      v78 = 2LL;
      if ( v74 >= 0.0 )
        v78 = 0LL;
      if ( v76 < v77[v78]
        || v76 == v77[v78] && (float)((float)(v72 * v60) - (float)(v74 * v59)) > 0.000081380211
        || v62 == v61
        || v35 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                 (float)((float)(v54 - *((float *)v62 + 10)) * *((float *)v62 + 7))
                               - (float)((float)(v52 - *((float *)v62 + 9)) * *((float *)v62 + 8))) & _xmm) )
      {
LABEL_43:
        v39 = v165;
        v37 = v164;
        goto LABEL_44;
      }
      v80 = *((_DWORD *)v62 + 11);
      v81 = v170;
      v82 = v175;
      v172 = v80;
      v176 = v80;
      v83 = HIWORD(v80);
      *(_QWORD *)&matrix.m11 = *(_QWORD *)(432LL * (unsigned __int16)v80 + *(_QWORD *)(v191 + 16));
      v84 = v178;
      while ( 1 )
      {
        v40 = (unsigned int)(v40 + 1);
        if ( (unsigned __int64)(unsigned int)v40 >= *((_QWORD *)v84 + 1) || *(_BYTE *)(v40 + *((_QWORD *)v84 + 5)) )
          break;
        v85 = *((_QWORD *)v84 + 4);
        v86 = 32LL * (unsigned int)v40;
        v87 = *(float *)(v86 + v85);
        v88 = v86 + v85;
        if ( v87 != 0.0 || *(float *)(v88 + 4) != 0.0 )
        {
          v89 = *((_QWORD *)v84 + 2);
          v90 = *(float *)(v89 + 8 * v40 + 4);
          v91 = (float)((float)(v90 * v169) + (float)(*(float *)(v89 + 8 * v40) * v81)) + v165;
          v92 = (float)((float)(v90 * v167) + (float)(*(float *)(v89 + 8 * v40) * v20)) + v164;
          v93 = (float)(*(float *)(v88 + 4) * v167) + (float)(v87 * v20);
          v94 = (float)(*(float *)(v88 + 4) * v169) + (float)(v87 * v81);
          v95 = 1.0 / sqrtf_0((float)(v94 * v94) + (float)(v93 * v93));
          v96 = v95 * v94;
          v97 = v95 * v93;
          if ( v97 == 0.0 && v96 == 0.0 )
            break;
          v98 = *v82;
          v216.m256i_i32[3] = 0;
          v99 = (float *)v98[1];
          if ( !*((_BYTE *)v99 + 25) )
          {
            v100 = 1LL;
            v189[0] = 0;
            v101 = 2LL;
            v189[1] = 1;
            v189[2] = 3;
            v189[3] = 2;
            if ( v96 <= 0.0 )
              v100 = 0LL;
            if ( v97 >= 0.0 )
              v101 = 0LL;
            v102 = v189[v101 + v100];
            do
            {
              v103 = v99[8];
              v104 = 1LL;
              v105 = v99[7];
              v106 = 2LL;
              if ( v103 <= 0.0 )
                v104 = 0LL;
              if ( v105 >= 0.0 )
                v106 = 0LL;
              v107 = &v189[v106];
              if ( v107[v104] < v102
                || v107[v104] == v102 && (float)((float)(v96 * v105) - (float)(v97 * v103)) > 0.000081380211 )
              {
                v99 += 4;
              }
              else
              {
                v98 = (__int64 *)v99;
              }
              v99 = *(float **)v99;
            }
            while ( !*((_BYTE *)v99 + 25) );
          }
          if ( *((_BYTE *)v98 + 25) )
            break;
          v108 = *((float *)v98 + 8);
          v109 = 1LL;
          v110 = *((float *)v98 + 7);
          v111 = 2LL;
          v183 = 0;
          v184[0] = 1;
          v184[1] = 3;
          v184[2] = 2;
          if ( v96 <= 0.0 )
            v109 = 0LL;
          if ( v97 >= 0.0 )
            v111 = 0LL;
          v112 = v184[v111 - 1 + v109];
          v113 = &v183;
          if ( v108 > 0.0 )
            v113 = v184;
          v114 = 2LL;
          if ( v110 >= 0.0 )
            v114 = 0LL;
          if ( v112 < v113[v114]
            || v112 == v113[v114] && (float)((float)(v97 * v108) - (float)(v96 * v110)) > 0.000081380211 )
          {
            break;
          }
          if ( v98 == *v82 )
            break;
          if ( v35 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                     (float)((float)(v91 - *((float *)v98 + 10)) * v110)
                                   - (float)((float)(v92 - *((float *)v98 + 9)) * v108)) & _xmm) )
            break;
          v150 = *((_DWORD *)v98 + 11);
          if ( (_WORD)v80 != (_WORD)v150 )
            break;
          v151 = HIWORD(v150);
          if ( HIWORD(v80) > (unsigned __int16)v151 )
            break;
          v83 = v151;
        }
      }
      v18 = v169;
      v14 = v170;
      v115 = *(float *)&v168;
      v38 = v179;
      v116 = (unsigned __int64)(unsigned int)v40 % *((_QWORD *)v84 + 1);
      v117 = *((_QWORD *)v84 + 2);
      v118 = *(_QWORD *)&matrix.m11;
      v119 = v177;
      v120 = (float)((float)(*(float *)(v117 + 8 * v116) * v20) + (float)(*(float *)(v117 + 8 * v116 + 4) * v167))
           + v164;
      v121 = (float)((float)(*(float *)(v117 + 8 * v116 + 4) * v169) + (float)(*(float *)(v117 + 8 * v116) * v170))
           + v165;
      if ( (unsigned int)v44 < (unsigned int)v40 )
      {
        LOBYTE(v116) = 1;
        memset_0(&v190[v44], v116, (unsigned int)(v40 - v44));
      }
      v122 = *(_QWORD *)(*(_QWORD *)(v118 + 40) + 40LL);
      v123 = 2 * (unsigned int)v83;
      v124 = (unsigned int)(v123 + 2);
      v125 = *(float *)(v122 + 8 * v123);
      v126 = *(float *)(v122 + 8 * v123 + 4);
      v127 = *(float *)(v122 + 8 * v124) - v125;
      v128 = *(float *)(v122 + 8 * v124 + 4) - v126;
      if ( COERCE_FLOAT(LODWORD(v127) & _xmm) > COERCE_FLOAT(LODWORD(v128) & _xmm) )
        v129 = (float)(v120 - v125) / v127;
      else
        v129 = (float)(v121 - v126) / v128;
      if ( (float)(v129 - 0.0) > 0.000081380211 )
      {
        if ( (float)(1.0 - v129) > 0.000081380211 )
          v130 = (float)v83 + v129;
        else
          v130 = (float)(unsigned __int16)(v83 + 1) + 0.0;
      }
      else
      {
        v130 = (float)v83 + 0.0;
      }
      v131 = 2 * (unsigned int)HIWORD(v80);
      v132 = *(float *)(v122 + 8 * v131);
      v133 = (unsigned int)(v131 + 2);
      v134 = *(float *)(v122 + 8 * v133) - v132;
      v135 = *(float *)(v122 + 16LL * HIWORD(v80) + 4);
      v136 = *(float *)(v122 + 8 * v133 + 4) - v135;
      if ( COERCE_FLOAT(LODWORD(v134) & _xmm) > COERCE_FLOAT(LODWORD(v136) & _xmm) )
        v137 = (float)(v119 - v132) / v134;
      else
        v137 = (float)(v115 - v135) / v136;
      if ( (float)(v137 - 0.0) > 0.000081380211 )
      {
        if ( (float)(1.0 - v137) > 0.000081380211 )
          v138 = (float)HIWORD(v80) + v137;
        else
          v138 = (float)(unsigned __int16)(HIWORD(v80) + 1) + 0.0;
      }
      else
      {
        v138 = (float)HIWORD(v80) + 0.0;
      }
      v139 = v173;
      v140 = v171;
      *((float *)&v185 + 1) = v138;
      v186 = v130;
      LOWORD(v185) = v80;
      if ( !v173 )
      {
        v141 = v192;
        v139 = v192;
        v173 = v192;
        if ( v171 )
        {
          if ( D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v180) )
          {
            v139 = v141;
          }
          else
          {
            matrix = v180;
            D2D1InvertMatrix(&matrix);
            *(__int64 *)((char *)&v216.m256i_i64[1] + 4) = *(_QWORD *)&matrix.m[1][0];
            v216.m256i_i64[0] = *(_QWORD *)&matrix.m11;
            v216.m256i_i64[3] = *(_QWORD *)&matrix.m[2][0];
            v216.m256i_i32[2] = 0;
            v216.m256i_i32[5] = 0;
            si128.m128i_i32[0] = 1065353216;
            detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::resize(&lpMem);
            v159 = *((_QWORD *)v141 + 4);
            for ( i = 0; i < v159; ++i )
            {
              if ( _bittest(&v140, i) )
              {
                if ( i >= v159 )
                  goto LABEL_155;
                PrimitiveUVDesc::CopyTo(
                  (PrimitiveUVDesc *)(*((_QWORD *)v141 + 5) + 56LL * i),
                  (struct PrimitiveUVDesc *)((char *)lpMem + 56 * i),
                  (const struct Matrix3x3 *)&v216);
              }
              v159 = *((_QWORD *)v141 + 4);
            }
            v161 = *(_OWORD *)v141;
            v207 = *((_QWORD *)v141 + 2);
            v162 = *((_QWORD *)v141 + 3);
            v163 = lpMem;
            v208 = v162;
            v206 = v161;
            gsl::details::extent_type<-1>::extent_type<-1>(&v205, 0x6DB6DB6DB6DB6DB7LL * ((v212 - (_BYTE *)lpMem) >> 3));
            if ( v205 == -1 || !v163 && v205 )
            {
LABEL_155:
              ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
              __debugbreak();
            }
            *(_QWORD *)&v209 = v205;
            v139 = (const struct PrimitiveVertexAttributesDesc *)&v206;
            v173 = (const struct PrimitiveVertexAttributesDesc *)&v206;
            *((_QWORD *)&v209 + 1) = v163;
          }
        }
      }
      v142 = v187;
      v174 = 0LL;
      if ( v140 )
      {
        v143 = *((_OWORD *)v139 + 2);
        v144 = *(_DWORD *)v187;
        *(_OWORD *)v216.m256i_i8 = (unsigned __int64)&v174;
        v216.m256i_i8[16] = 1;
        *(_OWORD *)&matrix.m11 = v143;
        CCpuClipAntialiasSink::CreateUVData(
          v118,
          0,
          (unsigned int)&v185,
          v144,
          v140,
          (__int64)&matrix,
          (__int64)&v216.m256i_i64[1]);
        if ( v216.m256i_i8[16] )
        {
          v145 = *(char **)v216.m256i_i64[0];
          *(_QWORD *)v216.m256i_i64[0] = v216.m256i_i64[1];
          if ( v145 )
          {
            std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v145 + 16);
            operator delete(v145, 0x18uLL);
          }
        }
      }
      memset_0(&v193, 0, 0x58uLL);
      v146 = *((_DWORD *)v142 + 6);
      v194 = v146 & 0xFFFFFFFE;
      v193 = *((_QWORD *)v142 + 10);
      v200 = *(unsigned int *)v142;
      if ( v173 && *((_BYTE *)v142 + 29) )
      {
        v201 = 1;
LABEL_106:
        v196 = (__int8 *)v173;
        v195 = *((_QWORD *)v173 + 2);
        goto LABEL_107;
      }
      v201 = 0;
      if ( v173 )
        goto LABEL_106;
      v196 = 0LL;
      v195 = 0LL;
LABEL_107:
      v202 = a4 == 0;
      v199 = v130;
      v197 = v118;
      v198 = v185;
      v203 = v146 & 1;
      if ( CCommonRegistryData::CpuClipAASinkEnableDebugColors )
      {
        *(__m128i *)v216.m256i_i8 = _mm_load_si128((const __m128i *)&_xmm);
        *(__m128i *)&v216.m256i_u64[2] = _mm_load_si128((const __m128i *)&_xmm);
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        v218 = _mm_load_si128((const __m128i *)&_xmm);
        if ( !v38 )
        {
          v168 = 0LL;
          v204 = 0uLL;
          v157 = CCommonRenderingEffectFactory::CreateRenderingEffect((__int64)&matrix, &v204, &v168);
          v9 = v157;
          if ( v157 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v157, 0x722u, 0LL);
            if ( v174 )
              std::default_delete<CCpuClipAntialiasSink::UVData>::operator()(v158, v174);
            v38 = v168;
            break;
          }
          v38 = v168;
          v179 = v168;
        }
        v193 = v38;
        v201 = 1;
        v200 = 2LL;
        v196 = &v216.m256i_i8[16 * (v80 & 3)];
      }
      v168 = 0LL;
      v147 = CCpuClipAntialiasDrawListEntry::Create((__int64)&v193, (__int64 *)&v174, &v168);
      v9 = v147;
      if ( v147 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v147, 0x730u, 0LL);
        Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v168);
        std::unique_ptr<CCpuClipAntialiasSink::UVData>::~unique_ptr<CCpuClipAntialiasSink::UVData>((_QWORD **)&v174);
        break;
      }
      v148 = (_QWORD *)detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                         (CDrawListEntryBuilder *)((char *)v142 + 112),
                         (__int64)(*((_QWORD *)v142 + 15) - *((_QWORD *)v142 + 14)) >> 3);
      v16 = v167;
      v37 = v164;
      v39 = v165;
      v8 = v178;
      v12 = v175;
      *v148 = v168;
      v149 = v174;
      if ( v174 )
      {
        std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((char *)v174 + 16);
        operator delete(v149, 0x18uLL);
        v37 = v164;
        v39 = v165;
      }
    }
  }
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
  v152 = 0x6DB6DB6DB6DB6DB7LL * ((v212 - (_BYTE *)lpMem) >> 3);
  if ( v152 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v216, (__int64)lpMem, v152);
    v212 -= 56 * v153;
  }
  v154 = lpMem;
  lpMem = 0LL;
  if ( v154 != v214 && v154 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v154);
  }
  return v9;
}
