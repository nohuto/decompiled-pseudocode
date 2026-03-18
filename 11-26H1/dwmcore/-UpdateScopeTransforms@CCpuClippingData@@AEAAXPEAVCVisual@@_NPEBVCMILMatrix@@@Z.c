/*
 * XREFs of ?UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z @ 0x1800B1F20
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x180018330 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x18005FDD0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800AFD90 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x1800AFDF0 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800AFF90 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1930 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1BF0 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B38B0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18016CEE0 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1801AFEEC (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCpuClippingData::UpdateScopeTransforms(
        CCpuClippingData *this,
        struct CVisual *a2,
        char a3,
        const struct CMILMatrix *a4)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v9; // rax
  void *v10; // rcx
  __int64 v11; // r15
  int v12; // ecx
  __int64 v13; // rbx
  __int64 v14; // rbx
  char v15; // cl
  char v16; // cl
  float v17; // xmm2_4
  __int64 v18; // rdi
  float *v19; // rdx
  char v20; // cl
  char v21; // al
  unsigned __int32 v22; // xmm15_4
  float v23; // xmm6_4
  float v24; // xmm8_4
  float v25; // xmm10_4
  __int64 v26; // rdi
  struct CTransform3D *v27; // r15
  __int64 v28; // rax
  int v29; // r12d
  int v30; // ebp
  char v31; // r13
  __int64 v32; // rax
  char v33; // al
  float *v34; // rdx
  char v35; // cl
  __int64 v36; // r11
  __int64 v37; // rcx
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __m128 v43; // xmm0
  __int128 v44; // xmm1
  __int64 v45; // r11
  __int64 v46; // rcx
  __int128 *v47; // r11
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  __int128 v50; // xmm3
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int64 v55; // r11
  int v56; // xmm0_4
  int v57; // xmm1_4
  float v58; // xmm4_4
  float v59; // xmm5_4
  float v60; // xmm9_4
  char v61; // cl
  char v62; // al
  float v63; // xmm9_4
  float v64; // xmm5_4
  float v65; // xmm4_4
  float v66; // xmm5_4
  float v67; // xmm9_4
  char v68; // cl
  char v69; // al
  float v70; // xmm9_4
  float v71; // xmm5_4
  struct CTransform3D *Transform3DEffectNoRef; // rdi
  __int64 v73; // rax
  int v74; // r12d
  int v75; // r15d
  char v76; // r13
  __int64 v77; // rax
  char v78; // al
  float *v79; // rdx
  char v80; // cl
  float v81; // xmm4_4
  float v82; // xmm5_4
  float v83; // xmm9_4
  char v84; // cl
  float v85; // xmm0_4
  float v86; // xmm3_4
  float v87; // xmm1_4
  float v88; // xmm2_4
  char v89; // al
  float v90; // xmm4_4
  float v91; // xmm5_4
  float v92; // xmm9_4
  char v93; // cl
  float v94; // xmm0_4
  float v95; // xmm3_4
  float v96; // xmm1_4
  float v97; // xmm2_4
  char v98; // al
  float v99; // xmm4_4
  float v100; // xmm4_4
  float v101; // xmm5_4
  float v102; // xmm9_4
  float v103; // xmm11_4
  float v104; // xmm2_4
  float v105; // xmm3_4
  char v106; // cl
  char v107; // al
  float v108; // xmm9_4
  float v109; // xmm11_4
  float v110; // xmm4_4
  float v111; // xmm5_4
  float v112; // xmm11_4
  float v113; // xmm2_4
  float v114; // xmm3_4
  char v115; // al
  float v116; // xmm5_4
  float v117; // xmm9_4
  float v118; // xmm11_4
  float v119; // xmm6_4
  float v120; // xmm7_4
  float v121; // xmm2_4
  float v122; // xmm8_4
  float v123; // xmm5_4
  float v124; // xmm13_4
  float v125; // xmm14_4
  float v126; // xmm10_4
  float v127; // xmm3_4
  float v128; // xmm8_4
  float v129; // xmm11_4
  float v130; // xmm5_4
  float v131; // xmm0_4
  float v132; // xmm12_4
  float v133; // xmm12_4
  float v134; // xmm1_4
  char v135; // al
  float v136; // xmm13_4
  float v137; // xmm14_4
  float v138; // xmm9_4
  float v139; // xmm6_4
  float v140; // xmm2_4
  float v141; // xmm0_4
  float v142; // xmm11_4
  float v143; // xmm1_4
  float v144; // xmm12_4
  char v145; // r8
  char v146; // dl
  int v147; // xmm0_4
  char v148; // r8
  char v149; // dl
  int v150; // xmm0_4
  char v151; // r8
  char v152; // dl
  int v153; // xmm0_4
  char v154; // r8
  char v155; // dl
  int v156; // xmm0_4
  int v157; // ecx
  float v158; // xmm2_4
  float v159; // xmm3_4
  float v160; // xmm0_4
  float v161; // xmm1_4
  float v162; // xmm2_4
  float v163; // xmm0_4
  float v164; // xmm1_4
  float v165; // xmm3_4
  float v166; // xmm2_4
  float v167; // xmm0_4
  float v168; // xmm1_4
  float v169; // xmm3_4
  float v170; // xmm0_4
  float v171; // xmm1_4
  float v172; // xmm3_4
  float v173; // xmm3_4
  float v174; // xmm1_4
  float v175; // xmm2_4
  float v176; // xmm0_4
  float v177; // xmm1_4
  float v178; // xmm2_4
  float v179; // xmm3_4
  float v180; // xmm0_4
  float v181; // xmm3_4
  float v182; // xmm1_4
  float v183; // xmm2_4
  float v184; // xmm0_4
  float v185; // xmm1_4
  float v186; // xmm3_4
  float v187; // xmm0_4
  float v188; // xmm2_4
  float v189; // xmm3_4
  float v190; // xmm1_4
  char v191; // r8
  char v192; // dl
  int v193; // xmm0_4
  char v194; // r8
  char v195; // dl
  int v196; // xmm0_4
  float v197; // xmm2_4
  float v198; // xmm3_4
  float v199; // xmm0_4
  float v200; // xmm1_4
  float v201; // xmm2_4
  float v202; // xmm0_4
  float v203; // xmm1_4
  float v204; // xmm3_4
  float v205; // xmm2_4
  float v206; // xmm0_4
  float v207; // xmm1_4
  float v208; // xmm3_4
  float v209; // xmm0_4
  float v210; // xmm1_4
  float v211; // xmm3_4
  float v212; // xmm3_4
  float v213; // xmm1_4
  float v214; // xmm2_4
  float v215; // xmm0_4
  float v216; // xmm1_4
  float v217; // xmm2_4
  float v218; // xmm3_4
  float v219; // xmm0_4
  float v220; // xmm3_4
  float v221; // xmm1_4
  float v222; // xmm5_4
  struct CEffect *EffectInternal; // rax
  struct CEffect *v224; // rax
  __m128 v225; // [rsp+20h] [rbp-118h] BYREF
  __int128 v226; // [rsp+30h] [rbp-108h]
  __int128 v227; // [rsp+40h] [rbp-F8h]
  __int128 v228; // [rsp+50h] [rbp-E8h]
  void *retaddr; // [rsp+138h] [rbp+0h]

  if ( *((_DWORD *)this + 8) == 4 )
  {
    v10 = (void *)*((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = 0LL;
    if ( !v10 )
      goto LABEL_5;
    goto LABEL_62;
  }
  if ( !*((_QWORD *)this + 5) )
  {
    ProcessHeap = GetProcessHeap();
    v9 = HeapAlloc(ProcessHeap, 0, 0x44uLL);
    if ( !v9 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    v9[16] = 0;
    v10 = (void *)*((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = v9;
    if ( v10 )
LABEL_62:
      operator delete(v10, 0x44uLL);
  }
LABEL_5:
  v11 = *((_QWORD *)this + 5);
  if ( !v11 )
    return;
  v12 = *((_DWORD *)this + 8);
  if ( v12 != 1 )
  {
    v157 = v12 - 2;
    if ( v157 )
    {
      if ( v157 != 1 )
        wil::details::in1diag3::FailFast_Hr(
          (wil::details::in1diag3 *)retaddr,
          (void *)0x2FE,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclippingdata.cpp",
          (const char *)0x8000FFFFLL,
          v225.m128_i32[0]);
      CMILMatrix::SetToIdentity(*((CMILMatrix **)this + 5));
    }
    else
    {
      CMILMatrix::SetToIdentity((CMILMatrix *)(*((_QWORD *)this + 7) + 40LL));
      CVisual::GetRootTransform(a2, *((struct CMILMatrix **)this + 5), 0, 1);
    }
    return;
  }
  v13 = *((_QWORD *)this + 7);
  if ( v13 )
    v14 = v13 + 40;
  else
    v14 = *((_QWORD *)this + 5);
  *(_QWORD *)v14 = 1065353216LL;
  *(_QWORD *)(v14 + 8) = 0LL;
  *(_DWORD *)(v14 + 16) = 0;
  *(_QWORD *)(v14 + 20) = 1065353216LL;
  *(_QWORD *)(v14 + 28) = 0LL;
  *(_DWORD *)(v14 + 36) = 0;
  *(_QWORD *)(v14 + 40) = 1065353216LL;
  *(_QWORD *)(v14 + 48) = 0LL;
  *(_DWORD *)(v14 + 56) = 0;
  *(_DWORD *)(v14 + 60) = 1065353216;
  v15 = *(_BYTE *)(v14 + 65);
  *(_BYTE *)(v14 + 64) = -86;
  v16 = v15 & 0xC0 | 0x29;
  *(_BYTE *)(v14 + 65) = v16;
  if ( !a3 )
  {
    v17 = *((float *)a2 + 31);
    if ( v17 != 0.0 || *((float *)a2 + 32) != 0.0 || *((float *)a2 + 30) != 0.0 )
    {
      v56 = *((_DWORD *)a2 + 32);
      v57 = *((_DWORD *)a2 + 30);
      *(float *)(v14 + 48) = v17;
      *(_DWORD *)(v14 + 52) = v56;
      *(_DWORD *)(v14 + 56) = v57;
      *(_BYTE *)(v14 + 64) = -88;
      *(_BYTE *)(v14 + 65) = v16;
    }
    v18 = *((_QWORD *)a2 + 29);
    if ( v18 )
    {
      v19 = (float *)((char *)a2 + 140);
      v20 = *(_BYTE *)(v18 + 40) & 1;
      if ( a2 != (struct CVisual *)-140LL )
      {
        if ( (*(_BYTE *)(v18 + 40) & 1) == 0
          && *(_BYTE *)(v18 + 156)
          && (*(float *)(v18 + 148) != *v19 || *(float *)(v18 + 152) != *((float *)a2 + 36)) )
        {
          v20 = 1;
        }
        *(_QWORD *)(v18 + 148) = *(_QWORD *)v19;
      }
      if ( v20 )
      {
        (*(void (__fastcall **)(__int64, float *, __int64))(*(_QWORD *)v18 + 208LL))(v18, v19, v18 + 80);
        *(_DWORD *)(v18 + 40) &= ~1u;
      }
      CMILMatrix::Multiply((const struct CMILMatrix *)(v18 + 80), (__m128 *)v14, (struct CMILMatrix *)v14);
    }
  }
  if ( v11 == v14 )
  {
    Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef(a2);
    if ( Transform3DEffectNoRef
      || (v73 = *((_QWORD *)a2 + 11)) != 0
      && *(_DWORD *)(v73 + 108) == 1
      && ((v74 = *((_DWORD *)a2 + 27),
           v75 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size((__int64 *)a2 + 10),
           (**((_DWORD **)a2 + 28) & 0x1000000) == 0)
       || (EffectInternal = CVisual::GetEffectInternal(a2),
           !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 64LL))(
              EffectInternal,
              51LL))
        ? (v76 = 0)
        : (v76 = 1),
          (v77 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 232LL))(a2), v74 != 1) && v75
       || v76
       || v77) )
    {
      v78 = *(_BYTE *)(v14 + 64);
      *(_QWORD *)(v14 + 32) = 0LL;
      *(_QWORD *)(v14 + 40) = 0LL;
      *(_BYTE *)(v14 + 64) = v78 & 0xF0 | 1;
      if ( Transform3DEffectNoRef )
      {
        v79 = (float *)((char *)a2 + 140);
        v80 = *((_BYTE *)Transform3DEffectNoRef + 40) & 1;
        if ( a2 != (struct CVisual *)-140LL )
        {
          if ( (*((_BYTE *)Transform3DEffectNoRef + 40) & 1) == 0
            && *((_BYTE *)Transform3DEffectNoRef + 156)
            && (*((float *)Transform3DEffectNoRef + 37) != *v79
             || *((float *)Transform3DEffectNoRef + 38) != *((float *)a2 + 36)) )
          {
            v80 = 1;
          }
          *(_QWORD *)((char *)Transform3DEffectNoRef + 148) = *(_QWORD *)v79;
        }
        if ( v80 )
        {
          (*(void (__fastcall **)(struct CTransform3D *, float *, __int64))(*(_QWORD *)Transform3DEffectNoRef + 208LL))(
            Transform3DEffectNoRef,
            v79,
            (__int64)Transform3DEffectNoRef + 80);
          *((_DWORD *)Transform3DEffectNoRef + 10) &= ~1u;
        }
        CMILMatrix::Multiply(
          (struct CTransform3D *)((char *)Transform3DEffectNoRef + 80),
          (__m128 *)v14,
          (struct CMILMatrix *)v14);
      }
    }
  }
  v21 = CMILMatrix::IsIdentity<1>(v14);
  v22 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v23 = *(float *)&FLOAT_0_000081380211;
  v24 = FLOAT_61440_0;
  v25 = FLOAT_1_0;
  if ( v21 )
  {
    *(_OWORD *)v14 = *(_OWORD *)a4;
    *(_OWORD *)(v14 + 16) = *((_OWORD *)a4 + 1);
    *(_OWORD *)(v14 + 32) = *((_OWORD *)a4 + 2);
    *(_OWORD *)(v14 + 48) = *((_OWORD *)a4 + 3);
    *(_DWORD *)(v14 + 64) = *((_DWORD *)a4 + 16);
  }
  else if ( !(unsigned __int8)CMILMatrix::IsIdentity<1>(a4) )
  {
    if ( CMILMatrix::IsTranslate<1>((__int64)a4) )
    {
      v58 = *((float *)a4 + 12);
      v59 = *((float *)a4 + 14);
      v60 = *((float *)a4 + 13);
      if ( COERCE_FLOAT(LODWORD(v58) & v22) >= 0.000081380211
        || COERCE_FLOAT(LODWORD(v60) & v22) >= 0.000081380211
        || COERCE_FLOAT(LODWORD(v59) & v22) >= 0.000081380211 )
      {
        v61 = *(_BYTE *)(v14 + 65);
        if ( (char)(4 * v61) >> 6 == 1
          || ((char)(4 * v61) >> 6 >= 0
            ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v14 + 28) & v22) * 61440.0)
                                            + (float)(COERCE_FLOAT(*(_DWORD *)(v14 + 12) & v22) * 61440.0))
                                    + COERCE_FLOAT(*(_DWORD *)(v14 + 60) & v22))
                            - 1.0) & v22) >= 0.000081380211
             ? (v145 = 0, v146 = 16)
             : (v145 = 1, v146 = -16),
               v147 = *(_DWORD *)(v14 + 44) & v22,
               v61 = v146 ^ (v146 ^ v61) & 0xCF,
               *(_BYTE *)(v14 + 65) = v61,
               v62 = v145 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v147 * 61440.0) - 0.0) & v22) < 0.000081380211))
            : (v62 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(v14 + 44) & v22) * 61440.0) - 0.0) & v22) < 0.000081380211),
              !v62) )
        {
          v158 = *(float *)(v14 + 12);
          v159 = *(float *)(v14 + 28);
          v160 = v158 * v58;
          *(_BYTE *)(v14 + 65) = v61 & 0xF3;
          v161 = (float)(v158 * v60) + *(float *)(v14 + 4);
          v162 = (float)(v158 * v59) + *(float *)(v14 + 8);
          *(float *)v14 = v160 + *(float *)v14;
          *(float *)(v14 + 4) = v161;
          v163 = (float)(v159 * v58) + *(float *)(v14 + 16);
          v164 = (float)(v159 * v60) + *(float *)(v14 + 20);
          *(float *)(v14 + 8) = v162;
          v165 = (float)(v159 * v59) + *(float *)(v14 + 24);
          v166 = *(float *)(v14 + 44);
          *(float *)(v14 + 16) = v163;
          *(float *)(v14 + 20) = v164;
          v167 = (float)(v166 * v58) + *(float *)(v14 + 32);
          *(float *)(v14 + 24) = v165;
          v168 = (float)(v166 * v60) + *(float *)(v14 + 36);
          v169 = *(float *)(v14 + 60);
          *(float *)(v14 + 32) = v167;
          *(float *)(v14 + 36) = v168;
          v170 = (float)(v169 * v58) + *(float *)(v14 + 48);
          v171 = (float)(v169 * v60) + *(float *)(v14 + 52);
          *(float *)(v14 + 40) = (float)(v166 * v59) + *(float *)(v14 + 40);
          v172 = (float)(v169 * v59) + *(float *)(v14 + 56);
          *(float *)(v14 + 48) = v170;
          *(float *)(v14 + 52) = v171;
          *(float *)(v14 + 56) = v172;
        }
        else
        {
          v63 = v60 + *(float *)(v14 + 52);
          v64 = v59 + *(float *)(v14 + 56);
          *(float *)(v14 + 48) = v58 + *(float *)(v14 + 48);
          *(float *)(v14 + 52) = v63;
          *(float *)(v14 + 56) = v64;
        }
        *(_BYTE *)(v14 + 64) &= 0xFCu;
      }
    }
    else if ( CMILMatrix::IsTranslate<1>(v14) )
    {
      v81 = *(float *)(v14 + 48);
      v82 = *(float *)(v14 + 52);
      v83 = *(float *)(v14 + 56);
      *(_OWORD *)v14 = *(_OWORD *)a4;
      *(_OWORD *)(v14 + 16) = *((_OWORD *)a4 + 1);
      *(_OWORD *)(v14 + 32) = *((_OWORD *)a4 + 2);
      *(_OWORD *)(v14 + 48) = *((_OWORD *)a4 + 3);
      *(_DWORD *)(v14 + 64) = *((_DWORD *)a4 + 16);
      if ( COERCE_FLOAT(LODWORD(v81) & v22) >= 0.000081380211
        || COERCE_FLOAT(LODWORD(v82) & v22) >= 0.000081380211
        || COERCE_FLOAT(LODWORD(v83) & v22) >= 0.000081380211 )
      {
        v84 = *(_BYTE *)(v14 + 65);
        v85 = v81 * *(float *)(v14 + 8);
        v86 = (float)((float)(v82 * *(float *)(v14 + 20)) + (float)(v81 * *(float *)(v14 + 4)))
            + (float)(v83 * *(float *)(v14 + 36));
        v87 = v83 * *(float *)(v14 + 40);
        *(float *)(v14 + 48) = (float)((float)((float)(v82 * *(float *)(v14 + 16)) + (float)(v81 * *(float *)v14))
                                     + (float)(v83 * *(float *)(v14 + 32)))
                             + *(float *)(v14 + 48);
        v88 = (float)(v82 * *(float *)(v14 + 24)) + v85;
        *(float *)(v14 + 52) = v86 + *(float *)(v14 + 52);
        *(float *)(v14 + 56) = (float)(v88 + v87) + *(float *)(v14 + 56);
        if ( (char)(4 * v84) >> 6 == 1
          || ((char)(4 * v84) >> 6 >= 0
            ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v14 + 28) & v22) * 61440.0)
                                            + (float)(COERCE_FLOAT(*(_DWORD *)(v14 + 12) & v22) * 61440.0))
                                    + COERCE_FLOAT(*(_DWORD *)(v14 + 60) & v22))
                            - 1.0) & v22) >= 0.000081380211
             ? (v151 = 0, v152 = 16)
             : (v151 = 1, v152 = -16),
               v153 = *(_DWORD *)(v14 + 44) & v22,
               *(_BYTE *)(v14 + 65) = v152 ^ (v84 ^ v152) & 0xCF,
               v89 = v151 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v153 * 61440.0) - 0.0) & v22) < 0.000081380211))
            : (v89 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(v14 + 44) & v22) * 61440.0) - 0.0) & v22) < 0.000081380211),
              !v89) )
        {
          v222 = v82 * *(float *)(v14 + 28);
          *(_DWORD *)(v14 + 64) = 0;
          *(float *)(v14 + 60) = (float)((float)(v222 + (float)(v81 * *(float *)(v14 + 12)))
                                       + (float)(v83 * *(float *)(v14 + 44)))
                               + *(float *)(v14 + 60);
        }
        else
        {
          *(_BYTE *)(v14 + 64) &= 0xFCu;
        }
      }
    }
    else if ( CMILMatrix::IsTranslateAndScale<1>((__int64)a4) )
    {
      v100 = *(float *)a4;
      v101 = *((float *)a4 + 12);
      v102 = *((float *)a4 + 13);
      v103 = *((float *)a4 + 14);
      v104 = *((float *)a4 + 10);
      v105 = *((float *)a4 + 5);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a4 - 1.0) & v22) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(v105 - 1.0) & v22) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(v104 - 1.0) & v22) >= 0.000081380211 )
      {
        *(float *)v14 = v100 * *(float *)v14;
        *(float *)(v14 + 16) = v100 * *(float *)(v14 + 16);
        *(float *)(v14 + 32) = v100 * *(float *)(v14 + 32);
        *(float *)(v14 + 48) = v100 * *(float *)(v14 + 48);
        *(float *)(v14 + 4) = v105 * *(float *)(v14 + 4);
        *(float *)(v14 + 20) = v105 * *(float *)(v14 + 20);
        *(float *)(v14 + 36) = v105 * *(float *)(v14 + 36);
        *(float *)(v14 + 52) = v105 * *(float *)(v14 + 52);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v104 - 1.0) & v22) >= 0.000081380211 )
        {
          *(float *)(v14 + 8) = v104 * *(float *)(v14 + 8);
          *(float *)(v14 + 24) = v104 * *(float *)(v14 + 24);
          *(float *)(v14 + 40) = v104 * *(float *)(v14 + 40);
          *(float *)(v14 + 56) = v104 * *(float *)(v14 + 56);
        }
        *(_BYTE *)(v14 + 64) &= 0xCCu;
      }
      if ( COERCE_FLOAT(LODWORD(v101) & v22) >= 0.000081380211
        || COERCE_FLOAT(LODWORD(v102) & v22) >= 0.000081380211
        || COERCE_FLOAT(LODWORD(v103) & v22) >= 0.000081380211 )
      {
        v106 = *(_BYTE *)(v14 + 65);
        if ( (char)(4 * v106) >> 6 == 1
          || ((char)(4 * v106) >> 6 >= 0
            ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v14 + 28) & v22) * 61440.0)
                                            + (float)(COERCE_FLOAT(*(_DWORD *)(v14 + 12) & v22) * 61440.0))
                                    + COERCE_FLOAT(*(_DWORD *)(v14 + 60) & v22))
                            - 1.0) & v22) >= 0.000081380211
             ? (v191 = 0, v192 = 16)
             : (v191 = 1, v192 = -16),
               v193 = *(_DWORD *)(v14 + 44) & v22,
               v106 = v192 ^ (v192 ^ v106) & 0xCF,
               *(_BYTE *)(v14 + 65) = v106,
               v107 = v191 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v193 * 61440.0) - 0.0) & v22) < 0.000081380211))
            : (v107 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(v14 + 44) & v22) * 61440.0) - 0.0) & v22) < 0.000081380211),
              !v107) )
        {
          v197 = *(float *)(v14 + 12);
          v198 = *(float *)(v14 + 28);
          v199 = v197 * v101;
          *(_BYTE *)(v14 + 65) = v106 & 0xF3;
          v200 = (float)(v197 * v102) + *(float *)(v14 + 4);
          v201 = (float)(v197 * v103) + *(float *)(v14 + 8);
          *(float *)v14 = v199 + *(float *)v14;
          *(float *)(v14 + 4) = v200;
          v202 = (float)(v198 * v101) + *(float *)(v14 + 16);
          v203 = (float)(v198 * v102) + *(float *)(v14 + 20);
          *(float *)(v14 + 8) = v201;
          v204 = (float)(v198 * v103) + *(float *)(v14 + 24);
          v205 = *(float *)(v14 + 44);
          *(float *)(v14 + 16) = v202;
          *(float *)(v14 + 20) = v203;
          v206 = (float)(v205 * v101) + *(float *)(v14 + 32);
          *(float *)(v14 + 24) = v204;
          v207 = (float)(v205 * v102) + *(float *)(v14 + 36);
          v208 = *(float *)(v14 + 60);
          *(float *)(v14 + 32) = v206;
          *(float *)(v14 + 36) = v207;
          v209 = (float)(v208 * v101) + *(float *)(v14 + 48);
          v210 = (float)(v208 * v102) + *(float *)(v14 + 52);
          *(float *)(v14 + 40) = (float)(v205 * v103) + *(float *)(v14 + 40);
          v211 = (float)(v208 * v103) + *(float *)(v14 + 56);
          *(float *)(v14 + 48) = v209;
          *(float *)(v14 + 52) = v210;
          *(float *)(v14 + 56) = v211;
        }
        else
        {
          v108 = v102 + *(float *)(v14 + 52);
          v109 = v103 + *(float *)(v14 + 56);
          *(float *)(v14 + 48) = v101 + *(float *)(v14 + 48);
          *(float *)(v14 + 52) = v108;
          *(float *)(v14 + 56) = v109;
        }
        *(_BYTE *)(v14 + 64) &= 0xFCu;
      }
    }
    else if ( CMILMatrix::IsPure2DUniformZ<1>(v14) && CMILMatrix::IsPure2DUniformZ<1>((__int64)a4) )
    {
      v119 = *((float *)a4 + 1);
      v120 = *((float *)a4 + 5);
      v121 = *((float *)a4 + 4);
      v122 = *(float *)(v14 + 4);
      v123 = *(float *)(v14 + 20);
      v124 = *(float *)(v14 + 40);
      v125 = *(float *)(v14 + 56);
      v126 = (float)(*(float *)v14 * v119) + (float)(v122 * v120);
      v127 = v123 * v120;
      v128 = (float)(v122 * v121) + (float)(*(float *)v14 * *(float *)a4);
      v129 = *(float *)(v14 + 16) * v119;
      v130 = (float)(v123 * v121) + (float)(*(float *)(v14 + 16) * *(float *)a4);
      v131 = *(float *)(v14 + 48);
      v132 = v131 * v119;
      v23 = *(float *)&FLOAT_0_000081380211;
      v133 = (float)(v132 + (float)(*(float *)(v14 + 52) * v120)) + *((float *)a4 + 13);
      v134 = (float)((float)(*(float *)(v14 + 52) * v121) + (float)(v131 * *(float *)a4)) + *((float *)a4 + 12);
      *(_QWORD *)(v14 + 60) = 1065353216LL;
      v135 = *(_BYTE *)(v14 + 65);
      *(float *)v14 = v128;
      v24 = FLOAT_61440_0;
      *(float *)(v14 + 4) = v126;
      v25 = FLOAT_1_0;
      *(_QWORD *)(v14 + 40) = 1065353216LL;
      *(_DWORD *)(v14 + 56) = 0;
      *(_BYTE *)(v14 + 65) = v135 & 0xC3 | 0x28;
      *(float *)(v14 + 16) = v130;
      *(float *)(v14 + 20) = v129 + v127;
      *(float *)(v14 + 48) = v134;
      *(float *)(v14 + 52) = v133;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 24) = 0LL;
      *(_QWORD *)(v14 + 32) = 0LL;
      *(_BYTE *)(v14 + 64) = 8;
      *(float *)(v14 + 40) = v124 * *((float *)a4 + 10);
      *(float *)(v14 + 56) = (float)(v125 * *((float *)a4 + 10)) + *((float *)a4 + 14);
    }
    else
    {
      v38 = *((_OWORD *)a4 + 1);
      v39 = *(_OWORD *)(v14 + 32);
      v40 = *(_OWORD *)(v14 + 48);
      v225 = *(__m128 *)a4;
      v41 = *((_OWORD *)a4 + 2);
      v226 = v38;
      v42 = *((_OWORD *)a4 + 3);
      v227 = v41;
      v43 = *(__m128 *)v14;
      v228 = v42;
      v44 = *(_OWORD *)(v14 + 16);
      *(double *)v43.m128_u64 = DirectX::XMMatrixMultiply(v37, &v225);
      *(__m128 *)v14 = v43;
      *(_OWORD *)(v14 + 16) = v44;
      *(_OWORD *)(v14 + 32) = v39;
      *(_OWORD *)(v14 + 48) = v40;
      *(_DWORD *)(v14 + 64) = 0;
    }
  }
  v26 = *((_QWORD *)this + 5);
  if ( v26 != v14 )
  {
    *(_QWORD *)v26 = 1065353216LL;
    *(_QWORD *)(v26 + 8) = 0LL;
    *(_DWORD *)(v26 + 16) = 0;
    *(_QWORD *)(v26 + 20) = 1065353216LL;
    *(_QWORD *)(v26 + 28) = 0LL;
    *(_DWORD *)(v26 + 36) = 0;
    *(_QWORD *)(v26 + 40) = 1065353216LL;
    *(_QWORD *)(v26 + 48) = 0LL;
    *(_DWORD *)(v26 + 56) = 0;
    *(_DWORD *)(v26 + 60) = 1065353216;
    *(_BYTE *)(v26 + 65) &= 0xE9u;
    *(_BYTE *)(v26 + 65) |= 0x29u;
    *(_BYTE *)(v26 + 64) = -86;
    v27 = CVisual::GetTransform3DEffectNoRef(a2);
    if ( v27
      || (v28 = *((_QWORD *)a2 + 11)) != 0
      && *(_DWORD *)(v28 + 108) == 1
      && ((v29 = *((_DWORD *)a2 + 27),
           v30 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size((__int64 *)a2 + 10),
           (**((_DWORD **)a2 + 28) & 0x1000000) == 0)
       || (v224 = CVisual::GetEffectInternal(a2),
           !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v224 + 64LL))(v224, 51LL))
        ? (v31 = 0)
        : (v31 = 1),
          (v32 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 232LL))(a2), v29 != 1) && v30
       || v31
       || v32) )
    {
      v33 = *(_BYTE *)(v26 + 64);
      *(_QWORD *)(v26 + 32) = 0LL;
      *(_QWORD *)(v26 + 40) = 0LL;
      *(_BYTE *)(v26 + 64) = v33 & 0xF0 | 1;
      if ( v27 )
      {
        v34 = (float *)((char *)a2 + 140);
        v35 = *((_BYTE *)v27 + 40) & 1;
        if ( a2 != (struct CVisual *)-140LL )
        {
          if ( (*((_BYTE *)v27 + 40) & 1) == 0
            && *((_BYTE *)v27 + 156)
            && (*((float *)v27 + 37) != *v34 || *((float *)v27 + 38) != *((float *)a2 + 36)) )
          {
            v35 = 1;
          }
          *(_QWORD *)((char *)v27 + 148) = *(_QWORD *)v34;
        }
        if ( v35 )
        {
          (*(void (__fastcall **)(struct CTransform3D *, float *, __int64))(*(_QWORD *)v27 + 208LL))(
            v27,
            v34,
            (__int64)v27 + 80);
          *((_DWORD *)v27 + 10) &= ~1u;
        }
        CMILMatrix::Multiply((struct CTransform3D *)((char *)v27 + 80), (__m128 *)v26, (struct CMILMatrix *)v26);
      }
    }
    if ( (unsigned __int8)CMILMatrix::IsIdentity<1>(*((_QWORD *)this + 5)) )
    {
      *(_OWORD *)v36 = *(_OWORD *)v14;
      *(_OWORD *)(v36 + 16) = *(_OWORD *)(v14 + 16);
      *(_OWORD *)(v36 + 32) = *(_OWORD *)(v14 + 32);
      *(_OWORD *)(v36 + 48) = *(_OWORD *)(v14 + 48);
      *(_DWORD *)(v36 + 64) = *(_DWORD *)(v14 + 64);
      return;
    }
    if ( !(unsigned __int8)CMILMatrix::IsIdentity<1>(v14) )
    {
      if ( CMILMatrix::IsTranslate<1>(v14) )
      {
        v65 = *(float *)(v14 + 48);
        v66 = *(float *)(v14 + 56);
        v67 = *(float *)(v14 + 52);
        if ( v23 > COERCE_FLOAT(LODWORD(v65) & v22)
          && v23 > COERCE_FLOAT(LODWORD(v67) & v22)
          && v23 > COERCE_FLOAT(LODWORD(v66) & v22) )
        {
          return;
        }
        v68 = *(_BYTE *)(v45 + 65);
        if ( (char)(4 * v68) >> 6 == 1
          || ((char)(4 * v68) >> 6 >= 0
            ? (v23 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                     (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v45 + 28) & v22) * v24)
                                                   + (float)(COERCE_FLOAT(*(_DWORD *)(v45 + 12) & v22) * v24))
                                           + COERCE_FLOAT(*(_DWORD *)(v45 + 60) & v22))
                                   - v25) & v22)
             ? (v148 = 0, v149 = 16)
             : (v148 = 1, v149 = -16),
               v150 = *(_DWORD *)(v45 + 44) & v22,
               v68 = v149 ^ (v149 ^ v68) & 0xCF,
               *(_BYTE *)(v45 + 65) = v68,
               v69 = v148 & (v23 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v150 * v24) - 0.0) & v22)))
            : (v69 = v23 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(v45 + 44) & v22) * v24) - 0.0) & v22)),
              !v69) )
        {
          v173 = *(float *)(v45 + 28);
          v174 = (float)(*(float *)(v45 + 12) * v67) + *(float *)(v45 + 4);
          v175 = (float)(*(float *)(v45 + 12) * v66) + *(float *)(v45 + 8);
          *(float *)v45 = (float)(*(float *)(v45 + 12) * v65) + *(float *)v45;
          *(float *)(v45 + 4) = v174;
          v176 = (float)(v173 * v65) + *(float *)(v45 + 16);
          v177 = (float)(v173 * v67) + *(float *)(v45 + 20);
          *(float *)(v45 + 8) = v175;
          v178 = *(float *)(v45 + 44);
          v179 = (float)(v173 * v66) + *(float *)(v45 + 24);
          *(float *)(v45 + 16) = v176;
          *(float *)(v45 + 20) = v177;
          v180 = (float)(v178 * v65) + *(float *)(v45 + 32);
          *(float *)(v45 + 24) = v179;
          v181 = *(float *)(v45 + 60);
          v182 = (float)(v178 * v67) + *(float *)(v45 + 36);
          v183 = v178 * v66;
          *(float *)(v45 + 32) = v180;
          v184 = v181 * v65;
          *(float *)(v45 + 36) = v182;
          v185 = v181;
          v186 = v181 * v66;
LABEL_160:
          v187 = v184 + *(float *)(v45 + 48);
          v188 = v183 + *(float *)(v45 + 40);
          v189 = v186 + *(float *)(v45 + 56);
          *(_BYTE *)(v45 + 65) = v68 & 0xF3;
          *(float *)(v45 + 48) = v187;
          *(float *)(v45 + 40) = v188;
          v190 = (float)(v185 * v67) + *(float *)(v45 + 52);
          *(float *)(v45 + 56) = v189;
          *(float *)(v45 + 52) = v190;
          goto LABEL_76;
        }
        v70 = v67 + *(float *)(v45 + 52);
        v71 = v66 + *(float *)(v45 + 56);
        *(float *)(v45 + 48) = v65 + *(float *)(v45 + 48);
        *(float *)(v45 + 52) = v70;
        *(float *)(v45 + 56) = v71;
      }
      else
      {
        if ( !CMILMatrix::IsTranslate<1>(v45) )
        {
          if ( !CMILMatrix::IsTranslateAndScale<1>(v14) )
          {
            if ( CMILMatrix::IsPure2DUniformZ<1>(v45) && CMILMatrix::IsPure2DUniformZ<1>(v14) )
            {
              v136 = *((float *)v47 + 10);
              v137 = *((float *)v47 + 14);
              v138 = (float)(*(float *)v14 * *(float *)v47) + (float)(*(float *)(v14 + 16) * *((float *)v47 + 1));
              v139 = (float)(*(float *)(v14 + 4) * *(float *)v47) + (float)(*(float *)(v14 + 20) * *((float *)v47 + 1));
              v140 = (float)(*(float *)(v14 + 16) * *((float *)v47 + 5)) + (float)(*(float *)v14 * *((float *)v47 + 4));
              v141 = *(float *)(v14 + 4);
              v142 = (float)((float)(*(float *)(v14 + 16) * *((float *)v47 + 13))
                           + (float)(*(float *)v14 * *((float *)v47 + 12)))
                   + *(float *)(v14 + 48);
              v143 = (float)(*(float *)(v14 + 20) * *((float *)v47 + 5)) + (float)(v141 * *((float *)v47 + 4));
              v144 = (float)((float)(*(float *)(v14 + 20) * *((float *)v47 + 13)) + (float)(v141 * *((float *)v47 + 12)))
                   + *(float *)(v14 + 52);
              *(_QWORD *)((char *)v47 + 60) = 1065353216LL;
              *((_BYTE *)v47 + 65) &= 0xEBu;
              *((_BYTE *)v47 + 65) |= 0x28u;
              *((_QWORD *)v47 + 5) = 1065353216LL;
              *((_DWORD *)v47 + 14) = 0;
              *((float *)v47 + 13) = v144;
              *(float *)v47 = v138;
              *((float *)v47 + 1) = v139;
              *((float *)v47 + 4) = v140;
              *((float *)v47 + 5) = v143;
              *((float *)v47 + 12) = v142;
              *((_QWORD *)v47 + 1) = 0LL;
              *((_QWORD *)v47 + 3) = 0LL;
              *((_QWORD *)v47 + 4) = 0LL;
              *((_BYTE *)v47 + 64) = 8;
              *((float *)v47 + 10) = v136 * *(float *)(v14 + 40);
              *((float *)v47 + 14) = (float)(v137 * *(float *)(v14 + 40)) + *(float *)(v14 + 56);
            }
            else
            {
              v48 = *(_OWORD *)(v14 + 16);
              v49 = v47[2];
              v50 = v47[3];
              v225 = *(__m128 *)v14;
              v51 = *(_OWORD *)(v14 + 32);
              v226 = v48;
              v52 = *(_OWORD *)(v14 + 48);
              v227 = v51;
              v53 = *v47;
              v228 = v52;
              v54 = v47[1];
              *(double *)&v53 = DirectX::XMMatrixMultiply(v46, &v225);
              *(_OWORD *)v55 = v53;
              *(_OWORD *)(v55 + 16) = v54;
              *(_OWORD *)(v55 + 32) = v49;
              *(_OWORD *)(v55 + 48) = v50;
              *(_DWORD *)(v55 + 64) = 0;
            }
            return;
          }
          v110 = *(float *)v14;
          v111 = *(float *)(v14 + 48);
          v67 = *(float *)(v14 + 52);
          v112 = *(float *)(v14 + 56);
          v113 = *(float *)(v14 + 40);
          v114 = *(float *)(v14 + 20);
          if ( v23 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v14 - v25) & v22)
            || v23 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v114 - v25) & v22)
            || v23 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v113 - v25) & v22) )
          {
            *(float *)v45 = v110 * *(float *)v45;
            *(float *)(v45 + 16) = v110 * *(float *)(v45 + 16);
            *(float *)(v45 + 32) = v110 * *(float *)(v45 + 32);
            *(float *)(v45 + 48) = v110 * *(float *)(v45 + 48);
            *(float *)(v45 + 4) = v114 * *(float *)(v45 + 4);
            *(float *)(v45 + 20) = v114 * *(float *)(v45 + 20);
            *(float *)(v45 + 36) = v114 * *(float *)(v45 + 36);
            *(float *)(v45 + 52) = v114 * *(float *)(v45 + 52);
            if ( v23 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v113 - v25) & v22) )
            {
              *(float *)(v45 + 8) = v113 * *(float *)(v45 + 8);
              *(float *)(v45 + 24) = v113 * *(float *)(v45 + 24);
              *(float *)(v45 + 40) = v113 * *(float *)(v45 + 40);
              *(float *)(v45 + 56) = v113 * *(float *)(v45 + 56);
            }
            *(_BYTE *)(v45 + 64) &= 0xCCu;
          }
          if ( v23 > COERCE_FLOAT(LODWORD(v111) & v22)
            && v23 > COERCE_FLOAT(LODWORD(v67) & v22)
            && v23 > COERCE_FLOAT(LODWORD(v112) & v22) )
          {
            return;
          }
          v68 = *(_BYTE *)(v45 + 65);
          if ( (char)(4 * v68) >> 6 != 1 )
          {
            if ( (char)(4 * v68) >> 6 >= 0 )
            {
              if ( v23 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                         (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v45 + 28) & v22) * v24)
                                                       + (float)(COERCE_FLOAT(*(_DWORD *)(v45 + 12) & v22) * v24))
                                               + COERCE_FLOAT(*(_DWORD *)(v45 + 60) & v22))
                                       - v25) & v22) )
              {
                v194 = 0;
                v195 = 16;
              }
              else
              {
                v194 = 1;
                v195 = -16;
              }
              v196 = *(_DWORD *)(v45 + 44) & v22;
              v68 = v195 ^ (v195 ^ v68) & 0xCF;
              *(_BYTE *)(v45 + 65) = v68;
              v115 = v194 & (v23 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v196 * v24) - 0.0) & v22));
            }
            else
            {
              v115 = v23 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(v45 + 44) & v22) * v24) - 0.0) & v22);
            }
            if ( v115 )
            {
              v116 = v111 + *(float *)(v45 + 48);
              v117 = v67 + *(float *)(v45 + 52);
              v118 = v112 + *(float *)(v45 + 56);
              *(_BYTE *)(v45 + 64) &= 0xFCu;
              *(float *)(v45 + 48) = v116;
              *(float *)(v45 + 52) = v117;
              *(float *)(v45 + 56) = v118;
              return;
            }
          }
          v212 = *(float *)(v45 + 28);
          v213 = (float)(*(float *)(v45 + 12) * v67) + *(float *)(v45 + 4);
          v214 = (float)(*(float *)(v45 + 12) * v112) + *(float *)(v45 + 8);
          *(float *)v45 = (float)(*(float *)(v45 + 12) * v111) + *(float *)v45;
          *(float *)(v45 + 4) = v213;
          v215 = (float)(v212 * v111) + *(float *)(v45 + 16);
          v216 = (float)(v212 * v67) + *(float *)(v45 + 20);
          *(float *)(v45 + 8) = v214;
          v217 = *(float *)(v45 + 44);
          v218 = (float)(v212 * v112) + *(float *)(v45 + 24);
          *(float *)(v45 + 16) = v215;
          *(float *)(v45 + 20) = v216;
          v219 = (float)(v217 * v111) + *(float *)(v45 + 32);
          *(float *)(v45 + 24) = v218;
          v220 = *(float *)(v45 + 60);
          v221 = (float)(v217 * v67) + *(float *)(v45 + 36);
          v183 = v217 * v112;
          *(float *)(v45 + 32) = v219;
          v184 = v220 * v111;
          *(float *)(v45 + 36) = v221;
          v185 = v220;
          v186 = v220 * v112;
          goto LABEL_160;
        }
        v90 = *(float *)(v45 + 48);
        v91 = *(float *)(v45 + 52);
        v92 = *(float *)(v45 + 56);
        *(_OWORD *)v45 = *(_OWORD *)v14;
        *(_OWORD *)(v45 + 16) = *(_OWORD *)(v14 + 16);
        *(_OWORD *)(v45 + 32) = *(_OWORD *)(v14 + 32);
        *(_OWORD *)(v45 + 48) = *(_OWORD *)(v14 + 48);
        *(_DWORD *)(v45 + 64) = *(_DWORD *)(v14 + 64);
        if ( v23 > COERCE_FLOAT(LODWORD(v90) & v22)
          && v23 > COERCE_FLOAT(LODWORD(v91) & v22)
          && v23 > COERCE_FLOAT(LODWORD(v92) & v22) )
        {
          return;
        }
        v93 = *(_BYTE *)(v45 + 65);
        v94 = v91 * *(float *)(v45 + 24);
        v95 = (float)((float)(v90 * *(float *)(v45 + 4)) + (float)(v91 * *(float *)(v45 + 20)))
            + (float)(v92 * *(float *)(v45 + 36));
        v96 = v92 * *(float *)(v45 + 40);
        *(float *)(v45 + 48) = (float)((float)((float)(v91 * *(float *)(v45 + 16)) + (float)(v90 * *(float *)v45))
                                     + (float)(v92 * *(float *)(v45 + 32)))
                             + *(float *)(v45 + 48);
        v97 = (float)(v90 * *(float *)(v45 + 8)) + v94;
        *(float *)(v45 + 52) = v95 + *(float *)(v45 + 52);
        *(float *)(v45 + 56) = (float)(v97 + v96) + *(float *)(v45 + 56);
        if ( (char)(4 * v93) >> 6 == 1
          || ((char)(4 * v93) >> 6 >= 0
            ? (v23 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                     (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v45 + 28) & v22) * v24)
                                                   + (float)(COERCE_FLOAT(*(_DWORD *)(v45 + 12) & v22) * v24))
                                           + COERCE_FLOAT(*(_DWORD *)(v45 + 60) & v22))
                                   - v25) & v22)
             ? (v154 = 0, v155 = 16)
             : (v154 = 1, v155 = -16),
               v156 = *(_DWORD *)(v45 + 44) & v22,
               *(_BYTE *)(v45 + 65) = v155 ^ (v93 ^ v155) & 0xCF,
               v98 = v154 & (v23 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v156 * v24) - 0.0) & v22)))
            : (v98 = v23 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(v45 + 44) & v22) * v24) - 0.0) & v22)),
              !v98) )
        {
          v99 = v90 * *(float *)(v45 + 12);
          *(_DWORD *)(v45 + 64) = 0;
          *(float *)(v45 + 60) = (float)((float)(v99 + (float)(v91 * *(float *)(v45 + 28)))
                                       + (float)(v92 * *(float *)(v45 + 44)))
                               + *(float *)(v45 + 60);
          return;
        }
      }
LABEL_76:
      *(_BYTE *)(v45 + 64) &= 0xFCu;
    }
  }
}
