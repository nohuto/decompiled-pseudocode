/*
 * XREFs of ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180027C60
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x180026DF0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x180018330 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?InputTransparencyEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x180026998 (-InputTransparencyEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180026C60 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029120 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800416D0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x1800AF130 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x1800CAED0 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1800CF688 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D49F0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800D4BB0 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?Grow@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x18015DB70 (-Grow@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x18016C150 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x180178260 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x18019A794 (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHitTestContext::PreSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 *v3; // rdi
  __int64 *v5; // rbx
  __int64 *v6; // rax
  unsigned int v9; // esi
  char *v10; // rcx
  int v11; // r12d
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  _BYTE *v17; // r8
  __int64 v18; // rcx
  __int64 ****v19; // rdx
  __int64 ***v20; // rcx
  __int64 **i; // rax
  _DWORD *v22; // rdx
  __int64 v23; // rax
  _BYTE *v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  struct CInteraction *InteractionInternal; // rax
  unsigned int v28; // ebx
  struct CInteraction *v29; // r12
  int v30; // ecx
  bool v31; // zf
  char v32; // r12
  __int64 v33; // rax
  struct CMILMatrix *v34; // rcx
  int WorldTransform; // eax
  CVisual *v36; // rcx
  int v37; // eax
  float v38; // xmm1_4
  float v39; // xmm1_4
  __int64 v40; // r8
  _BYTE *v41; // r10
  __int64 v42; // rcx
  _BYTE *v43; // rax
  _QWORD *v44; // r9
  bool v45; // al
  int v46; // r12d
  int v47; // r12d
  CGeometry *v48; // rcx
  _DWORD *v49; // rdx
  __int64 v50; // rax
  _BYTE *v51; // r8
  __int64 v52; // rcx
  _QWORD **v53; // rbx
  _QWORD *v54; // rbx
  int ShapeData; // eax
  CGeometry *v56; // rcx
  float v57; // xmm7_4
  float v58; // xmm8_4
  float v59; // xmm4_4
  float v60; // xmm3_4
  float v61; // xmm5_4
  float v62; // xmm2_4
  float v63; // xmm6_4
  float v64; // xmm0_4
  float v65; // xmm1_4
  int v66; // eax
  BOOL v67; // eax
  bool v68; // al
  _DWORD *v69; // rdx
  __int64 v70; // rcx
  unsigned __int64 v71; // rax
  bool v72; // bl
  char v73; // al
  struct TransformParentData *TransformParentDataInternal; // rax
  __int64 v75; // rbx
  struct CTreeData *TreeData; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  _DWORD *v79; // rdx
  __int64 v80; // rax
  _BYTE *v81; // r8
  __int64 v82; // rcx
  _QWORD *v83; // rcx
  void (__fastcall ***v84)(_QWORD, struct D2D_POINT_2F *); // rcx
  CGeometry *v85; // rsi
  __int64 v86; // rbx
  int v87; // eax
  int v88; // eax
  __int64 v89; // rcx
  void (__fastcall ***v90)(_QWORD, struct D2D_POINT_2F *); // rcx
  int v91; // eax
  unsigned int BspPolygonListCount; // ebx
  _QWORD *BspPolygonList; // rax
  int v94; // eax
  __int64 v95; // r8
  int v96; // ecx
  int v97; // ecx
  bool v98; // [rsp+30h] [rbp-D0h] BYREF
  char v99; // [rsp+31h] [rbp-CFh]
  struct D2D_POINT_2F v100; // [rsp+38h] [rbp-C8h] BYREF
  BOOL v101; // [rsp+40h] [rbp-C0h]
  CGeometry *v102; // [rsp+48h] [rbp-B8h]
  CGeometry *v103; // [rsp+50h] [rbp-B0h] BYREF
  char v104; // [rsp+58h] [rbp-A8h]
  __int64 *v105; // [rsp+60h] [rbp-A0h]
  float v106[3]; // [rsp+70h] [rbp-90h] BYREF
  float v107; // [rsp+7Ch] [rbp-84h]
  float v108; // [rsp+80h] [rbp-80h]
  float v109; // [rsp+84h] [rbp-7Ch]
  float v110; // [rsp+8Ch] [rbp-74h]
  float v111; // [rsp+A0h] [rbp-60h]
  float v112; // [rsp+A4h] [rbp-5Ch]
  float v113; // [rsp+ACh] [rbp-54h]
  _BYTE v114[64]; // [rsp+C0h] [rbp-40h] BYREF
  int v115; // [rsp+100h] [rbp+0h]
  _BYTE v116[64]; // [rsp+110h] [rbp+10h] BYREF
  int v117; // [rsp+150h] [rbp+50h]
  __int128 v118; // [rsp+160h] [rbp+60h] BYREF
  __int128 v119; // [rsp+170h] [rbp+70h] BYREF
  __int64 v120; // [rsp+180h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v3 = (__int64 *)*((_QWORD *)this + 2);
  v102 = (CGeometry *)*((_QWORD *)this + 3);
  v5 = 0LL;
  v6 = *(__int64 **)a2;
  v105 = 0LL;
  v9 = 0;
  if ( ((unsigned __int8 (__fastcall *)(const struct CVisualTree *))v6[24])(a2) )
  {
    v5 = v3 + 40;
LABEL_3:
    v105 = v5;
    goto LABEL_4;
  }
  v15 = v3[28];
  if ( *(int *)v15 < 0 )
  {
    v16 = *(unsigned int *)(v15 + 4);
    v17 = (_BYTE *)(v15 + 8);
    v18 = 0LL;
    if ( (_DWORD)v16 )
    {
      while ( *v17 != 1 )
      {
        v18 = (unsigned int)(v18 + 1);
        ++v17;
        if ( (unsigned int)v18 >= (unsigned int)v16 )
          goto LABEL_79;
      }
    }
    else
    {
LABEL_79:
      if ( (unsigned int)v18 >= (unsigned int)v16 )
      {
        v19 = 0LL;
LABEL_23:
        v20 = *v19;
        if ( *v19 )
        {
          for ( i = *v20; i != (__int64 **)v20; i = (__int64 **)*i )
          {
            if ( i[4] == (__int64 *)a2 )
            {
              v5 = (__int64 *)(i - 44);
              goto LABEL_3;
            }
          }
        }
        goto LABEL_3;
      }
    }
    v19 = (__int64 ****)(v15 + ((v16 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v18);
    goto LABEL_23;
  }
LABEL_4:
  v10 = (char *)a2 + 80;
  if ( v3 != *((__int64 **)a2 + 9) )
    v10 = (char *)v3 + 148;
  v119 = *(_OWORD *)v10;
  v120 = *((_QWORD *)v10 + 2);
  *((_BYTE *)v3 + 104) = 0;
  *((_BYTE *)v5 + 14) = 0;
  *a3 = 1;
  v11 = *((_DWORD *)v3 + 52);
  if ( v11 != -1 )
  {
    if ( *((_DWORD *)this + 44) == *((_DWORD *)this + 45)
      && (v91 = CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Grow((char *)this + 168), v91 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v91,
        (_DWORD)this + 168);
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)this + 21) + 4LL * *((unsigned int *)this + 44)) = v11;
      v12 = *((_DWORD *)this + 47);
      if ( v12 <= ++*((_DWORD *)this + 44) )
        v12 = *((_DWORD *)this + 44);
      *((_DWORD *)this + 47) = v12;
    }
  }
  v13 = *((float *)&v120 + 1) <= *(float *)&v120;
  if ( *((float *)&v119 + 2) <= *(float *)&v119 )
    ++v13;
  if ( *((float *)&v119 + 3) <= *((float *)&v119 + 1) )
    ++v13;
  if ( v13 > 1 || (*((_BYTE *)v3 + 101) & 8) != 0 )
    goto LABEL_17;
  if ( *((_DWORD *)v3 + 27) )
    goto LABEL_29;
  v49 = (_DWORD *)v3[28];
  if ( (*v49 & 0x1000000) == 0 )
    goto LABEL_29;
  v50 = (unsigned int)v49[1];
  v51 = v49 + 2;
  v52 = 0LL;
  if ( (_DWORD)v50 )
  {
    while ( *v51 != 8 )
    {
      v52 = (unsigned int)(v52 + 1);
      ++v51;
      if ( (unsigned int)v52 >= (unsigned int)v50 )
        goto LABEL_168;
    }
  }
  else
  {
LABEL_168:
    if ( (unsigned int)v52 >= (unsigned int)v50 )
    {
      v53 = 0LL;
      goto LABEL_85;
    }
  }
  v53 = (_QWORD **)((char *)&v49[2 * v52] + ((v50 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_85:
  v54 = *v53;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v54 + 64LL))(v54, 148LL) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v54 + 64LL))(v54, 48LL) )
      goto LABEL_29;
    v54 = (_QWORD *)v54[11];
  }
  if ( v54 )
  {
LABEL_17:
    *a3 = 0;
    return v9;
  }
LABEL_29:
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2)
    && v3 != *((__int64 **)a2 + 9) )
  {
    TransformParentDataInternal = CVisual::GetTransformParentDataInternal((CVisual *)v3);
    if ( TransformParentDataInternal )
    {
      v75 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)TransformParentDataInternal + 192LL))(*(_QWORD *)TransformParentDataInternal);
      if ( v75 )
      {
        TreeData = CVisual::FindTreeData((CVisual *)v3, a2);
        if ( TreeData )
        {
          if ( !*((_BYTE *)TreeData + 12) )
          {
            v77 = v75;
            while ( v75 )
            {
              if ( v75 == *((_QWORD *)a2 + 9) )
                goto LABEL_30;
              if ( v77 )
              {
                v78 = *(_QWORD *)(v77 + 88);
                v77 = v78;
                if ( v78 )
                {
                  if ( v75 == v78 )
                    break;
                  v77 = *(_QWORD *)(v78 + 88);
                  if ( v75 == v77 )
                    break;
                }
              }
              v75 = *(_QWORD *)(v75 + 88);
            }
            goto LABEL_17;
          }
        }
      }
    }
  }
LABEL_30:
  v22 = (_DWORD *)v3[28];
  if ( (*v22 & 0x2000000) == 0 )
    goto LABEL_47;
  v23 = (unsigned int)v22[1];
  v24 = v22 + 2;
  v25 = 0LL;
  if ( (_DWORD)v23 )
  {
    while ( *v24 != 7 )
    {
      v25 = (unsigned int)(v25 + 1);
      ++v24;
      if ( (unsigned int)v25 >= (unsigned int)v23 )
        goto LABEL_113;
    }
  }
  else
  {
LABEL_113:
    if ( (unsigned int)v25 >= (unsigned int)v23 )
    {
      v26 = 0LL;
      goto LABEL_34;
    }
  }
  v26 = (unsigned __int64)&v22[2 * v25] + ((v23 + 15) & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_34:
  if ( !*(_QWORD *)v26 || (*(_BYTE *)(*(_QWORD *)v26 + 200LL) & 8) == 0 )
    goto LABEL_47;
  InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v3);
  v28 = *((_DWORD *)this + 22);
  v29 = InteractionInternal;
  if ( v28 == 6
    && !(*(unsigned int (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*((_QWORD *)InteractionInternal + 9) + 88LL))(
          (__int64)InteractionInternal + 72,
          6LL,
          *((unsigned int *)this + 23),
          0LL) )
  {
    v28 = 5;
  }
  v30 = *((_DWORD *)this + 22);
  if ( v30 != 3 )
  {
    v96 = v30 - 2;
    if ( v96 )
    {
      v97 = v96 - 2;
      if ( v97 )
      {
        if ( (unsigned int)(v97 - 1) > 1 )
          goto LABEL_41;
      }
    }
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)v29 + 9) + 80LL))(
          (__int64)v29 + 72,
          v28,
          0LL) )
    goto LABEL_41;
  if ( v28 != 6 )
  {
    if ( v28 == 4 )
    {
      v95 = *((unsigned int *)this + 24);
      if ( (_DWORD)v95
        && !(*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*((_QWORD *)v29 + 9) + 88LL))(
              (__int64)v29 + 72,
              4LL,
              v95,
              0LL) )
      {
        goto LABEL_41;
      }
LABEL_46:
      InputTraceLogging::DWM::InputTransparencyEvaluation(v29, 1u);
      goto LABEL_47;
    }
    if ( v28 != 5 )
      goto LABEL_46;
  }
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v29 + 9) + 88LL))(
         (__int64)v29 + 72,
         v28,
         *((unsigned int *)this + 23),
         0LL) )
  {
    goto LABEL_46;
  }
LABEL_41:
  InputTraceLogging::DWM::InputTransparencyEvaluation(v29, 0);
  if ( *((_BYTE *)this + 120) || *((_DWORD *)this + 22) != 2 || (*((_BYTE *)v29 + 200) & 3) == 0 )
    goto LABEL_17;
  if ( !*((_QWORD *)this + 14) )
    *((_QWORD *)this + 14) = v3;
LABEL_47:
  if ( !*a3 )
    return v9;
  v31 = *((_DWORD *)v3 + 27) == 1;
  v117 = 0;
  if ( !v31 )
  {
    v32 = 0;
    goto LABEL_50;
  }
  v72 = v102 && *((_DWORD *)v102 + 27) == 1;
  if ( (*(__int64 (__fastcall **)(__int64 *))(*v3 + 232))(v3) )
    goto LABEL_126;
  v79 = (_DWORD *)v3[28];
  if ( (*v79 & 0x1000000) != 0 )
  {
    v80 = (unsigned int)v79[1];
    v81 = v79 + 2;
    v82 = 0LL;
    if ( (_DWORD)v80 )
    {
      while ( *v81 != 8 )
      {
        v82 = (unsigned int)(v82 + 1);
        ++v81;
        if ( (unsigned int)v82 >= (unsigned int)v80 )
          goto LABEL_165;
      }
    }
    else
    {
LABEL_165:
      if ( (unsigned int)v82 >= (unsigned int)v80 )
      {
        v83 = 0LL;
LABEL_148:
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v83 + 64LL))(*v83, 51LL) )
        {
LABEL_126:
          v73 = 1;
          goto LABEL_127;
        }
        goto LABEL_149;
      }
    }
    v83 = (_QWORD *)((char *)&v79[2 * v82] + ((v80 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_148;
  }
LABEL_149:
  v73 = 0;
LABEL_127:
  if ( v72 )
  {
    if ( !v73 )
    {
LABEL_129:
      v32 = 0;
      goto LABEL_50;
    }
  }
  else if ( !(unsigned int)detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size(v3 + 10) )
  {
    goto LABEL_129;
  }
  v32 = 1;
LABEL_50:
  v33 = *v3;
  v99 = v32;
  v102 = (CGeometry *)(*(__int64 (__fastcall **)(__int64 *))(v33 + 216))(v3);
  v34 = (struct CMILMatrix *)v106;
  if ( !v102 )
    v34 = 0LL;
  WorldTransform = CVisual::GetWorldTransform((CVisual *)v3, a2, (struct CMILMatrix *)v116, &v98, v34);
  v9 = WorldTransform;
  if ( WorldTransform < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WorldTransform, 0x88u, 0LL);
    return v9;
  }
  if ( v3 != *((__int64 **)a2 + 9) )
  {
    v36 = (CVisual *)v3[11];
    v115 = 0;
    v37 = CVisual::GetWorldTransform(v36, a2, (struct CMILMatrix *)v114, 0LL, 0LL);
    v9 = v37;
    if ( v37 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x8Fu, 0LL);
      return v9;
    }
    CMILMatrix::Transform3DBoundsHelper<1>(v114, &v119, &v119);
  }
  v38 = *((float *)this + 20);
  if ( v38 < *(float *)&v119
    || *((float *)&v119 + 2) <= v38
    || (v39 = *((float *)this + 21), v39 < *((float *)&v119 + 1))
    || *((float *)&v119 + 3) <= v39 )
  {
    if ( v32 )
      return v9;
LABEL_72:
    *a3 = *((_BYTE *)v3 + 104);
    return v9;
  }
  v69 = (_DWORD *)v3[28];
  if ( (*v69 & 0x2000000) == 0 )
    goto LABEL_68;
  v40 = (unsigned int)v69[1];
  v41 = v69 + 2;
  v42 = 0LL;
  if ( (_DWORD)v40 )
  {
    v43 = v69 + 2;
    while ( *v43 != 7 )
    {
      v42 = (unsigned int)(v42 + 1);
      ++v43;
      if ( (unsigned int)v42 >= (unsigned int)v40 )
        goto LABEL_75;
    }
    goto LABEL_66;
  }
LABEL_75:
  if ( (unsigned int)v42 < (unsigned int)v40 )
  {
LABEL_66:
    v44 = (_QWORD *)((char *)&v69[2 * v42] + ((v40 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_67;
  }
  v44 = 0LL;
LABEL_67:
  if ( !*v44 )
  {
LABEL_68:
    v45 = 0;
    goto LABEL_69;
  }
  v70 = 0LL;
  if ( (_DWORD)v40 )
  {
    while ( *v41 != 7 )
    {
      v70 = (unsigned int)(v70 + 1);
      ++v41;
      if ( (unsigned int)v70 >= (unsigned int)v40 )
        goto LABEL_157;
    }
    goto LABEL_119;
  }
LABEL_157:
  if ( (unsigned int)v70 < (unsigned int)v40 )
  {
LABEL_119:
    v71 = (unsigned __int64)&v69[2 * v70] + ((v40 + 15) & 0xFFFFFFFFFFFFFFF8uLL);
    goto LABEL_120;
  }
  v71 = 0LL;
LABEL_120:
  if ( !*(_QWORD *)(*(_QWORD *)v71 + 288LL) )
    goto LABEL_68;
  v45 = 1;
LABEL_69:
  v46 = *((_DWORD *)this + 54);
  v100 = 0LL;
  v47 = v46 & 2;
  v48 = v102;
  v98 = v45;
  *((_BYTE *)v3 + 104) = 1;
  if ( v48 )
  {
    v103 = 0LL;
    v104 = 0;
    ShapeData = CGeometry::GetShapeData(v48, (const struct D2D_SIZE_F *)((char *)v3 + 140), (struct CShapePtr *)&v103);
    v9 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0xA5u, 0LL);
      goto LABEL_103;
    }
    v56 = v103;
    v102 = v103;
    if ( !v103
      || (v57 = *((float *)this + 20),
          v58 = *((float *)this + 21),
          v59 = (float)(v110 * v58) - v109,
          v60 = (float)(v110 * v57) - v108,
          v61 = (float)(v107 * v57) - v106[0],
          v62 = (float)(v107 * v58) - v106[1],
          (float)(v59 * v61) == (float)(v60 * v62)) )
    {
LABEL_109:
      if ( v104 && v56 )
        (**(void (__fastcall ***)(CGeometry *, __int64))v56)(v56, 1LL);
      goto LABEL_71;
    }
    v63 = (float)(v59 * v61) - (float)(v60 * v62);
    v101 = 0;
    LODWORD(v118) = 0;
    v64 = (float)(v113 * v57) - v111;
    v65 = (float)(v113 * v58) - v112;
    v100.x = (float)((float)(v60 * v65) - (float)(v59 * v64)) / v63;
    v100.y = (float)((float)(v62 * v64) - (float)(v61 * v65)) / v63;
    if ( (*(unsigned __int8 (__fastcall **)(CGeometry *, __int128 *))(*(_QWORD *)v103 + 64LL))(v103, &v118)
      && (_DWORD)v118 == 1 )
    {
      v118 = 0LL;
      v66 = (*(__int64 (__fastcall **)(CGeometry *, __int128 *, _QWORD))(*(_QWORD *)v102 + 48LL))(v102, &v118, 0LL);
      v9 = v66;
      if ( v66 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v66, 0x77u, 0LL);
      }
      else
      {
        v67 = 0;
        if ( v100.x >= *(float *)&v118 && *((float *)&v118 + 2) > v100.x && v100.y >= *((float *)&v118 + 1) )
          v67 = *((float *)&v118 + 3) > v100.y;
        v101 = v67;
      }
      goto LABEL_101;
    }
    v85 = v102;
    *(_QWORD *)&v118 = 0LL;
    v86 = *(_QWORD *)v102;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v118);
    v87 = (*(__int64 (__fastcall **)(CGeometry *, _QWORD, __int128 *))(v86 + 24))(v85, 0LL, &v118);
    v9 = v87;
    if ( v87 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v87, 0x7Eu, 0LL);
    }
    else
    {
      v88 = (*(__int64 (__fastcall **)(_QWORD, struct D2D_POINT_2F, _QWORD))(*(_QWORD *)v118 + 56LL))(v118, v100, 0LL);
      v9 = v88;
      if ( v88 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v88, 0x80u, 0LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v118);
LABEL_101:
        v68 = v101;
        if ( (v9 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x172u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xADu, 0LL);
LABEL_103:
          if ( v104 && v103 )
            (**(void (__fastcall ***)(CGeometry *, __int64))v103)(v103, 1LL);
          return v9;
        }
        *((_BYTE *)v3 + 104) = v68;
        if ( v68 && v98 )
        {
          if ( v47 )
          {
            v84 = (void (__fastcall ***)(_QWORD, struct D2D_POINT_2F *))*((_QWORD *)CVisual::GetInteractionInternal((CVisual *)v3)
                                                                        + 36);
            if ( v84 )
              (**v84)(v84, &v100);
          }
        }
        v56 = v103;
        goto LABEL_109;
      }
    }
    v89 = v118;
    if ( (_QWORD)v118 )
    {
      *(_QWORD *)&v118 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 16LL))(v89);
    }
    goto LABEL_101;
  }
  if ( v45 )
  {
    if ( v47 )
    {
      if ( CHitTestContext::GetPointInLocalSpace(
             (const struct D2D_POINT_2F *)this + 10,
             (const struct CMILMatrix *)v116,
             &v100) )
      {
        v90 = (void (__fastcall ***)(_QWORD, struct D2D_POINT_2F *))*((_QWORD *)CVisual::GetInteractionInternal((CVisual *)v3)
                                                                    + 36);
        if ( v90 )
          (**v90)(v90, &v100);
      }
    }
  }
LABEL_71:
  if ( !v99 )
    goto LABEL_72;
  if ( CVisual::HasBspPolygonList((CVisual *)v3) && *((_BYTE *)v3 + 104) )
  {
    v115 = 0;
    v98 = 0;
    CVisual::CalcTransform((CVisual *)v3, a2, 0LL, &v98, (struct CMILMatrix *)v114, 0LL);
    CMatrixStack::Push((CHitTestContext *)((char *)this + 192), (const struct CMILMatrix *)v114, 0);
    *((_BYTE *)v105 + 14) = 1;
    BspPolygonListCount = CVisual::GetBspPolygonListCount((CVisual *)v3);
    while ( BspPolygonListCount && !*((_QWORD *)this + 13) )
    {
      --BspPolygonListCount;
      BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList(v3);
      v94 = CHitTestContext::BspHitTest(
              this,
              (const struct CMILMatrix *)v116,
              *(struct CPolygon **)(*BspPolygonList + 8LL * BspPolygonListCount));
      v9 = v94;
      if ( v94 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v94, 0xD4u, 0LL);
        return v9;
      }
    }
  }
  *a3 = 0;
  return v9;
}
