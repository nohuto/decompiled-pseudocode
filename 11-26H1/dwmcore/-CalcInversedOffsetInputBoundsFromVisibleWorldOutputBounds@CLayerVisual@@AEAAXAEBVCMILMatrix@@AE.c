/*
 * XREFs of ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18017338C
 * Callers:
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x180173050 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180173558 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 */

struct D2D_RECT_F *__fastcall CLayerVisual::CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        FLOAT *a4,
        struct D2D_RECT_F *a5,
        struct D2D_RECT_F *a6)
{
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  __int128 v11; // xmm0
  struct D2D_RECT_F *v12; // r11
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  struct D2D_RECT_F *result; // rax
  FLOAT v17; // xmm7_4
  FLOAT v18; // xmm0_4
  FLOAT v19; // xmm6_4
  float v20[4]; // [rsp+28h] [rbp-49h]
  struct D2D_RECT_F v21; // [rsp+38h] [rbp-39h] BYREF
  _OWORD v22[4]; // [rsp+48h] [rbp-29h] BYREF
  int v23; // [rsp+88h] [rbp+17h]

  v8 = *(_QWORD *)(a1 + 672);
  v22[1] = *(_OWORD *)(a2 + 16);
  v9 = *(_OWORD *)(a2 + 48);
  v10 = *(_QWORD *)(v8 + 96);
  LODWORD(v8) = *(_DWORD *)(a2 + 64);
  *(_QWORD *)v20 = v10;
  v21 = 0LL;
  v23 = v8;
  v11 = *(_OWORD *)a2;
  v22[3] = v9;
  v22[0] = v11;
  v22[2] = *(_OWORD *)(a2 + 32);
  if ( (unsigned __int8)CMILMatrix::Get2DBoundsUsing2DInverse(v22, a3, &v21) )
  {
    v21.top = v21.top + COERCE_FLOAT(LODWORD(v20[1]) ^ _xmm);
    v21.left = v21.left + COERCE_FLOAT(LODWORD(v20[0]) ^ _xmm);
    v21.bottom = v21.bottom + COERCE_FLOAT(LODWORD(v20[1]) ^ _xmm);
    v21.right = v21.right + COERCE_FLOAT(LODWORD(v20[0]) ^ _xmm);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v21, &a5->left);
    if ( *a4 > a5->left )
      a5->left = *a4;
    v13 = a4[1];
    if ( v13 > a5->top )
      a5->top = v13;
    v14 = a4[2];
    if ( a5->right > v14 )
      a5->right = v14;
    v15 = a4[3];
    if ( a5->bottom > v15 )
      a5->bottom = v15;
    if ( IsEmpty(a5) )
    {
      *(_QWORD *)&a5->right = 0LL;
      *(_QWORD *)&a5->left = 0LL;
    }
    result = a6;
    *a6 = *a5;
    v17 = v20[0] + a6->right;
    v18 = v20[1] + a6->top;
    v19 = v20[1] + a6->bottom;
    a6->left = v20[0] + a6->left;
    a6->right = v17;
    a6->top = v18;
    a6->bottom = v19;
  }
  else
  {
    *a5 = *v12;
    result = a6;
    *a6 = *v12;
  }
  return result;
}
