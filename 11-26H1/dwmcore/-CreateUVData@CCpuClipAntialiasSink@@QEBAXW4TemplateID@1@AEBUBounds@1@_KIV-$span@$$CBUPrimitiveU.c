/*
 * XREFs of ?CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@PEAPEAVUVData@1@@Z @ 0x1800BFFA0
 * Callers:
 *     ?AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_NPEA_N@Z @ 0x1800BE540 (-AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexA.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C0E10 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CCpuClipAntialiasSink::CreateUVData(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned __int64 *a6,
        _QWORD *a7)
{
  float v7; // xmm0_4
  float v10; // xmm6_4
  __int64 v12; // r14
  unsigned __int32 v13; // xmm9_4
  __int64 v14; // rbx
  float v15; // xmm0_4
  int v16; // edx
  unsigned __int16 v17; // ax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned int v21; // r13d
  __int64 v22; // r12
  int v23; // ebp
  float *v24; // r12
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rax
  HANDLE ProcessHeap; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // r14
  unsigned __int64 v31; // rcx
  SIZE_T v32; // rbx
  HANDLE v33; // rax
  float *v34; // rax
  float *v35; // rbx
  __m128 v36; // xmm0
  int v37; // r15d
  __m128 v38; // xmm6
  __m128 v39; // xmm0
  __int64 v41; // rsi
  __m128 v42; // xmm10
  __int64 v43; // rcx
  __m128 v44; // xmm3
  __m128 v45; // xmm4
  __m128 v46; // xmm5
  __m128 v47; // xmm0
  float v48; // xmm4_4
  float v49; // xmm5_4
  __int64 v50; // rcx
  __m128 v51; // xmm8
  __m128 v52; // xmm0
  float v53; // xmm8_4
  float v54; // xmm6_4
  unsigned int v55; // eax
  unsigned __int64 v56; // rcx
  unsigned int v57; // eax
  char *v58; // r9
  unsigned __int64 v59; // rcx
  unsigned int v60; // r11d
  unsigned int v61; // r12d
  float *v62; // rdx
  int v63; // esi
  int v64; // ebp
  int v65; // r15d
  float v66; // xmm4_4
  float v67; // xmm5_4
  float v68; // xmm6_4
  float v69; // xmm8_4
  unsigned int v70; // eax
  char *v71; // r9
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rcx
  char *v74; // rdx
  unsigned int v75; // eax
  __m128 v76; // xmm4
  int v77; // r11d
  __int64 v78; // rdx
  __int64 v79; // rcx
  __m128 v80; // xmm6
  __m128 v81; // xmm8
  __m128 v82; // xmm0
  float v83; // xmm6_4
  float v84; // xmm8_4
  __int64 v85; // rdx
  __int64 v86; // rcx
  __m128 v87; // xmm5
  __m128 v88; // xmm0
  float v89; // xmm5_4
  float v90; // xmm4_4
  unsigned int v91; // eax
  char *v92; // r9
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rcx
  char *v95; // r9
  unsigned int v96; // eax
  _QWORD *result; // rax
  unsigned __int64 v98; // r8
  __int64 v99; // rdx
  float v100; // xmm1_4
  float v101; // xmm2_4
  float v102; // xmm3_4
  float v103; // xmm0_4
  float v104; // xmm0_4
  unsigned __int64 v105; // r9
  __int64 v106; // r8
  float v107; // xmm1_4
  float v108; // xmm2_4
  float v109; // xmm3_4
  float v110; // xmm0_4
  float v111; // xmm0_4
  unsigned __int64 v112; // r8
  __int64 v113; // rdx
  float v114; // xmm1_4
  float v115; // xmm2_4
  float v116; // xmm3_4
  float v117; // xmm0_4
  float v118; // xmm0_4
  unsigned __int64 v119; // r8
  __int64 v120; // rdx
  float v121; // xmm1_4
  float v122; // xmm2_4
  float v123; // xmm3_4
  float v124; // xmm0_4
  float v125; // xmm0_4
  unsigned __int64 v126; // r8
  __int64 v127; // rdx
  float v128; // xmm1_4
  float v129; // xmm2_4
  float v130; // xmm3_4
  float v131; // xmm0_4
  float v132; // xmm0_4
  unsigned __int64 v133; // r8
  __int64 v134; // rdx
  float v135; // xmm1_4
  float v136; // xmm2_4
  float v137; // xmm3_4
  float v138; // xmm0_4
  float v139; // xmm0_4
  char v140; // [rsp+20h] [rbp-C8h]
  int Y; // [rsp+24h] [rbp-C4h] BYREF
  float v142; // [rsp+28h] [rbp-C0h]
  int v143; // [rsp+2Ch] [rbp-BCh] BYREF
  float *v144; // [rsp+30h] [rbp-B8h]
  int v145; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v146; // [rsp+40h] [rbp-A8h]
  __int64 v147; // [rsp+48h] [rbp-A0h]
  __int64 v148; // [rsp+50h] [rbp-98h]
  __int64 v149; // [rsp+58h] [rbp-90h]
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v7 = *(float *)(a3 + 8);
  v10 = *(float *)(a3 + 4);
  v12 = a2;
  v13 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  if ( v7 <= v10 )
  {
    v23 = 0;
    v24 = 0LL;
    v21 = 0;
    v144 = 0LL;
    v149 = 0LL;
    *(float *)&Y = 0.0;
    v148 = 0LL;
    v142 = 0.0;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 8LL * a2 + 40);
    *(float *)&Y = 0.0;
    v15 = modff(v7, (float *)&Y);
    v16 = (int)v10;
    v17 = (int)*(float *)&Y - 1;
    if ( COERCE_FLOAT(LODWORD(v15) & v13) >= 0.000081380211 )
      v17 = (int)*(float *)&Y;
    v18 = (unsigned __int16)(2 * v16);
    v19 = v17 - (unsigned __int16)v16 + 1;
    v20 = *(_QWORD *)(v14 + 40) + 8 * v18;
    v21 = 2 * v19 + 2;
    v149 = 2 * v19 + 2;
    if ( !v20 && 2 * v19 != -2 )
      goto LABEL_6;
    v22 = *(_QWORD *)(v14 + 24);
    Y = 8 * *(_DWORD *)(v14 + 16) + 16;
    v23 = Y;
    v142 = *(float *)&Y;
    v24 = (float *)(Y * (int)v18 + v22);
    v25 = *(_QWORD *)(v14 + 32) + Y * (int)v18;
    v26 = *(_QWORD *)(v14 + 48) == 0LL;
    v144 = v24;
    v148 = v25;
    if ( v26 )
    {
      if ( 6 * v19 )
      {
LABEL_6:
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
    }
  }
  v27 = *(_QWORD *)(a1 + 8 * (v12 + 5));
  v147 = v27;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v27 + 72) - 1.0) & v13) >= 0.000081380211
    || (v140 = 0, COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v27 + 76) - 1.0) & v13) >= 0.000081380211) )
  {
    v140 = 1;
  }
  ProcessHeap = GetProcessHeap();
  v29 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v30 = v29;
  if ( !v29 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *v29 = a4;
  v29[1] = v21;
  v31 = a4 * v21;
  v32 = 8 * v31;
  if ( !is_mul_ok(v31, 8uLL) )
    v32 = -1LL;
  v33 = GetProcessHeap();
  v34 = (float *)HeapAlloc(v33, 0, v32);
  v35 = v34;
  if ( !v34 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v36 = (__m128)*(unsigned int *)(a3 + 4);
  v30[2] = v34;
  v37 = 8 * *(_DWORD *)v30;
  v145 = v37;
  v143 = 0;
  v36.m128_f32[0] = modff(v36.m128_f32[0], (float *)&v143);
  v143 = 0;
  v38 = v36;
  v39 = (__m128)*(unsigned int *)(a3 + 8);
  v39.m128_f32[0] = modff(v39.m128_f32[0], (float *)&v143);
  v41 = v147;
  v42 = v39;
  if ( v38.m128_f32[0] <= 0.000081380211 )
  {
    v60 = 0;
  }
  else
  {
    v43 = 2 * v23;
    v44 = (__m128)LODWORD(FLOAT_1_0);
    v44.m128_f32[0] = 1.0 - v38.m128_f32[0];
    v46 = v38;
    v45 = v44;
    v45.m128_f32[0] = (float)((float)(1.0 - v38.m128_f32[0]) * *v24)
                    + (float)(v38.m128_f32[0] * *(float *)((char *)v24 + v43));
    v46.m128_f32[0] = (float)(v38.m128_f32[0] * *(float *)((char *)v24 + v43 + 4))
                    + (float)((float)(1.0 - v38.m128_f32[0]) * v24[1]);
    if ( v140 )
    {
      v48 = v45.m128_f32[0] / *(float *)(v147 + 72);
      v49 = v46.m128_f32[0] / *(float *)(v147 + 76);
    }
    else
    {
      v47 = _mm_unpacklo_ps(v45, v46);
      v146 = v47.m128_u64[0];
      v48 = v47.m128_f32[0];
      LODWORD(v49) = _mm_shuffle_ps(v47, v47, 85).m128_u32[0];
    }
    v51 = v38;
    v50 = 3 * LODWORD(v142);
    v51.m128_f32[0] = (float)(v38.m128_f32[0] * *(float *)(v50 + v148))
                    + (float)(v44.m128_f32[0] * *(float *)(SLODWORD(v142) + v148));
    v38.m128_f32[0] = (float)(v38.m128_f32[0] * *(float *)(v50 + v148 + 4))
                    + (float)(v44.m128_f32[0] * *(float *)(SLODWORD(v142) + v148 + 4));
    if ( v140 )
    {
      v53 = v51.m128_f32[0] / *(float *)(v147 + 72);
      v54 = v38.m128_f32[0] / *(float *)(v147 + 76);
    }
    else
    {
      v52 = _mm_unpacklo_ps(v51, v38);
      v146 = v52.m128_u64[0];
      v53 = v52.m128_f32[0];
      LODWORD(v54) = _mm_shuffle_ps(v52, v52, 85).m128_u32[0];
    }
    v55 = 0;
    if ( a4 )
    {
      v56 = 0LL;
      do
      {
        if ( _bittest(&a5, v55) )
        {
          if ( v56 >= *a6 )
            goto LABEL_6;
          v112 = a6[1];
          v113 = 56 * v56;
          v114 = (float)((float)(v49 * *(float *)(56 * v56 + v112 + 12)) + (float)(v48 * *(float *)(56 * v56 + v112)))
               + *(float *)(56 * v56 + v112 + 24);
          v115 = (float)((float)(v48 * *(float *)(56 * v56 + v112 + 4)) + (float)(v49 * *(float *)(56 * v56 + v112 + 16)))
               + *(float *)(56 * v56 + v112 + 28);
          v116 = (float)((float)(v48 * *(float *)(56 * v56 + v112 + 8)) + (float)(v49 * *(float *)(56 * v56 + v112 + 20)))
               + *(float *)(56 * v56 + v112 + 32);
          if ( COERCE_FLOAT(LODWORD(v116) & v13) >= 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v116 - 1.0) & v13) >= 0.000081380211 )
          {
            v114 = v114 / v116;
            v115 = v115 / v116;
          }
          v35[2 * v56] = v114;
          v35[2 * v56 + 1] = v115;
          if ( *(_BYTE *)(v113 + v112 + 52) )
          {
            v117 = *(float *)(v113 + v112 + 44);
            if ( v114 <= v117 )
              v117 = fmaxf(v114, *(float *)(v113 + v112 + 36));
            v35[2 * v56] = v117;
            v118 = *(float *)(v113 + v112 + 48);
            if ( v115 <= v118 )
              v118 = fmaxf(v115, *(float *)(v113 + v112 + 40));
            v35[2 * v56 + 1] = v118;
          }
        }
        else
        {
          *(_QWORD *)&v35[2 * v56] = 0LL;
        }
        v56 = ++v55;
      }
      while ( v55 < a4 );
    }
    v57 = 0;
    v58 = (char *)v35 + v37;
    if ( a4 )
    {
      v59 = 0LL;
      do
      {
        if ( _bittest(&a5, v57) )
        {
          if ( v59 >= *a6 )
            goto LABEL_6;
          v119 = a6[1];
          v120 = 56 * v59;
          v121 = (float)((float)(v54 * *(float *)(56 * v59 + v119 + 12)) + (float)(v53 * *(float *)(56 * v59 + v119)))
               + *(float *)(56 * v59 + v119 + 24);
          v122 = (float)((float)(v53 * *(float *)(56 * v59 + v119 + 4)) + (float)(v54 * *(float *)(56 * v59 + v119 + 16)))
               + *(float *)(56 * v59 + v119 + 28);
          v123 = (float)((float)(v53 * *(float *)(56 * v59 + v119 + 8)) + (float)(v54 * *(float *)(56 * v59 + v119 + 20)))
               + *(float *)(56 * v59 + v119 + 32);
          if ( COERCE_FLOAT(LODWORD(v123) & v13) >= 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v123 - 1.0) & v13) >= 0.000081380211 )
          {
            v121 = v121 / v123;
            v122 = v122 / v123;
          }
          *(float *)&v58[8 * v59] = v121;
          *(float *)&v58[8 * v59 + 4] = v122;
          if ( *(_BYTE *)(v120 + v119 + 52) )
          {
            v124 = *(float *)(v120 + v119 + 44);
            if ( v121 <= v124 )
              v124 = fmaxf(v121, *(float *)(v120 + v119 + 36));
            *(float *)&v58[8 * v59] = v124;
            v125 = *(float *)(v120 + v119 + 48);
            if ( v122 <= v125 )
              v125 = fmaxf(v122, *(float *)(v120 + v119 + 40));
            *(float *)&v58[8 * v59 + 4] = v125;
          }
        }
        else
        {
          *(_QWORD *)&v58[8 * v59] = 0LL;
        }
        v59 = ++v57;
      }
      while ( v57 < a4 );
    }
    v60 = 2;
  }
  v61 = v149;
  if ( v42.m128_f32[0] > 0.000081380211 )
    v61 = v149 - 2;
  if ( v60 < v61 )
  {
    v62 = v144;
    LODWORD(v146) = 2 * v37;
    v63 = v60 * v37;
    v64 = v60 * v23;
    v65 = LODWORD(v142) * (v60 + 1);
    v143 = 2 * Y;
    do
    {
      v66 = *(float *)((char *)v62 + v64);
      v67 = *(float *)((char *)v62 + v64 + 4);
      if ( v140 )
      {
        v66 = v66 / *(float *)(v147 + 72);
        v68 = *(float *)(v148 + v65) / *(float *)(v147 + 72);
        v69 = *(float *)(v148 + v65 + 4) / *(float *)(v147 + 76);
        v67 = v67 / *(float *)(v147 + 76);
      }
      else
      {
        v68 = *(float *)(v148 + v65);
        v69 = *(float *)(v148 + v65 + 4);
      }
      v70 = 0;
      v71 = (char *)v35 + v63;
      if ( a4 )
      {
        v72 = 0LL;
        do
        {
          if ( _bittest(&a5, v70) )
          {
            if ( v72 >= *a6 )
              goto LABEL_6;
            v98 = a6[1];
            v99 = 56 * v72;
            v100 = (float)((float)(v67 * *(float *)(56 * v72 + v98 + 12)) + (float)(v66 * *(float *)(56 * v72 + v98)))
                 + *(float *)(56 * v72 + v98 + 24);
            v101 = (float)((float)(v66 * *(float *)(56 * v72 + v98 + 4)) + (float)(v67 * *(float *)(56 * v72 + v98 + 16)))
                 + *(float *)(56 * v72 + v98 + 28);
            v102 = (float)((float)(v66 * *(float *)(56 * v72 + v98 + 8)) + (float)(v67 * *(float *)(56 * v72 + v98 + 20)))
                 + *(float *)(56 * v72 + v98 + 32);
            if ( COERCE_FLOAT(LODWORD(v102) & v13) >= 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v102 - 1.0) & v13) >= 0.000081380211 )
            {
              v100 = v100 / v102;
              v101 = v101 / v102;
            }
            *(float *)&v71[8 * v72] = v100;
            *(float *)&v71[8 * v72 + 4] = v101;
            if ( *(_BYTE *)(v99 + v98 + 52) )
            {
              v103 = *(float *)(v99 + v98 + 44);
              if ( v100 <= v103 )
                v103 = fmaxf(v100, *(float *)(v99 + v98 + 36));
              *(float *)&v71[8 * v72] = v103;
              v104 = *(float *)(v99 + v98 + 48);
              if ( v101 <= v104 )
                v104 = fmaxf(v101, *(float *)(v99 + v98 + 40));
              *(float *)&v71[8 * v72 + 4] = v104;
            }
          }
          else
          {
            *(_QWORD *)&v71[8 * v72] = 0LL;
          }
          v72 = ++v70;
        }
        while ( v70 < a4 );
        v73 = 0LL;
        v74 = (char *)v35 + v63 + v145;
        v75 = 0;
        do
        {
          if ( _bittest(&a5, v75) )
          {
            if ( v73 >= *a6 )
              goto LABEL_6;
            v105 = a6[1];
            v106 = 56 * v73;
            v107 = (float)((float)(v69 * *(float *)(56 * v73 + v105 + 12)) + (float)(v68 * *(float *)(56 * v73 + v105)))
                 + *(float *)(56 * v73 + v105 + 24);
            v108 = (float)((float)(v68 * *(float *)(56 * v73 + v105 + 4))
                         + (float)(v69 * *(float *)(56 * v73 + v105 + 16)))
                 + *(float *)(56 * v73 + v105 + 28);
            v109 = (float)((float)(v68 * *(float *)(56 * v73 + v105 + 8))
                         + (float)(v69 * *(float *)(56 * v73 + v105 + 20)))
                 + *(float *)(56 * v73 + v105 + 32);
            if ( COERCE_FLOAT(LODWORD(v109) & v13) >= 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v109 - 1.0) & v13) >= 0.000081380211 )
            {
              v107 = v107 / v109;
              v108 = v108 / v109;
            }
            *(float *)&v74[8 * v73] = v107;
            *(float *)&v74[8 * v73 + 4] = v108;
            if ( *(_BYTE *)(v106 + v105 + 52) )
            {
              v110 = *(float *)(v106 + v105 + 44);
              if ( v107 <= v110 )
                v110 = fmaxf(v107, *(float *)(v106 + v105 + 36));
              *(float *)&v74[8 * v73] = v110;
              v111 = *(float *)(v106 + v105 + 48);
              if ( v108 <= v111 )
                v111 = fmaxf(v108, *(float *)(v106 + v105 + 40));
              *(float *)&v74[8 * v73 + 4] = v111;
            }
          }
          else
          {
            *(_QWORD *)&v74[8 * v73] = 0LL;
          }
          v73 = ++v75;
        }
        while ( v75 < a4 );
        v62 = v144;
      }
      v60 += 2;
      v64 += v143;
      v63 += v146;
      v65 += 2 * LODWORD(v142);
    }
    while ( v60 < v61 );
    v37 = v145;
    v23 = Y;
    v41 = v147;
  }
  if ( v42.m128_f32[0] > 0.000081380211 )
  {
    v76 = (__m128)LODWORD(FLOAT_1_0);
    v76.m128_f32[0] = 1.0 - v42.m128_f32[0];
    v77 = v149 - 4;
    v80 = v76;
    v81 = v76;
    v78 = v23 * ((int)v149 - 4 + 2);
    v79 = v23 * ((int)v149 - 4);
    v80.m128_f32[0] = (float)((float)(1.0 - v42.m128_f32[0]) * *(float *)((char *)v144 + v79))
                    + (float)(v42.m128_f32[0] * *(float *)((char *)v144 + v78));
    v81.m128_f32[0] = (float)((float)(1.0 - v42.m128_f32[0]) * *(float *)((char *)v144 + v79 + 4))
                    + (float)(v42.m128_f32[0] * *(float *)((char *)v144 + v78 + 4));
    if ( v140 )
    {
      v83 = v80.m128_f32[0] / *(float *)(v41 + 72);
      v84 = v81.m128_f32[0] / *(float *)(v41 + 76);
    }
    else
    {
      v82 = _mm_unpacklo_ps(v80, v81);
      v144 = (float *)v82.m128_u64[0];
      v83 = v82.m128_f32[0];
      LODWORD(v84) = _mm_shuffle_ps(v82, v82, 85).m128_u32[0];
    }
    v87 = v42;
    v85 = LODWORD(v142) * (v77 + 3);
    v86 = LODWORD(v142) * (v77 + 1);
    v87.m128_f32[0] = (float)(v42.m128_f32[0] * *(float *)(v85 + v148))
                    + (float)(v76.m128_f32[0] * *(float *)(v86 + v148));
    v76.m128_f32[0] = (float)(v76.m128_f32[0] * *(float *)(v86 + v148 + 4))
                    + (float)(v42.m128_f32[0] * *(float *)(v85 + v148 + 4));
    if ( v140 )
    {
      v89 = v87.m128_f32[0] / *(float *)(v41 + 72);
      v90 = v76.m128_f32[0] / *(float *)(v41 + 76);
    }
    else
    {
      v88 = _mm_unpacklo_ps(v87, v76);
      v144 = (float *)v88.m128_u64[0];
      v89 = v88.m128_f32[0];
      LODWORD(v90) = _mm_shuffle_ps(v88, v88, 85).m128_u32[0];
    }
    v91 = 0;
    v92 = (char *)v35 + v37 * ((int)v149 - 4 + 2);
    if ( a4 )
    {
      v93 = 0LL;
      while ( 1 )
      {
        if ( _bittest(&a5, v91) )
        {
          if ( v93 >= *a6 )
            goto LABEL_6;
          v126 = a6[1];
          v127 = 56 * v93;
          v128 = (float)((float)(v84 * *(float *)(56 * v93 + v126 + 12)) + (float)(v83 * *(float *)(56 * v93 + v126)))
               + *(float *)(56 * v93 + v126 + 24);
          v129 = (float)((float)(v83 * *(float *)(56 * v93 + v126 + 4)) + (float)(v84 * *(float *)(56 * v93 + v126 + 16)))
               + *(float *)(56 * v93 + v126 + 28);
          v130 = (float)((float)(v83 * *(float *)(56 * v93 + v126 + 8)) + (float)(v84 * *(float *)(56 * v93 + v126 + 20)))
               + *(float *)(56 * v93 + v126 + 32);
          if ( COERCE_FLOAT(LODWORD(v130) & v13) >= 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v130 - 1.0) & v13) >= 0.000081380211 )
          {
            v128 = v128 / v130;
            v129 = v129 / v130;
          }
          *(float *)&v92[8 * v93] = v128;
          *(float *)&v92[8 * v93 + 4] = v129;
          if ( *(_BYTE *)(v127 + v126 + 52) )
          {
            v131 = *(float *)(v127 + v126 + 44);
            if ( v128 <= v131 )
              v131 = fmaxf(v128, *(float *)(v127 + v126 + 36));
            *(float *)&v92[8 * v93] = v131;
            v132 = *(float *)(v127 + v126 + 48);
            if ( v129 <= v132 )
              v132 = fmaxf(v129, *(float *)(v127 + v126 + 40));
            *(float *)&v92[8 * v93 + 4] = v132;
          }
        }
        else
        {
          *(_QWORD *)&v92[8 * v93] = 0LL;
        }
        v93 = ++v91;
        if ( v91 >= a4 )
        {
          v94 = 0LL;
          v95 = (char *)v35 + v37 * (v77 + 3);
          v96 = 0;
          while ( 1 )
          {
            if ( _bittest(&a5, v96) )
            {
              if ( v94 >= *a6 )
                goto LABEL_6;
              v133 = a6[1];
              v134 = 56 * v94;
              v135 = (float)((float)(v90 * *(float *)(56 * v94 + v133 + 12)) + (float)(v89 * *(float *)(56 * v94 + v133)))
                   + *(float *)(56 * v94 + v133 + 24);
              v136 = (float)((float)(v89 * *(float *)(56 * v94 + v133 + 4))
                           + (float)(v90 * *(float *)(56 * v94 + v133 + 16)))
                   + *(float *)(56 * v94 + v133 + 28);
              v137 = (float)((float)(v89 * *(float *)(56 * v94 + v133 + 8))
                           + (float)(v90 * *(float *)(56 * v94 + v133 + 20)))
                   + *(float *)(56 * v94 + v133 + 32);
              if ( COERCE_FLOAT(LODWORD(v137) & v13) >= 0.000081380211
                && COERCE_FLOAT(COERCE_UNSIGNED_INT(v137 - 1.0) & v13) >= 0.000081380211 )
              {
                v135 = v135 / v137;
                v136 = v136 / v137;
              }
              *(float *)&v95[8 * v94] = v135;
              *(float *)&v95[8 * v94 + 4] = v136;
              if ( *(_BYTE *)(v134 + v133 + 52) )
              {
                v138 = *(float *)(v134 + v133 + 44);
                if ( v135 <= v138 )
                  v138 = fmaxf(v135, *(float *)(v134 + v133 + 36));
                *(float *)&v95[8 * v94] = v138;
                v139 = *(float *)(v134 + v133 + 48);
                if ( v136 <= v139 )
                  v139 = fmaxf(v136, *(float *)(v134 + v133 + 40));
                *(float *)&v95[8 * v94 + 4] = v139;
              }
            }
            else
            {
              *(_QWORD *)&v95[8 * v94] = 0LL;
            }
            v94 = ++v96;
            if ( v96 >= a4 )
              goto LABEL_65;
          }
        }
      }
    }
  }
LABEL_65:
  result = a7;
  *a7 = v30;
  return result;
}
