/*
 * XREFs of ?Get2DPointUsing2DInverse@CMILMatrix@@QEBA_NAEBUD2D_POINT_2F@@PEAU2@@Z @ 0x180173640
 * Callers:
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180173558 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::Get2DPointUsing2DInverse(
        CMILMatrix *this,
        const struct D2D_POINT_2F *a2,
        struct D2D_POINT_2F *a3)
{
  float v3; // xmm6_4
  float v4; // xmm7_4
  float y; // xmm9_4
  float v6; // xmm5_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm6_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  bool result; // al
  float v13; // xmm3_4
  float v14; // xmm2_4

  v3 = *((float *)this + 3);
  v4 = *((float *)this + 7);
  y = a2->y;
  v6 = (float)(v4 * a2->x) - *((float *)this + 4);
  v7 = (float)(v4 * y) - *((float *)this + 5);
  v8 = (float)(y * v3) - *((float *)this + 1);
  v9 = (float)(v3 * a2->x) - *(float *)this;
  if ( (float)(v7 * v9) == (float)(v6 * v8) )
    return 0;
  v10 = (float)(v7 * v9) - (float)(v6 * v8);
  v11 = *((float *)this + 15);
  result = 1;
  v13 = (float)(v11 * a2->x) - *((float *)this + 12);
  v14 = (float)(v11 * y) - *((float *)this + 13);
  a3->x = (float)((float)(v14 * v6) - (float)(v13 * v7)) / v10;
  a3->y = (float)((float)(v13 * v8) - (float)(v14 * v9)) / v10;
  return result;
}
