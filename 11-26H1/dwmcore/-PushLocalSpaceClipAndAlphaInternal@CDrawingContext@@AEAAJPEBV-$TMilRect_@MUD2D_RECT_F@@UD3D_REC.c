/*
 * XREFs of ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800C70F0
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180040050 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800C6AD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 *     ?PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x180236A34 (-PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180011FD0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Grow@?$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x18005CCE4 (-Grow@-$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18007F250 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18007F3A0 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18008AEF0 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800C2D20 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800C61E0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800C8918 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?Push@CD2DClipStack@@QEAAJAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800C8D10 (-Push@CD2DClipStack@@QEAAJAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?Grow@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1800C90E8 (-Grow@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x1800CA200 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CC0E0 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800D1830 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?SetCachedCpuClipAntialiasSink@CCpuClippingData@@QEAAXPEAVCCpuClipAntialiasSink@@@Z @ 0x1801CD9DC (-SetCachedCpuClipAntialiasSink@CCpuClippingData@@QEAAXPEAVCCpuClipAntialiasSink@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushLocalSpaceClipAndAlphaInternal(
        struct CDrawingContext *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int32 v4; // xmm10_4
  _BYTE *v5; // r12
  float v6; // xmm11_4
  __int64 v7; // rsi
  struct _LIST_ENTRY *v9; // rdi
  __int64 v10; // r15
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // dl
  int v15; // ebx
  int v16; // eax
  int v17; // eax
  __m128 v18; // xmm0
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  float v24; // xmm1_4
  float left_low; // xmm6_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float top_low; // xmm7_4
  float v29; // xmm6_4
  __int64 v31; // rax
  __int64 v32; // rcx
  const struct CShape *v33; // rbx
  struct CShape *v34; // rax
  const struct CMILMatrix *Flink; // r9
  enum D2D1_ANTIALIAS_MODE v36; // r15d
  char v37; // r12
  struct CCpuClipAntialiasSink *v38; // rcx
  struct CShape *v39; // r15
  int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // eax
  __m128 v45; // xmm1
  __m128 si128; // xmm1
  __int64 v47; // rcx
  bool v48; // zf
  CVisual *v49; // rax
  int v50; // ecx
  __int64 v51; // rdx
  unsigned int v52; // eax
  unsigned int v53; // eax
  int v54; // xmm6_4
  char v55; // bl
  __int64 v56; // rdx
  char v57; // r9
  __int64 (__fastcall *v58)(__int64, __int64, struct CShape **); // rax
  int v59; // eax
  __int64 *v60; // rcx
  __int64 v61; // rax
  struct _LIST_ENTRY *v62; // r15
  CVisual *v63; // r13
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  CShape *v68; // rbx
  __int64 v69; // rax
  unsigned int v70; // xmm1_4
  unsigned int v71; // xmm0_4
  __int128 *v72; // rcx
  int v73; // eax
  struct CShape *v74; // rcx
  unsigned int v75; // eax
  unsigned int v76; // eax
  char v77; // r8
  __int64 v78; // rcx
  __int64 v79; // rdx
  struct CCpuClipAntialiasSink *v80; // rdx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  enum D2D1_ANTIALIAS_MODE v83; // r12d
  int v84; // eax
  unsigned int v85; // eax
  __int64 v86; // rcx
  unsigned int v87; // eax
  float left; // xmm6_4
  float top; // xmm7_4
  float right; // xmm8_4
  float bottom; // xmm0_4
  int v92; // eax
  unsigned int v93; // eax
  int v94; // eax
  int v95; // r12d
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // ebx
  int v101; // eax
  int v102; // eax
  int v103; // eax
  __int64 v104; // rbx
  char v105; // cl
  char v106; // r8
  int v107; // eax
  int v108; // ebx
  int v109; // eax
  int v110; // eax
  enum D2D1_ANTIALIAS_MODE v111; // r12d
  char v112; // r13
  int v113; // eax
  unsigned int v114; // eax
  __int64 v115; // rcx
  float v116; // xmm6_4
  float v117; // xmm7_4
  float v118; // xmm8_4
  float v119; // xmm0_4
  int v120; // eax
  unsigned int v121; // eax
  int v122; // r12d
  int v123; // r15d
  unsigned int v124; // eax
  int v125; // eax
  int v126; // eax
  unsigned int v127; // [rsp+28h] [rbp-E0h]
  enum D2D1_ANTIALIAS_MODE v128; // [rsp+28h] [rbp-E0h]
  bool v129; // [rsp+48h] [rbp-C0h] BYREF
  struct CShape *v130[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v131; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v132; // [rsp+70h] [rbp-98h]
  __int64 v133; // [rsp+78h] [rbp-90h]
  _BYTE *v134; // [rsp+80h] [rbp-88h]
  __int64 v135; // [rsp+88h] [rbp-80h]
  struct D2D_RECT_F v136; // [rsp+90h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v5 = (_BYTE *)a4;
  v6 = FLOAT_1_0;
  v7 = a3;
  v134 = (_BYTE *)a4;
  v135 = a2;
  v9 = 0LL;
  v10 = 0LL;
  v133 = 0LL;
  if ( !*(_QWORD *)(a3 + 8) )
    goto LABEL_30;
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
  {
    v60 = *(__int64 **)(v7 + 8);
    if ( v60 )
    {
      v61 = *v60;
      LODWORD(v130[0]) = 0;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, struct CShape **))(v61 + 64))(v60, v130) )
      {
        if ( LODWORD(v130[0]) == 1 )
          *(_DWORD *)(v7 + 180) |= 1u;
      }
    }
    if ( CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)(v7 + 108)) )
      *(_DWORD *)(v7 + 180) |= 4u;
  }
  v11 = *(__int64 **)(v7 + 8);
  if ( !v11
    || (v12 = *v11,
        LODWORD(v130[0]) = 0,
        !(*(unsigned __int8 (__fastcall **)(__int64 *, struct CShape **))(v12 + 64))(v11, v130))
    || LODWORD(v130[0]) != 1 )
  {
    v13 = v7 + 108;
    v133 = *(_QWORD *)(v7 + 8);
    goto LABEL_8;
  }
  v13 = v7 + 108;
  v14 = *(_BYTE *)(v7 + 172);
  if ( v14 >> 6 == 1 )
    goto LABEL_80;
  if ( v14 >> 6 < 0 )
    goto LABEL_8;
  a3 = *(unsigned __int8 *)(v7 + 173);
  if ( (char)(4 * a3) >> 6 != 1 )
  {
    if ( (char)(4 * a3) >> 6 < 0 )
    {
LABEL_78:
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v7 + 112) - 0.0) & v4) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v7 + 124) - 0.0) & v4) < 0.000081380211 )
      {
        *(_BYTE *)(v7 + 172) = v14 | 0xC0;
        goto LABEL_8;
      }
      goto LABEL_79;
    }
    v77 = a3 & 0xCF;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v7 + 136) & v4) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(v7 + 120) & v4) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(v7 + 168) & v4))
                      - 1.0) & v4) < 0.000081380211 )
    {
      LOBYTE(a3) = v77 ^ 0x30;
      *(_BYTE *)(v7 + 173) = a3;
      goto LABEL_78;
    }
    *(_BYTE *)(v7 + 173) = v77 ^ 0x10;
  }
LABEL_79:
  *(_BYTE *)(v7 + 172) = v14 & 0x3F | 0x40;
LABEL_80:
  if ( !CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(v13) )
    v133 = *(_QWORD *)(v7 + 8);
LABEL_8:
  if ( !*(_BYTE *)(v7 + 184) || !*(_BYTE *)(*((_QWORD *)a1 + 93) - 8LL) )
  {
    a4 = *(_QWORD *)(v7 + 8);
    v15 = -2003304309;
    v136 = 0LL;
    if ( a4 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *, __int64))(*(_QWORD *)a4 + 48LL))(a4, &v136, v13);
      v15 = v16;
      LODWORD(v9) = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x137u, 0LL);
LABEL_12:
        v127 = 4400;
LABEL_13:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, v127, 0LL);
        return (unsigned int)v9;
      }
    }
    LODWORD(v9) = v15;
    if ( v15 < 0 )
      goto LABEL_12;
    v83 = *((_DWORD *)a1 + 59) != 0;
    *((_QWORD *)&v131 + 1) = *(_QWORD *)v7;
    v84 = *((_DWORD *)a1 + 67);
    *(_QWORD *)&v131 = 3LL;
    if ( *((_DWORD *)a1 + 66) == v84 )
    {
      v94 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Grow((char *)a1 + 256);
      LODWORD(v9) = v94;
      if ( v94 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v94);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, (int)v9, 0xC86u, 0LL);
        v95 = (int)v9;
LABEL_154:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v95, 0x1134u, 0LL);
        return (unsigned int)v9;
      }
    }
    *(_OWORD *)(*((_QWORD *)a1 + 32) + 16LL * (unsigned int)(*((_DWORD *)a1 + 66))++) = v131;
    v85 = *((_DWORD *)a1 + 69);
    if ( v85 <= *((_DWORD *)a1 + 66) )
      v85 = *((_DWORD *)a1 + 66);
    *((_DWORD *)a1 + 69) = v85;
    v86 = *((_QWORD *)a1 + 93);
    if ( v86 == *((_QWORD *)a1 + 92) || !*(_QWORD *)(v86 - 168) )
    {
      if ( v83 == D2D1_ANTIALIAS_MODE_ALIASED )
      {
        left = (float)(int)CFloatFPU::CeilingSat(v136.left - 0.5);
        top = (float)(int)CFloatFPU::CeilingSat(v136.top - 0.5);
        right = (float)(int)CFloatFPU::CeilingSat(v136.right - 0.5);
        bottom = (float)(int)CFloatFPU::CeilingSat(v136.bottom - 0.5);
      }
      else
      {
        left = v136.left;
        top = v136.top;
        right = v136.right;
        bottom = v136.bottom;
      }
      v92 = *((_DWORD *)a1 + 785);
      *(_QWORD *)&v131 = __PAIR64__(LODWORD(top), LODWORD(left));
      *((_QWORD *)&v131 + 1) = __PAIR64__(LODWORD(bottom), LODWORD(right));
      if ( *((_DWORD *)a1 + 784) == v92 )
      {
        v97 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,8,2,8>::Grow((char *)a1 + 3128);
        LODWORD(v9) = v97;
        if ( v97 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x83,
            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)(unsigned int)v97);
          v87 = 513;
          goto LABEL_159;
        }
      }
      *(_OWORD *)(*((_QWORD *)a1 + 391) + 16LL * *((unsigned int *)a1 + 784)) = v131;
      v93 = *((_DWORD *)a1 + 787);
      if ( v93 <= ++*((_DWORD *)a1 + 784) )
        v93 = *((_DWORD *)a1 + 784);
      *((_DWORD *)a1 + 787) = v93;
      LODWORD(v9) = 0;
    }
    else
    {
      LODWORD(v9) = CD2DClipStack::Push((struct CDrawingContext *)((char *)a1 + 3128), &v136, v83);
      if ( (int)v9 < 0 )
      {
        v87 = 517;
LABEL_159:
        v95 = (int)v9;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, (int)v9, v87, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, (int)v9, 0xC8Bu, 0LL);
        v98 = *((_DWORD *)a1 + 66);
        if ( v98 )
        {
          *((_DWORD *)a1 + 66) = v98 - 1;
          goto LABEL_154;
        }
        if ( (int)v9 < 0 )
          goto LABEL_154;
LABEL_189:
        if ( v133 )
          goto LABEL_49;
        v111 = *((_DWORD *)a1 + 59) != 0;
        v112 = 0;
        if ( *(_QWORD *)v7 )
        {
          *((_QWORD *)&v131 + 1) = *(_QWORD *)v7;
          v113 = *((_DWORD *)a1 + 67);
          *(_QWORD *)&v131 = 1LL;
          if ( *((_DWORD *)a1 + 66) == v113 )
          {
            v126 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Grow((char *)a1 + 256);
            LODWORD(v9) = v126;
            if ( v126 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x83,
                (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                (const char *)(unsigned int)v126);
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, (int)v9, 0xBB3u, 0LL);
              v123 = (int)v9;
              goto LABEL_213;
            }
          }
          v112 = 1;
          *(_OWORD *)(*((_QWORD *)a1 + 32) + 16LL * *((unsigned int *)a1 + 66)) = v131;
          v114 = *((_DWORD *)a1 + 69);
          if ( v114 <= ++*((_DWORD *)a1 + 66) )
            v114 = *((_DWORD *)a1 + 66);
          *((_DWORD *)a1 + 69) = v114;
        }
        v115 = *((_QWORD *)a1 + 93);
        if ( v115 == *((_QWORD *)a1 + 92) || !*(_QWORD *)(v115 - 184) )
        {
          if ( v111 == D2D1_ANTIALIAS_MODE_ALIASED )
          {
            v116 = (float)(int)CFloatFPU::CeilingSat(v136.left - 0.5);
            v117 = (float)(int)CFloatFPU::CeilingSat(v136.top - 0.5);
            v118 = (float)(int)CFloatFPU::CeilingSat(v136.right - 0.5);
            v119 = (float)(int)CFloatFPU::CeilingSat(v136.bottom - 0.5);
          }
          else
          {
            v116 = v136.left;
            v117 = v136.top;
            v118 = v136.right;
            v119 = v136.bottom;
          }
          v120 = *((_DWORD *)a1 + 779);
          *(_QWORD *)&v131 = __PAIR64__(LODWORD(v117), LODWORD(v116));
          *((_QWORD *)&v131 + 1) = __PAIR64__(LODWORD(v119), LODWORD(v118));
          if ( *((_DWORD *)a1 + 778) == v120 )
          {
            v125 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,8,2,8>::Grow((char *)a1 + 3104);
            LODWORD(v9) = v125;
            if ( v125 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x83,
                (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                (const char *)(unsigned int)v125);
              v124 = 252;
              v122 = (int)v9;
LABEL_219:
              v123 = (int)v9;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, (int)v9, v124, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v122, 0xBB8u, 0LL);
              if ( v112 )
              {
                CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((__int64)a1 + 256, 0LL);
                goto LABEL_213;
              }
              goto LABEL_203;
            }
          }
          *(_OWORD *)(*((_QWORD *)a1 + 388) + 16LL * (unsigned int)(*((_DWORD *)a1 + 778))++) = v131;
          v121 = *((_DWORD *)a1 + 781);
          if ( v121 <= *((_DWORD *)a1 + 778) )
            v121 = *((_DWORD *)a1 + 778);
          v122 = 0;
          *((_DWORD *)a1 + 781) = v121;
        }
        else
        {
          v122 = CD2DClipStack::Push((struct CDrawingContext *)((char *)a1 + 3104), &v136, v111);
          LODWORD(v9) = v122;
          if ( v122 < 0 )
          {
            v124 = 256;
            goto LABEL_219;
          }
        }
        v123 = v122;
        ++*(_QWORD *)(*((_QWORD *)a1 + 93) - 184LL);
        *((_BYTE *)a1 + 8065) = 1;
LABEL_203:
        LODWORD(v9) = v123;
        if ( v123 >= 0 )
          goto LABEL_49;
LABEL_213:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v123, 0x113Du, 0LL);
        return (unsigned int)v9;
      }
    }
    ++*(_QWORD *)(*((_QWORD *)a1 + 93) - 168LL);
    goto LABEL_189;
  }
  v31 = *(_QWORD *)(v7 + 24);
  if ( v31 )
  {
    v32 = *(_QWORD *)(v31 + 56);
    v33 = *(const struct CShape **)(v32 + 8);
    if ( !v33 )
      v33 = *(const struct CShape **)(v7 + 8);
    v34 = *(struct CShape **)(v32 + 24);
    Flink = (const struct CMILMatrix *)(v32 + 40);
    v36 = *(_DWORD *)(v32 + 108);
    v37 = *(_BYTE *)(v32 + 116);
    v38 = *(struct CCpuClipAntialiasSink **)v32;
    v130[0] = v34;
  }
  else
  {
    v62 = (struct _LIST_ENTRY *)*((_QWORD *)a1 + 993);
    v37 = 0;
    v33 = *(const struct CShape **)(v7 + 8);
    v63 = *(CVisual **)v7;
    v130[0] = 0LL;
    if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v62->Flink[12].Flink)(v62) )
    {
      v9 = (struct _LIST_ENTRY *)((char *)v63 + 320);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v63);
      if ( TreeDataListHead )
      {
        for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
        {
          if ( i[2].Flink == v62 )
          {
            v9 = i - 22;
            break;
          }
        }
      }
    }
    Flink = (const struct CMILMatrix *)v9[7].Flink;
    v36 = *((_DWORD *)a1 + 59) != 0;
    v38 = 0LL;
  }
  *((_QWORD *)&v131 + 1) = *(_QWORD *)v7;
  *(_QWORD *)&v136.left = v38;
  v128 = v36;
  v39 = v130[0];
  *(_QWORD *)&v131 = 2LL;
  v129 = 0;
  v40 = CScopedClipStack::PushCpuClipToScope(
          (struct CDrawingContext *)((char *)a1 + 736),
          v33,
          v130[0],
          Flink,
          v128,
          v37,
          v38,
          &v129);
  v15 = v40;
  LODWORD(v9) = v40;
  if ( v40 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v40, 0xC41u, 0LL);
LABEL_121:
    v127 = 4360;
    goto LABEL_13;
  }
  if ( *((_DWORD *)a1 + 66) == *((_DWORD *)a1 + 67) )
  {
    v96 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Grow((char *)a1 + 256);
    LODWORD(v9) = v96;
    if ( v96 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v96);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, (int)v9, 0xC44u, 0LL);
      v129 = 0;
      CScopedClipStack::PopCpuClipFromScope((struct CDrawingContext *)((char *)a1 + 736), a1, &v129);
      v15 = (int)v9;
      goto LABEL_121;
    }
  }
  *(_OWORD *)(*((_QWORD *)a1 + 32) + 16LL * (unsigned int)(*((_DWORD *)a1 + 66))++) = v131;
  v41 = *((_DWORD *)a1 + 69);
  if ( v41 <= *((_DWORD *)a1 + 66) )
    v41 = *((_DWORD *)a1 + 66);
  a3 = 0LL;
  LODWORD(v9) = 0;
  *((_DWORD *)a1 + 69) = v41;
  if ( v129 )
    *((_BYTE *)a1 + 8066) = 1;
  if ( *(_QWORD *)(v7 + 24) )
  {
    if ( !v39 )
    {
      v42 = *((_QWORD *)a1 + 93);
      if ( v42 != *((_QWORD *)a1 + 92) )
      {
        if ( *(_QWORD *)(v42 - 176) )
        {
          v68 = *(CShape **)(*((_QWORD *)a1 + 336) - 40LL);
          if ( v68 )
          {
            v69 = *(_QWORD *)v68;
            LODWORD(v130[0]) = 0;
            if ( (*(unsigned __int8 (__fastcall **)(CShape *, struct CShape **))(v69 + 64))(v68, v130)
              && LODWORD(v130[0]) == 1 )
            {
              a3 = 0LL;
            }
            else
            {
              v130[0] = 0LL;
              v103 = CShape::CopyShape(v68, 0LL, v130);
              LODWORD(v9) = v103;
              if ( v103 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v103, 0x1116u, 0LL);
                return (unsigned int)v9;
              }
              *(_QWORD *)&v131 = 0LL;
              BYTE8(v131) = 0;
              CShapePtr::~CShapePtr((CShapePtr *)&v131);
              v104 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 56LL);
              CShapePtr::~CShapePtr((CShapePtr *)(v104 + 24));
              *(struct CShape **)(v104 + 24) = v130[0];
              *(_BYTE *)(v104 + 32) = 1;
              *(_QWORD *)&v131 = 0LL;
              BYTE8(v131) = 0;
              CShapePtr::~CShapePtr((CShapePtr *)&v131);
              a3 = 0LL;
            }
          }
        }
      }
    }
    if ( v37 && !*(_QWORD *)&v136.left )
    {
      v78 = *(_QWORD *)(*((_QWORD *)a1 + 93) - 16LL);
      v79 = *(_QWORD *)(v78 + 24);
      if ( v79 == *(_QWORD *)(v78 + 16) )
        v80 = 0LL;
      else
        v80 = *(struct CCpuClipAntialiasSink **)(v79 - 432);
      CCpuClippingData::SetCachedCpuClipAntialiasSink(*(CCpuClippingData **)(v7 + 24), v80);
    }
  }
LABEL_49:
  v43 = *((_QWORD *)a1 + 93);
  *(_OWORD *)v130 = 0LL;
  if ( v43 != *((_QWORD *)a1 + 92) )
  {
    if ( *(_QWORD *)(v43 - 184) )
    {
      v44 = *((_DWORD *)a1 + 778);
      if ( !v44 )
      {
        si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
        LODWORD(top_low) = _mm_shuffle_ps(si128, si128, 255).m128_u32[0];
        LODWORD(left_low) = _mm_shuffle_ps(si128, si128, 170).m128_u32[0];
        *(__m128 *)v130 = si128;
        goto LABEL_54;
      }
      v45 = *(__m128 *)(*((_QWORD *)a1 + 388) + 16LL * (unsigned int)(v44 - 1));
      LODWORD(top_low) = _mm_shuffle_ps(v45, v45, 255).m128_u32[0];
      *(__m128 *)v130 = v45;
      LODWORD(left_low) = _mm_shuffle_ps(v45, v45, 170).m128_u32[0];
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, struct D2D_RECT_F *))(**(_QWORD **)(v43 - 192) + 88LL))(
        *(_QWORD *)(v43 - 192),
        &v136);
      left_low = (float)SLODWORD(v136.left);
      top_low = (float)SLODWORD(v136.top);
    }
    si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
LABEL_54:
    v47 = *((_QWORD *)a1 + 93);
    if ( v47 == *((_QWORD *)a1 + 92) || !*(_QWORD *)(v47 - 168) )
    {
      v20 = *((float *)v130 + 1);
      v19 = *(float *)v130;
    }
    else
    {
      v17 = *((_DWORD *)a1 + 784);
      if ( v17 )
        v18 = *(__m128 *)(*((_QWORD *)a1 + 391) + 16LL * (unsigned int)(v17 - 1));
      else
        v18 = si128;
      v19 = *(float *)v130;
      if ( v18.m128_f32[0] > *(float *)v130 )
        v19 = v18.m128_f32[0];
      v20 = *((float *)v130 + 1);
      v21 = _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
      v22 = *((float *)v130 + 1);
      if ( v21 > *((float *)v130 + 1) )
      {
        v20 = v21;
        v22 = v21;
      }
      v23 = left_low;
      v24 = _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
      if ( left_low > v24 )
      {
        left_low = v24;
        v23 = v24;
      }
      v26 = _mm_shuffle_ps(v18, v18, 255).m128_f32[0];
      v27 = top_low;
      if ( top_low > v26 )
      {
        top_low = v26;
        v27 = v26;
      }
      if ( v23 <= v19 || v27 <= v22 )
        goto LABEL_75;
    }
    if ( left_low > v19 && top_low > v20 )
      goto LABEL_29;
LABEL_75:
    *v134 = 1;
    return (unsigned int)v9;
  }
LABEL_29:
  v5 = v134;
  v10 = v133;
LABEL_30:
  v29 = *(float *)(v7 + 36);
  if ( v10 )
    goto LABEL_56;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v7 + 36) - 1.0) & v4) < 0.0000011920929 )
    return (unsigned int)v9;
  if ( !*(_BYTE *)(v7 + 189) )
  {
LABEL_56:
    v48 = *(_BYTE *)(v7 + 189) == 0;
    v49 = *(CVisual **)v7;
    v130[0] = 0LL;
    v50 = *((_DWORD *)a1 + 66);
    v51 = *((unsigned int *)a1 + 67);
    *(_QWORD *)&v131 = 8LL;
    *((_QWORD *)&v131 + 1) = v49;
    if ( v48 )
    {
      if ( v50 == (_DWORD)v51 )
      {
        v99 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Grow((char *)a1 + 256);
        LODWORD(v9) = v99;
        if ( v99 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x83,
            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)(unsigned int)v99);
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, (int)v9, 0x11A3u, 0LL);
          v100 = (int)v9;
LABEL_169:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v100, 0x115Du, 0LL);
          goto LABEL_170;
        }
      }
      *(_OWORD *)(*((_QWORD *)a1 + 32) + 16LL * (unsigned int)(*((_DWORD *)a1 + 66))++) = v131;
      v52 = *((_DWORD *)a1 + 69);
      if ( v52 <= *((_DWORD *)a1 + 66) )
        v52 = *((_DWORD *)a1 + 66);
      *((_DWORD *)a1 + 69) = v52;
      if ( *((_DWORD *)a1 + 790) == *((_DWORD *)a1 + 791) )
      {
        v101 = CWatermarkStack<float,64,2,10>::Grow((__int64)a1 + 3152, v51, a3, a4, (const void **)a1 + 394);
        LODWORD(v9) = v101;
        if ( v101 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x83,
            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)(unsigned int)v101);
          v100 = (int)v9;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, (int)v9, 0x11A7u, 0LL);
          v102 = *((_DWORD *)a1 + 66);
          if ( v102 )
            *((_DWORD *)a1 + 66) = v102 - 1;
          goto LABEL_169;
        }
      }
      *(_DWORD *)(*((_QWORD *)a1 + 394) + 4LL * (unsigned int)(*((_DWORD *)a1 + 790))++) = 1065353216;
      v53 = *((_DWORD *)a1 + 793);
      if ( v53 <= *((_DWORD *)a1 + 790) )
        v53 = *((_DWORD *)a1 + 790);
      *((_DWORD *)a1 + 793) = v53;
      v54 = *(_DWORD *)(v7 + 36);
LABEL_64:
      v132 = 0LL;
      v55 = 1;
      v131 = 0LL;
      if ( !v10 )
        goto LABEL_108;
      if ( v130[0] )
        (*(void (__fastcall **)(struct CShape *))(*(_QWORD *)v130[0] + 16LL))(v130[0]);
      v56 = v7 + 108;
      v130[0] = 0LL;
      v57 = *(_BYTE *)(v7 + 173);
      if ( (v57 & 0x20) == 0 && 4 * (v57 & 0xF0) != 0 )
      {
        v59 = (*(__int64 (__fastcall **)(__int64, __int64, struct CShape **))(*(_QWORD *)v10 + 24LL))(v10, v56, v130);
        goto LABEL_72;
      }
      if ( (v57 & 0x20) != 0 )
      {
        v55 = 0;
        v58 = *(__int64 (__fastcall **)(__int64, __int64, struct CShape **))(*(_QWORD *)v10 + 24LL);
      }
      else
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v7 + 136) & v4) * 61440.0)
                                          + (float)(COERCE_FLOAT(*(_DWORD *)(v7 + 120) & v4) * 61440.0))
                                  + COERCE_FLOAT(*(_DWORD *)(v7 + 168) & v4))
                          - 1.0) & v4) >= 0.000081380211 )
        {
          v105 = 0;
          v106 = 16;
        }
        else
        {
          v105 = 1;
          v106 = -16;
        }
        v55 = v105 ^ 1;
        *(_BYTE *)(v7 + 173) = v106 ^ (v57 ^ v106) & 0xCF;
        v58 = *(__int64 (__fastcall **)(__int64, __int64, struct CShape **))(*(_QWORD *)v10 + 24LL);
        if ( !v105 )
          goto LABEL_71;
      }
      v56 = 0LL;
LABEL_71:
      v59 = v58(v10, v56, v130);
LABEL_72:
      LODWORD(v9) = v59;
      if ( v59 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v59, 0x975u, 0LL);
        if ( (_DWORD)v9 != -2003238895 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, (int)v9, 0x1172u, 0LL);
          goto LABEL_111;
        }
        *v5 = 1;
        LODWORD(v9) = 0;
        goto LABEL_221;
      }
      if ( !v55 )
      {
        v70 = *(_DWORD *)(v7 + 112);
        LODWORD(v131) = *(_DWORD *)(v7 + 108);
        *(_QWORD *)((char *)&v131 + 4) = __PAIR64__(*(_DWORD *)(v7 + 124), v70);
        v71 = *(_DWORD *)(v7 + 156);
        HIDWORD(v131) = *(_DWORD *)(v7 + 128);
        v132 = __PAIR64__(*(_DWORD *)(v7 + 160), v71);
      }
LABEL_108:
      v72 = &v131;
      if ( v55 )
        v72 = 0LL;
      v73 = CDrawingContext::PushD2DLayer(
              a1,
              *(struct CVisual **)v7,
              (__int64)v72,
              v54,
              *(_BYTE *)(v7 + 184),
              *(_DWORD *)(v7 + 180));
      LODWORD(v9) = v73;
      if ( v73 >= 0 )
      {
LABEL_111:
        v74 = v130[0];
        if ( !v130[0] )
          return (unsigned int)v9;
LABEL_112:
        v130[0] = 0LL;
        (*(void (__fastcall **)(struct CShape *))(*(_QWORD *)v74 + 16LL))(v74);
        return (unsigned int)v9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v73, 0x1181u, 0LL);
LABEL_221:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v130);
      return (unsigned int)v9;
    }
    if ( v50 == (_DWORD)v51
      && (v107 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Grow((char *)a1 + 256),
          LODWORD(v9) = v107,
          v107 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v107);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, (int)v9, 0x11A3u, 0LL);
      v108 = (int)v9;
    }
    else
    {
      *(_OWORD *)(*((_QWORD *)a1 + 32) + 16LL * (unsigned int)(*((_DWORD *)a1 + 66))++) = v131;
      v75 = *((_DWORD *)a1 + 69);
      if ( v75 <= *((_DWORD *)a1 + 66) )
        v75 = *((_DWORD *)a1 + 66);
      *((_DWORD *)a1 + 69) = v75;
      if ( *((_DWORD *)a1 + 790) != *((_DWORD *)a1 + 791)
        || (v109 = CWatermarkStack<float,64,2,10>::Grow((__int64)a1 + 3152, v51, a3, a4, (const void **)a1 + 394),
            LODWORD(v9) = v109,
            v109 >= 0) )
      {
        *(float *)(*((_QWORD *)a1 + 394) + 4LL * *((unsigned int *)a1 + 790)) = v29;
        v54 = LODWORD(FLOAT_1_0);
        v76 = *((_DWORD *)a1 + 793);
        if ( v76 <= ++*((_DWORD *)a1 + 790) )
          v76 = *((_DWORD *)a1 + 790);
        *((_DWORD *)a1 + 793) = v76;
        goto LABEL_64;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v109);
      v108 = (int)v9;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, (int)v9, 0x11A7u, 0LL);
      v110 = *((_DWORD *)a1 + 66);
      if ( v110 )
        *((_DWORD *)a1 + 66) = v110 - 1;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v108, 0x1156u, 0LL);
LABEL_170:
    v74 = v130[0];
    if ( !v130[0] )
      return (unsigned int)v9;
    goto LABEL_112;
  }
  v64 = *((_DWORD *)a1 + 790);
  if ( v64 )
    v6 = *(float *)(*((_QWORD *)a1 + 394) + 4LL * (unsigned int)(v64 - 1));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v29 - v6) & v4) > 0.0000011920929 )
  {
    *((_QWORD *)&v131 + 1) = *(_QWORD *)v7;
    *(float *)v130 = v29;
    *(_QWORD *)&v131 = 8LL;
    v65 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((__int64)a1 + 256, &v131);
    v15 = v65;
    LODWORD(v9) = v65;
    if ( v65 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v65, 0x11A3u, 0LL);
    }
    else
    {
      v66 = CWatermarkStack<float,64,2,10>::Push((char *)a1 + 3152, v130);
      v15 = v66;
      LODWORD(v9) = v66;
      if ( v66 < 0
        && (MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v66, 0x11A7u, 0LL), (v67 = *((_DWORD *)a1 + 66)) != 0) )
      {
        *((_DWORD *)a1 + 66) = v67 - 1;
      }
      else
      {
        LODWORD(v9) = v15;
        if ( v15 >= 0 )
          return (unsigned int)v9;
      }
    }
    v127 = 4494;
    goto LABEL_13;
  }
  return (unsigned int)v9;
}
