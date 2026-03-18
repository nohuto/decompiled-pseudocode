/*
 * XREFs of ?OnSurfaceContentRectChanging@CSurfaceBrush@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802843F4
 * Callers:
 *     ?SetSurfaceContentRect@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18021657C (-SetSurfaceContentRect@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJV-$TMilRect_@HU.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180022630 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180057CB8 (-IsEquivalentTo@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?ApplyDirty@CSurfaceBrush@@AEAAXPEAVCRectanglesShape@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020EA24 (-ApplyDirty@CSurfaceBrush@@AEAAXPEAVCRectanglesShape@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CSurfaceBrush::OnSurfaceContentRectChanging(__int64 a1, int *a2)
{
  float v3; // xmm6_4
  FLOAT v4; // xmm4_4
  float v5; // xmm7_4
  FLOAT v6; // xmm5_4
  int v7; // xmm4_4
  int v8; // xmm5_4
  float v9; // xmm10_4
  float v10; // xmm11_4
  float v11; // xmm9_4
  float v12; // xmm8_4
  char v13; // r10
  float v14; // xmm4_4
  float v15; // xmm5_4
  bool v16; // zf
  struct D2D_RECT_F v18; // [rsp+28h] [rbp-79h] BYREF
  __m128i v19; // [rsp+38h] [rbp-69h] BYREF
  _QWORD v20[5]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v21[16]; // [rsp+70h] [rbp-31h] BYREF
  __int64 v22; // [rsp+80h] [rbp-21h] BYREF

  v3 = (float)*a2;
  v4 = (float)a2[1];
  v5 = (float)a2[2];
  v6 = (float)a2[3];
  v18.left = v3;
  v18.top = v4;
  v18.right = v5;
  v18.bottom = v6;
  if ( IsEmpty(&v18) )
  {
    *(float *)(a1 + 240) = v3;
    *(_DWORD *)(a1 + 244) = v7;
    *(float *)(a1 + 248) = v5;
    *(_DWORD *)(a1 + 252) = v8;
LABEL_8:
    CBrush::NotifyOnChanged(a1, 0, a1);
    return 0LL;
  }
  v9 = (float)*(int *)(a1 + 108);
  v10 = (float)*(int *)(a1 + 112);
  v11 = (float)*(int *)(a1 + 116);
  v12 = (float)*(int *)(a1 + 120);
  *(float *)v19.m128i_i32 = v9;
  *(__int64 *)((char *)v19.m128i_i64 + 4) = __PAIR64__(LODWORD(v11), LODWORD(v10));
  *(float *)&v19.m128i_i32[3] = v12;
  if ( !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsEquivalentTo((const __m128i *)&v18, &v19) )
  {
    if ( (float)(v5 - v3) != (float)(v11 - v9) || (float)(v15 - v14) != (float)(v12 - v10) )
      v13 = 1;
    *(float *)(a1 + 240) = v3;
    *(float *)(a1 + 244) = v14;
    *(float *)(a1 + 248) = v5;
    *(float *)(a1 + 252) = v15;
    if ( v13 )
      goto LABEL_8;
    v16 = *(_BYTE *)(a1 + 104) == 0;
    v20[0] = &CRectanglesShape::`vftable';
    v20[2] = v21;
    v20[3] = v21;
    v20[4] = &v22;
    v20[1] = 0LL;
    v22 = 0LL;
    if ( !v16 && !IsEmpty((const struct D2D_RECT_F *)(a1 + 200)) )
      CSurfaceBrush::ApplyDirty(a1, (CRectanglesShape *)v20, &v18.left);
    CBrush::NotifyOnChanged(a1, 6u, a1);
    *(_QWORD *)(a1 + 256) = 0LL;
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v20);
  }
  return 0LL;
}
