/*
 * XREFs of ?ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVCPreComputeSubTreeContext@@PEAVCMILMatrix@@@Z @ 0x1800CB9B0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x180018330 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ?Grow@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x18007ECC0 (-Grow@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x1800CA200 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CC0E0 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPreComputeContext::ProcessVisualsWorldTransformAndClip(
        CPreComputeContext *this,
        struct CVisual *a2,
        struct CVisual *a3,
        struct CPreComputeSubTreeContext *a4,
        struct CMILMatrix *a5)
{
  struct _LIST_ENTRY *v7; // r15
  bool v8; // bl
  struct CMILMatrix *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  CGeometry *v14; // rcx
  int ShapeData; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ebx
  void (__fastcall ***v19)(_QWORD, __int64); // rcx
  int v20; // r15d
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // eax
  struct _LIST_ENTRY *v25; // rbx
  struct D2D_RECT_F si128; // xmm0
  unsigned __int64 v27; // r15
  float x; // xmm8_4
  float v29; // xmm3_4
  float y; // xmm5_4
  float v31; // xmm4_4
  __int64 v32; // rdx
  __m128 v33; // xmm6
  float v34; // xmm7_4
  float v35; // xmm2_4
  __m128 v36; // xmm6
  float v37; // xmm1_4
  __m128 v38; // xmm6
  float v39; // xmm0_4
  __m128 v40; // xmm6
  unsigned int v41; // eax
  unsigned int v42; // ecx
  struct _LIST_ENTRY *v43; // rbx
  struct _LIST_ENTRY *v44; // rax
  struct _LIST_ENTRY *j; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  int v48; // eax
  int v49; // r12d
  __int32 v50; // xmm2_4
  int v51; // eax
  unsigned int v52; // r15d
  float v53; // xmm1_4
  float v54; // xmm0_4
  bool v55; // [rsp+30h] [rbp-B1h] BYREF
  float v56[5]; // [rsp+40h] [rbp-A1h] BYREF
  float v57; // [rsp+54h] [rbp-8Dh]
  float v58; // [rsp+70h] [rbp-71h]
  float v59; // [rsp+74h] [rbp-6Dh]
  int v60; // [rsp+80h] [rbp-61h]
  struct D2D_RECT_F v61; // [rsp+90h] [rbp-51h] BYREF
  struct D2D_POINT_2F v62[2]; // [rsp+A0h] [rbp-41h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+57h]

  v7 = 0LL;
  v60 = 0;
  v55 = 0;
  v8 = *((_QWORD *)a2 + 30)
    && (*((_BYTE *)a2 + 101) & 0x40) == 0
    && (!a3 || *((_DWORD *)a3 + 27) != 1)
    && (*((_DWORD *)a2 + 27) != 1
     || !(unsigned int)detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size((__int64 *)a2 + 10));
  v9 = (struct CMILMatrix *)v56;
  if ( !v8 )
    v9 = 0LL;
  CVisual::GetWorldTransform(a2, *((const struct CVisualTree **)a4 + 41), a5, &v55, v9);
  if ( !v8 )
    goto LABEL_6;
  v14 = (CGeometry *)*((_QWORD *)a2 + 30);
  v62[0] = 0LL;
  LOBYTE(v62[1].x) = 0;
  v61 = 0LL;
  ShapeData = CGeometry::GetShapeData(v14, (const struct D2D_SIZE_F *)((char *)a2 + 140), (struct CShapePtr *)v62);
  v18 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeData, 0x62u, 0LL);
    goto LABEL_14;
  }
  v19 = (void (__fastcall ***)(_QWORD, __int64))v62[0];
  v20 = -2003304309;
  if ( !*(_QWORD *)v62 )
    goto LABEL_29;
  v21 = (*(__int64 (__fastcall **)(_QWORD, struct D2D_RECT_F *, _QWORD))(**(_QWORD **)v62 + 48LL))(
          *(_QWORD *)v62,
          &v61,
          0LL);
  v20 = v21;
  v18 = v21;
  if ( v21 >= 0 )
  {
    v19 = (void (__fastcall ***)(_QWORD, __int64))v62[0];
LABEL_29:
    v18 = v20;
    if ( v20 >= 0 )
      goto LABEL_30;
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x137u, 0LL);
LABEL_13:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x63u, 0LL);
LABEL_14:
  v19 = (void (__fastcall ***)(_QWORD, __int64))v62[0];
LABEL_30:
  si128 = (struct D2D_RECT_F)_mm_load_si128((const __m128i *)&_xmm);
  if ( v18 == -2003304438 || v18 == -2003304309 )
  {
    v61 = si128;
    v18 = 0;
  }
  v27 = 1LL;
  if ( LOBYTE(v62[1].x) && v19 )
  {
    (**v19)(v19, 1LL);
    si128 = (struct D2D_RECT_F)_mm_load_si128((const __m128i *)&_xmm);
  }
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
      (const char *)(unsigned int)v18);
    return (unsigned int)v18;
  }
  if ( (char)(4 * v60) >> 6 == 1 )
    goto LABEL_66;
  if ( (char)(4 * v60) >> 6 >= 0 )
  {
    if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)v56) )
    {
      COERCE_FLOAT(v50 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v56[0] - 1.0) & v50) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(v57 - 1.0) & v50) < 0.000081380211 )
      {
        si128 = (struct D2D_RECT_F)_mm_load_si128((const __m128i *)&_xmm);
        goto LABEL_36;
      }
    }
    LOBYTE(v60) = v60 & 0xCF | 0x10;
LABEL_66:
    if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)v56) )
    {
      x = (float)(v56[0] * v61.left) + v58;
      y = (float)(v57 * v61.top) + v59;
      v29 = (float)(v56[0] * v61.right) + v58;
      v31 = (float)(v57 * v61.bottom) + v59;
      if ( v56[0] <= 0.0 || v57 <= 0.0 )
      {
        if ( x > v29 )
        {
          x = (float)(v56[0] * v61.right) + v58;
          v29 = (float)(v56[0] * v61.left) + v58;
        }
        if ( y > v31 )
        {
          y = (float)(v57 * v61.bottom) + v59;
          v31 = (float)(v57 * v61.top) + v59;
          si128 = (struct D2D_RECT_F)_mm_load_si128((const __m128i *)&_xmm);
          goto LABEL_37;
        }
      }
    }
    else
    {
      CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v56, &v61, v62);
      y = v62[0].y;
      x = v62[0].x;
      v31 = v62[0].y;
      v29 = v62[0].x;
      do
      {
        v53 = v62[v27].x;
        v54 = v62[v27].y;
        x = fminf(x, v53);
        ++v27;
        y = fminf(y, v54);
        v29 = fmaxf(v29, v53);
        v31 = fmaxf(v31, v54);
      }
      while ( v27 < 4 );
    }
    si128 = (struct D2D_RECT_F)_mm_load_si128((const __m128i *)&_xmm);
    goto LABEL_37;
  }
LABEL_36:
  x = v58 + v61.left;
  v29 = v58 + v61.right;
  y = v59 + v61.top;
  v31 = v59 + v61.bottom;
LABEL_37:
  v32 = *((unsigned int *)a4 + 76);
  *(_OWORD *)&v62[0].x = 0LL;
  if ( (_DWORD)v32 )
  {
    v33 = *(__m128 *)(*((_QWORD *)a4 + 37) + 16LL * (unsigned int)(v32 - 1));
    *(__m128 *)&v62[0].x = v33;
  }
  else
  {
    v33 = (__m128)si128;
    *(struct D2D_RECT_F *)&v62[0].x = si128;
  }
  v34 = v33.m128_f32[0];
  if ( x > v33.m128_f32[0] )
  {
    v33 = *(__m128 *)&v62[0].x;
    v34 = x;
    v33.m128_f32[0] = x;
    *(__m128 *)&v62[0].x = v33;
  }
  v35 = _mm_shuffle_ps(v33, v33, 85).m128_f32[0];
  if ( y > v35 )
  {
    v35 = y;
    v36 = _mm_shuffle_ps(*(__m128 *)&v62[0].x, *(__m128 *)&v62[0].x, 225);
    v36.m128_f32[0] = y;
    v33 = _mm_shuffle_ps(v36, v36, 225);
    *(__m128 *)&v62[0].x = v33;
  }
  v37 = _mm_shuffle_ps(v33, v33, 170).m128_f32[0];
  if ( v37 > v29 )
  {
    v37 = v29;
    v38 = _mm_shuffle_ps(*(__m128 *)&v62[0].x, *(__m128 *)&v62[0].x, 210);
    v38.m128_f32[0] = v29;
    v33 = _mm_shuffle_ps(v38, v38, 201);
    *(__m128 *)&v62[0].x = v33;
  }
  v39 = _mm_shuffle_ps(v33, v33, 255).m128_f32[0];
  if ( v39 > v31 )
  {
    v39 = v31;
    v40 = _mm_shuffle_ps(*(__m128 *)&v62[0].x, *(__m128 *)&v62[0].x, 147);
    v40.m128_f32[0] = v31;
    v33 = _mm_shuffle_ps(v40, v40, 57);
    *(__m128 *)&v62[0].x = v33;
  }
  if ( v37 <= v34 || v39 <= v35 )
  {
    v62[1] = 0LL;
    v62[0] = 0LL;
    v33 = 0u;
  }
  if ( (_DWORD)v32 == *((_DWORD *)a4 + 77) )
  {
    v51 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,8,2,8>::Grow(
            (__int64)a4 + 296,
            v32,
            v16,
            v17,
            (const void **)a4 + 37);
    v52 = v51;
    if ( v51 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v51);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v52, 0x31u, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x113,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)v52);
      return v52;
    }
  }
  v7 = 0LL;
  *(__m128 *)(*((_QWORD *)a4 + 37) + 16LL * *((unsigned int *)a4 + 76)) = v33;
  v41 = *((_DWORD *)a4 + 79);
  v42 = *((_DWORD *)a4 + 76) + 1;
  *((_DWORD *)a4 + 76) = v42;
  if ( v41 <= v42 )
    v41 = v42;
  *((_DWORD *)a4 + 79) = v41;
  v43 = (struct _LIST_ENTRY *)*((_QWORD *)a4 + 41);
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v43->Flink[12].Flink)(v43) )
  {
    v7 = (struct _LIST_ENTRY *)((char *)a2 + 320);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(a2);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        if ( i[2].Flink == v43 )
        {
          v7 = i - 22;
          break;
        }
      }
    }
  }
  BYTE1(v7->Blink) = 1;
LABEL_6:
  if ( v55 )
  {
    if ( *((_DWORD *)a4 + 70) == *((_DWORD *)a4 + 71)
      && (v48 = CWatermarkStack<CMILMatrix,8,2,8>::Grow((__int64)a4 + 272, v10, v11, v12, (const void **)a4 + 34),
          v49 = v48,
          v48 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v48);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v49, 0x36u, 0LL);
    }
    else
    {
      v22 = *((_QWORD *)a4 + 34);
      v23 = 68LL * *((unsigned int *)a4 + 70);
      *(_OWORD *)(v23 + v22) = *(_OWORD *)a5;
      *(_OWORD *)(v23 + v22 + 16) = *((_OWORD *)a5 + 1);
      *(_OWORD *)(v23 + v22 + 32) = *((_OWORD *)a5 + 2);
      *(_OWORD *)(v23 + v22 + 48) = *((_OWORD *)a5 + 3);
      *(_DWORD *)(v23 + v22 + 64) = *((_DWORD *)a5 + 16);
      v24 = *((_DWORD *)a4 + 73);
      if ( v24 <= ++*((_DWORD *)a4 + 70) )
        v24 = *((_DWORD *)a4 + 70);
      *((_DWORD *)a4 + 73) = v24;
    }
    if ( !v7 )
    {
      v25 = (struct _LIST_ENTRY *)*((_QWORD *)a4 + 41);
      v7 = 0LL;
      if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v25->Flink[12].Flink)(v25) )
      {
        v7 = (struct _LIST_ENTRY *)((char *)a2 + 320);
      }
      else
      {
        v44 = CVisual::GetTreeDataListHead(a2);
        if ( v44 )
        {
          for ( j = v44->Flink; j != v44; j = j->Flink )
          {
            if ( j[2].Flink == v25 )
            {
              v7 = j - 22;
              break;
            }
          }
        }
      }
    }
    LOBYTE(v7->Blink) = 1;
  }
  return 0LL;
}
