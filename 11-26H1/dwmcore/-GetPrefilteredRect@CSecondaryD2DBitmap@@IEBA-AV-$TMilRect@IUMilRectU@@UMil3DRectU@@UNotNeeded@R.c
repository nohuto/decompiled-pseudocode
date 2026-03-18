/*
 * XREFs of ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x1802B0050
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800E3CE0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005FB60 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 */

struct D2D_RECT_F *__fastcall CSecondaryD2DBitmap::GetPrefilteredRect(__int64 a1, struct D2D_RECT_F *a2, int *a3)
{
  int v3; // eax
  double v4; // xmm2_8
  FLOAT v6; // xmm0_4
  FLOAT v7; // xmm1_4
  int v8; // eax
  FLOAT v9; // xmm0_4
  int v10; // eax
  float v11; // xmm1_4
  struct D2D_RECT_F v13; // [rsp+20h] [rbp-19h] BYREF
  __int128 v14; // [rsp+30h] [rbp-9h] BYREF
  _OWORD v15[4]; // [rsp+40h] [rbp+7h] BYREF
  int v16; // [rsp+80h] [rbp+47h]

  v3 = *a3;
  *(_QWORD *)&v4 = *(unsigned int *)(a1 + 204);
  *(float *)&v4 = *(float *)&v4 / 96.0;
  v16 = 170;
  v6 = (float)v3;
  v7 = (float)a3[1];
  v8 = a3[2];
  v13.left = v6;
  v9 = (float)v8;
  v10 = a3[3];
  v13.top = v7;
  BYTE1(v16) = 41;
  v13.right = v9;
  v13.bottom = (float)v10;
  v15[1] = _mm_load_si128((const __m128i *)&_xmm);
  v15[3] = _mm_load_si128((const __m128i *)&_xmm);
  v11 = *(float *)(a1 + 200);
  v15[0] = _mm_load_si128((const __m128i *)&_xmm);
  v15[2] = _mm_load_si128((const __m128i *)&_xmm);
  CMILMatrix::Scale((CMILMatrix *)v15, v11 / 96.0, *(float *)&v4, 1.0);
  v14 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v15, &v13, (float *)&v14);
  PixelAlign((int *)&v13, (unsigned int *)&v14, v4);
  *a2 = v13;
  return a2;
}
