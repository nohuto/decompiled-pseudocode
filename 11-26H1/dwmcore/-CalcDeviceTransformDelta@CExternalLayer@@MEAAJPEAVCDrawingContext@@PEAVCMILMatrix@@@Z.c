/*
 * XREFs of ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18005C350
 * Callers:
 *     <none>
 * Callees:
 *     ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_POINTANDSIZE_L@@@Z @ 0x18005C0B4 (-AlignRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005C4A4 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005C5A0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExternalLayer::CalcDeviceTransformDelta(
        CExternalLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __m128i v7; // xmm2
  float v8; // xmm1_4
  unsigned int v9; // xmm0_4
  unsigned int v10; // xmm1_4
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // eax
  __int128 v14; // xmm0
  __int128 v16; // [rsp+38h] [rbp-19h] BYREF
  __int128 v17; // [rsp+48h] [rbp-9h] BYREF
  _OWORD v18[4]; // [rsp+58h] [rbp+7h] BYREF
  int v19; // [rsp+98h] [rbp+47h]

  v19 = 0;
  v16 = 0LL;
  v17 = 0LL;
  CDrawingContext::GetClipBoundsWorld(a2, &v17);
  v5 = AlignRectFToPointAndSizeL((float *)&v17, &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xDF4u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x41u, 0LL);
  }
  else
  {
    v7 = _mm_cvtsi32_si128(DWORD1(v16));
    v8 = (float)(int)v16;
    *(_QWORD *)&v16 = 0LL;
    *(float *)&v17 = v8;
    *(float *)v7.m128i_i32 = _mm_cvtepi32_ps(v7).m128_f32[0];
    *((float *)&v17 + 2) = (float)SDWORD2(v16) + v8;
    *(float *)&v9 = (float)*((int *)this + 7);
    *((float *)&v17 + 3) = (float)SHIDWORD(v16) + *(float *)v7.m128i_i32;
    *(float *)&v10 = (float)*((int *)this + 6);
    DWORD1(v17) = v7.m128i_i32[0];
    *((_QWORD *)&v16 + 1) = __PAIR64__(v9, v10);
    CMILMatrix::InferAffineMatrix(v18, &v17, &v16);
    v11 = v18[1];
    v12 = v18[2];
    v13 = v19;
    *(_OWORD *)a3 = v18[0];
    *((_OWORD *)a3 + 1) = v11;
    v14 = v18[3];
    *((_OWORD *)a3 + 2) = v12;
    *((_OWORD *)a3 + 3) = v14;
    *((_DWORD *)a3 + 16) = v13;
  }
  return v6;
}
