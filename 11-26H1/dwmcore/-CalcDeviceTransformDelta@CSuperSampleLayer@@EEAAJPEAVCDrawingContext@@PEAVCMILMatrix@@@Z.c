/*
 * XREFs of ?CalcDeviceTransformDelta@CSuperSampleLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180250650
 * Callers:
 *     <none>
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005C4A4 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 */

__int64 __fastcall CSuperSampleLayer::CalcDeviceTransformDelta(
        CSuperSampleLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  __m128i v3; // xmm0
  float v4; // xmm1_4
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  float v7; // [rsp+28h] [rbp-10h]
  unsigned __int32 v8; // [rsp+2Ch] [rbp-Ch]

  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v4 = (float)*((int *)this + 6);
  v6 = 0LL;
  v7 = v4;
  v8 = _mm_cvtepi32_ps(v3).m128_u32[0];
  CMILMatrix::InferAffineMatrix((__int64)a3, (float *)this + 30, (float *)&v6);
  return 0LL;
}
