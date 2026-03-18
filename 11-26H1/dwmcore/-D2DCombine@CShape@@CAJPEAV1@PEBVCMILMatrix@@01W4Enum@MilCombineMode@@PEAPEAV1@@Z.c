/*
 * XREFs of ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DAFB8
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B7170 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800C61E0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1800DA580 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB760 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800EA824 (-GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@@@Z @ 0x1802074FC (-GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x1800C8C10 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1800D9B1C (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ??0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1800D9BD4 (--0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801062E0 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::D2DCombine(__int64 a1, __int64 a2, __int64 a3, int *a4, int a5, CComplexShape **a6)
{
  __int128 *v9; // r12
  int D2DGeometry; // eax
  unsigned int v11; // ebx
  int v12; // xmm0_4
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  __int64 v15; // rdx
  int v16; // eax
  CPolygonShape *v17; // rax
  CPolygonShape *v18; // rax
  CComplexShape *v20; // rax
  CComplexShape *v21; // rax
  CComplexShape *v22; // rax
  int v23; // r9d
  unsigned int v24; // [rsp+20h] [rbp-E0h]
  struct ID2D1Geometry *v25; // [rsp+50h] [rbp-B0h] BYREF
  struct ID2D1Geometry *v26; // [rsp+58h] [rbp-A8h] BYREF
  struct ID2D1Geometry *v27; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v28; // [rsp+68h] [rbp-98h] BYREF
  __int128 v29; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v30; // [rsp+90h] [rbp-70h]
  _QWORD v31[5]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v32[16]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v33; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v34[5]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v35[16]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v36; // [rsp+118h] [rbp+18h] BYREF
  __int128 v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+130h] [rbp+30h]

  v34[2] = v35;
  v34[1] = 0LL;
  v34[3] = v35;
  v36 = 0LL;
  v34[4] = &v36;
  v34[0] = &CRectanglesShape::`vftable';
  v31[2] = v32;
  v31[1] = 0LL;
  v31[3] = v32;
  v31[0] = &CRectanglesShape::`vftable';
  v31[4] = &v33;
  v33 = 0LL;
  v38 = 0LL;
  v30 = 0LL;
  v26 = 0LL;
  v9 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  v37 = 0LL;
  v29 = 0LL;
  if ( a1 )
  {
    D2DGeometry = (*(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1Geometry **))(*(_QWORD *)a1 + 24LL))(
                    a1,
                    0LL,
                    &v26);
    v11 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      v24 = 528;
      goto LABEL_32;
    }
  }
  else
  {
    D2DGeometry = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v34, 0LL, &v26);
    v11 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      v24 = 532;
      goto LABEL_32;
    }
  }
  if ( a3 )
  {
    D2DGeometry = (*(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1Geometry **))(*(_QWORD *)a3 + 24LL))(
                    a3,
                    0LL,
                    &v27);
    v11 = D2DGeometry;
    if ( D2DGeometry >= 0 )
      goto LABEL_5;
    v24 = 537;
LABEL_32:
    v23 = D2DGeometry;
    goto LABEL_28;
  }
  D2DGeometry = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v31, 0LL, &v27);
  v11 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    v24 = 541;
    goto LABEL_32;
  }
LABEL_5:
  if ( a4 )
  {
    v12 = *a4;
    v9 = &v29;
    v13 = (__m128)(unsigned int)a4[13];
    DWORD1(v28) = a4[1];
    HIDWORD(v28) = a4[5];
    v14 = (__m128)(unsigned int)a4[12];
    LODWORD(v28) = v12;
    DWORD2(v28) = a4[4];
    v29 = v28;
    v30 = _mm_unpacklo_ps(v14, v13).m128_u64[0];
  }
  if ( a5 )
  {
    if ( a5 == 1 )
      v15 = 1LL;
    else
      v15 = 3LL;
  }
  else
  {
    v15 = 0LL;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, struct ID2D1Geometry *, _QWORD, struct ID2D1Geometry *, __int128 *, _DWORD, struct ID2D1Geometry **))(*(_QWORD *)qword_1803DE658 + 32LL))(
          qword_1803DE658,
          v15,
          v26,
          0LL,
          v27,
          v9,
          LODWORD(FLOAT_0_25),
          &v25);
  v11 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x231u, 0LL);
    goto LABEL_19;
  }
  v28 = 0LL;
  D2DGeometry = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, __int128 *))(*(_QWORD *)v25 + 32LL))(
                  v25,
                  0LL,
                  &v28);
  v11 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    v24 = 565;
    goto LABEL_32;
  }
  if ( *((float *)&v28 + 2) <= *(float *)&v28 || *((float *)&v28 + 3) <= *((float *)&v28 + 1) )
  {
    v20 = (CComplexShape *)CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc();
    if ( v20 )
    {
      *((_QWORD *)v20 + 1) = 0LL;
      *(_QWORD *)v20 = &CRectanglesShape::`vftable';
      *((_QWORD *)v20 + 2) = (char *)v20 + 40;
      *((_QWORD *)v20 + 3) = (char *)v20 + 40;
      *((_QWORD *)v20 + 4) = (char *)v20 + 56;
      *((_QWORD *)v20 + 7) = 0LL;
      *a6 = v20;
      goto LABEL_19;
    }
    v23 = -2147024882;
    v11 = -2147024882;
    *a6 = 0LL;
    v24 = 570;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, v24, 0LL);
    goto LABEL_19;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1)
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a3 + 56LL))(a3)
    || a5 && a5 != 1 )
  {
    v21 = (CComplexShape *)MIDL_user_allocate(0x18uLL);
    if ( v21 )
    {
      v22 = CComplexShape::CComplexShape(v21, v25);
      *a6 = v22;
      if ( v22 )
        goto LABEL_19;
    }
    else
    {
      *a6 = 0LL;
    }
    v23 = -2147024882;
    v11 = -2147024882;
    v24 = 586;
    goto LABEL_28;
  }
  v17 = (CPolygonShape *)MIDL_user_allocate(0x18uLL);
  if ( !v17 )
  {
    *a6 = 0LL;
    goto LABEL_34;
  }
  v18 = CPolygonShape::CPolygonShape(v17, v25);
  *a6 = v18;
  if ( !v18 )
  {
LABEL_34:
    v23 = -2147024882;
    v11 = -2147024882;
    v24 = 581;
    goto LABEL_28;
  }
LABEL_19:
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v25);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v26);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v27);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v31);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v34);
  return v11;
}
