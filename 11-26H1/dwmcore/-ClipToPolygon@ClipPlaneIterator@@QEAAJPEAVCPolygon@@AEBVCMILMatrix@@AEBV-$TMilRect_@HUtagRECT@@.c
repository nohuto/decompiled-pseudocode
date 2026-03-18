/*
 * XREFs of ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18005E6F4
 * Callers:
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x18005E63C (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1801B2114 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801B4390 (-SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_M.c)
 *     ?ResetToStart@ClipPlaneIterator@@AEAAXXZ @ 0x1801CC674 (-ResetToStart@ClipPlaneIterator@@AEAAXXZ.c)
 */

__int64 __fastcall ClipPlaneIterator::ClipToPolygon(ClipPlaneIterator *this, __int64 a2, CMILMatrix *a3, _DWORD *a4)
{
  unsigned __int64 v8; // rbx
  struct D2D_POINT_2F *v9; // rsi
  const enum D2D1_POLYGON_EDGE_FLAG *v10; // rdi
  __int64 v11; // r8
  struct D2D_POINT_2F *v12; // r9
  __int64 v13; // rax
  __m128 v14; // xmm3
  struct _D3DMATRIX *D3DMatrix; // rax
  float v16; // xmm4_4
  float v17; // xmm2_4
  float *v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int128 v21; // xmm0
  _DWORD *v22; // r10
  __int64 v23; // r11
  unsigned int v24; // eax
  __m128i v25; // xmm0
  int v26; // eax
  int v27; // eax
  unsigned int v28; // ebx
  struct D2D_MATRIX_3X2_F v30; // [rsp+30h] [rbp-88h] BYREF
  _D3DMATRIX v31; // [rsp+50h] [rbp-68h] BYREF

  ClipPlaneIterator::ResetToStart(this);
  v8 = *(unsigned int *)(a2 + 40);
  v9 = (struct D2D_POINT_2F *)operator new[](saturated_mul(v8, 8uLL));
  if ( v9 )
  {
    v10 = (const enum D2D1_POLYGON_EDGE_FLAG *)operator new[](saturated_mul(v8, 4uLL));
    if ( v10 )
    {
      if ( (_DWORD)v8 )
      {
        v11 = 0LL;
        v12 = v9;
        do
        {
          LODWORD(v12->x) = *(_OWORD *)(v11 + *(_QWORD *)(a2 + 16));
          v13 = *(_QWORD *)(a2 + 16);
          v14 = *(__m128 *)(v11 + v13);
          v30.dx = *(FLOAT *)(v11 + v13 + 16);
          v14.m128_f32[0] = _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
          LODWORD(v12->y) = v14.m128_i32[0];
          D3DMatrix = CMILMatrix::GetD3DMatrix(a3, &v31);
          v17 = (float)((float)(v14.m128_f32[0] * D3DMatrix->_24) + (float)(v16 * D3DMatrix->_14)) + D3DMatrix->_44;
          *v18 = (float)((float)((float)(v14.m128_f32[0] * D3DMatrix->_21) + (float)(v16 * D3DMatrix->_11))
                       + D3DMatrix->_41)
               / v17;
          v18[1] = (float)((float)((float)(v14.m128_f32[0] * D3DMatrix->_22) + (float)(v16 * D3DMatrix->_12))
                         + D3DMatrix->_42)
                 / v17;
          v12 = (struct D2D_POINT_2F *)(v18 + 2);
          v19 = *(_QWORD *)(a2 + 16);
          v21 = *(_OWORD *)(v20 + v19);
          LODWORD(v19) = *(_DWORD *)(v20 + v19 + 16);
          v11 = v20 + 20;
          *v22 = v19;
          *(_OWORD *)&v30.m11 = v21;
        }
        while ( v23 != 1 );
      }
      v24 = a4[2] - *a4;
      *(_QWORD *)&v30.m[0][1] = 0LL;
      v25 = _mm_cvtsi32_si128(v24);
      v26 = a4[3] - a4[1];
      *(_QWORD *)&v30.m[2][0] = 0x3F800000BF800000LL;
      v30.m11 = 2.0 / _mm_cvtepi32_ps(v25).m128_f32[0];
      v30.m22 = -2.0 / (float)v26;
      v27 = ClipPlaneIterator::SetClipPoints(this, v9, v8, v10, &v30);
      v28 = v27;
      if ( v27 >= 0 )
        *((_QWORD *)this + 15) = a2;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x28Bu, 0LL);
    }
    else
    {
      v28 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27Au, 0LL);
    }
    operator delete(v9);
    if ( v10 )
      operator delete(v10);
  }
  else
  {
    v28 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x277u, 0LL);
  }
  return v28;
}
