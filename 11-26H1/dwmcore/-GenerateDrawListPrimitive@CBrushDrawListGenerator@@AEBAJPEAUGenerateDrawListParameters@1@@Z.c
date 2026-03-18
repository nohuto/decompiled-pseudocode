/*
 * XREFs of ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B7170
 * Callers:
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x18000FA10 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x18000B410 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B6BA0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?As3DHomogeneous@Matrix3x3@@QEBA?AVCMILMatrix@@XZ @ 0x1800D9628 (-As3DHomogeneous@Matrix3x3@@QEBA-AVCMILMatrix@@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800D9900 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DAFB8 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180143060 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1801A3D10 (--1-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$less@_K@std@@V-$allocator@U-$pair@$$CB_KPEAVCC.c)
 *     ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x1801DD93C (-ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V-$span@PEBVC.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListPrimitive(
        CBrushDrawListGenerator *this,
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  __int64 v2; // rax
  struct CRenderingEffect *v3; // r9
  unsigned __int32 v4; // xmm12_4
  struct CBrushDrawListGenerator::GenerateDrawListParameters *v5; // rdi
  CBrushDrawListGenerator *v6; // r13
  __int64 v7; // r8
  __int64 v8; // rcx
  bool v9; // r15
  unsigned __int64 v10; // rdx
  char v11; // si
  unsigned int v12; // r14d
  __int64 v13; // r12
  __int64 v14; // rbx
  unsigned int v15; // xmm0_4
  int v16; // xmm1_4
  int v17; // ecx
  __int64 *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // esi
  int v22; // r15d
  char *v23; // rax
  unsigned __int64 v24; // r12
  struct CRenderingEffect *v25; // rbx
  unsigned __int64 i; // r14
  __m128 *v27; // rsi
  __int64 v28; // r8
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm3_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  float v34; // xmm7_4
  __m128 v35; // xmm0
  __m128 v36; // xmm1
  int v37; // eax
  __m128 v38; // xmm0
  __m128 v39; // xmm1
  __m128 v40; // xmm1
  __m128 v41; // xmm1
  struct CRenderingEffect *v42; // rsi
  int v43; // r15d
  struct CRenderingEffect *v44; // rcx
  __m128 *v45; // r8
  __m128 *v46; // rsi
  __int64 v47; // r9
  __int64 v48; // r8
  __int64 v49; // r8
  struct CRenderingEffect *v50; // rcx
  struct CRenderingEffect *v51; // rcx
  unsigned int v52; // r14d
  char v53; // r12
  int v54; // r15d
  struct CRenderingEffect *v55; // r13
  __int64 v56; // rsi
  float v57; // xmm7_4
  const struct D2D_MATRIX_3X2_F *v58; // rdx
  float v59; // xmm13_4
  float v60; // xmm5_4
  float v61; // xmm9_4
  float v62; // xmm4_4
  float v63; // xmm15_4
  float v64; // xmm8_4
  float v65; // xmm10_4
  float v66; // xmm2_4
  float v67; // xmm1_4
  float v68; // xmm4_4
  float v69; // xmm11_4
  float v70; // xmm0_4
  float v71; // xmm15_4
  float v72; // xmm3_4
  float v73; // xmm10_4
  float v74; // xmm8_4
  float v75; // xmm7_4
  float v76; // xmm0_4
  float v77; // xmm4_4
  float v78; // xmm9_4
  float v79; // xmm2_4
  float v80; // xmm10_4
  float v81; // xmm5_4
  float v82; // xmm3_4
  float v83; // xmm14_4
  __m128 v84; // xmm13
  float v85; // xmm4_4
  float v86; // xmm7_4
  __m128 v87; // xmm15
  float v88; // xmm8_4
  float v89; // xmm11_4
  float v90; // xmm12_4
  __m128 v91; // xmm13
  __m128 v92; // xmm13
  float v93; // xmm1_4
  __m128 v94; // xmm10
  __m128 v95; // xmm13
  __m128 v96; // xmm10
  float v97; // xmm0_4
  float v98; // xmm12_4
  __m128 v99; // xmm10
  float v100; // xmm14_4
  float v101; // xmm0_4
  __m128 v102; // xmm10
  int v103; // eax
  unsigned __int8 v104; // cf
  __int64 v105; // rax
  int v106; // eax
  bool v107; // zf
  __m128 v108; // xmm2
  __m128 v109; // xmm3
  __m128 v110; // xmm3
  __m128 v111; // xmm3
  __m128 v112; // xmm3
  __m128 v113; // xmm3
  CDrawListEntryBuilder *v114; // rcx
  int v115; // eax
  int v117; // eax
  __int64 v118; // rdx
  void (__fastcall ***v119)(_QWORD, __int64); // rcx
  struct CRenderingEffect *v120; // rcx
  struct CRenderingEffect *v121; // rax
  HANDLE ProcessHeap; // rax
  float v123; // xmm9_4
  float v124; // xmm7_4
  __m128 v125; // xmm12
  float v126; // xmm6_4
  float v127; // xmm2_4
  float v128; // xmm8_4
  float v129; // xmm4_4
  float v130; // xmm5_4
  float v131; // xmm11_4
  float v132; // xmm10_4
  float v133; // xmm15_4
  float v134; // xmm13_4
  float v135; // xmm0_4
  float v136; // xmm3_4
  float v137; // xmm1_4
  float v138; // xmm9_4
  float v139; // xmm3_4
  float v140; // xmm0_4
  float v141; // xmm2_4
  __m128 v142; // xmm14
  float v143; // xmm9_4
  float v144; // xmm6_4
  float v145; // xmm9_4
  float v146; // xmm0_4
  float v147; // xmm2_4
  float v148; // xmm4_4
  float v149; // xmm9_4
  float v150; // xmm2_4
  float v151; // xmm5_4
  float v152; // xmm0_4
  float v153; // xmm7_4
  float v154; // xmm2_4
  __m128 v155; // xmm1
  __m128 v156; // xmm14
  __m128 v157; // xmm1
  __m128 v158; // xmm1
  __m128 v159; // xmm14
  float v160; // xmm7_4
  __m128 v161; // xmm14
  __int64 *v162; // r8
  __int64 *v163; // r12
  int v164; // esi
  __int64 v165; // rcx
  int v166; // xmm1_4
  int v167; // r9d
  int v168; // edx
  int v169; // eax
  float v170; // xmm10_4
  float v171; // xmm11_4
  float v172; // xmm7_4
  float v173; // xmm5_4
  float v174; // xmm1_4
  float v175; // xmm2_4
  float v176; // xmm11_4
  int v177; // ecx
  int v178; // eax
  int v179; // ecx
  int v180; // eax
  bool v181; // cc
  float v182; // xmm0_4
  int v183; // eax
  int v184; // eax
  int v185; // eax
  int *v186; // r11
  int *v187; // r10
  __int64 v188; // r14
  __int64 v189; // rcx
  __m128 v190; // xmm3
  __m128 v191; // xmm2
  int v192; // eax
  bool v193; // cc
  float v194; // xmm0_4
  int v195; // eax
  int v196; // eax
  int v197; // eax
  __int64 v198; // rax
  __m128i si128; // xmm0
  struct CRenderingEffect *v200; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v201; // [rsp+40h] [rbp-C8h]
  struct CRenderingEffect *v202; // [rsp+48h] [rbp-C0h] BYREF
  __m128 v203; // [rsp+58h] [rbp-B0h] BYREF
  float v204; // [rsp+68h] [rbp-A0h]
  __m128 v205; // [rsp+70h] [rbp-98h] BYREF
  __m256i v206; // [rsp+80h] [rbp-88h]
  _BYTE v207[20]; // [rsp+A0h] [rbp-68h]
  float v208; // [rsp+B8h] [rbp-50h]
  float v209; // [rsp+BCh] [rbp-4Ch]
  float v210; // [rsp+C0h] [rbp-48h]
  float v211; // [rsp+C4h] [rbp-44h]
  __int128 v212; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v213; // [rsp+D8h] [rbp-30h]
  int v214; // [rsp+E8h] [rbp-20h] BYREF
  int v215; // [rsp+ECh] [rbp-1Ch]
  int v216; // [rsp+F0h] [rbp-18h]
  int v217; // [rsp+F4h] [rbp-14h]
  __m128 v218; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v219; // [rsp+108h] [rbp+0h]
  unsigned __int64 v220; // [rsp+120h] [rbp+18h] BYREF
  CBrushDrawListGenerator *v221; // [rsp+128h] [rbp+20h]
  int v222; // [rsp+130h] [rbp+28h] BYREF
  _DWORD v223[7]; // [rsp+134h] [rbp+2Ch]
  struct CRenderingEffect **v224; // [rsp+150h] [rbp+48h]
  struct CShape *v225; // [rsp+158h] [rbp+50h] BYREF
  char v226; // [rsp+160h] [rbp+58h]
  struct CBrushDrawListGenerator::GenerateDrawListParameters *v227; // [rsp+168h] [rbp+60h]
  __m128 v228; // [rsp+178h] [rbp+70h] BYREF
  __m256i v229; // [rsp+188h] [rbp+80h]
  __int128 v230; // [rsp+1A8h] [rbp+A0h]
  int v231; // [rsp+1B8h] [rbp+B0h]
  __m128 v232; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v233; // [rsp+1D8h] [rbp+D0h]
  struct CRenderingEffect *v234; // [rsp+1E0h] [rbp+D8h]
  __int64 v235; // [rsp+1E8h] [rbp+E0h]
  _BYTE *v236; // [rsp+1F0h] [rbp+E8h]
  __int128 v237; // [rsp+1F8h] [rbp+F0h] BYREF
  void **v238; // [rsp+208h] [rbp+100h] BYREF
  struct CRenderingEffect *v239; // [rsp+210h] [rbp+108h]
  LPVOID lpMem; // [rsp+218h] [rbp+110h]
  __m128 *v241; // [rsp+220h] [rbp+118h]
  struct CRenderingEffect **v242; // [rsp+228h] [rbp+120h]
  __m128 v243; // [rsp+230h] [rbp+128h] BYREF
  struct CRenderingEffect *v244; // [rsp+240h] [rbp+138h] BYREF
  char v245[16]; // [rsp+248h] [rbp+140h] BYREF
  __int128 v246; // [rsp+258h] [rbp+150h] BYREF
  __int128 v247; // [rsp+268h] [rbp+160h]
  _BYTE v248[224]; // [rsp+278h] [rbp+170h] BYREF

  v2 = *((_QWORD *)a2 + 1);
  v3 = 0LL;
  v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v5 = a2;
  v227 = a2;
  v6 = this;
  v221 = this;
  v7 = 1LL;
  if ( !*(_QWORD *)(v2 + 80) )
  {
    v8 = *((_QWORD *)a2 + 2);
    v246 = 0LL;
    v247 = 0LL;
    v9 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8) == 1
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v6 + 17) - 1.0) & v4) < 0.0000011920929;
    v10 = *((unsigned int *)v5 + 45);
    v11 = 0;
    v12 = 0;
    if ( (_DWORD)v10 )
    {
      while ( 1 )
      {
        v13 = v12;
        v14 = *((_QWORD *)v5 + v12 + 17);
        if ( v14 )
          break;
LABEL_13:
        v10 = *((unsigned int *)v5 + 45);
        ++v12;
        *((_QWORD *)&v246 + v13) = v14;
        if ( v12 >= (unsigned int)v10 )
          goto LABEL_14;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v14 + 8LL))(*((_QWORD *)v5 + v12 + 17), 2LL) )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 8LL))(v14, 1LL) )
          v14 = 0LL;
        goto LABEL_13;
      }
      if ( !v9 )
        goto LABEL_10;
      if ( !*(_BYTE *)(v14 + 72) )
      {
        v189 = *(_QWORD *)(v14 + 56);
        if ( v189 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v189 + 32LL))(v189) )
          {
            v9 = 1;
            goto LABEL_11;
          }
LABEL_10:
          v9 = 0;
LABEL_11:
          if ( v11 || *(_BYTE *)(v14 + 146) )
            v11 = 1;
          goto LABEL_13;
        }
        if ( *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v14 + 64) + 24LL))(
                           *(_QWORD *)(v14 + 64),
                           v245)
                       + 4) != 3 )
          goto LABEL_10;
      }
      v9 = 1;
      goto LABEL_11;
    }
LABEL_14:
    v15 = *((_DWORD *)v5 + 67);
    v16 = *((_DWORD *)v5 + 68);
    HIDWORD(v212) = *((_DWORD *)v5 + 66);
    v203.m128_u64[0] = v10;
    *(_QWORD *)&v213 = (char *)v5 + 24;
    HIDWORD(v213) = *((unsigned __int16 *)v5 + 138);
    *(_QWORD *)&v212 = __PAIR64__(v15, v10);
    v17 = *((_DWORD *)v6 + 13) | v9 | (v11 != 0 ? 0x10 : 0);
    v203.m128_u64[1] = (unsigned __int64)&v246;
    DWORD2(v213) = v17;
    v18 = (__int64 *)*((_QWORD *)v5 + 2);
    DWORD2(v212) = v16;
    v19 = *v18;
    v200 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64 *, __m128 *, struct CRenderingEffect **))(v19 + 16))(v18, &v203, &v200);
    v21 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x1F0u, 0LL);
      if ( v200 )
        (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v200 + 8LL))(v200);
      return v21;
    }
    CDrawListEntryBuilder::Begin(
      *((CDrawListEntryBuilder **)v5 + 1),
      (const struct DrawListEntryBuilderSetupParams *)&v212,
      v200);
    this = v200;
    if ( v200 )
      (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v200 + 8LL))(v200);
    v7 = 1LL;
    v3 = 0LL;
  }
  v22 = *((_DWORD *)v5 + 47);
  v23 = (char *)v5 + 136;
  v24 = *((unsigned int *)v5 + 44);
  v25 = 0LL;
  *(_QWORD *)&v237 = 0LL;
  LODWORD(v201) = v22;
  if ( v5 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-136LL && v24 )
  {
LABEL_187:
    ((void (__fastcall *)(CBrushDrawListGenerator *, struct CBrushDrawListGenerator::GenerateDrawListParameters *, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
      this,
      a2,
      v7);
    __debugbreak();
  }
  v200 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= v24 )
    {
      v25 = v200;
      v51 = v3;
      *(_QWORD *)&v237 = v200;
      v43 = (int)v3;
      v200 = v3;
      v52 = 0;
      goto LABEL_44;
    }
    v27 = *(__m128 **)&v23[8 * i];
    if ( v27 )
    {
      if ( v27[3].m128_i8[4] )
        break;
    }
LABEL_42:
    v7 = 1LL;
  }
  v238 = &CRectanglesShape::`vftable';
  lpMem = &v243;
  v239 = v3;
  v241 = &v243;
  v244 = v3;
  v242 = &v244;
  v203 = v27[2];
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v218, (__int64)&v243, 1LL);
  v205 = v218;
  v206.m256i_i64[0] = v219;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v205, v28);
  ++v241;
  v231 = 0;
  v243 = v203;
  v29 = v27->m128_f32[2];
  v30 = v27->m128_f32[3];
  v31 = v27[1].m128_f32[0];
  v32 = v27[1].m128_f32[1];
  v33 = v27[1].m128_f32[2];
  v34 = v27[1].m128_f32[3];
  if ( ((1 << i) & v22) != 0 )
  {
    v205.m128_i32[0] = v27->m128_i32[2];
    *(unsigned __int64 *)((char *)v205.m128_u64 + 4) = LODWORD(v30);
    v205.m128_f32[3] = v31;
    v206.m256i_i64[0] = LODWORD(v32);
    v206.m256i_i64[1] = __PAIR64__(LODWORD(v34), LODWORD(v33));
    v206.m256i_i32[4] = 1065353216;
    Matrix3x3::operator*(&v205, &v218, (char *)v5 + 192);
    v198 = Matrix3x3::As3DHomogeneous(&v218, &v205);
    v228 = *(__m128 *)v198;
    v229 = *(__m256i *)(v198 + 16);
    v230 = *(_OWORD *)(v198 + 48);
    v37 = *(_DWORD *)(v198 + 64);
  }
  else
  {
    *(_QWORD *)&v207[12] = 0x28083F800000LL;
    *(_OWORD *)&v206.m256i_u64[1] = 0LL;
    v35 = (__m128)v205.m128_u64[0];
    *(_DWORD *)&v207[8] = 0;
    v206.m256i_i64[3] = 1065353216LL;
    v35.m128_f32[0] = v29;
    v36 = *(__m128 *)v206.m256i_i8;
    v37 = 10248;
    v36.m128_f32[0] = v31;
    v38 = _mm_shuffle_ps(v35, v35, 225);
    v39 = _mm_shuffle_ps(v36, v36, 225);
    v38.m128_f32[0] = v30;
    v39.m128_f32[0] = v32;
    *(__m128 *)v206.m256i_i8 = _mm_shuffle_ps(v39, v39, 225);
    v229 = v206;
    v40 = *(__m128 *)v207;
    v205 = _mm_shuffle_ps(v38, v38, 225);
    v40.m128_f32[0] = v33;
    v228 = v205;
    v41 = _mm_shuffle_ps(v40, v40, 225);
    v41.m128_f32[0] = v34;
    *(__m128 *)v207 = _mm_shuffle_ps(v41, v41, 225);
    v230 = *(_OWORD *)v207;
  }
  v42 = v200;
  v231 = v37;
  if ( !v200 )
  {
    v225 = 0LL;
    v224 = &v200;
    v226 = 1;
    v43 = CShape::CopyShape((CShape *)&v238, (const struct CMILMatrix *)&v228, &v225);
    if ( v226 )
    {
      v44 = *v224;
      *v224 = v225;
      if ( v44 )
        (**(void (__fastcall ***)(struct CRenderingEffect *, __int64))v44)(v44, 1LL);
    }
    if ( v43 < 0 )
    {
      v52 = 0;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v43, 0x5Fu, 0LL);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v238);
      v51 = v200;
      goto LABEL_44;
    }
    goto LABEL_30;
  }
  v202 = 0LL;
  v218.m128_u64[0] = (unsigned __int64)&v202;
  v218.m128_u64[1] = 0LL;
  LOBYTE(v219) = 1;
  v117 = CShape::TryOptimizedCombinePaths(v200, 0LL, &v238, &v228, 1, &v218.m128_u16[4]);
  v43 = v117;
  if ( v117 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v117, 0x1C8u, 0LL);
  }
  else if ( !v218.m128_u64[1] )
  {
    v197 = CShape::D2DCombine(v42, v118, &v238, &v228, 1, &v218.m128_u16[4]);
    v43 = v197;
    if ( v197 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v197, 0x1D3u, 0LL);
  }
  if ( (_BYTE)v219 )
  {
    v119 = *(void (__fastcall ****)(_QWORD, __int64))v218.m128_u64[0];
    *(_QWORD *)v218.m128_u64[0] = v218.m128_u64[1];
    if ( v119 )
      (**v119)(v119, 1LL);
  }
  if ( v43 >= 0 )
  {
    v120 = v200;
    v121 = v202;
    v202 = 0LL;
    v200 = v121;
    if ( v120 )
    {
      (**(void (__fastcall ***)(struct CRenderingEffect *, __int64))v120)(v120, 1LL);
      if ( v202 )
        (**(void (__fastcall ***)(struct CRenderingEffect *, __int64))v202)(v202, 1LL);
    }
LABEL_30:
    v45 = v241;
    v46 = (__m128 *)lpMem;
    v238 = &CRectanglesShape::`vftable';
    if ( ((char *)v241 - (_BYTE *)lpMem) >> 4 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(
        &v205,
        (__int64)lpMem,
        ((char *)v241 - (_BYTE *)lpMem) >> 4);
      v46 = (__m128 *)lpMem;
      v45 = &v241[-v47];
      v241 = v45;
    }
    if ( v244 )
    {
      (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v244 + 16LL))(v244);
      v45 = v241;
      v3 = 0LL;
      v46 = (__m128 *)lpMem;
      v244 = 0LL;
    }
    else
    {
      v3 = 0LL;
    }
    v48 = v45 - v46;
    if ( v48 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v205, (__int64)v46, v48);
      v46 = (__m128 *)lpMem;
      v241 -= v49;
    }
    lpMem = v3;
    if ( v46 != &v243 && v46 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v46);
      v3 = 0LL;
    }
    v50 = v239;
    if ( v239 )
    {
      v239 = v3;
      (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v50 + 16LL))(v50);
      v3 = 0LL;
    }
    v22 = v201;
    v23 = (char *)v5 + 136;
    goto LABEL_42;
  }
  v52 = 0;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v43, 0x6Au, 0LL);
  if ( v202 )
    (**(void (__fastcall ***)(struct CRenderingEffect *, __int64))v202)(v202, 1LL);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v238);
  v51 = v200;
LABEL_44:
  v21 = v43;
  if ( v51 )
    (**(void (__fastcall ***)(struct CRenderingEffect *, __int64, __int64))v51)(v51, 1LL, v7);
  else
    *(_QWORD *)&v237 = v25;
  if ( v43 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v43, 0x203u, 0LL);
LABEL_179:
    if ( v25 )
      goto LABEL_80;
    return v21;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v25 + 16LL))(v25) )
    goto LABEL_179;
  v200 = 0LL;
  v220 = 0LL;
  v53 = 1;
  memset_0(v248, 0, sizeof(v248));
  v54 = 50529027;
  if ( *((_DWORD *)v5 + 44) )
  {
    v55 = 0LL;
    do
    {
      v56 = *((_QWORD *)v5 + v52 + 17);
      if ( v56 )
      {
        if ( v53 && *((_DWORD *)v5 + 66) != 1 && *(_BYTE *)(v56 + 52) && *(_DWORD *)(v56 + 48) != 50529027 )
          v53 = 0;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v56 + 8LL))(
               *((_QWORD *)v5 + v52 + 17),
               2LL) )
        {
          v57 = *(float *)(v56 + 8);
          v58 = (const struct D2D_MATRIX_3X2_F *)(56LL * v52);
          *(float *)&v248[(_QWORD)v58] = v57;
          v59 = *(float *)(v56 + 12);
          *(float *)&v248[(_QWORD)v58 + 4] = v59;
          *(_DWORD *)&v248[(_QWORD)v58 + 8] = 0;
          v60 = *(float *)(v56 + 16);
          *(float *)&v248[(_QWORD)v58 + 12] = v60;
          v61 = *(float *)(v56 + 20);
          *(float *)&v248[(_QWORD)v58 + 16] = v61;
          *(_DWORD *)&v248[(_QWORD)v58 + 20] = 0;
          v62 = *(float *)(v56 + 24);
          *(float *)&v248[(_QWORD)v58 + 24] = v62;
          v63 = *(float *)(v56 + 28);
          v64 = v62 * v59;
          *(_DWORD *)&v248[(_QWORD)v58 + 32] = 1065353216;
          v65 = v62 * v61;
          *(float *)&v248[(_QWORD)v58 + 28] = v63;
          v66 = (float)((float)((float)((float)((float)(v61 * v57) + (float)((float)(v63 * v60) * 0.0))
                                      + (float)((float)(v62 * v59) * 0.0))
                              - (float)((float)(v62 * v57) * 0.0))
                      - (float)((float)(v62 * v61) * 0.0))
              - (float)(v60 * v59);
          if ( COERCE_FLOAT(LODWORD(v66) & v4) < 0.0000011920929 )
          {
            si128 = _mm_load_si128((const __m128i *)&_xmm);
            *(__m128i *)&v248[56 * v52] = si128;
            *(__m128i *)&v248[56 * v52 + 16] = si128;
            v101 = FLOAT_1_0;
          }
          else
          {
            v67 = 1.0 / v66;
            v68 = v62 * 0.0;
            v69 = (float)((float)(v63 * v60) - v65) * (float)(1.0 / v66);
            v70 = v63 * v57;
            *(float *)&v248[56 * v52 + 24] = v69;
            v71 = v63 * 0.0;
            v210 = v69;
            v72 = (float)((float)(v61 * v57) - (float)(v60 * v59)) * (float)(1.0 / v66);
            v73 = (float)(v60 * 0.0) - (float)(v57 * 0.0);
            v74 = (float)(v64 - v70) * (float)(1.0 / v66);
            v75 = (float)(v57 - v68) * (float)(1.0 / v66);
            *(float *)&v248[56 * v52 + 32] = v72;
            v76 = v61 * 0.0;
            *(float *)&v248[56 * v52 + 16] = v75;
            *(float *)&v248[56 * v52 + 28] = v74;
            v77 = (float)(v68 - v60) * (float)(1.0 / v66);
            v78 = (float)(v61 - v71) * (float)(1.0 / v66);
            v79 = (float)(v71 - v59) * (float)(1.0 / v66);
            *(float *)&v248[56 * v52] = v78;
            *(float *)&v248[56 * v52 + 12] = v77;
            *(float *)&v248[56 * v52 + 4] = v79;
            v80 = v73 * v67;
            v208 = v78;
            *(float *)&v248[56 * v52 + 20] = v80;
            *(float *)&v200 = v72;
            v204 = v77;
            *(float *)&v201 = v75;
            *(float *)&v202 = v74;
            v209 = v80;
            v81 = (float)((float)(v59 * 0.0) - v76) * v67;
            *(float *)&v248[56 * v52 + 8] = v81;
            v82 = *(float *)(v56 + 96);
            v83 = *(float *)(v56 + 84);
            v84 = (__m128)LODWORD(v82);
            v85 = *(float *)(v56 + 108);
            v86 = *(float *)(v56 + 100);
            v87 = (__m128)*(unsigned int *)(v56 + 88);
            v88 = *(float *)(v56 + 112);
            v89 = *(float *)(v56 + 104);
            v90 = *(float *)(v56 + 116);
            v211 = *(float *)(v56 + 92);
            v84.m128_f32[0] = (float)((float)(v82 * v79) + (float)(v83 * v78)) + (float)(v85 * v81);
            v91 = _mm_shuffle_ps(v84, v84, 225);
            v91.m128_f32[0] = (float)((float)(v86 * v79) + (float)(v87.m128_f32[0] * v208)) + (float)(v88 * v81);
            v92 = _mm_shuffle_ps(v91, v91, 198);
            v92.m128_f32[0] = (float)((float)(v89 * v79) + (float)(v211 * v208)) + (float)(v90 * v81);
            v93 = v85 * v80;
            v94 = v87;
            v95 = _mm_shuffle_ps(v92, v92, 39);
            v95.m128_f32[0] = (float)((float)(v83 * v204) + (float)(v82 * *(float *)&v201)) + v93;
            v94.m128_f32[0] = (float)((float)(v87.m128_f32[0] * v204) + (float)(v86 * *(float *)&v201))
                            + (float)(v88 * v209);
            v96 = _mm_shuffle_ps(v94, v94, 225);
            v97 = (float)(v211 * v210) + (float)(v89 * *(float *)&v202);
            v96.m128_f32[0] = (float)((float)(v211 * v204) + (float)(v89 * *(float *)&v201)) + (float)(v90 * v209);
            v98 = v90 * *(float *)&v200;
            v99 = _mm_shuffle_ps(v96, v96, 198);
            v100 = (float)((float)(v83 * v210) + (float)(v82 * *(float *)&v202)) + (float)(v85 * *(float *)&v200);
            v87.m128_f32[0] = (float)((float)(v87.m128_f32[0] * v210) + (float)(v86 * *(float *)&v202))
                            + (float)(v88 * *(float *)&v200);
            *(__m128 *)&v248[56 * v52] = _mm_shuffle_ps(v95, v95, 57);
            v101 = v97 + v98;
            v99.m128_f32[0] = v100;
            v102 = _mm_shuffle_ps(v99, v99, 39);
            v102.m128_f32[0] = v87.m128_f32[0];
            *(__m128 *)&v248[56 * v52 + 16] = _mm_shuffle_ps(v102, v102, 57);
          }
          v103 = *((_DWORD *)v5 + 47);
          v104 = _bittest(&v103, v52);
          *(float *)&v248[56 * v52 + 32] = v101;
          if ( v104 )
          {
            v123 = *((float *)v5 + 57);
            v124 = *(float *)&v248[56 * v52 + 12];
            v125 = (__m128)LODWORD(v123);
            v126 = *(float *)&v248[56 * v52];
            v127 = *((float *)v5 + 59);
            v128 = *(float *)&v248[56 * v52 + 24];
            v129 = *((float *)v5 + 61);
            v130 = *((float *)v5 + 62);
            v131 = *(float *)&v248[56 * v52 + 16];
            v132 = *(float *)&v248[56 * v52 + 4];
            v133 = *(float *)&v248[56 * v52 + 8];
            v134 = *(float *)&v248[56 * v52 + 28];
            v135 = *((float *)v5 + 58);
            v136 = v135 * *(float *)&v248[56 * v52 + 20];
            v125.m128_f32[0] = (float)((float)(v123 * v126) + (float)(v135 * v124)) + (float)(v128 * v127);
            v137 = v134 * v127;
            v203 = v125;
            v125.m128_f32[0] = v123;
            v138 = (float)(v123 * v133) + v136;
            v139 = *((float *)v5 + 63) * v126;
            v125.m128_f32[0] = (float)(v125.m128_f32[0] * v132) + (float)(v135 * v131);
            v140 = *(float *)&v248[56 * v52 + 32] * v127;
            v141 = *((float *)v5 + 60);
            v142 = (__m128)LODWORD(v141);
            v125.m128_f32[0] = v125.m128_f32[0] + v137;
            *(float *)&v200 = v138 + v140;
            v143 = v141 * v126;
            v144 = *((float *)v5 + 65);
            v145 = v143 + (float)(v129 * v124);
            v146 = v129;
            v147 = (float)(v141 * v133) + (float)(v129 * *(float *)&v248[56 * v52 + 20]);
            v148 = *(float *)&v248[56 * v52 + 32];
            v149 = v145 + (float)(v130 * v128);
            v142.m128_f32[0] = (float)((float)(v142.m128_f32[0] * v132) + (float)(v146 * v131)) + (float)(v130 * v134);
            v150 = v147 + (float)(v130 * v148);
            v151 = *((float *)v5 + 64);
            v152 = v151 * v124;
            v153 = *((float *)v5 + 63);
            *(float *)&v202 = v150;
            v154 = (float)((float)(v153 * v132) + (float)(v151 * v131)) + (float)(v144 * v134);
            v155 = _mm_shuffle_ps(v203, v203, 225);
            v156 = _mm_shuffle_ps(v142, v142, 225);
            v155.m128_f32[0] = v125.m128_f32[0];
            v157 = _mm_shuffle_ps(v155, v155, 198);
            v157.m128_f32[0] = *(float *)&v200;
            v156.m128_f32[0] = *(float *)&v202;
            v158 = _mm_shuffle_ps(v157, v157, 39);
            v159 = _mm_shuffle_ps(v156, v156, 198);
            v160 = (float)((float)(v153 * v133) + (float)(v151 * *(float *)&v248[56 * v52 + 20])) + (float)(v144 * v148);
            v159.m128_f32[0] = (float)(v139 + v152) + (float)(v144 * v128);
            v158.m128_f32[0] = v149;
            v161 = _mm_shuffle_ps(v159, v159, 39);
            v161.m128_f32[0] = v154;
            *(__m128 *)&v248[56 * v52] = _mm_shuffle_ps(v158, v158, 57);
            *(__m128 *)&v248[56 * v52 + 16] = _mm_shuffle_ps(v161, v161, 57);
            *(float *)&v248[56 * v52 + 32] = v160;
          }
          else if ( !v55
                 && *(_BYTE *)(v56 + 147)
                 && D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)(v56 + 8), v58) )
          {
            v55 = (struct CRenderingEffect *)&v220;
            v190 = (__m128)*(unsigned int *)(v56 + 136);
            v191 = (__m128)*(unsigned int *)(v56 + 140);
            v191.m128_f32[0] = (float)((float)(v191.m128_f32[0] * *(float *)(v56 + 16))
                                     + (float)(*(float *)(v56 + 136) * *(float *)(v56 + 8)))
                             + *(float *)(v56 + 24);
            v190.m128_f32[0] = (float)((float)(v190.m128_f32[0] * *(float *)(v56 + 12))
                                     + (float)(*(float *)(v56 + 140) * *(float *)(v56 + 20)))
                             + *(float *)(v56 + 28);
            v220 = _mm_unpacklo_ps(v191, v190).m128_u64[0];
          }
          if ( !*(_BYTE *)(v56 + 52)
            || *(_BYTE *)(v56 + 144)
            || *(float *)(v56 + 120) == -3.4028235e38
            && *(float *)(v56 + 124) == -3.4028235e38
            && *(float *)(v56 + 128) == 3.4028235e38
            && *(float *)(v56 + 132) == 3.4028235e38 )
          {
            v248[(_QWORD)v58 + 52] = 0;
          }
          else
          {
            v248[(_QWORD)v58 + 52] = 1;
            *(_OWORD *)&v248[(_QWORD)v58 + 36] = *(_OWORD *)(v56 + 120);
          }
          v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
        }
      }
      ++v52;
    }
    while ( v52 < *((_DWORD *)v5 + 44) );
    v25 = (struct CRenderingEffect *)v237;
    v200 = v55;
    v6 = v221;
  }
  BYTE8(v247) = 0;
  v212 = 0LL;
  v213 = 0LL;
  v105 = *(_QWORD *)v25;
  LODWORD(v202) = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CRenderingEffect *, struct CRenderingEffect **))(v105 + 64))(
          v25,
          &v202)
    || (_DWORD)v202 != 1 )
  {
    BYTE8(v213) |= 1u;
    *(_QWORD *)&v212 = v25;
    if ( v53 && !*((_QWORD *)v5 + 3) && !*((_QWORD *)v5 + 5) )
      goto LABEL_75;
    this = (CBrushDrawListGenerator *)*((unsigned int *)v5 + 44);
    v203.m128_u64[0] = (unsigned __int64)this;
    v203.m128_u64[1] = (unsigned __int64)v5 + 136;
    if ( v5 != (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-136LL || !(_DWORD)this )
    {
      CBrushDrawListGenerator::ProcessBrushClampEdges_Polygon(
        *((_DWORD *)v5 + 66),
        (unsigned int)&v203,
        *((_DWORD *)v5 + 47),
        (_DWORD)v5 + 192,
        (__int64)&v246);
      *((_QWORD *)&v212 + 1) = &v246;
      goto LABEL_75;
    }
    goto LABEL_187;
  }
  v237 = 0LL;
  v106 = (*(__int64 (__fastcall **)(struct CRenderingEffect *, __int128 *, _QWORD))(*(_QWORD *)v25 + 48LL))(
           v25,
           &v237,
           0LL);
  v21 = v106;
  if ( v106 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v106, 0x254u, 0LL);
    if ( SBYTE8(v247) == -1LL || !BYTE8(v247) || SBYTE8(v247) == 1LL )
      goto LABEL_79;
LABEL_199:
    std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>(&v246);
    goto LABEL_79;
  }
  v212 = v237;
  if ( v53 )
  {
    if ( *((_DWORD *)v5 + 66) == 1 )
      v54 = 0;
    LODWORD(v213) = v54;
  }
  else
  {
    v162 = (__int64 *)((char *)v5 + 136);
    if ( v5 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-136LL && *((_DWORD *)v5 + 44) )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v163 = &v162[*((unsigned int *)v5 + 44)];
    v164 = 0;
    if ( v162 != v163 )
    {
      do
      {
        v165 = *v162;
        if ( *v162 && *(_BYTE *)(v165 + 52) )
        {
          if ( (v166 = *(_DWORD *)(v165 + 12) & v4, *(float *)&v166 < 0.000081380211)
            && COERCE_FLOAT(*(_DWORD *)(v165 + 16) & v4) < 0.000081380211
            || COERCE_FLOAT(*(_DWORD *)(v165 + 8) & v4) < 0.000081380211
            && COERCE_FLOAT(*(_DWORD *)(v165 + 20) & v4) < 0.000081380211 )
          {
            v167 = *(_DWORD *)(v165 + 48);
            if ( v167 == 50529027 || !v167 )
            {
              v168 = *(_DWORD *)(v165 + 48);
            }
            else
            {
              v222 = 0x1000000;
              v223[2] = 2;
              v223[0] = 0x2000000;
              v223[1] = 1;
              v223[3] = 256;
              v223[4] = 512;
              v223[5] = 0x10000;
              v223[6] = 0x20000;
              if ( *(float *)&v166 >= 0.000081380211 || COERCE_FLOAT(*(_DWORD *)(v165 + 16) & v4) >= 0.000081380211 )
              {
                v180 = 3;
                v181 = *(float *)(v165 + 16) <= 0.0;
                v182 = *(float *)(v165 + 12);
                if ( *(float *)(v165 + 16) > 0.0 )
                  v180 = 1;
                v214 = v180;
                v183 = 1;
                if ( !v181 )
                  v183 = 3;
                v216 = v183;
                v184 = 2;
                if ( v182 > 0.0 )
                  v184 = 0;
                v215 = v184;
                v185 = 0;
                if ( v182 > 0.0 )
                  v185 = 2;
              }
              else
              {
                v192 = 2;
                v193 = *(float *)(v165 + 8) <= 0.0;
                v194 = *(float *)(v165 + 20);
                if ( *(float *)(v165 + 8) > 0.0 )
                  v192 = 0;
                v214 = v192;
                v195 = 0;
                if ( !v193 )
                  v195 = 2;
                v216 = v195;
                v196 = 3;
                if ( v194 > 0.0 )
                  v196 = 1;
                v215 = v196;
                v185 = 1;
                if ( v194 > 0.0 )
                  v185 = 3;
              }
              v217 = v185;
              v186 = &v214;
              v168 = 0;
              v187 = &v222;
              v188 = 4LL;
              do
              {
                if ( (v167 & v223[2 * *v186 - 1]) != 0 )
                  v168 |= *v187;
                if ( (v167 & v223[2 * *v186]) != 0 )
                  v168 |= v187[1];
                ++v186;
                v187 += 2;
                --v188;
              }
              while ( v188 );
            }
            if ( v168 != v164 )
            {
              v169 = 0;
              v170 = (float)((float)(*(float *)(v165 + 32) * *(float *)(v165 + 8))
                           + (float)(*(float *)(v165 + 36) * *(float *)(v165 + 16)))
                   + *(float *)(v165 + 24);
              v171 = (float)((float)(*(float *)(v165 + 32) * *(float *)(v165 + 12))
                           + (float)(*(float *)(v165 + 36) * *(float *)(v165 + 20)))
                   + *(float *)(v165 + 28);
              v172 = (float)((float)(*(float *)(v165 + 40) * *(float *)(v165 + 8))
                           + (float)(*(float *)(v165 + 44) * *(float *)(v165 + 16)))
                   + *(float *)(v165 + 24);
              v173 = (float)((float)(*(float *)(v165 + 40) * *(float *)(v165 + 12))
                           + (float)(*(float *)(v165 + 44) * *(float *)(v165 + 20)))
                   + *(float *)(v165 + 28);
              v174 = fmaxf(v170, v172);
              v175 = fminf(v171, v173);
              v176 = fmaxf(v171, v173);
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v237 - fminf(v170, v172)) & v4) <= 0.0000011920929 )
                v169 = 50331648;
              v177 = v169 | 0x300;
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v237 + 2) - v174) & v4) > 0.0000011920929 )
                v177 = v169;
              v178 = v177 | 3;
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v237 + 1) - v175) & v4) > 0.0000011920929 )
                v178 = v177;
              v179 = v178 | 0x30000;
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v237 + 3) - v176) & v4) > 0.0000011920929 )
                v179 = v178;
              if ( v179 )
              {
                v164 |= v179 & v168;
                if ( v164 == 50529027 )
                  break;
              }
            }
          }
        }
        ++v162;
      }
      while ( v162 != v163 );
      v5 = v227;
      v6 = v221;
    }
    LODWORD(v213) = v164;
  }
LABEL_75:
  v107 = *((_BYTE *)v5 + 277) == 0;
  v235 = *((unsigned int *)v5 + 45);
  v236 = v248;
  v233 = 0LL;
  if ( v107 )
  {
    v108 = (__m128)*((unsigned int *)v6 + 17);
    v109 = v108;
    v109.m128_f32[0] = v108.m128_f32[0] * *((float *)v6 + 14);
    v110 = _mm_shuffle_ps(v109, v109, 225);
    v110.m128_f32[0] = *((float *)v6 + 17) * *((float *)v6 + 15);
    v111 = _mm_shuffle_ps(v110, v110, 198);
    v111.m128_f32[0] = *((float *)v6 + 17) * *((float *)v6 + 16);
    v112 = _mm_shuffle_ps(v111, v111, 39);
    v112.m128_f32[0] = v108.m128_f32[0];
    v113 = _mm_shuffle_ps(v112, v112, 57);
  }
  else
  {
    v113 = *(__m128 *)((char *)v6 + 56);
  }
  v114 = (CDrawListEntryBuilder *)*((_QWORD *)v5 + 1);
  v234 = v200;
  v232 = v113;
  v115 = CDrawListEntryBuilder::Insert(
           v114,
           (const struct PrimitiveGeometryDesc *)&v212,
           (const struct PrimitiveVertexAttributesDesc *)&v232,
           0LL);
  v21 = v115;
  if ( v115 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v115, 0x286u, 0LL);
    if ( SBYTE8(v247) == -1LL || !BYTE8(v247) || SBYTE8(v247) == 1LL )
      goto LABEL_79;
    goto LABEL_199;
  }
  if ( SBYTE8(v247) != -1LL && BYTE8(v247) && SBYTE8(v247) != 1LL )
    goto LABEL_199;
LABEL_79:
  if ( v25 )
LABEL_80:
    (**(void (__fastcall ***)(struct CRenderingEffect *, __int64))v25)(v25, 1LL);
  return v21;
}
