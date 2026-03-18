/*
 * XREFs of ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x1800CC140
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800416D0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180063BB0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180074F30 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800B5B10 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CC0E0 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800CDD20 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800CF010 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D49F0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18014C07C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18014EE20 (-UnionUnsafe@-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeed.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPreComputeContext::ProcessPostSubgraphWindowBackdropInput(
        CPreComputeContext *this,
        struct CVisual *a2)
{
  unsigned int v2; // r15d
  char v3; // r12
  __m128 si128; // xmm12
  struct CVisual *v5; // rbx
  __int64 v6; // r13
  float x; // xmm7_4
  float y; // xmm8_4
  float v9; // xmm9_4
  float v10; // xmm10_4
  struct _LIST_ENTRY *v11; // rdi
  struct _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *v13; // rdi
  const struct CVisualTree *v14; // rsi
  _DWORD *v15; // rdx
  CVisual *v16; // r14
  __int64 v17; // rax
  _BYTE *v18; // r8
  __int64 v19; // rcx
  _QWORD **v20; // rcx
  _QWORD *v21; // rcx
  CVisual **v22; // rdx
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm6_4
  float v26; // xmm1_4
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v28; // r10
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *v30; // rax
  struct _LIST_ENTRY *j; // rcx
  CGeometry *v32; // rcx
  void (__fastcall ***v33)(_QWORD, __int64); // rcx
  int v34; // eax
  float v36; // xmm3_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  __int64 v39; // xmm1_8
  float v40; // xmm1_4
  float v41; // xmm0_4
  float v42; // xmm3_4
  float v43; // xmm2_4
  float v44; // xmm6_4
  float v45; // xmm5_4
  unsigned int v46; // eax
  struct CWindowBackgroundTreatment *v47; // rax
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  struct Windows::Foundation::Numerics::float4x4 *v49; // r8
  bool v50; // al
  const struct CMILMatrix *TopByReference; // rax
  _QWORD v52[3]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v53; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+68h] [rbp-A0h]
  void (__fastcall ***v55)(_QWORD, __int64); // [rsp+78h] [rbp-90h] BYREF
  char v56; // [rsp+80h] [rbp-88h]
  __m128 v57; // [rsp+88h] [rbp-80h] BYREF
  __int128 v58; // [rsp+98h] [rbp-70h]
  __int128 v59; // [rsp+A8h] [rbp-60h]
  __int128 v60; // [rsp+B8h] [rbp-50h]
  int v61; // [rsp+C8h] [rbp-40h]
  CPreComputeContext *v62; // [rsp+D8h] [rbp-30h]
  struct CVisual *v63; // [rsp+E0h] [rbp-28h]
  _OWORD v64[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v65; // [rsp+128h] [rbp+20h]
  _BYTE v66[64]; // [rsp+138h] [rbp+30h] BYREF
  int v67; // [rsp+178h] [rbp+70h]
  struct D2D_POINT_2F v68[2]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v69; // [rsp+198h] [rbp+90h]

  v2 = 0;
  v3 = 0;
  si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
  v5 = a2;
  v6 = *((_QWORD *)this + 1);
  v65 = 10666;
  v64[0] = _mm_load_si128((const __m128i *)&_xmm);
  v64[1] = _mm_load_si128((const __m128i *)&_xmm);
  v63 = a2;
  v62 = this;
  v64[2] = _mm_load_si128((const __m128i *)&_xmm);
  v64[3] = _mm_load_si128((const __m128i *)&_xmm);
  *(__m128 *)&v52[1] = si128;
  if ( !a2 )
    return 0LL;
  x = *(float *)&v52[1];
  y = *((float *)&v52[1] + 1);
  v9 = *(float *)&v52[2];
  v10 = *((float *)&v52[2] + 1);
  while ( (**((_DWORD **)v5 + 28) & 0x800000) == 0 )
  {
    v11 = *(struct _LIST_ENTRY **)(v6 - 24);
    if ( !((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v11->Flink[12].Flink)(v11) )
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v5);
      v28 = TreeDataListHead;
      if ( TreeDataListHead )
      {
        for ( i = TreeDataListHead->Flink; i != v28; i = i->Flink )
        {
          v12 = i - 22;
          if ( i[2].Flink == v11 )
          {
            v13 = (struct _LIST_ENTRY *)((char *)v5 + 320);
            goto LABEL_6;
          }
        }
      }
      goto LABEL_19;
    }
    v12 = (struct _LIST_ENTRY *)((char *)v5 + 320);
    v13 = (struct _LIST_ENTRY *)((char *)v5 + 320);
LABEL_6:
    if ( !v12 )
      goto LABEL_19;
    v14 = *(const struct CVisualTree **)(v6 - 24);
    if ( v5 == *((struct CVisual **)v14 + 9) )
      goto LABEL_19;
    v15 = (_DWORD *)*((_QWORD *)v5 + 28);
    v16 = 0LL;
    if ( (*v15 & 0x4000000) != 0 )
    {
      v17 = (unsigned int)v15[1];
      v18 = v15 + 2;
      v19 = 0LL;
      if ( (_DWORD)v17 )
      {
        while ( *v18 != 6 )
        {
          v19 = (unsigned int)(v19 + 1);
          ++v18;
          if ( (unsigned int)v19 >= (unsigned int)v17 )
            goto LABEL_42;
        }
LABEL_11:
        v20 = (_QWORD **)((char *)&v15[2 * v19] + ((v17 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      else
      {
LABEL_42:
        if ( (unsigned int)v19 < (unsigned int)v17 )
          goto LABEL_11;
        v20 = 0LL;
      }
      v21 = *v20;
      if ( v21 )
        v16 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v21 + 192LL))(*v21);
    }
    if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v14 + 192LL))(v14) )
    {
      v30 = CVisual::GetTreeDataListHead(v5);
      if ( v30 )
      {
        for ( j = v30->Flink; j != v30; j = j->Flink )
        {
          v13 = j - 22;
          if ( (const struct CVisualTree *)j[2].Flink == v14 )
            goto LABEL_15;
        }
      }
LABEL_18:
      (*(void (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v14 + 192LL))(v14);
LABEL_19:
      v22 = *(CVisual ***)(v6 - 24);
      LOBYTE(v52[0]) = 0;
      v61 = 0;
      v67 = 0;
      CVisual::CalcTransform(v5, v22, 0LL, (bool *)v52, (struct CMILMatrix *)&v57, (struct CMILMatrix *)v66);
      if ( !v3 )
        CMILMatrix::Multiply((const struct CMILMatrix *)v64, &v57, (struct CMILMatrix *)v64);
      if ( (x > -3.4028235e38 || v9 < 3.4028235e38) && (y > -3.4028235e38 || v10 < 3.4028235e38) )
      {
        if ( (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(&v57) )
        {
          x = x + *(float *)&v60;
          y = y + *((float *)&v60 + 1);
          v9 = v9 + *(float *)&v60;
          v10 = v10 + *((float *)&v60 + 1);
          v52[1] = __PAIR64__(LODWORD(y), LODWORD(x));
          v52[2] = __PAIR64__(LODWORD(v10), LODWORD(v9));
        }
        else if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)&v57) )
        {
          v23 = (float)(v57.m128_f32[0] * x) + *(float *)&v60;
          v24 = (float)(*((float *)&v58 + 1) * y) + *((float *)&v60 + 1);
          v25 = (float)(v57.m128_f32[0] * v9) + *(float *)&v60;
          *(float *)&v52[1] = v23;
          x = v23;
          *((float *)&v52[1] + 1) = v24;
          y = v24;
          v26 = (float)(*((float *)&v58 + 1) * v10) + *((float *)&v60 + 1);
          *(float *)&v52[2] = v25;
          v9 = v25;
          *((float *)&v52[2] + 1) = v26;
          v10 = v26;
          if ( v57.m128_f32[0] <= 0.0 || *((float *)&v58 + 1) <= 0.0 )
          {
            if ( v23 > v25 )
            {
              *(float *)&v52[1] = v25;
              x = v25;
              *(float *)&v52[2] = v23;
              v9 = v23;
            }
            if ( v24 > v26 )
            {
              *((float *)&v52[1] + 1) = v26;
              y = v26;
              *((float *)&v52[2] + 1) = v24;
              v10 = v24;
            }
          }
        }
        else
        {
          CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)&v57, (const struct D2D_RECT_F *)&v52[1], v68);
          *(_QWORD *)&v53 = 4LL;
          *((_QWORD *)&v53 + 1) = v68;
          TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
            &v52[1],
            &v53);
          v10 = *((float *)&v52[2] + 1);
          v9 = *(float *)&v52[2];
          y = *((float *)&v52[1] + 1);
          x = *(float *)&v52[1];
        }
      }
      v32 = (CGeometry *)*((_QWORD *)v5 + 30);
      if ( !v32 )
        goto LABEL_54;
      v55 = 0LL;
      v56 = 0;
      if ( (int)CGeometry::GetShapeData(v32, (const struct D2D_SIZE_F *)((char *)v5 + 140), (struct CShapePtr *)&v55) < 0 )
      {
LABEL_51:
        v33 = v55;
      }
      else
      {
        v33 = v55;
        *(_OWORD *)&v68[0].x = 0LL;
        if ( v55 )
        {
          v34 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64), struct D2D_POINT_2F *, _BYTE *))(*v55)[6])(
                  v55,
                  v68,
                  v66);
          if ( v34 >= 0 )
          {
            if ( v68[0].x > x )
            {
              *(FLOAT *)&v52[1] = v68[0].x;
              x = v68[0].x;
            }
            v36 = y;
            if ( v68[0].y > y )
            {
              HIDWORD(v52[1]) = LODWORD(v68[0].y);
              y = v68[0].y;
              v36 = v68[0].y;
            }
            v37 = v9;
            if ( v9 > v68[1].x )
            {
              *(FLOAT *)&v52[2] = v68[1].x;
              v9 = v68[1].x;
              v37 = v68[1].x;
            }
            v38 = v10;
            if ( v10 > v68[1].y )
            {
              HIDWORD(v52[2]) = LODWORD(v68[1].y);
              v10 = v68[1].y;
              v38 = v68[1].y;
            }
            if ( v37 <= x || v38 <= v36 )
            {
              x = 0.0;
              v52[1] = 0LL;
              v10 = 0.0;
              v52[2] = 0LL;
              v9 = 0.0;
              y = 0.0;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0x137u, 0LL);
          }
          goto LABEL_51;
        }
      }
      if ( v56 && v33 )
        (**v33)(v33, 1LL);
      v55 = 0LL;
      v56 = 0;
      goto LABEL_54;
    }
LABEL_15:
    if ( !v13 || !BYTE4(v13->Blink) || !v16 )
      goto LABEL_18;
    CVisual::FindTreeData(v16, v14);
    LODWORD(v10) = _mm_shuffle_ps(si128, si128, 255).m128_u32[0];
    LODWORD(v9) = _mm_shuffle_ps(si128, si128, 170).m128_u32[0];
    v3 = 1;
    LODWORD(y) = _mm_shuffle_ps(si128, si128, 85).m128_u32[0];
    x = si128.m128_f32[0];
    *(__m128 *)&v52[1] = si128;
LABEL_54:
    v5 = (struct CVisual *)*((_QWORD *)v5 + 11);
    if ( !v5 )
      return 0LL;
  }
  if ( !v3 )
    goto LABEL_76;
  WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v5);
  v57 = *((__m128 *)WindowBackgroundTreatmentInternal + 10);
  v58 = *((_OWORD *)WindowBackgroundTreatmentInternal + 11);
  v59 = *((_OWORD *)WindowBackgroundTreatmentInternal + 12);
  v60 = *((_OWORD *)WindowBackgroundTreatmentInternal + 13);
  v61 = *((_DWORD *)WindowBackgroundTreatmentInternal + 56);
  v50 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)&v57, &v57, v49);
  LOWORD(v61) = v61 & 0xC003;
  if ( v50 )
  {
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(*(_QWORD *)v62 + 272LL));
    CMILMatrix::Multiply(TopByReference, &v57, (struct CMILMatrix *)v64);
LABEL_76:
    v54 = 0LL;
    v39 = *(_QWORD *)((char *)v63 + 188);
    *(_OWORD *)&v68[0].x = *(_OWORD *)((char *)v63 + 172);
    v69 = v39;
    v53 = 0LL;
    CMILMatrix::Transform3DBoundsHelper<0>((__int64)v64, (float *)v68, (float *)&v53);
    if ( (x > -3.4028235e38 || v9 < 3.4028235e38) && (y > -3.4028235e38 || v10 < 3.4028235e38) )
    {
      v40 = *(float *)&v53;
      if ( x > *(float *)&v53 )
      {
        *(float *)&v53 = x;
        v40 = x;
      }
      v41 = *((float *)&v53 + 1);
      if ( y > *((float *)&v53 + 1) )
      {
        v41 = y;
        *((float *)&v53 + 1) = y;
      }
      v42 = *((float *)&v53 + 2);
      if ( *((float *)&v53 + 2) > v9 )
      {
        v42 = v9;
        *((float *)&v53 + 2) = v9;
      }
      v43 = *((float *)&v53 + 3);
      if ( *((float *)&v53 + 3) > v10 )
      {
        v43 = v10;
        *((float *)&v53 + 3) = v10;
      }
      v44 = *((float *)&v54 + 1);
      v45 = *(float *)&v54;
      v46 = *((float *)&v54 + 1) <= *(float *)&v54;
      if ( v42 <= v40 )
        ++v46;
      if ( v43 <= v41 )
        ++v46;
      if ( v46 > 1 )
      {
        v45 = 0.0;
        v44 = 0.0;
        v43 = 0.0;
        v54 = 0LL;
        v42 = 0.0;
        v41 = 0.0;
        v40 = 0.0;
        v53 = 0uLL;
      }
    }
    else
    {
      v44 = *((float *)&v54 + 1);
      v45 = *(float *)&v54;
      v43 = *((float *)&v53 + 3);
      v42 = *((float *)&v53 + 2);
      v41 = *((float *)&v53 + 1);
      v40 = *(float *)&v53;
    }
    if ( v44 <= v45 )
      v2 = 1;
    if ( v42 <= v40 )
      ++v2;
    if ( v43 <= v41 )
      ++v2;
    if ( v2 <= 1
      && (v40 > -3.4028235e38 || v42 < 3.4028235e38)
      && (v41 > -3.4028235e38 || v43 < 3.4028235e38)
      && (v45 > -3.4028235e38 || v44 < 3.4028235e38)
      && (float)(v42 - v40) >= 0.99999988
      && (float)(v43 - v41) >= 0.99999988 )
    {
      v47 = CVisual::GetWindowBackgroundTreatmentInternal(v5);
      TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::UnionUnsafe(
        (char *)v47 + 88,
        &v53);
    }
  }
  return 0LL;
}
