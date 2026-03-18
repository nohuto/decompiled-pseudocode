/*
 * XREFs of ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x1801BAB64
 * Callers:
 *     ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180126448 (-TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BA72C (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1802311E0 (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV-$TMilRec.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 */

char __fastcall CSuperWetInkManager::UpdateRenderStateClip(
        const struct D2D_RECT_F *a1,
        __m128i *a2,
        __int64 a3,
        struct D2D_RECT_F *a4)
{
  double v4; // xmm2_8
  char v5; // bl
  int *v8; // rax
  __m128i v9; // xmm0
  unsigned int v10; // ecx
  int v11; // edx
  int v12; // r11d
  int v13; // r10d
  unsigned int v14; // r8d
  FLOAT right; // eax
  unsigned int v16; // r9d
  FLOAT v17; // edi
  FLOAT bottom; // ecx
  FLOAT v19; // edx
  struct D2D_RECT_F v21; // [rsp+20h] [rbp-38h] BYREF
  int v22[10]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v21 = 0LL;
  if ( a3 )
    CMILMatrix::Transform2DBoundsHelper<0>(a3, a1, &v21.left);
  else
    v21 = *a1;
  v8 = PixelAlign(v22, (unsigned int *)&v21, v4);
  v9 = *a2;
  v10 = *v8;
  v11 = v8[1];
  v12 = v8[2];
  if ( *v8 <= 0 )
    v10 = 0;
  v13 = v8[3];
  v21 = (struct D2D_RECT_F)*a2;
  v14 = v9.m128i_u32[1];
  if ( v11 <= 0 )
    v11 = 0;
  right = v21.right;
  v16 = _mm_cvtsi128_si32(v9);
  v17 = v21.right;
  if ( v12 <= 0 )
    v12 = 0;
  if ( v13 <= 0 )
    v13 = 0;
  if ( v10 > v16 )
    v16 = v10;
  LODWORD(v21.left) = v16;
  if ( (unsigned int)v11 > v9.m128i_i32[1] )
    v14 = v11;
  LODWORD(v21.top) = v14;
  if ( (unsigned int)v12 < LODWORD(v21.right) )
  {
    right = *(float *)&v12;
    v17 = *(float *)&v12;
    LODWORD(v21.right) = v12;
  }
  bottom = v21.bottom;
  v19 = v21.bottom;
  if ( (unsigned int)v13 < LODWORD(v21.bottom) )
  {
    LODWORD(v21.bottom) = v13;
    bottom = *(float *)&v13;
    v19 = *(float *)&v13;
  }
  if ( LODWORD(bottom) <= v14 || LODWORD(v17) <= v16 )
  {
    right = 0.0;
    v14 = 0;
    v21 = (struct D2D_RECT_F)0LL;
    v16 = 0;
    v19 = 0.0;
  }
  *a4 = v21;
  if ( LODWORD(v19) > v14 && LODWORD(right) > v16 )
    return 1;
  return v5;
}
