/*
 * XREFs of ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180173558
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800157E0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180055AC0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180055D84 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV-$TMil3DRect@M.c)
 *     ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801728A0 (-CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18017338C (-CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AE.c)
 * Callees:
 *     ?Get2DPointUsing2DInverse@CMILMatrix@@QEBA_NAEBUD2D_POINT_2F@@PEAU2@@Z @ 0x180173640 (-Get2DPointUsing2DInverse@CMILMatrix@@QEBA_NAEBUD2D_POINT_2F@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

char __fastcall CMILMatrix::Get2DBoundsUsing2DInverse(CMILMatrix *a1, float *a2, float *a3)
{
  float *v3; // r10
  float v4; // xmm2_4
  int v5; // r9d
  int v6; // xmm0_4
  int v7; // r9d
  float v8; // xmm0_4
  float *v9; // rcx
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  __int64 v13; // rdx
  char result; // al
  float v15; // [rsp+20h] [rbp-30h] BYREF
  float v16; // [rsp+24h] [rbp-2Ch]
  int v17; // [rsp+28h] [rbp-28h]
  _DWORD v18[2]; // [rsp+2Ch] [rbp-24h] BYREF
  int v19; // [rsp+34h] [rbp-1Ch]
  float v20; // [rsp+38h] [rbp-18h]
  int v21; // [rsp+3Ch] [rbp-14h]

  v3 = a3;
  v4 = *a2;
  v5 = 0;
  v6 = *((_DWORD *)a2 + 2);
  v16 = a2[1];
  *(float *)v18 = v16;
  v19 = *((_DWORD *)a2 + 3);
  v21 = v19;
  v15 = v4;
  v17 = v6;
  v18[1] = v6;
  v20 = v4;
  while ( v5 < 4 )
  {
    if ( !CMILMatrix::Get2DPointUsing2DInverse(
            a1,
            (const struct D2D_POINT_2F *)&v15 + v5,
            (struct D2D_POINT_2F *)&v15 + v5) )
      return 0;
    v5 = v7 + 1;
  }
  v8 = v16;
  v9 = (float *)v18;
  v10 = v15;
  v11 = v16;
  v12 = v15;
  v13 = 3LL;
  do
  {
    v12 = fminf(v12, *(v9 - 1));
    v8 = fminf(v8, *v9);
    v10 = fmaxf(v10, *(v9 - 1));
    v11 = fmaxf(v11, *v9);
    v9 += 2;
    --v13;
  }
  while ( v13 );
  *v3 = v12;
  result = 1;
  v3[1] = v8;
  v3[2] = v10;
  v3[3] = v11;
  return result;
}
