/*
 * XREFs of ?GetViewBoxToUVTransform@CBackdropVisualImage@@QEBA?AVMatrix3x2F@D2D1@@XZ @ 0x180038D78
 * Callers:
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180110440 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 */

void __fastcall CBackdropVisualImage::GetViewBoxToUVTransform(__int64 a1, D2D1::Matrix3x2F *a2)
{
  int v2; // xmm1_4
  float v3; // xmm3_4
  float v4; // xmm1_4
  float v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+24h] [rbp-34h]
  float v7; // [rsp+2Ch] [rbp-2Ch]
  float v8; // [rsp+30h] [rbp-28h]
  float v9; // [rsp+34h] [rbp-24h]
  __m128i si128; // [rsp+38h] [rbp-20h] BYREF
  int v11; // [rsp+48h] [rbp-10h]
  int v12; // [rsp+4Ch] [rbp-Ch]

  v2 = *(_DWORD *)(a1 + 96) ^ _xmm;
  v3 = *(float *)(a1 + 1700) / *(float *)(a1 + 116);
  v6 = 0LL;
  v11 = v2;
  v4 = *(float *)(a1 + 1696) / *(float *)(a1 + 112);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v12 = *(_DWORD *)(a1 + 100) ^ _xmm;
  v5 = v4;
  v7 = v3;
  v8 = 0.0 - (float)(v4 * 0.0);
  v9 = 0.0 - (float)(v3 * 0.0);
  D2D1::Matrix3x2F::SetProduct(a2, (const struct D2D1::Matrix3x2F *)&si128, (const struct D2D1::Matrix3x2F *)&v5);
}
