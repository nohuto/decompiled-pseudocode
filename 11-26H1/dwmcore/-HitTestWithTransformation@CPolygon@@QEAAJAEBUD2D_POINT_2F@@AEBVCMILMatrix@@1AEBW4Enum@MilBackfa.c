/*
 * XREFs of ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x18019A854
 * Callers:
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x18019A794 (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x18019AAD0 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 *     ?IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z @ 0x18019ADBC (-IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z.c)
 *     ?FillContainsPoint@ID2D1Geometry@@QEBAJUD2D_POINT_2F@@PEBUD2D_MATRIX_3X2_F@@PEAH@Z @ 0x1801AC5AC (-FillContainsPoint@ID2D1Geometry@@QEBAJUD2D_POINT_2F@@PEBUD2D_MATRIX_3X2_F@@PEAH@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18026169C (-GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CPolygon::HitTestWithTransformation(
        CPolygon *this,
        const struct D2D_POINT_2F *a2,
        const struct CMILMatrix *a3,
        __m128 *a4,
        const enum MilBackfaceVisibility::Enum *a5,
        bool *a6)
{
  unsigned int v6; // ebx
  __m128 v9; // xmm1
  int v10; // eax
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  __m128 v13; // xmm1
  __m128 si128; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm0
  __m128 v17; // xmm8
  __m128 v18; // xmm2
  __m128 v19; // xmm6
  __m128 v20; // xmm6
  bool IsPointInPolygon; // al
  const struct D2D_MATRIX_3X2_F *v22; // r8
  __int64 v23; // rdx
  CGeometry *v24; // rcx
  int ShapeData; // eax
  const struct CMILMatrix *v27; // rdx
  int v28; // eax
  int v29; // [rsp+38h] [rbp-D0h] BYREF
  union __m128 v30; // [rsp+48h] [rbp-C0h] BYREF
  ID2D1Geometry *v31; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v32; // [rsp+68h] [rbp-A0h] BYREF
  __m128 v33; // [rsp+78h] [rbp-90h]
  __m128 v34; // [rsp+88h] [rbp-80h]
  __m128 v35; // [rsp+98h] [rbp-70h]
  int v36; // [rsp+A8h] [rbp-60h]

  v6 = 0;
  v31 = 0LL;
  *a6 = 0;
  if ( !*((_BYTE *)this + 241) && (*((_BYTE *)this + 240) || !*(_DWORD *)a5) )
  {
    v9 = a4[1];
    v10 = a4[4].m128_i32[0];
    v32 = *a4;
    v11 = a4[2];
    v33 = v9;
    v12 = a4[3];
    v34 = v11;
    v35 = v12;
    v36 = v10;
    CMILMatrix::Multiply((CPolygon *)((char *)this + 144), &v32, (struct CMILMatrix *)&v32);
    v16.m128_u64[1] = v32.m128_u64[1];
    v13 = v33;
    si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
    v15 = v35;
    *(double *)v16.m128_u64 = DirectX::XMMatrixInverse(0LL);
    v17 = si128;
    if ( !_mm_movemask_ps(
            _mm_or_ps(
              _mm_or_ps(
                _mm_cmpeq_ps(_mm_and_ps(v15, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
                _mm_cmpeq_ps(_mm_and_ps(si128, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)),
              _mm_or_ps(
                _mm_cmpeq_ps(_mm_and_ps(v13, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
                _mm_cmpeq_ps(_mm_and_ps(v16, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)))) )
    {
      v18 = _mm_movelh_ps((__m128)*(_QWORD *)a2, (__m128)_mm_load_si128((const __m128i *)&_xmm));
      v19 = _mm_add_ps(
              _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v18, v18, 255), v15),
                  _mm_mul_ps(_mm_shuffle_ps(v18, v18, 170), v17)),
                _mm_mul_ps(_mm_shuffle_ps(v18, v18, 85), v13)),
              _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v16));
      v20 = _mm_div_ps(v19, _mm_shuffle_ps((__m128)v19.m128_u32[3], (__m128)v19.m128_u32[3], 0));
      v30 = v20;
      IsPointInPolygon = CPolygon::IsPointInPolygon(this, &v30);
      *a6 = IsPointInPolygon;
      if ( IsPointInPolygon )
      {
        v23 = *((_QWORD *)this + 27);
        v24 = *(CGeometry **)(v23 + 240);
        if ( v24 )
        {
          if ( (*(_BYTE *)(v23 + 101) & 0x40) == 0 )
          {
            v30.m128_u64[0] = 0LL;
            v30.m128_i8[8] = 0;
            ShapeData = CGeometry::GetShapeData(v24, (const struct D2D_SIZE_F *)(v23 + 140), (struct CShapePtr *)&v30);
            v6 = ShapeData;
            if ( ShapeData < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeData, 0x1D4u, 0LL);
              CShapePtr::~CShapePtr((CShapePtr *)&v30);
              goto LABEL_7;
            }
            CShapePtr::GetD2DGeometry((CShapePtr *)&v30, v27, &v31);
            CShapePtr::~CShapePtr((CShapePtr *)&v30);
          }
        }
      }
      if ( v31 )
      {
        v29 = 0;
        v28 = ID2D1Geometry::FillContainsPoint(
                v31,
                (struct D2D_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps(v20, _mm_shuffle_ps(v20, v20, 85)),
                v22,
                &v29);
        v6 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x1E1u, 0LL);
        else
          *a6 = v29 != 0;
      }
    }
  }
LABEL_7:
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v31);
  return v6;
}
