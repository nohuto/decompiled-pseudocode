/*
 * XREFs of ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800416D0
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180027C60 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800CA388 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x1800CAB74 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x1800CC140 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800D2B38 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800D436C (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEBAXPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1802611CC (-UpdateWorldTransform@CVisual@@AEBAXPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180026C60 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18005F520 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?RoundOffsets@CMILMatrix@@QEAAXXZ @ 0x18018E18C (-RoundOffsets@CMILMatrix@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::CalcTransform(
        CVisual *this,
        CVisual **a2,
        const struct CMILMatrix *a3,
        bool *a4,
        struct CMILMatrix *a5,
        struct CMILMatrix *a6)
{
  __m128 v6; // xmm2
  _DWORD *v8; // r8
  char v9; // r12
  CTransform3D *v10; // r15
  __m128 v13; // xmm5
  char *v14; // rcx
  __int64 v15; // rax
  float v16; // xmm8_4
  float v17; // xmm9_4
  __int32 v18; // xmm6_4
  char v19; // cl
  float v20; // xmm0_4
  float v21; // xmm3_4
  float v22; // xmm1_4
  char v23; // al
  unsigned __int64 v24; // r8
  _DWORD *v25; // rdx
  __int64 v26; // r13
  __int64 v27; // rax
  char v28; // al
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __m128i v33; // xmm0
  int v34; // ecx
  __m128i v35; // xmm0
  int v36; // ecx
  __m128i v37; // xmm0
  int v38; // ecx
  __int64 v39; // rax
  _BYTE *v40; // rdx
  __int64 v41; // rcx
  char **v42; // rcx
  float *v43; // rdx
  char v44; // al
  char v45; // r8
  char v46; // dl
  char v47; // al
  int v48; // xmm0_4
  _QWORD *v49; // rdx
  __int64 v50; // r13
  char *v51; // rax
  __int64 v52; // r9
  unsigned __int64 v53; // rax
  unsigned int v54; // r8d
  _BYTE *v55; // rax
  __int64 i; // rcx
  __int64 v57; // rax
  _QWORD *v58; // rcx
  float v59; // xmm5_4
  unsigned int v60; // edx
  __int64 v61; // rcx
  int v62; // xmm1_4
  int v63; // xmm0_4
  int v64; // xmm1_4
  int v65; // xmm0_4
  int v66; // xmm1_4
  int v67; // xmm0_4
  int v68; // xmm1_4
  int v69; // xmm0_4
  int v70; // xmm1_4
  int v71; // xmm0_4
  int v72; // xmm1_4
  int v73; // xmm0_4
  int v74; // xmm1_4
  int v75; // xmm0_4
  int v76; // xmm1_4
  int v77; // xmm1_4
  int v78; // xmm0_4
  int v79; // xmm1_4
  int v80; // xmm0_4
  int v81; // xmm1_4
  int v82; // xmm0_4
  int v83; // xmm1_4
  int v84; // xmm0_4
  int v85; // xmm1_4
  int v86; // xmm0_4
  int v87; // xmm1_4
  int v88; // xmm0_4
  int v89; // xmm1_4
  int v90; // xmm0_4
  int v91; // xmm1_4
  const struct CMILMatrix *Matrix; // rax
  __m128 v93; // rt1
  __m128 v94; // rt1
  __m128 v95; // rt1
  char v96; // [rsp+30h] [rbp-D0h]
  float v97; // [rsp+34h] [rbp-CCh] BYREF
  char *v98; // [rsp+38h] [rbp-C8h] BYREF
  const struct CVisualTree *v99; // [rsp+40h] [rbp-C0h] BYREF
  int v100; // [rsp+48h] [rbp-B8h] BYREF
  int v101; // [rsp+4Ch] [rbp-B4h] BYREF
  int v102; // [rsp+50h] [rbp-B0h] BYREF
  int v103; // [rsp+54h] [rbp-ACh] BYREF
  int v104; // [rsp+58h] [rbp-A8h] BYREF
  int v105; // [rsp+5Ch] [rbp-A4h] BYREF
  int v106; // [rsp+60h] [rbp-A0h] BYREF
  int v107; // [rsp+64h] [rbp-9Ch] BYREF
  int v108; // [rsp+68h] [rbp-98h] BYREF
  int v109; // [rsp+6Ch] [rbp-94h] BYREF
  int v110; // [rsp+70h] [rbp-90h] BYREF
  int v111; // [rsp+74h] [rbp-8Ch] BYREF
  int v112; // [rsp+78h] [rbp-88h] BYREF
  int v113; // [rsp+7Ch] [rbp-84h] BYREF
  struct CInteraction *InteractionInternal; // [rsp+80h] [rbp-80h] BYREF
  struct CInteraction *v115; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-70h] BYREF
  __int128 v117; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v118; // [rsp+B0h] [rbp-50h]
  __int128 v119; // [rsp+C0h] [rbp-40h]
  __int128 v120; // [rsp+D0h] [rbp-30h]
  int v121; // [rsp+E0h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v123; // [rsp+100h] [rbp+0h]
  int v124; // [rsp+108h] [rbp+8h]
  int v125; // [rsp+10Ch] [rbp+Ch]
  struct CInteraction **v126; // [rsp+110h] [rbp+10h]
  __int64 v127; // [rsp+118h] [rbp+18h]
  struct CInteraction **p_InteractionInternal; // [rsp+120h] [rbp+20h]
  __int64 v129; // [rsp+128h] [rbp+28h]
  const struct CVisualTree **v130; // [rsp+130h] [rbp+30h]
  __int64 v131; // [rsp+138h] [rbp+38h]
  int *v132; // [rsp+140h] [rbp+40h]
  __int64 v133; // [rsp+148h] [rbp+48h]
  int *v134; // [rsp+150h] [rbp+50h]
  __int64 v135; // [rsp+158h] [rbp+58h]
  int *v136; // [rsp+160h] [rbp+60h]
  __int64 v137; // [rsp+168h] [rbp+68h]
  int *v138; // [rsp+170h] [rbp+70h]
  __int64 v139; // [rsp+178h] [rbp+78h]
  int *v140; // [rsp+180h] [rbp+80h]
  __int64 v141; // [rsp+188h] [rbp+88h]
  int *v142; // [rsp+190h] [rbp+90h]
  __int64 v143; // [rsp+198h] [rbp+98h]
  int *v144; // [rsp+1A0h] [rbp+A0h]
  __int64 v145; // [rsp+1A8h] [rbp+A8h]
  int *v146; // [rsp+1B0h] [rbp+B0h]
  __int64 v147; // [rsp+1B8h] [rbp+B8h]
  int *v148; // [rsp+1C0h] [rbp+C0h]
  __int64 v149; // [rsp+1C8h] [rbp+C8h]
  int *v150; // [rsp+1D0h] [rbp+D0h]
  __int64 v151; // [rsp+1D8h] [rbp+D8h]
  int *v152; // [rsp+1E0h] [rbp+E0h]
  __int64 v153; // [rsp+1E8h] [rbp+E8h]
  int *v154; // [rsp+1F0h] [rbp+F0h]
  __int64 v155; // [rsp+1F8h] [rbp+F8h]
  int *v156; // [rsp+200h] [rbp+100h]
  __int64 v157; // [rsp+208h] [rbp+108h]
  const struct CVisualTree **v158; // [rsp+210h] [rbp+110h]
  __int64 v159; // [rsp+218h] [rbp+118h]
  float *v160; // [rsp+220h] [rbp+120h]
  __int64 v161; // [rsp+228h] [rbp+128h]
  void *retaddr; // [rsp+2B8h] [rbp+1B8h]

  v8 = (_DWORD *)*((_QWORD *)this + 28);
  v9 = 0;
  v10 = 0LL;
  v99 = (const struct CVisualTree *)a2;
  if ( (*v8 & 0x1000000) == 0 )
    goto LABEL_2;
  v39 = (unsigned int)v8[1];
  v40 = v8 + 2;
  v41 = 0LL;
  if ( (_DWORD)v39 )
  {
    while ( *v40 != 8 )
    {
      v41 = (unsigned int)(v41 + 1);
      ++v40;
      if ( (unsigned int)v41 >= (unsigned int)v39 )
        goto LABEL_94;
    }
    goto LABEL_64;
  }
LABEL_94:
  if ( (unsigned int)v41 < (unsigned int)v39 )
  {
LABEL_64:
    v42 = (char **)((char *)&v8[2 * v41] + ((v39 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_65;
  }
  v42 = 0LL;
LABEL_65:
  v98 = *v42;
  if ( (*(unsigned __int8 (__fastcall **)(char *, __int64))(*(_QWORD *)v98 + 64LL))(v98, 148LL) )
  {
    v10 = (CTransform3D *)v98;
    a2 = (CVisual **)v99;
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(char *, __int64))(*(_QWORD *)v98 + 64LL))(v98, 48LL) )
      v10 = (CTransform3D *)*((_QWORD *)v98 + 11);
    a2 = (CVisual **)v99;
  }
LABEL_2:
  *a4 = 0;
  if ( a3 )
  {
    v9 = 1;
    *(_OWORD *)a5 = *(_OWORD *)a3;
    *((_OWORD *)a5 + 1) = *((_OWORD *)a3 + 1);
    *((_OWORD *)a5 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)a5 + 3) = *((_OWORD *)a3 + 3);
    *((_DWORD *)a5 + 16) = *((_DWORD *)a3 + 16);
  }
  if ( this != a2[9] )
  {
    v13 = (__m128)*((unsigned int *)this + 31);
    if ( v13.m128_f32[0] != 0.0 || *((float *)this + 32) != 0.0 || *((float *)this + 30) != 0.0 )
    {
      v16 = *((float *)this + 32);
      v17 = *((float *)this + 30);
      if ( v9 )
      {
        COERCE_FLOAT(v18 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
        if ( COERCE_FLOAT(v13.m128_i32[0] & v18) >= 0.000081380211
          || COERCE_FLOAT(LODWORD(v16) & v18) >= 0.000081380211
          || COERCE_FLOAT(LODWORD(v17) & v18) >= 0.000081380211 )
        {
          v19 = *((_BYTE *)a5 + 65);
          v20 = v16 * *((float *)a5 + 6);
          v21 = (float)((float)(v13.m128_f32[0] * *((float *)a5 + 1)) + (float)(v16 * *((float *)a5 + 5)))
              + (float)(v17 * *((float *)a5 + 9));
          v22 = v17 * *((float *)a5 + 10);
          *((float *)a5 + 12) = (float)((float)((float)(v16 * *((float *)a5 + 4))
                                              + (float)(v13.m128_f32[0] * *(float *)a5))
                                      + (float)(v17 * *((float *)a5 + 8)))
                              + *((float *)a5 + 12);
          v6 = v13;
          v6.m128_f32[0] = (float)(v13.m128_f32[0] * *((float *)a5 + 2)) + v20;
          *((float *)a5 + 13) = v21 + *((float *)a5 + 13);
          *((float *)a5 + 14) = (float)(v6.m128_f32[0] + v22) + *((float *)a5 + 14);
          if ( (char)(4 * v19) >> 6 == 1
            || ((char)(4 * v19) >> 6 >= 0
              ? ((v6 = (__m128)LODWORD(FLOAT_61440_0),
                  COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                 (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a5 + 7) & v18) * 61440.0)
                                               + (float)(COERCE_FLOAT(*((_DWORD *)a5 + 3) & v18) * 61440.0))
                                       + COERCE_FLOAT(*((_DWORD *)a5 + 15) & v18))
                               - 1.0) & v18) >= 0.000081380211)
               ? (v46 = 0, v47 = 16)
               : (v46 = 1, v47 = -16),
                 v48 = *((_DWORD *)a5 + 11) & v18,
                 *((_BYTE *)a5 + 65) = v47 ^ (v47 ^ v19) & 0xCF,
                 v23 = v46 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v48 * 61440.0) - 0.0) & v18) < 0.000081380211))
              : (v23 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)a5 + 11) & v18) * 61440.0) - 0.0) & v18) < 0.000081380211),
                !v23) )
          {
            v59 = v13.m128_f32[0] * *((float *)a5 + 3);
            *((_DWORD *)a5 + 16) = 0;
            *((float *)a5 + 15) = (float)((float)(v59 + (float)(v16 * *((float *)a5 + 7)))
                                        + (float)(v17 * *((float *)a5 + 11)))
                                + *((float *)a5 + 15);
          }
          else
          {
            *((_BYTE *)a5 + 64) &= 0xFCu;
          }
        }
      }
      else
      {
        *(_QWORD *)a5 = 1065353216LL;
        v9 = 1;
        *((_QWORD *)a5 + 1) = 0LL;
        *((_DWORD *)a5 + 4) = 0;
        *(_QWORD *)((char *)a5 + 20) = 1065353216LL;
        *(_QWORD *)((char *)a5 + 28) = 0LL;
        *((_DWORD *)a5 + 9) = 0;
        *((_QWORD *)a5 + 5) = 1065353216LL;
        *((_DWORD *)a5 + 12) = v13.m128_i32[0];
        *((float *)a5 + 13) = v16;
        *((float *)a5 + 14) = v17;
        *((_DWORD *)a5 + 15) = 1065353216;
        *((_BYTE *)a5 + 65) &= 0xE9u;
        *((_BYTE *)a5 + 65) |= 0x29u;
        *((_BYTE *)a5 + 64) = -88;
      }
      *a4 = 1;
    }
    v14 = (char *)*((_QWORD *)this + 29);
    v98 = v14;
    if ( v14 )
    {
      v43 = (float *)((char *)this + 140);
      v44 = v14[40] & 1;
      v45 = v44;
      if ( v9 )
      {
        if ( this != (CVisual *)-140LL )
        {
          if ( !v44 && v14[156] && (*((float *)v14 + 37) != *v43 || *((float *)v14 + 38) != *((float *)this + 36)) )
            v45 = 1;
          *(_QWORD *)(v14 + 148) = *(_QWORD *)v43;
        }
        if ( v45 )
        {
          (*(void (__fastcall **)(char *, float *, char *))(*(_QWORD *)v14 + 208LL))(v14, v43, v14 + 80);
          v14 = v98;
          *((_DWORD *)v98 + 10) &= ~1u;
        }
        CMILMatrix::Multiply((const struct CMILMatrix *)(v14 + 80), a5, a5);
      }
      else
      {
        if ( this != (CVisual *)-140LL )
        {
          if ( !v44 && v14[156] && (*((float *)v14 + 37) != *v43 || *((float *)v14 + 38) != *((float *)this + 36)) )
            v45 = 1;
          *(_QWORD *)(v14 + 148) = *(_QWORD *)v43;
        }
        if ( v45 )
        {
          (*(void (__fastcall **)(char *, float *, char *))(*(_QWORD *)v14 + 208LL))(v14, v43, v14 + 80);
          v14 = v98;
          *((_DWORD *)v98 + 10) &= ~1u;
        }
        v9 = 1;
        *(_OWORD *)a5 = *((_OWORD *)v14 + 5);
        *((_OWORD *)a5 + 1) = *((_OWORD *)v14 + 6);
        *((_OWORD *)a5 + 2) = *((_OWORD *)v14 + 7);
        *((_OWORD *)a5 + 3) = *((_OWORD *)v14 + 8);
        *((_DWORD *)a5 + 16) = *((_DWORD *)v14 + 36);
      }
      *a4 = 1;
    }
  }
  if ( a6 )
  {
    if ( v9 )
    {
      *(_OWORD *)a6 = *(_OWORD *)a5;
      *((_OWORD *)a6 + 1) = *((_OWORD *)a5 + 1);
      *((_OWORD *)a6 + 2) = *((_OWORD *)a5 + 2);
      *((_OWORD *)a6 + 3) = *((_OWORD *)a5 + 3);
      *((_DWORD *)a6 + 16) = *((_DWORD *)a5 + 16);
    }
    else
    {
      *(_QWORD *)a6 = 1065353216LL;
      *((_QWORD *)a6 + 1) = 0LL;
      *((_DWORD *)a6 + 4) = 0;
      *(_QWORD *)((char *)a6 + 20) = 1065353216LL;
      *(_QWORD *)((char *)a6 + 28) = 0LL;
      *((_DWORD *)a6 + 9) = 0;
      *((_QWORD *)a6 + 5) = 1065353216LL;
      *((_QWORD *)a6 + 6) = 0LL;
      *((_DWORD *)a6 + 14) = 0;
      *((_DWORD *)a6 + 15) = 1065353216;
      *((_BYTE *)a6 + 65) &= 0xE9u;
      *((_BYTE *)a6 + 65) |= 0x29u;
      *((_BYTE *)a6 + 64) = -86;
    }
  }
  if ( v10 )
    goto LABEL_30;
  v15 = *((_QWORD *)this + 11);
  if ( !v15 || *(_DWORD *)(v15 + 108) != 1 )
    goto LABEL_13;
  v49 = (_QWORD *)((char *)this + 80);
  v50 = *((_QWORD *)this + 10);
  v97 = *((float *)this + 27);
  if ( (v50 & 3) != 0 )
  {
    if ( (v50 & 3) == 1 )
    {
      v98 = (char *)(v50 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_101:
      v53 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 10);
      v49 = (_QWORD *)((char *)this + 80);
      v52 = *(_QWORD *)(v53 - 16);
      v51 = v98;
      goto LABEL_102;
    }
    if ( (v50 & 3) == 2 )
    {
      v51 = 0LL;
LABEL_90:
      v52 = 0LL;
      goto LABEL_102;
    }
    if ( (v50 & 3) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v98 = (char *)this + 80;
  if ( (v50 & 3) != 0 )
  {
    if ( (v50 & 3) != 1 )
    {
      if ( (unsigned __int64)(v50 & 3) - 2 > 1 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      v51 = (char *)this + 80;
      goto LABEL_90;
    }
    goto LABEL_101;
  }
  v52 = 1LL;
  v51 = (char *)this + 80;
LABEL_102:
  if ( (*v49 & 3) == 0 )
  {
LABEL_112:
    v24 = (unsigned __int64)v49;
    goto LABEL_26;
  }
  switch ( *v49 & 3LL )
  {
    case 1LL:
      v24 = *v49 & 0xFFFFFFFFFFFFFFFCuLL;
      break;
    case 2LL:
      v24 = 0LL;
      break;
    case 3LL:
      goto LABEL_112;
    default:
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
LABEL_26:
  v25 = (_DWORD *)*((_QWORD *)this + 28);
  v26 = (__int64)&v51[8 * v52 - v24] >> 3;
  if ( (*v25 & 0x1000000) == 0 )
    goto LABEL_27;
  v54 = v25[1];
  v55 = v25 + 2;
  for ( i = 0LL; (unsigned int)i < v54; ++v55 )
  {
    if ( *v55 == 8 )
      break;
    i = (unsigned int)(i + 1);
  }
  v57 = (unsigned int)v25[1];
  v58 = (unsigned int)i >= (unsigned int)v57
      ? 0LL
      : (_QWORD *)((char *)&v25[2 * i] + ((v57 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v58 + 64LL))(*v58, 51LL) )
    v96 = 1;
  else
LABEL_27:
    v96 = 0;
  v27 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 232LL))(this);
  if ( LODWORD(v97) != 1 && (_DWORD)v26 || v96 || v27 )
  {
LABEL_30:
    if ( !v9 )
    {
      *(_QWORD *)a5 = 1065353216LL;
      *((_QWORD *)a5 + 1) = 0LL;
      *((_DWORD *)a5 + 4) = 0;
      *(_QWORD *)((char *)a5 + 20) = 1065353216LL;
      *((_DWORD *)a5 + 7) = 0;
      *((_QWORD *)a5 + 6) = 0LL;
      *((_DWORD *)a5 + 14) = 0;
      *((_DWORD *)a5 + 15) = 1065353216;
      *((_BYTE *)a5 + 65) &= 0xE9u;
      *((_BYTE *)a5 + 65) |= 0x29u;
      *((_BYTE *)a5 + 64) = -86;
    }
    v28 = *((_BYTE *)a5 + 64);
    *((_QWORD *)a5 + 4) = 0LL;
    *((_QWORD *)a5 + 5) = 0LL;
    *((_BYTE *)a5 + 64) = v28 & 0xF0 | 1;
    *a4 = 1;
    if ( v10 )
    {
      Matrix = CTransform3D::GetMatrix(v10, (const struct D2D_SIZE_F *)((char *)this + 140));
      CMILMatrix::Multiply(Matrix, a5, a5);
      *a4 = 1;
    }
    goto LABEL_34;
  }
LABEL_13:
  if ( !v9 )
  {
    *(_QWORD *)a5 = 1065353216LL;
    *((_QWORD *)a5 + 1) = 0LL;
    *((_DWORD *)a5 + 4) = 0;
    *(_QWORD *)((char *)a5 + 20) = 1065353216LL;
    *(_QWORD *)((char *)a5 + 28) = 0LL;
    *((_DWORD *)a5 + 9) = 0;
    *((_QWORD *)a5 + 5) = 1065353216LL;
    *((_QWORD *)a5 + 6) = 0LL;
    *((_DWORD *)a5 + 14) = 0;
    *((_DWORD *)a5 + 15) = 1065353216;
    *((_BYTE *)a5 + 65) &= 0xE9u;
    *((_BYTE *)a5 + 65) |= 0x29u;
    *((_BYTE *)a5 + 64) = -86;
    goto LABEL_15;
  }
LABEL_34:
  if ( (*((_BYTE *)this + 101) & 0x20) != 0 )
  {
    if ( !a5 )
      goto LABEL_53;
    if ( CMILMatrix::Is2DAxisAlignedPreserving(a5) )
    {
      v29 = *(_OWORD *)a5;
      v30 = *((_OWORD *)a5 + 1);
      v121 = *((_DWORD *)a5 + 16);
      v117 = v29;
      v31 = *((_OWORD *)a5 + 2);
      v118 = v30;
      v32 = *((_OWORD *)a5 + 3);
      v119 = v31;
      v120 = v32;
      CMILMatrix::RoundOffsets((CMILMatrix *)&v117);
      if ( *(float *)a5 != *(float *)&v117
        || *((float *)a5 + 1) != *((float *)&v117 + 1)
        || *((float *)a5 + 2) != *((float *)&v117 + 2)
        || *((float *)a5 + 3) != *((float *)&v117 + 3)
        || *((float *)a5 + 4) != *(float *)&v118
        || *((float *)a5 + 5) != *((float *)&v118 + 1)
        || *((float *)a5 + 6) != *((float *)&v118 + 2)
        || *((float *)a5 + 7) != *((float *)&v118 + 3)
        || *((float *)a5 + 8) != *(float *)&v119
        || *((float *)a5 + 9) != *((float *)&v119 + 1)
        || *((float *)a5 + 10) != *((float *)&v119 + 2)
        || *((float *)a5 + 11) != *((float *)&v119 + 3)
        || *((float *)a5 + 12) != *(float *)&v120
        || *((float *)a5 + 13) != *((float *)&v120 + 1)
        || *((float *)a5 + 14) != *((float *)&v120 + 2)
        || *((float *)a5 + 15) != *((float *)&v120 + 3) )
      {
LABEL_53:
        v33 = (__m128i)*((unsigned int *)a5 + 12);
        if ( (_mm_cvtsi128_si32(v33) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v6.m128_f32[0] = (float)(int)*(float *)v33.m128i_i32 - *(float *)v33.m128i_i32;
          v93.m128_f32[0] = FLOAT_N0_5;
          v6 = _mm_cmple_ss(v6, v93);
          v34 = (int)*(float *)v33.m128i_i32 - _mm_cvtsi128_si32((__m128i)v6);
        }
        else
        {
          v97 = *(float *)v33.m128i_i32 + 6291456.25;
          v34 = (int)(LODWORD(v97) << 10) >> 11;
        }
        *((float *)a5 + 12) = (float)v34;
        v35 = (__m128i)*((unsigned int *)a5 + 13);
        if ( (_mm_cvtsi128_si32(v35) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v6.m128_f32[0] = (float)(int)*(float *)v35.m128i_i32 - *(float *)v35.m128i_i32;
          v94.m128_f32[0] = FLOAT_N0_5;
          v6 = _mm_cmple_ss(v6, v94);
          v36 = (int)*(float *)v35.m128i_i32 - _mm_cvtsi128_si32((__m128i)v6);
        }
        else
        {
          v97 = *(float *)v35.m128i_i32 + 6291456.25;
          v36 = (int)(LODWORD(v97) << 10) >> 11;
        }
        *((float *)a5 + 13) = (float)v36;
        v37 = (__m128i)*((unsigned int *)a5 + 14);
        if ( (_mm_cvtsi128_si32(v37) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v6.m128_f32[0] = (float)(int)*(float *)v37.m128i_i32 - *(float *)v37.m128i_i32;
          v95.m128_f32[0] = FLOAT_N0_5;
          v38 = (int)*(float *)v37.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v6, v95));
        }
        else
        {
          v97 = *(float *)v37.m128i_i32 + 6291456.25;
          v38 = (int)(LODWORD(v97) << 10) >> 11;
        }
        *((_BYTE *)a5 + 64) &= 0xFCu;
        *((float *)a5 + 14) = (float)v38;
        *a4 = 1;
      }
    }
  }
LABEL_15:
  if ( (*((_BYTE *)this + 103) & 4) != 0 )
  {
    v60 = dword_1803DC880;
    v61 = qword_1803DC898;
    if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
    {
      v62 = *((_DWORD *)a5 + 14);
      v97 = *((float *)a5 + 15);
      v63 = *((_DWORD *)a5 + 13);
      v100 = v62;
      v64 = *((_DWORD *)a5 + 12);
      v101 = v63;
      v65 = *((_DWORD *)a5 + 11);
      v102 = v64;
      v66 = *((_DWORD *)a5 + 10);
      v103 = v65;
      v67 = *((_DWORD *)a5 + 9);
      v104 = v66;
      v68 = *((_DWORD *)a5 + 8);
      v105 = v67;
      v69 = *((_DWORD *)a5 + 7);
      v106 = v68;
      v70 = *((_DWORD *)a5 + 6);
      v107 = v69;
      v71 = *((_DWORD *)a5 + 5);
      v108 = v70;
      v72 = *((_DWORD *)a5 + 4);
      v109 = v71;
      v73 = *((_DWORD *)a5 + 3);
      v110 = v72;
      v74 = *((_DWORD *)a5 + 2);
      v111 = v73;
      v75 = *((_DWORD *)a5 + 1);
      v112 = v74;
      v76 = *(_DWORD *)a5;
      v113 = v75;
      LODWORD(v99) = v76;
      InteractionInternal = CVisual::GetInteractionInternal(this);
      v160 = &v97;
      v158 = (const struct CVisualTree **)&v100;
      v156 = &v101;
      v154 = &v102;
      v152 = &v103;
      v150 = &v104;
      v148 = &v105;
      v146 = &v106;
      v144 = &v107;
      v142 = &v108;
      v140 = &v109;
      v138 = &v110;
      v136 = &v111;
      v134 = &v112;
      v132 = &v113;
      v115 = this;
      v161 = 4LL;
      v159 = 4LL;
      v157 = 4LL;
      v155 = 4LL;
      v153 = 4LL;
      v151 = 4LL;
      v149 = 4LL;
      v147 = 4LL;
      v145 = 4LL;
      v143 = 4LL;
      v141 = 4LL;
      v139 = 4LL;
      v137 = 4LL;
      v135 = 4LL;
      v133 = 4LL;
      v131 = 4LL;
      v130 = &v99;
      v129 = 8LL;
      p_InteractionInternal = &InteractionInternal;
      v127 = 8LL;
      v126 = &v115;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1803DC888;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 2LL;
      UserData.Size = *(unsigned __int16 *)off_1803DC888;
      v123 = &unk_1803B3508;
      UserData.Reserved = 2;
      v124 = 371;
      v125 = 1;
      LODWORD(v98) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0x14u, &UserData);
      v61 = qword_1803DC898;
      v60 = dword_1803DC880;
    }
    if ( a3 && v60 > 4 && (qword_1803DC890 & 2) != 0 && (v61 & 2) == v61 )
    {
      v77 = *((_DWORD *)a3 + 14);
      LODWORD(v98) = *((_DWORD *)a3 + 15);
      v78 = *((_DWORD *)a3 + 13);
      LODWORD(v99) = v77;
      v79 = *((_DWORD *)a3 + 12);
      v113 = v78;
      v80 = *((_DWORD *)a3 + 11);
      v112 = v79;
      v81 = *((_DWORD *)a3 + 10);
      v111 = v80;
      v82 = *((_DWORD *)a3 + 9);
      v110 = v81;
      v83 = *((_DWORD *)a3 + 8);
      v109 = v82;
      v84 = *((_DWORD *)a3 + 7);
      v108 = v83;
      v85 = *((_DWORD *)a3 + 6);
      v107 = v84;
      v86 = *((_DWORD *)a3 + 5);
      v106 = v85;
      v87 = *((_DWORD *)a3 + 4);
      v105 = v86;
      v88 = *((_DWORD *)a3 + 3);
      v104 = v87;
      v89 = *((_DWORD *)a3 + 2);
      v103 = v88;
      v90 = *((_DWORD *)a3 + 1);
      v102 = v89;
      v91 = *(_DWORD *)a3;
      v101 = v90;
      v100 = v91;
      v115 = CVisual::GetInteractionInternal(this);
      v160 = (float *)&v98;
      v158 = &v99;
      v156 = &v113;
      v154 = &v112;
      v152 = &v111;
      v150 = &v110;
      v148 = &v109;
      v146 = &v108;
      v144 = &v107;
      v142 = &v106;
      v140 = &v105;
      v138 = &v104;
      v136 = &v103;
      v134 = &v102;
      v132 = &v101;
      InteractionInternal = this;
      v161 = 4LL;
      v159 = 4LL;
      v157 = 4LL;
      v155 = 4LL;
      v153 = 4LL;
      v151 = 4LL;
      v149 = 4LL;
      v147 = 4LL;
      v145 = 4LL;
      v143 = 4LL;
      v141 = 4LL;
      v139 = 4LL;
      v137 = 4LL;
      v135 = 4LL;
      v133 = 4LL;
      v131 = 4LL;
      v130 = (const struct CVisualTree **)&v100;
      v129 = 8LL;
      p_InteractionInternal = &v115;
      v127 = 8LL;
      v126 = &InteractionInternal;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1803DC888;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 2LL;
      UserData.Size = *(unsigned __int16 *)off_1803DC888;
      v123 = &unk_1803B3313;
      UserData.Reserved = 2;
      v124 = 489;
      v125 = 1;
      LODWORD(v97) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0x14u, &UserData);
    }
  }
}
